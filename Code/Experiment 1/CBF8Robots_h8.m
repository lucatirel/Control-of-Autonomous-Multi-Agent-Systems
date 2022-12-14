function hx8 = CBF8Robots_h8(in1)
%CBF8Robots_h8
%    HX8 = CBF8Robots_h8(IN1)

%    This function was generated by the Symbolic Math Toolbox version 9.1.
%    07-Jul-2022 15:51:31

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
t2 = -p8x;
t3 = -p8y;
t4 = -v8x;
t5 = -v8y;
t6 = sqrt(2.0);
t7 = p1x+t2;
t8 = p2x+t2;
t9 = p3x+t2;
t10 = p4x+t2;
t11 = p5x+t2;
t12 = p6x+t2;
t13 = p7x+t2;
t14 = p1y+t3;
t15 = p2y+t3;
t16 = p3y+t3;
t17 = p4y+t3;
t18 = p5y+t3;
t19 = p6y+t3;
t20 = p7y+t3;
t21 = abs(t7);
t22 = abs(t8);
t23 = abs(t9);
t24 = abs(t10);
t25 = abs(t11);
t26 = abs(t12);
t27 = abs(t13);
t28 = abs(t14);
t29 = abs(t15);
t30 = abs(t16);
t31 = abs(t17);
t32 = abs(t18);
t33 = abs(t19);
t34 = abs(t20);
t35 = t21.^2;
t36 = t22.^2;
t37 = t23.^2;
t38 = t24.^2;
t39 = t25.^2;
t40 = t26.^2;
t41 = t27.^2;
t42 = t28.^2;
t43 = t29.^2;
t44 = t30.^2;
t45 = t31.^2;
t46 = t32.^2;
t47 = t33.^2;
t48 = t34.^2;
t49 = t35+t42;
t50 = t36+t43;
t51 = t37+t44;
t52 = t38+t45;
t53 = t39+t46;
t54 = t40+t47;
t55 = t41+t48;
mt1 = [t6.*sqrt(sqrt(t49).*5.0-3.0).*2.0+1.0./sqrt(t49).*(t7.*(t4+v1x)+t14.*(t5+v1y));t6.*sqrt(sqrt(t50).*5.0-3.0).*2.0+1.0./sqrt(t50).*(t8.*(t4+v2x)+t15.*(t5+v2y));t6.*sqrt(sqrt(t51).*5.0-3.0).*2.0+1.0./sqrt(t51).*(t9.*(t4+v3x)+t16.*(t5+v3y));t6.*sqrt(sqrt(t52).*5.0-3.0).*2.0+1.0./sqrt(t52).*(t10.*(t4+v4x)+t17.*(t5+v4y));t6.*sqrt(sqrt(t53).*5.0-3.0).*2.0+1.0./sqrt(t53).*(t11.*(t4+v5x)+t18.*(t5+v5y))];
mt2 = [t6.*sqrt(sqrt(t54).*5.0-3.0).*2.0+1.0./sqrt(t54).*(t12.*(t4+v6x)+t19.*(t5+v6y));t6.*sqrt(sqrt(t55).*5.0-3.0).*2.0+1.0./sqrt(t55).*(t13.*(t4+v7x)+t20.*(t5+v7y))];
hx8 = [mt1;mt2];
