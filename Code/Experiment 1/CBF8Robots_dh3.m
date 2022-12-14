function qx3 = CBF8Robots_dh3(in1)
%CBF8Robots_dh3
%    QX3 = CBF8Robots_dh3(IN1)

%    This function was generated by the Symbolic Math Toolbox version 9.1.
%    07-Jul-2022 15:51:24

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
t2 = -p3x;
t3 = -p4x;
t4 = -p5x;
t5 = -p6x;
t6 = -p7x;
t7 = -p8x;
t8 = -p3y;
t9 = -p4y;
t10 = -p5y;
t11 = -p6y;
t12 = -p7y;
t13 = -p8y;
t14 = -v3x;
t15 = -v4x;
t16 = -v5x;
t17 = -v6x;
t18 = -v7x;
t19 = -v8x;
t20 = -v3y;
t21 = -v4y;
t22 = -v5y;
t23 = -v6y;
t24 = -v7y;
t25 = -v8y;
t26 = sqrt(2.0);
t27 = p1x+t2;
t28 = p2x+t2;
t29 = p3x+t3;
t30 = p3x+t4;
t31 = p3x+t5;
t32 = p3x+t6;
t33 = p3x+t7;
t34 = p1y+t8;
t35 = p2y+t8;
t36 = p3y+t9;
t37 = p3y+t10;
t38 = p3y+t11;
t39 = p3y+t12;
t40 = p3y+t13;
t41 = t14+v1x;
t42 = t14+v2x;
t43 = t15+v3x;
t44 = t16+v3x;
t45 = t17+v3x;
t46 = t18+v3x;
t47 = t19+v3x;
t48 = t20+v1y;
t49 = t20+v2y;
t50 = t21+v3y;
t51 = t22+v3y;
t52 = t23+v3y;
t53 = t24+v3y;
t54 = t25+v3y;
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
t65 = abs(t37);
t66 = abs(t38);
t67 = abs(t39);
t68 = abs(t40);
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
t79 = sign(t37);
t80 = sign(t38);
t81 = sign(t39);
t82 = sign(t40);
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
t107 = t37.*t51;
t108 = t38.*t52;
t109 = t39.*t53;
t110 = t40.*t54;
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
t93 = t65.^2;
t94 = t66.^2;
t95 = t67.^2;
t96 = t68.^2;
t146 = t97+t104;
t147 = t98+t105;
t148 = t99+t106;
t149 = t100+t107;
t150 = t101+t108;
t151 = t102+t109;
t152 = t103+t110;
t111 = t83+t90;
t112 = t84+t91;
t113 = t85+t92;
t114 = t86+t93;
t115 = t87+t94;
t116 = t88+t95;
t117 = t89+t96;
t118 = sqrt(t111);
t119 = sqrt(t112);
t120 = sqrt(t113);
t121 = sqrt(t114);
t122 = sqrt(t115);
t123 = sqrt(t116);
t124 = sqrt(t117);
t125 = 1.0./t118;
t127 = 1.0./t119;
t129 = 1.0./t120;
t131 = 1.0./t121;
t133 = 1.0./t122;
t135 = 1.0./t123;
t137 = 1.0./t124;
t139 = t118.*5.0;
t140 = t119.*5.0;
t141 = t120.*5.0;
t142 = t121.*5.0;
t143 = t122.*5.0;
t144 = t123.*5.0;
t145 = t124.*5.0;
t126 = t125.^3;
t128 = t127.^3;
t130 = t129.^3;
t132 = t131.^3;
t134 = t133.^3;
t136 = t135.^3;
t138 = t137.^3;
t153 = t139-3.0;
t154 = t140-3.0;
t155 = t141-3.0;
t156 = t142-3.0;
t157 = t143-3.0;
t158 = t144-3.0;
t159 = t145-3.0;
t160 = 1.0./sqrt(t153);
t161 = 1.0./sqrt(t154);
t162 = 1.0./sqrt(t155);
t163 = 1.0./sqrt(t156);
t164 = 1.0./sqrt(t157);
t165 = 1.0./sqrt(t158);
t166 = 1.0./sqrt(t159);
mt1 = [-t41.*t125+t55.*t69.*t126.*t146-t26.*t55.*t69.*t125.*t160.*5.0,-t42.*t127+t56.*t70.*t128.*t147-t26.*t56.*t70.*t127.*t161.*5.0,t43.*t129-t57.*t71.*t130.*t148+t26.*t57.*t71.*t129.*t162.*5.0,t44.*t131-t58.*t72.*t132.*t149+t26.*t58.*t72.*t131.*t163.*5.0,t45.*t133-t59.*t73.*t134.*t150+t26.*t59.*t73.*t133.*t164.*5.0,t46.*t135-t60.*t74.*t136.*t151+t26.*t60.*t74.*t135.*t165.*5.0,t47.*t137-t61.*t75.*t138.*t152+t26.*t61.*t75.*t137.*t166.*5.0,-t48.*t125+t62.*t76.*t126.*t146-t26.*t62.*t76.*t125.*t160.*5.0,-t49.*t127+t63.*t77.*t128.*t147-t26.*t63.*t77.*t127.*t161.*5.0,t50.*t129-t64.*t78.*t130.*t148+t26.*t64.*t78.*t129.*t162.*5.0];
mt2 = [t51.*t131-t65.*t79.*t132.*t149+t26.*t65.*t79.*t131.*t163.*5.0,t52.*t133-t66.*t80.*t134.*t150+t26.*t66.*t80.*t133.*t164.*5.0,t53.*t135-t67.*t81.*t136.*t151+t26.*t67.*t81.*t135.*t165.*5.0,t54.*t137-t68.*t82.*t138.*t152+t26.*t68.*t82.*t137.*t166.*5.0,-t27.*t125,-t28.*t127,t29.*t129,t30.*t131,t31.*t133,t32.*t135,t33.*t137,-t34.*t125,-t35.*t127,t36.*t129,t37.*t131,t38.*t133,t39.*t135,t40.*t137];
qx3 = reshape([mt1,mt2],7,4);