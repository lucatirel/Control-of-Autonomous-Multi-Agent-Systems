close all
clear all
clc

syms u1 u2 u3 u4 u5 u6 u7 u8 u9 u10 u11 u12 u13 u14 u15 u16 u17 u18 u19 u20 u21 u22 u23 u24 u25 u26 u27 u28 u29 u30 u31 u32 



%   FOUR ROBOTS
u = [u1 u2 u3 u4 u5 u6 u7 u8 u9 u10 u11 u12 u13 u14 u15 u16].'; % of form x1;y1;x2;y2;...;xn;yn;vx1;vy1;vx2;vy2;...;vxm;vym



[h,q,dP] = lf_barrier(u)
matlabFunction(h,q,dP,'File','CBFlfRobots',...
    'Vars',u)


