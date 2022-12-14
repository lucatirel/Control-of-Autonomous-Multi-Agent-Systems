clc

%% Parameters
% constants
alphaSum_val = 20;        % maximum braking power from 2 robots
Ds_val = 0.6;             % minimum distance between 2 robots
paramValues = [alphaSum_val Ds_val];

% Symbols
syms p1x p1y p2x p2y p3x p3y p4x p4y p5x p5y p6x p6y p7x p7y p8x p8y real
syms v1x v1y v2x v2y v3x v3y v4x v4y v5x v5y v6x v6y v7x v7y v8x v8y real
syms alphaSum Ds real

% Positions
p1 = [p1x p1y]';
p2 = [p2x p2y]';
p3 = [p3x p3y]';
p4 = [p4x p4y]';
p5 = [p5x p5y]';
p6 = [p6x p6y]';
p7 = [p7x p7y]';
p8 = [p8x p8y]';

% Velocities
v1 = [v1x v1y]';
v2 = [v2x v2y]';
v3 = [v3x v3y]';
v4 = [v4x v4y]';
v5 = [v5x v5y]';
v6 = [v6x v6y]';
v7 = [v7x v7y]';
v8 = [v8x v8y]';

% % Define the states
x = {p1x p1y p2x p2y p3x p3y p4x p4y p5x p5y p6x p6y p7x p7y p8x p8y ... 
     v1x v1y v2x v2y v3x v3y v4x v4y v5x v5y v6x v6y v7x v7y v8x v8y};

%% Lyapunov Functions
% Define Lyapunov Function V(x)
vx = p1x^2 + p1y^2 + p2x^2 + p2y^2 + p3x^2 + p3y^2 + p4x^2 + p4y^2 + p5x^2 + p5y^2 + p6x^2 + p6y^2 + p7x^2 + p7y^2 + p8x^2 + p8y^2 + ... 
     v1x^2 + v1y^2 + v2x^2 + v2y^2 + v3x^2 + v3y^2 + v4x^2 + v4y^2 + v5x^2 + v5y^2 + v6x^2 + v6y^2 + v7x^2 + v7y^2 + v8x^2 + v8y^2;

% Compute Jacobian of V(x)
dvx = jacobian(vx, [x{:}]);


%% Relative Positions and Velocities
% Relative positions
% Robot 1
deltaP12 = p1 - p2;
deltaP13 = p1 - p3;
deltaP14 = p1 - p4;
deltaP15 = p1 - p5;
deltaP16 = p1 - p6;
deltaP17 = p1 - p7;
deltaP18 = p1 - p8;

% Robot 2
deltaP21 = p2 - p1;
deltaP23 = p2 - p3;
deltaP24 = p2 - p4;
deltaP25 = p2 - p5;
deltaP26 = p2 - p6;
deltaP27 = p2 - p7;
deltaP28 = p2 - p8;


% Robot 3
deltaP31 = p3 - p1;
deltaP32 = p3 - p2;
deltaP34 = p3 - p4;
deltaP35 = p3 - p5;
deltaP36 = p3 - p6;
deltaP37 = p3 - p7;
deltaP38 = p3 - p8;

% Robot 4
deltaP41 = p4 - p1;
deltaP42 = p4 - p2;
deltaP43 = p4 - p3;
deltaP45 = p4 - p5;
deltaP46 = p4 - p6;
deltaP47 = p4 - p7;
deltaP48 = p4 - p8;

% Robot 5
deltaP51 = p5 - p1;
deltaP52 = p5 - p2;
deltaP53 = p5 - p3;
deltaP54 = p5 - p4;
deltaP56 = p5 - p6;
deltaP57 = p5 - p7;
deltaP58 = p5 - p8;

% Robot 6
deltaP61 = p6 - p1;
deltaP62 = p6 - p2;
deltaP63 = p6 - p3;
deltaP64 = p6 - p4;
deltaP65 = p6 - p5;
deltaP67 = p6 - p7;
deltaP68 = p6 - p8;

