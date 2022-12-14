clear all

%% Parameters
% constants
alphaSum_val = 20;        % maximum braking power from 2 robots
Ds_val = 0.5;             % minimum distance between 2 robots
paramValues = [alphaSum_val Ds_val];

% Symbols
syms p1x p1y p2x p2y p3x p3y p4x p4y p5x p5y p6x p6y p7x p7y p8x p8y
syms v1x v1y v2x v2y v3x v3y v4x v4y v5x v5y v6x v6y v7x v7y v8x v8y 
syms alphaSum Ds

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

% Define the state
x = {p1x p1y p2x p2y p3x p3y p4x p4y p5x p5y p6x p6y p7x p7y p8x p8y ... 
     v1x v1y v2x v2y v3x v3y v4x v4y v5x v5y v6x v6y v7x v7y v8x v8y};

%% Control Lyapunov Functions
% Define Lyapunov Function V(x)
vx = p1x^2 + p1y^2 + p2x^2 + p2y^2 + p3x^2 + p3y^2 + p4x^2 + p4y^2 + p5x^2 + p5y^2 + p6x^2 + p6y^2 + p7x^2 + p7y^2 + p8x^2 + p8y^2 + ... 
     v1x^2 + v1y^2 + v2x^2 + v2y^2 + v3x^2 + v3y^2 + v4x^2 + v4y^2 + v5x^2 + v5y^2 + v6x^2 + v6y^2 + v7x^2 + v7y^2 + v8x^2 + v8y^2;

% Compute Jacobian of V(x)
dvx = jacobian(vx, [x{:}]);

%subs(vx, [p1x p1y p2x p2y p3x p3y p4x p4y p5x p5y p6x p6y p7x p7y p8x p8y v1x v1y v2x v2y v3x v3y v4x v4y v5x v5y v6x v6y v7x v7y v8x v8y], [0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0])


%% Control Barrier Functions
deltaP12 = p1 - p2;
deltaP13 = p1 - p3;
deltaP14 = p1 - p4;
deltaP15 = p1 - p5;
deltaP16 = p1 - p6;
deltaP17 = p1 - p7;
deltaP18 = p1 - p8;
deltaP23 = p2 - p3;
deltaP24 = p2 - p4;
deltaP25 = p2 - p5;
deltaP26 = p2 - p6;
deltaP27 = p2 - p7;
deltaP28 = p2 - p8;
deltaP34 = p3 - p4;
deltaP35 = p3 - p5;
deltaP36 = p3 - p6;
deltaP37 = p3 - p7;
deltaP38 = p3 - p8;
deltaP45 = p4 - p5;
deltaP46 = p4 - p6;
deltaP47 = p4 - p7;
deltaP48 = p4 - p8;
deltaP56 = p5 - p6;
deltaP57 = p5 - p7;
deltaP58 = p5 - p8;
deltaP67 = p6 - p7;
deltaP68 = p6 - p8;
deltaP78 = p7 - p8;

deltaP = [sqrt(deltaP12(1)^2 + deltaP12(2)^2);
          sqrt(deltaP13(1)^2 + deltaP13(2)^2);
          sqrt(deltaP14(1)^2 + deltaP14(2)^2);
          sqrt(deltaP15(1)^2 + deltaP15(2)^2);
          sqrt(deltaP16(1)^2 + deltaP16(2)^2);
          sqrt(deltaP17(1)^2 + deltaP17(2)^2);
          sqrt(deltaP18(1)^2 + deltaP18(2)^2);
          sqrt(deltaP23(1)^2 + deltaP23(2)^2);
          sqrt(deltaP24(1)^2 + deltaP24(2)^2);
          sqrt(deltaP25(1)^2 + deltaP25(2)^2);
          sqrt(deltaP26(1)^2 + deltaP26(2)^2);
          sqrt(deltaP27(1)^2 + deltaP27(2)^2);
          sqrt(deltaP28(1)^2 + deltaP28(2)^2);
          sqrt(deltaP34(1)^2 + deltaP34(2)^2);
          sqrt(deltaP35(1)^2 + deltaP35(2)^2);
          sqrt(deltaP36(1)^2 + deltaP36(2)^2);
          sqrt(deltaP37(1)^2 + deltaP37(2)^2);
          sqrt(deltaP38(1)^2 + deltaP38(2)^2);
          sqrt(deltaP45(1)^2 + deltaP45(2)^2);
          sqrt(deltaP46(1)^2 + deltaP46(2)^2);
          sqrt(deltaP47(1)^2 + deltaP47(2)^2);
          sqrt(deltaP48(1)^2 + deltaP48(2)^2);
          sqrt(deltaP56(1)^2 + deltaP56(2)^2);
          sqrt(deltaP57(1)^2 + deltaP57(2)^2);
          sqrt(deltaP58(1)^2 + deltaP58(2)^2);
          sqrt(deltaP67(1)^2 + deltaP67(2)^2);
          sqrt(deltaP68(1)^2 + deltaP68(2)^2);
          sqrt(deltaP78(1)^2 + deltaP78(2)^2)];

