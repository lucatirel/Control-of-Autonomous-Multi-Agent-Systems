function qx4 = CBF8Robots_dh4(in1)
%CBF8Robots_dh4
%    QX4 = CBF8Robots_dh4(IN1)

%    This function was generated by the Symbolic Math Toolbox version 9.1.
%    07-Jul-2022 15:51:25

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
t2 = -p4x;
t3 = -p5x;
t4 = -p6x;
t5 = -p7x;
t6 = -p8x;
t7 = -p4y;
t8 = -p5y;
t9 = -p6y;
t10 = -p7y;
t11 = -p8y;
t12 = -v4x;
t13 = -v5x;
t14 = -v6x;
t15 = -v7x;
t16 = -v8x;
t17 = -v4y;
t18 = -v5y;
t19 = -v6y;
t20 = -v7y;
t21 = -v8y;
t22 = sqrt(2.0);
t23 = p1x+t2;
t24 = p2x+t2;
t25 = p3x+t2;
t26 = p4x+t3;
t27 = p4x+t4;
t28 = p4x+t5;
t29 = p4x+t6;
t30 = p1y+t7;
t31 = p2y+t7;
t32 = p3y+t7;
t33 = p4y+t8;
t34 = p4y+t9;
t35 = p4y+t10;
t36 = p4y+t11;
t37 = t12+v1x;
t38 = t12+v2x;
t39 = t12+v3x;
t40 = t13+v4x;
t41 = t14+v4x;
t42 = t15+v4x;
t43 = t16+v4x;
t44 = t17+v1y;
t45 = t17+v2y;
t46 = t17+v3y;
t47 = t18+v4y;
t48 = t19+v4y;
t49 = t20+v4y;
t50 = t21+v4y;
t51 = abs(t23);
t52 = abs(t24);
t53 = abs(t25);
t54 = abs(t26);
t55 = abs(t27);
t56 = abs(t28);
t57 = abs(t29);
t58 = abs(t30);
t59 = abs(t31);
t60 = abs(t32);
t61 = abs(t33);
t62 = abs(t34);
t63 = abs(t35);
t64 = abs(t36);
t65 = sign(t23);
t66 = sign(t24);
t67 = sign(t25);
t68 = sign(t26);
t69 = sign(t27);
t70 = sign(t28);
t71 = sign(t29);
t72 = sign(t30);
t73 = sign(t31);
t74 = sign(t32);
t75 = sign(t33);
t76 = sign(t34);
t77 = sign(t35);
t78 = sign(t36);
t93 = t23.*t37;
t94 = t24.*t38;
t95 = t25.*t39;
t96 = t26.*t40;
t97 = t27.*t41;
t98 = t28.*t42;
t99 = t29.*t43;
t100 = t30.*t44;
t101 = t31.*t45;
t102 = t32.*t46;
t103 = t33.*t47;
t104 = t34.*t48;
t105 = t35.*t49;
t106 = t36.*t50;
t79 = t51.^2;
t80 = t52.^2;
t81 = t53.^2;
t82 = t54.^2;
t83 = t55.^2;
t84 = t56.^2;
t85 = t57.^2;
t86 = t58.^2;
t87 = t59.^2;
t88 = t60.^2;
t89 = t61.^2;
t90 = t62.^2;
t91 = t63.^2;
t92 = t64.^2;
t142 = t93+t100;
t143 = t94+t101;
t144 = t95+t102;
t145 = t96+t103;
t146 = t97+t104;
t147 = t98+t105;
t148 = t99+t106;
t107 = t79+t86;
t108 = t80+t87;
t109 = t81+t88;
t110 = t82+t89;
t111 = t83+t90;
t112 = t84+t91;
t113 = t85+t92;
t114 = sqrt(t107);
t115 = sqrt(t108);
t116 = sqrt(t109);
t117 = sqrt(t110);
t118 = sqrt(t111);
t119 = sqrt(t112);
t120 = sqrt(t113);
t121 = 1.0./t114;
t123 = 1.0./t115;
t125 = 1.0./t116;
t127 = 1.0./t117;
t129 = 1.0./t118;
t131 = 1.0./t119;
t133 = 1.0./t120;
t135 = t114.*5.0;
t136 = t115.*5.0;
t137 = t116.*5.0;
t138 = t117.*5.0;
t139 = t118.*5.0;
t140 = t119.*5.0;
t141 = t120.*5.0;
t122 = t121.^3;
t124 = t123.^3;
t126 = t125.^3;
t128 = t127.^3;
t130 = t129.^3;
t132 = t131.^3;
t134 = t133.^3;
t149 = t135-3.0;
t150 = t136-3.0;
t151 = t137-3.0;
t152 = t138-3.0;
t153 = t139-3.0;
t154 = t140-3.0;
t155 = t141-3.0;
t156 = 1.0./sqrt(t149);
t157 = 1.0./sqrt(t150);
t158 = 1.0./sqrt(t151);
t159 = 1.0./sqrt(t152);
t160 = 1.0./sqrt(t153);
t161 = 1.0./sqrt(t154);
t162 = 1.0./sqrt(t155);
mt1 = [-t37.*t121+t51.*t65.*t122.*t142-t22.*t51.*t65.*t121.*t156.*5.0,-t38.*t123+t52.*t66.*t124.*t143-t22.*t52.*t66.*t123.*t157.*5.0,-t39.*t125+t53.*t67.*t126.*t144-t22.*t53.*t67.*t125.*t158.*5.0,t40.*t127-t54.*t68.*t128.*t145+t22.*t54.*t68.*t127.*t159.*5.0,t41.*t129-t55.*t69.*t130.*t146+t22.*t55.*t69.*t129.*t160.*5.0,t42.*t131-t56.*t70.*t132.*t147+t22.*t56.*t70.*t131.*t161.*5.0,t43.*t133-t57.*t71.*t134.*t148+t22.*t57.*t71.*t133.*t162.*5.0,-t44.*t121+t58.*t72.*t122.*t142-t22.*t58.*t72.*t121.*t156.*5.0,-t45.*t123+t59.*t73.*t124.*t143-t22.*t59.*t73.*t123.*t157.*5.0,-t46.*t125+t60.*t74.*t126.*t144-t22.*t60.*t74.*t125.*t158.*5.0];
mt2 = [t47.*t127-t61.*t75.*t128.*t145+t22.*t61.*t75.*t127.*t159.*5.0,t48.*t129-t62.*t76.*t130.*t146+t22.*t62.*t76.*t129.*t160.*5.0,t49.*t131-t63.*t77.*t132.*t147+t22.*t63.*t77.*t131.*t161.*5.0,t50.*t133-t64.*t78.*t134.*t148+t22.*t64.*t78.*t133.*t162.*5.0,-t23.*t121,-t24.*t123,-t25.*t125,t26.*t127,t27.*t129,t28.*t131,t29.*t133,-t30.*t121,-t31.*t123,-t32.*t125,t33.*t127,t34.*t129,t35.*t131,t36.*t133];
qx4 = reshape([mt1,mt2],7,4);