% Robot1 7
deltaP71 = p7 - p1;
deltaP72 = p7 - p2;
deltaP73 = p7 - p3;
deltaP74 = p7 - p4;
deltaP75 = p7 - p5;
deltaP76 = p7 - p6;
deltaP78 = p7 - p8;

% Robot 8
deltaP81 = p8 - p1;
deltaP82 = p8 - p2;
deltaP83 = p8 - p3;
deltaP84 = p8 - p4;
deltaP85 = p8 - p5;
deltaP86 = p8 - p6;
deltaP87 = p8 - p7;

%% Euclidean Distances
% Centralized 
deltaP =  [norm(deltaP12);
           norm(deltaP13);
           norm(deltaP14);
           norm(deltaP15);
           norm(deltaP16);
           norm(deltaP17);
           norm(deltaP18);
           norm(deltaP23);
           norm(deltaP24);
           norm(deltaP25);
           norm(deltaP26);
           norm(deltaP27);
           norm(deltaP28);
           norm(deltaP34);
           norm(deltaP35);
           norm(deltaP36);
           norm(deltaP37);
           norm(deltaP38);
           norm(deltaP45);
           norm(deltaP46);
           norm(deltaP47);
           norm(deltaP48);
           norm(deltaP56);
           norm(deltaP57);
           norm(deltaP58);
           norm(deltaP67);
           norm(deltaP68);
           norm(deltaP78)];

% Decentralized
deltaP1= [norm(deltaP12);
           norm(deltaP13);
           norm(deltaP14);
           norm(deltaP15);
           norm(deltaP16);
           norm(deltaP17);
           norm(deltaP18)];

deltaP2= [norm(deltaP21);
           norm(deltaP23);
           norm(deltaP24);
           norm(deltaP25);
           norm(deltaP26);
           norm(deltaP27);
           norm(deltaP28)];

deltaP3= [norm(deltaP31);
           norm(deltaP32);
           norm(deltaP34);
           norm(deltaP35);
           norm(deltaP36);
           norm(deltaP37);
           norm(deltaP38)];

deltaP4= [norm(deltaP41);
           norm(deltaP42);
           norm(deltaP43);
           norm(deltaP45);
           norm(deltaP46);
           norm(deltaP47);
           norm(deltaP48)];

deltaP5= [norm(deltaP51);
           norm(deltaP52);
           norm(deltaP53);
           norm(deltaP54);
           norm(deltaP56);
           norm(deltaP57);
           norm(deltaP58)];

deltaP6= [norm(deltaP61);
           norm(deltaP62);
           norm(deltaP63);
           norm(deltaP64);
           norm(deltaP65);
           norm(deltaP67);
           norm(deltaP68)];

deltaP7= [norm(deltaP71);
           norm(deltaP72);
           norm(deltaP73);
           norm(deltaP74);
           norm(deltaP75);
           norm(deltaP76);
           norm(deltaP78)];

deltaP8= [norm(deltaP81);
           norm(deltaP82);
           norm(deltaP83);
           norm(deltaP84);
           norm(deltaP85);
           norm(deltaP86);
           norm(deltaP87)];

% Relative velocities
% Robot 1
deltaV12 = v1 - v2;
deltaV13 = v1 - v3;
deltaV14 = v1 - v4;
deltaV15 = v1 - v5;
deltaV16 = v1 - v6;
deltaV17 = v1 - v7;
deltaV18 = v1 - v8;

% Robot 2
deltaV21 = v2 - v1;
deltaV23 = v2 - v3;
deltaV24 = v2 - v4;
deltaV25 = v2 - v5;
deltaV26 = v2 - v6;
deltaV27 = v2 - v7;
deltaV28 = v2 - v8;

% Robot 3
deltaV31 = v3 - v1;
deltaV32 = v3 - v2;
deltaV34 = v3 - v4;
deltaV35 = v3 - v5;
deltaV36 = v3 - v6;
deltaV37 = v3 - v7;
deltaV38 = v3 - v8;

