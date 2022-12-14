function [h,q] = fcn(u)

Nrobots = size(u,1)/4; %number of robots in simulation
Ds = 0.6; % minimum distance between two robots
pos = u(1:2*Nrobots); %  positions (x and y) for all robots --> for 3 robots: pos = [x1;y1;x2;y2;x3;y3]
velocs = u(2*Nrobots+1:end); %  velocities (x and y) for all robots --> for 3 robots: velocs = [vx1;vy1;vx2;vy2;vx3;vy3]

%support variables used only to create p_{i} and v_{i}. Note: their vectors
%empty of the first two elements at each iteration
coder.varsize('p_support_var');
coder.varsize('v_support_var');
p_support_var = pos;
v_support_var = velocs;
%assign to p_{i} and v_{i} the first two elements (x and y) that correspond
%to the variables of each given vector position/velocity. Set also the
%maximum values alpha to 10 for each robot
alpha_ = cell(1, Nrobots+2);
p_ = cell(1, Nrobots+2);
v_ = cell(1, Nrobots+2);
robot_ = cell(1, Nrobots+2);
DeltaP_= cell(Nrobots+2, Nrobots+2);
DeltaV_= cell(Nrobots+2, Nrobots+2);
cel_ = cell(1,Nrobots+30);
h_= cell(Nrobots+2, Nrobots+2);
h_matr= zeros(Nrobots,Nrobots);
for i=1:Nrobots
    alpha_{i} = 10;
    p_{i} = p_support_var(1:2);
    v_{i} = v_support_var(1:2);
    p_support_var(1:2) = [];
    v_support_var(1:2) = [];
    robot_{i} = [p_{i}; v_{i}];
end

%now that we have the positions (x y) and velocities (vx vy) of each of the
%robots, we can calculate their distances DeltaP_{i}{j}, their velocities
%DeltaV_{i}{j} and finally their barrier functions h_{i}{j} that will be
%store in a matrix h

h_matr = sym([]); %uncomment this if you are running this function in another matlab file
%h_matr = []; %uncomment this if you are running this function inside a
%simulink block



for i=1:Nrobots
   for j=1:Nrobots
     DeltaP_{i,j} = p_{i}-p_{j}; 
     DeltaV_{i,j} = v_{i}-v_{j}; 
     h_{i,j} = sqrt(2*(alpha_{i}+alpha_{j})*(norm(DeltaP_{i,j})-Ds))...
     + DeltaP_{i,j}.'*DeltaV_{i,j}/norm(DeltaP_{i,j});
     if isnan(h_{i,j}) 
       h_{i,j} = 0;
     end
     h_matr(i,j) = h_{i,j};
        
    end
    
end


% because the fact we have to ignore the elements in which the elements are
% equal, for example i=j, i=k, j=k etc and the symmetric elements, ex
% hij=hji etc, we have to consider only the elements above the diagonal (so
% those elements in a upper triangular matrix, excluding the principal
% diagonal). To do so, we can extract those elements and store them into a
% vector. This column vector will contain all the barrier functions for the
% N robots
for upper=1:Nrobots
    cel_{upper}=[h_matr(upper,upper+1:end)];
    
end

%finally, take the values of the upper triangular matrix (except the
%diagonal) that are stored in a cell and store them (one under the other)
%in a column vector. Thus, we obtain the barrier function h 
h = [cel_{:}].'; %h = cell2sym(cell_).';
%finally, compute the jacobian of h
q = jacobian(h,u);

end


