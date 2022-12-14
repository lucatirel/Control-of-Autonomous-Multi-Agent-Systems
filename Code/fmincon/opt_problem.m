function u_opt = opt_problem(u0, fx, gx, vx, dvx, hx, dhx, u_max, u_min, H, p)
    m = 16;
    E = 28;
    
    options = optimoptions(@fmincon,'MaxFunctionEvaluations',10000);

    % Objective function
    obj = @(x) x(1:16)'*H*x(1:16) + p*x(17);
    
    % Needed functions
    % Alpha(h(x)) --> class K extended
    alpha1 = 0.5;
    alpha2 = 3;
    alpha = alpha1*(hx.^alpha2);

    % Gamma(V(x)) --> class K
    gamma1 = 0.5;
    gamma2 = 3;
    gamma = gamma1*(vx.^gamma2);

    % Lower/Upper bounds
    lb = cat(1, u_min, -inf);
    ub = cat(1, u_max, inf);

    % Define initial conditions
    %x0 = double(zeros(m+1,1));
    d0 = 0;
    x0 = cat(1, u0, d0);

    % Define constraints
    % system1:
    % (1) LfV + gamma(V) + LgV*u - d <= 0
    % (2) Lfh + alpha(h) + Lgh*u >= 0

    % system2
    % (1)   LfV + gamma(V) + LgV*u - d <= 0
    % (2) - Lfh - alpha(h) - Lgh*u <= 0

    % system3
    % (1)   LgV*u - d  <= -LfV - gamma(V)
    % (2)  -Lgh*u <= Lfh + alpha(h)

    % system4
    % (1)   A1_t*u_t <= b1
    % (2)   A2_t*u_t <= b2

    % system5
    % (1) A*u <= b

    b1 = -(dvx*fx + gamma);      % LfV + gamma(V)
    A1 = dvx*gx;                 % LgV
    
    b2 = dhx*fx + alpha;        % -Lfh - alpha(h)
    A2 = -dhx*gx;                % -Lgh
    
    % Reshaping to include d as a variable: u_t = [u1 ... u16 d]
    A1_t = cat(2, A1, -1);
    A2_t = cat(2, A2, zeros(E,1));
    
    % Reshaping to final value
    A = cat(1, A1_t, A2_t);
    b = cat(1, b1, b2);
    
    u_opt = fmincon(obj, x0, A, b, [], [], lb, ub, [], options);

end