% Robot 4
deltaV41 = v4 - v1;
deltaV42 = v4 - v2;
deltaV43 = v4 - v3;
deltaV45 = v4 - v5;
deltaV46 = v4 - v6;
deltaV47 = v4 - v7;
deltaV48 = v4 - v8;

% Robot 5
deltaV51 = v5 - v1;
deltaV52 = v5 - v2;
deltaV53 = v5 - v3;
deltaV54 = v5 - v4;
deltaV56 = v5 - v6;
deltaV57 = v5 - v7;
deltaV58 = v5 - v8;

% Robot 6
deltaV61 = v6 - v1;
deltaV62 = v6 - v2;
deltaV63 = v6 - v3;
deltaV64 = v6 - v4;
deltaV65 = v6 - v5;
deltaV67 = v6 - v7;
deltaV68 = v6 - v8;

% Robot1 7
deltaV71 = v7 - v1;
deltaV72 = v7 - v2;
deltaV73 = v7 - v3;
deltaV74 = v7 - v4;
deltaV75 = v7 - v5;
deltaV76 = v7 - v6;
deltaV78 = v7 - v8;

% Robot 8
deltaV81 = v8 - v1;
deltaV82 = v8 - v2;
deltaV83 = v8 - v3;
deltaV84 = v8 - v4;
deltaV85 = v8 - v5;
deltaV86 = v8 - v6;
deltaV87 = v8 - v7;

%% Barrier Functions and Jacobians
% Barrier functions for the problem

% Decentralized
% - Robot 1
h12 = sqrt(2*alphaSum*(norm(deltaP12)-Ds)) + deltaP12'*deltaV12/norm(deltaP12);
h13 = sqrt(2*alphaSum*(norm(deltaP13)-Ds)) + deltaP13'*deltaV13/norm(deltaP13);
h14 = sqrt(2*alphaSum*(norm(deltaP14)-Ds)) + deltaP14'*deltaV14/norm(deltaP14);
h15 = sqrt(2*alphaSum*(norm(deltaP15)-Ds)) + deltaP15'*deltaV15/norm(deltaP15);
h16 = sqrt(2*alphaSum*(norm(deltaP16)-Ds)) + deltaP16'*deltaV16/norm(deltaP16);
h17 = sqrt(2*alphaSum*(norm(deltaP17)-Ds)) + deltaP17'*deltaV17/norm(deltaP17);
h18 = sqrt(2*alphaSum*(norm(deltaP18)-Ds)) + deltaP18'*deltaV18/norm(deltaP18);
hx1 = [h12; h13; h14; h15; h16; h17; h18];
hx1 = subs(hx1, [alphaSum Ds], paramValues);
hx1 = simplify(hx1);
qx1_t = jacobian(hx1, [x{:}]);
qx1 = cat(2, qx1_t(:,1), qx1_t(:,2), qx1_t(:,17), qx1_t(:,18));

% - Robot 2
h21 = sqrt(2*alphaSum*(norm(deltaP21)-Ds)) + deltaP21'*deltaV21/norm(deltaP21);
h23 = sqrt(2*alphaSum*(norm(deltaP23)-Ds)) + deltaP23'*deltaV23/norm(deltaP23);
h24 = sqrt(2*alphaSum*(norm(deltaP24)-Ds)) + deltaP24'*deltaV24/norm(deltaP24);
h25 = sqrt(2*alphaSum*(norm(deltaP25)-Ds)) + deltaP25'*deltaV25/norm(deltaP25);
h26 = sqrt(2*alphaSum*(norm(deltaP26)-Ds)) + deltaP26'*deltaV26/norm(deltaP26);
h27 = sqrt(2*alphaSum*(norm(deltaP27)-Ds)) + deltaP27'*deltaV27/norm(deltaP27);
h28 = sqrt(2*alphaSum*(norm(deltaP28)-Ds)) + deltaP28'*deltaV28/norm(deltaP28);
hx2 = [h21; h23; h24; h25; h26; h27; h28];
hx2 = subs(hx2, [alphaSum Ds], paramValues);
hx2 = simplify(hx2);
qx2_t = jacobian(hx2, [x{:}]);
qx2 = cat(2, qx2_t(:,3), qx2_t(:,4), qx2_t(:,19), qx2_t(:,20));


