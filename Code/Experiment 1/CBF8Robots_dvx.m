function dvx = CBF8Robots_dvx(in1)
%CBF8Robots_dvx
%    DVX = CBF8Robots_dvx(IN1)

%    This function was generated by the Symbolic Math Toolbox version 9.1.
%    07-Jul-2022 15:51:33

p1x = in1(1,:);
p2x = in1(3,:);
p3x = in1(5,:);
p4x = in1(7,:);
p5x = in1(9,:);
p6x = in1(11,:);
p7x = in1(13,:);
p8x = in1(15,:);
p1y = in1(2,:);
p2y = in1(4,:);
p3y = in1(6,:);
p4y = in1(8,:);
p5y = in1(10,:);
p6y = in1(12,:);
p7y = in1(14,:);
p8y = in1(16,:);
v1x = in1(17,:);
v2x = in1(19,:);
v3x = in1(21,:);
v4x = in1(23,:);
v5x = in1(25,:);
v6x = in1(27,:);
v7x = in1(29,:);
v8x = in1(31,:);
v1y = in1(18,:);
v2y = in1(20,:);
v3y = in1(22,:);
v4y = in1(24,:);
v5y = in1(26,:);
v6y = in1(28,:);
v7y = in1(30,:);
v8y = in1(32,:);
dvx = [p1x.*2.0,p1y.*2.0,p2x.*2.0,p2y.*2.0,p3x.*2.0,p3y.*2.0,p4x.*2.0,p4y.*2.0,p5x.*2.0,p5y.*2.0,p6x.*2.0,p6y.*2.0,p7x.*2.0,p7y.*2.0,p8x.*2.0,p8y.*2.0,v1x.*2.0,v1y.*2.0,v2x.*2.0,v2y.*2.0,v3x.*2.0,v3y.*2.0,v4x.*2.0,v4y.*2.0,v5x.*2.0,v5y.*2.0,v6x.*2.0,v6y.*2.0,v7x.*2.0,v7y.*2.0,v8x.*2.0,v8y.*2.0];