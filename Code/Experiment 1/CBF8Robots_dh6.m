function qx6 = CBF8Robots_dh6(in1)
%CBF8Robots_dh6
%    QX6 = CBF8Robots_dh6(IN1)

%    This function was generated by the Symbolic Math Toolbox version 9.1.
%    07-Jul-2022 15:51:29

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
t2 = -p6x;
t3 = -p7x;
t4 = -p8x;
t5 = -p6y;
t6 = -p7y;
t7 = -p8y;
t8 = -v6x;
t9 = -v7x;
t10 = -v8x;
t11 = -v6y;
t12 = -v7y;
t13 = -v8y;
t14 = sqrt(2.0);
t15 = p1x+t2;
t16 = p2x+t2;
t17 = p3x+t2;
t18 = p4x+t2;
t19 = p5x+t2;
t20 = p6x+t3;
t21 = p6x+t4;
t22 = p1y+t5;
t23 = p2y+t5;
t24 = p3y+t5;
t25 = p4y+t5;
t26 = p5y+t5;
t27 = p6y+t6;
t28 = p6y+t7;
t29 = t8+v1x;
t30 = t8+v2x;
t31 = t8+v3x;
t32 = t8+v4x;
t33 = t8+v5x;
t34 = t9+v6x;
t35 = t10+v6x;
t36 = t11+v1y;
t37 = t11+v2y;
t38 = t11+v3y;
t39 = t11+v4y;
t40 = t11+v5y;
t41 = t12+v6y;
t42 = t13+v6y;
t43 = abs(t15);
t44 = abs(t16);
t45 = abs(t17);
t46 = abs(t18);
t47 = abs(t19);
t48 = abs(t20);
t49 = abs(t21);
t50 = abs(t22);
t51 = abs(t23);
t52 = abs(t24);
t53 = abs(t25);
t54 = abs(t26);
t55 = abs(t27);
t56 = abs(t28);
t57 = sign(t15);
t58 = sign(t16);
t59 = sign(t17);
t60 = sign(t18);
t61 = sign(t19);
t62 = sign(t20);
t63 = sign(t21);
t64 = sign(t22);
t65 = sign(t23);
t66 = sign(t24);
t67 = sign(t25);
t68 = sign(t26);
t69 = sign(t27);
t70 = sign(t28);
t85 = t15.*t29;
t86 = t16.*t30;
t87 = t17.*t31;
t88 = t18.*t32;
t89 = t19.*t33;
t90 = t20.*t34;
t91 = t21.*t35;
t92 = t22.*t36;
t93 = t23.*t37;
t94 = t24.*t38;
t95 = t25.*t39;
t96 = t26.*t40;
t97 = t27.*t41;
t98 = t28.*t42;
t71 = t43.^2;
t72 = t44.^2;
t73 = t45.^2;
t74 = t46.^2;
t75 = t47.^2;
t76 = t48.^2;
t77 = t49.^2;
t78 = t50.^2;
t79 = t51.^2;
t80 = t52.^2;
t81 = t53.^2;
t82 = t54.^2;
t83 = t55.^2;
t84 = t56.^2;
t134 = t85+t92;
t135 = t86+t93;
t136 = t87+t94;
t137 = t88+t95;
t138 = t89+t96;
t139 = t90+t97;
t140 = t91+t98;
t99 = t71+t78;
t100 = t72+t79;
t101 = t73+t80;
t102 = t74+t81;
t103 = t75+t82;
t104 = t76+t83;
t105 = t77+t84;
t106 = sqrt(t99);
t107 = sqrt(t100);
t108 = sqrt(t101);
t109 = sqrt(t102);
t110 = sqrt(t103);
t111 = sqrt(t104);
t112 = sqrt(t105);
t113 = 1.0./t106;
t115 = 1.0./t107;
t117 = 1.0./t108;
t119 = 1.0./t109;
t121 = 1.0./t110;
t123 = 1.0./t111;
t125 = 1.0./t112;
t127 = t106.*5.0;
t128 = t107.*5.0;
t129 = t108.*5.0;
t130 = t109.*5.0;
t131 = t110.*5.0;
t132 = t111.*5.0;
t133 = t112.*5.0;
t114 = t113.^3;
t116 = t115.^3;
t118 = t117.^3;
t120 = t119.^3;
t122 = t121.^3;
t124 = t123.^3;
t126 = t125.^3;
t141 = t127-3.0;
t142 = t128-3.0;
t143 = t129-3.0;
t144 = t130-3.0;
t145 = t131-3.0;
t146 = t132-3.0;
t147 = t133-3.0;
t148 = 1.0./sqrt(t141);
t149 = 1.0./sqrt(t142);
t150 = 1.0./sqrt(t143);
t151 = 1.0./sqrt(t144);
t152 = 1.0./sqrt(t145);
t153 = 1.0./sqrt(t146);
t154 = 1.0./sqrt(t147);
mt1 = [-t29.*t113+t43.*t57.*t114.*t134-t14.*t43.*t57.*t113.*t148.*5.0,-t30.*t115+t44.*t58.*t116.*t135-t14.*t44.*t58.*t115.*t149.*5.0,-t31.*t117+t45.*t59.*t118.*t136-t14.*t45.*t59.*t117.*t150.*5.0,-t32.*t119+t46.*t60.*t120.*t137-t14.*t46.*t60.*t119.*t151.*5.0,-t33.*t121+t47.*t61.*t122.*t138-t14.*t47.*t61.*t121.*t152.*5.0,t34.*t123-t48.*t62.*t124.*t139+t14.*t48.*t62.*t123.*t153.*5.0,t35.*t125-t49.*t63.*t126.*t140+t14.*t49.*t63.*t125.*t154.*5.0,-t36.*t113+t50.*t64.*t114.*t134-t14.*t50.*t64.*t113.*t148.*5.0,-t37.*t115+t51.*t65.*t116.*t135-t14.*t51.*t65.*t115.*t149.*5.0,-t38.*t117+t52.*t66.*t118.*t136-t14.*t52.*t66.*t117.*t150.*5.0];
mt2 = [-t39.*t119+t53.*t67.*t120.*t137-t14.*t53.*t67.*t119.*t151.*5.0,-t40.*t121+t54.*t68.*t122.*t138-t14.*t54.*t68.*t121.*t152.*5.0,t41.*t123-t55.*t69.*t124.*t139+t14.*t55.*t69.*t123.*t153.*5.0,t42.*t125-t56.*t70.*t126.*t140+t14.*t56.*t70.*t125.*t154.*5.0,-t15.*t113,-t16.*t115,-t17.*t117,-t18.*t119,-t19.*t121,t20.*t123,t21.*t125,-t22.*t113,-t23.*t115,-t24.*t117,-t25.*t119,-t26.*t121,t27.*t123,t28.*t125];
qx6 = reshape([mt1,mt2],7,4);