% - Robot 3
h31 = sqrt(2*alphaSum*(norm(deltaP31)-Ds)) + deltaP31'*deltaV31/norm(deltaP31);
h32 = sqrt(2*alphaSum*(norm(deltaP32)-Ds)) + deltaP32'*deltaV32/norm(deltaP32);
h34 = sqrt(2*alphaSum*(norm(deltaP34)-Ds)) + deltaP34'*deltaV34/norm(deltaP34);
h35 = sqrt(2*alphaSum*(norm(deltaP35)-Ds)) + deltaP35'*deltaV35/norm(deltaP35);
h36 = sqrt(2*alphaSum*(norm(deltaP36)-Ds)) + deltaP36'*deltaV36/norm(deltaP36);
h37 = sqrt(2*alphaSum*(norm(deltaP37)-Ds)) + deltaP37'*deltaV37/norm(deltaP37);
h38 = sqrt(2*alphaSum*(norm(deltaP38)-Ds)) + deltaP38'*deltaV38/norm(deltaP38);
hx3 = [h31; h32; h34; h35; h36; h37; h38];
hx3 = subs(hx3, [alphaSum Ds], paramValues);
hx3 = simplify(hx3);
qx3_t = jacobian(hx3, [x{:}]);
qx3 = cat(2, qx3_t(:,5), qx3_t(:,6), qx3_t(:,21), qx3_t(:,22));


% - Robot 4
h41 = sqrt(2*alphaSum*(norm(deltaP41)-Ds)) + deltaP41'*deltaV41/norm(deltaP41);
h42 = sqrt(2*alphaSum*(norm(deltaP42)-Ds)) + deltaP42'*deltaV42/norm(deltaP42);
h43 = sqrt(2*alphaSum*(norm(deltaP43)-Ds)) + deltaP43'*deltaV43/norm(deltaP43);
h45 = sqrt(2*alphaSum*(norm(deltaP45)-Ds)) + deltaP45'*deltaV45/norm(deltaP45);
h46 = sqrt(2*alphaSum*(norm(deltaP46)-Ds)) + deltaP46'*deltaV46/norm(deltaP46);
h47 = sqrt(2*alphaSum*(norm(deltaP47)-Ds)) + deltaP47'*deltaV47/norm(deltaP47);
h48 = sqrt(2*alphaSum*(norm(deltaP48)-Ds)) + deltaP48'*deltaV48/norm(deltaP48);
hx4 = [h41; h42; h43; h45; h46; h47; h48];
hx4 = subs(hx4, [alphaSum Ds], paramValues);
hx4 = simplify(hx4);
qx4_t = jacobian(hx4, [x{:}]);
qx4 = cat(2, qx4_t(:,7), qx4_t(:,8), qx4_t(:,23), qx4_t(:,24));

% - Robot 6
h51 = sqrt(2*alphaSum*(norm(deltaP51)-Ds)) + deltaP51'*deltaV51/norm(deltaP51);
h52 = sqrt(2*alphaSum*(norm(deltaP52)-Ds)) + deltaP52'*deltaV52/norm(deltaP52);
h53 = sqrt(2*alphaSum*(norm(deltaP53)-Ds)) + deltaP53'*deltaV53/norm(deltaP53);
h54 = sqrt(2*alphaSum*(norm(deltaP54)-Ds)) + deltaP54'*deltaV54/norm(deltaP54);
h56 = sqrt(2*alphaSum*(norm(deltaP56)-Ds)) + deltaP56'*deltaV56/norm(deltaP56);
h57 = sqrt(2*alphaSum*(norm(deltaP57)-Ds)) + deltaP57'*deltaV57/norm(deltaP57);
h58 = sqrt(2*alphaSum*(norm(deltaP58)-Ds)) + deltaP58'*deltaV58/norm(deltaP58);
hx5 = [h51; h52; h53; h54; h56; h57; h58];
hx5 = subs(hx5, [alphaSum Ds], paramValues);
hx5 = simplify(hx5);
qx5_t = jacobian(hx5, [x{:}]);
qx5 = cat(2, qx5_t(:,9), qx5_t(:,10), qx5_t(:,25), qx5_t(:,26));