deltaV12 = v1 - v2;
deltaV13 = v1 - v3;
deltaV14 = v1 - v4;
deltaV15 = v1 - v5;
deltaV16 = v1 - v6;
deltaV17 = v1 - v7;
deltaV18 = v1 - v8;
deltaV23 = v2 - v3;
deltaV24 = v2 - v4;
deltaV25 = v2 - v5;
deltaV26 = v2 - v6;
deltaV27 = v2 - v7;
deltaV28 = v2 - v8;
deltaV34 = v3 - v4;
deltaV35 = v3 - v5;
deltaV36 = v3 - v6;
deltaV37 = v3 - v7;
deltaV38 = v3 - v8;
deltaV45 = v4 - v5;
deltaV46 = v4 - v6;
deltaV47 = v4 - v7;
deltaV48 = v4 - v8;
deltaV56 = v5 - v6;
deltaV57 = v5 - v7;
deltaV58 = v5 - v8;
deltaV67 = v6 - v7;
deltaV68 = v6 - v8;
deltaV78 = v7 - v8;

% barrier functions
h12 = sqrt(2*alphaSum*(norm(deltaP12)-Ds)) + deltaP12'*deltaV12/norm(deltaP12);
h13 = sqrt(2*alphaSum*(norm(deltaP13)-Ds)) + deltaP13'*deltaV13/norm(deltaP13);
h14 = sqrt(2*alphaSum*(norm(deltaP14)-Ds)) + deltaP14'*deltaV14/norm(deltaP14);
h15 = sqrt(2*alphaSum*(norm(deltaP15)-Ds)) + deltaP15'*deltaV15/norm(deltaP15);
h16 = sqrt(2*alphaSum*(norm(deltaP16)-Ds)) + deltaP16'*deltaV16/norm(deltaP16);
h17 = sqrt(2*alphaSum*(norm(deltaP17)-Ds)) + deltaP17'*deltaV17/norm(deltaP17);
h18 = sqrt(2*alphaSum*(norm(deltaP18)-Ds)) + deltaP18'*deltaV18/norm(deltaP18);
h23 = sqrt(2*alphaSum*(norm(deltaP23)-Ds)) + deltaP23'*deltaV23/norm(deltaP23);
h24 = sqrt(2*alphaSum*(norm(deltaP24)-Ds)) + deltaP24'*deltaV24/norm(deltaP24);
h25 = sqrt(2*alphaSum*(norm(deltaP25)-Ds)) + deltaP25'*deltaV25/norm(deltaP25);
h26 = sqrt(2*alphaSum*(norm(deltaP26)-Ds)) + deltaP26'*deltaV26/norm(deltaP26);
h27 = sqrt(2*alphaSum*(norm(deltaP27)-Ds)) + deltaP27'*deltaV27/norm(deltaP27);
h28 = sqrt(2*alphaSum*(norm(deltaP28)-Ds)) + deltaP28'*deltaV28/norm(deltaP28);
h34 = sqrt(2*alphaSum*(norm(deltaP34)-Ds)) + deltaP34'*deltaV34/norm(deltaP34);
h35 = sqrt(2*alphaSum*(norm(deltaP35)-Ds)) + deltaP35'*deltaV35/norm(deltaP35);
h36 = sqrt(2*alphaSum*(norm(deltaP36)-Ds)) + deltaP36'*deltaV36/norm(deltaP36);
h37 = sqrt(2*alphaSum*(norm(deltaP37)-Ds)) + deltaP37'*deltaV37/norm(deltaP37);
h38 = sqrt(2*alphaSum*(norm(deltaP38)-Ds)) + deltaP38'*deltaV38/norm(deltaP38);
h45 = sqrt(2*alphaSum*(norm(deltaP45)-Ds)) + deltaP45'*deltaV45/norm(deltaP45);
h46 = sqrt(2*alphaSum*(norm(deltaP46)-Ds)) + deltaP46'*deltaV46/norm(deltaP46);
h47 = sqrt(2*alphaSum*(norm(deltaP47)-Ds)) + deltaP47'*deltaV47/norm(deltaP47);
h48 = sqrt(2*alphaSum*(norm(deltaP48)-Ds)) + deltaP48'*deltaV48/norm(deltaP48);
h56 = sqrt(2*alphaSum*(norm(deltaP56)-Ds)) + deltaP56'*deltaV56/norm(deltaP56);
h57 = sqrt(2*alphaSum*(norm(deltaP57)-Ds)) + deltaP57'*deltaV57/norm(deltaP57);
h58 = sqrt(2*alphaSum*(norm(deltaP58)-Ds)) + deltaP58'*deltaV58/norm(deltaP58);
h67 = sqrt(2*alphaSum*(norm(deltaP67)-Ds)) + deltaP67'*deltaV67/norm(deltaP67);
h68 = sqrt(2*alphaSum*(norm(deltaP68)-Ds)) + deltaP68'*deltaV68/norm(deltaP68);
h78 = sqrt(2*alphaSum*(norm(deltaP78)-Ds)) + deltaP78'*deltaV78/norm(deltaP78);

