function deltaP2 = CBF8Robots_deltaP2(in1)
%CBF8Robots_deltaP2
%    deltaP2 = CBF8Robots_deltaP2(IN1)

%    This function was generated by the Symbolic Math Toolbox version 9.1.
%    07-Jul-2022 15:51:23

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
deltaP2 = [sqrt(abs(p1x-p2x).^2+abs(p1y-p2y).^2);sqrt(abs(p2x-p3x).^2+abs(p2y-p3y).^2);sqrt(abs(p2x-p4x).^2+abs(p2y-p4y).^2);sqrt(abs(p2x-p5x).^2+abs(p2y-p5y).^2);sqrt(abs(p2x-p6x).^2+abs(p2y-p6y).^2);sqrt(abs(p2x-p7x).^2+abs(p2y-p7y).^2);sqrt(abs(p2x-p8x).^2+abs(p2y-p8y).^2)];