% - Robot 6
h61 = sqrt(2*alphaSum*(norm(deltaP61)-Ds)) + deltaP61'*deltaV61/norm(deltaP61);
h62 = sqrt(2*alphaSum*(norm(deltaP62)-Ds)) + deltaP62'*deltaV62/norm(deltaP62);
h63 = sqrt(2*alphaSum*(norm(deltaP63)-Ds)) + deltaP63'*deltaV63/norm(deltaP63);
h64 = sqrt(2*alphaSum*(norm(deltaP64)-Ds)) + deltaP64'*deltaV64/norm(deltaP64);
h65 = sqrt(2*alphaSum*(norm(deltaP65)-Ds)) + deltaP65'*deltaV65/norm(deltaP65);
h67 = sqrt(2*alphaSum*(norm(deltaP67)-Ds)) + deltaP67'*deltaV67/norm(deltaP67);
h68 = sqrt(2*alphaSum*(norm(deltaP68)-Ds)) + deltaP68'*deltaV68/norm(deltaP68);
hx6 = [h61; h62; h63; h64; h65; h67; h68];
hx6 = subs(hx6, [alphaSum Ds], paramValues);
hx6 = simplify(hx6);
qx6_t = jacobian(hx6, [x{:}]);
qx6 = cat(2, qx6_t(:,11), qx6_t(:,12), qx6_t(:,27), qx6_t(:,28));


% - Robot 7
h71 = sqrt(2*alphaSum*(norm(deltaP71)-Ds)) + deltaP71'*deltaV71/norm(deltaP71);
h72 = sqrt(2*alphaSum*(norm(deltaP72)-Ds)) + deltaP72'*deltaV72/norm(deltaP72);
h73 = sqrt(2*alphaSum*(norm(deltaP73)-Ds)) + deltaP73'*deltaV73/norm(deltaP73);
h74 = sqrt(2*alphaSum*(norm(deltaP74)-Ds)) + deltaP74'*deltaV74/norm(deltaP74);
h75 = sqrt(2*alphaSum*(norm(deltaP75)-Ds)) + deltaP75'*deltaV75/norm(deltaP75);
h76 = sqrt(2*alphaSum*(norm(deltaP76)-Ds)) + deltaP76'*deltaV76/norm(deltaP76);
h78 = sqrt(2*alphaSum*(norm(deltaP78)-Ds)) + deltaP78'*deltaV78/norm(deltaP78);
hx7 = [h71; h72; h73; h74; h75; h76; h78];
hx7 = subs(hx7, [alphaSum Ds], paramValues);
hx7 = simplify(hx7);
qx7_t = jacobian(hx7, [x{:}]);
qx7 = cat(2, qx7_t(:,13), qx7_t(:,14), qx7_t(:,29), qx7_t(:,30));


% - Robot 8
h81 = sqrt(2*alphaSum*(norm(deltaP81)-Ds)) + deltaP81'*deltaV81/norm(deltaP81);
h82 = sqrt(2*alphaSum*(norm(deltaP82)-Ds)) + deltaP82'*deltaV82/norm(deltaP82);
h83 = sqrt(2*alphaSum*(norm(deltaP83)-Ds)) + deltaP83'*deltaV83/norm(deltaP83);
h84 = sqrt(2*alphaSum*(norm(deltaP84)-Ds)) + deltaP84'*deltaV84/norm(deltaP84);
h85 = sqrt(2*alphaSum*(norm(deltaP85)-Ds)) + deltaP85'*deltaV85/norm(deltaP85);
h86 = sqrt(2*alphaSum*(norm(deltaP86)-Ds)) + deltaP86'*deltaV86/norm(deltaP86);
h87 = sqrt(2*alphaSum*(norm(deltaP87)-Ds)) + deltaP87'*deltaV87/norm(deltaP87);
hx8 = [h81; h82; h83; h84; h85; h86; h87];
hx8 = subs(hx8, [alphaSum Ds], paramValues);
hx8 = simplify(hx8);
qx8_t = jacobian(hx8, [x{:}]);
qx8 = cat(2, qx8_t(:,15), qx8_t(:,16), qx8_t(:,31), qx8_t(:,32));