hx = [h12; h13; h14; h15; h16; h17; h18; h23; h24; h25; h26; h27; h28; h34; h35; ...
      h36; h37; h38; h45; h46; h47; h48; h56; h57; h58; h67; h68; h78];

% get numerical value and simplify
hx = subs(hx, [alphaSum Ds], paramValues);
hx = simplify(hx);

% compute jacobian
qx = jacobian(hx, [x{:}]);

%% Interpreted Functions for Simulink
% define input shape
state = [x{:}];

% define functions
matlabFunction(hx, 'File', 'CBF8Robots_h', 'Vars', {transpose(state)});
matlabFunction(qx, 'File', 'CBF8Robots_dh', 'Vars', {transpose(state)});
matlabFunction(vx, 'File', 'CBF8Robots_vx', 'Vars', {transpose(state)});
matlabFunction(dvx, 'File', 'CBF8Robots_dvx', 'Vars', {transpose(state)});
matlabFunction(deltaP, 'File', 'CBF8Robots_deltaP', 'Vars', {transpose(state)});

%Clear symbolic references
clear p1x p1y p2x p2y p3x p3y p4x p4y p5x p5y p6x p6y p7x p7y p8x p8y ...
      v1x v1y v2x v2y v3x v3y v4x v4y v5x v5y v6x v6y v7x v7y v8x v8y ...
      alphaSum Ds p1 p2 p3 p4 p5 p6 p7 p8 v1 v2 v3 v4 v5 v6 v7 v8

clear deltaP12 deltaP13 deltaP14 deltaP15 deltaP16 deltaP17 deltaP18 ...
      deltaP23 deltaP24 deltaP25 deltaP26 deltaP27 deltaP28 deltaP34 ... 
      deltaP35 deltaP36 deltaP37 deltaP38 deltaP45 deltaP46 deltaP47 ... 
      deltaP48 deltaP56 deltaP57 deltaP58 deltaP67 deltaP68 deltaP78

clear deltaV12 deltaV13 deltaV14 deltaV15 deltaV16 deltaV17 deltaV18 ...
      deltaV23 deltaV24 deltaV25 deltaV26 deltaV27 deltaV28 deltaV34 ... 
      deltaV35 deltaV36 deltaV37 deltaV38 deltaV45 deltaV46 deltaV47 ... 
      deltaV48 deltaV56 deltaV57 deltaV58 deltaV67 deltaV68 deltaV78

clear h12 h13 h14 h15 h16 h17 h18 h23 h24 h25 h26 h27 h28 h34 ...
      h35 h36 h37 h38 h45 h46 h47 h48 h56 h57 h58 h67 h68 h78 ...
      hx qx states x vx dvx deltaP