% Centralized
hx = [h12; h13; h14; h15; h16; h17; h18; h23; h24; h25; h26; h27; h28; h34; h35; ...
      h36; h37; h38; h45; h46; h47; h48; h56; h57; h58; h67; h68; h78];

hx = subs(hx, [alphaSum Ds], paramValues);
hx = simplify(hx);
qx = jacobian(hx, [x{:}]);


%% Interpreted Functions for Simulink
% define input shape
state = [x{:}];

% Centralized
matlabFunction(hx, 'File', 'CBF8Robots_h', 'Vars', {transpose(state)});
matlabFunction(qx, 'File', 'CBF8Robots_dh', 'Vars', {transpose(state)});
matlabFunction(vx, 'File', 'CBF8Robots_vx', 'Vars', {transpose(state)});
matlabFunction(dvx, 'File', 'CBF8Robots_dvx', 'Vars', {transpose(state)});
matlabFunction(deltaP, 'File', 'CBF8Robots_deltaP', 'Vars', {transpose(state)});

% Decentralized
% - Robot 1
matlabFunction(hx1, 'File', 'CBF8Robots_h1', 'Vars', {transpose(state)});
matlabFunction(qx1, 'File', 'CBF8Robots_dh1', 'Vars', {transpose(state)});
matlabFunction(deltaP1, 'File', 'CBF8Robots_deltaP1', 'Vars', {transpose(state)});

% % - Robot 2
matlabFunction(hx2, 'File', 'CBF8Robots_h2', 'Vars', {transpose(state)});
matlabFunction(qx2, 'File', 'CBF8Robots_dh2', 'Vars', {transpose(state)});
matlabFunction(deltaP2, 'File', 'CBF8Robots_deltaP2', 'Vars', {transpose(state)});

% - Robot 3
matlabFunction(hx3, 'File', 'CBF8Robots_h3', 'Vars', {transpose(state)});
matlabFunction(qx3, 'File', 'CBF8Robots_dh3', 'Vars', {transpose(state)});
matlabFunction(deltaP3, 'File', 'CBF8Robots_deltaP3', 'Vars', {transpose(state)});

% - Robot 4
matlabFunction(hx4, 'File', 'CBF8Robots_h4', 'Vars', {transpose(state)});
matlabFunction(qx4, 'File', 'CBF8Robots_dh4', 'Vars', {transpose(state)});
matlabFunction(deltaP4, 'File', 'CBF8Robots_deltaP4', 'Vars', {transpose(state)});

% - Robot 5
matlabFunction(hx5, 'File', 'CBF8Robots_h5', 'Vars', {transpose(state)});
matlabFunction(qx5, 'File', 'CBF8Robots_dh5', 'Vars', {transpose(state)});
matlabFunction(deltaP5, 'File', 'CBF8Robots_deltaP5', 'Vars', {transpose(state)});

% - Robot 6
matlabFunction(hx6, 'File', 'CBF8Robots_h6', 'Vars', {transpose(state)});
matlabFunction(qx6, 'File', 'CBF8Robots_dh6', 'Vars', {transpose(state)});
matlabFunction(deltaP6, 'File', 'CBF8Robots_deltaP6', 'Vars', {transpose(state)});

% - Robot 7
matlabFunction(hx7, 'File', 'CBF8Robots_h7', 'Vars', {transpose(state)});
matlabFunction(qx7, 'File', 'CBF8Robots_dh7', 'Vars', {transpose(state)});
matlabFunction(deltaP7, 'File', 'CBF8Robots_deltaP7', 'Vars', {transpose(state)});

% - Robot 8
matlabFunction(hx8, 'File', 'CBF8Robots_h8', 'Vars', {transpose(state)});
matlabFunction(qx8, 'File', 'CBF8Robots_dh8', 'Vars', {transpose(state)});
matlabFunction(deltaP8, 'File', 'CBF8Robots_deltaP8', 'Vars', {transpose(state)});

% Lyapunov function
matlabFunction(vx, 'File', 'CBF8Robots_vx', 'Vars', {transpose(state)});
matlabFunction(dvx, 'File', 'CBF8Robots_dvx', 'Vars', {transpose(state)});

% %% Clear symbolic references
% clear p1x p1y p2x p2y p3x p3y p4x p4y p5x p5y p6x p6y p7x p7y p8x p8y ...
%       v1x v1y v2x v2y v3x v3y v4x v4y v5x v5y v6x v6y v7x v7y v8x v8y ...
%       alphaSum Ds p1 p2 p3 p4 p5 p6 p7 p8 v1 v2 v3 v4 v5 v6 v7 v8
% 
% clear deltaP12 deltaP13 deltaP14 deltaP15 deltaP16 deltaP17 deltaP18 ...
%       deltaP21 deltaP23 deltaP24 deltaP25 deltaP26 deltaP27 deltaP28 ...
%       deltaP31 deltaP32 deltaP34 deltaP35 deltaP36 deltaP37 deltaP38 ...
%       deltaP41 deltaP42 deltaP43 deltaP45 deltaP46 deltaP47 deltaP48 ...
%       deltaP51 deltaP52 deltaP53 deltaP54 deltaP56 deltaP57 deltaP58 ...
%       deltaP61 deltaP62 deltaP63 deltaP64 deltaP65 deltaP67 deltaP68 ...
%       deltaP71 deltaP72 deltaP73 deltaP74 deltaP75 deltaP76 deltaP78 ...
%       deltaP71 deltaP72 deltaP73 deltaP74 deltaP75 deltaP76 deltaP78 
% 
% clear deltaV12 deltaV13 deltaV14 deltaV15 deltaV16 deltaV17 deltaV18 ...
%       deltaV21 deltaV23 deltaV24 deltaV25 deltaV26 deltaV27 deltaV28 ...
%       deltaV31 deltaV32 deltaV34 deltaV35 deltaV36 deltaV37 deltaV38 ...
%       deltaV41 deltaV42 deltaV43 deltaV45 deltaV46 deltaV47 deltaV48 ...
%       deltaV51 deltaV52 deltaV53 deltaV54 deltaV56 deltaV57 deltaV58 ...
%       deltaV61 deltaV62 deltaV63 deltaV64 deltaV65 deltaV67 deltaV68 ...
%       deltaV71 deltaV72 deltaV73 deltaV74 deltaV75 deltaV76 deltaV78 ...
%       deltaV71 deltaV72 deltaV73 deltaV74 deltaV75 deltaV76 deltaV78 
% 
% clear deltaP1 deltaP2 deltaP3 deltaP4 deltaP5 deltaP6 deltaP7 deltaP8
% 
% clear h12 h13 h14 h15 h16 h17 h18 ...
%       h21 h23 h24 h25 h26 h27 h28 ...
%       h31 h32 h34 h35 h36 h37 h38 ...
%       h41 h42 h43 h45 h46 h47 h48 ...
%       h51 h52 h53 h54 h56 h57 h58 ...
%       h61 h62 h63 h64 h65 h67 h68 ...
%       h71 h72 h73 h74 h75 h76 h78 ...
%       h71 h72 h73 h74 h75 h76 h78 
% 
% clear hx1 hx2 hx3 hx4 hx5 hx6 hx7 hx8 ... 
%       qx1 qx2 qx3 qx4 qx5 qx6 qx7 qx8 ...
%       qx1_t qx2_t qx3_t qx4_t qx5_t qx6_t qx7_t qx8_t ...
%       state x vx dvx hx qx deltaP
