function qx1 = CBF8Robots_dh1(in1)
%CBF8Robots_dh1
%    QX1 = CBF8Robots_dh1(IN1)

%    This function was generated by the Symbolic Math Toolbox version 9.1.
%    07-Jul-2022 15:51:20

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
t2 = -p2x;
t3 = -p3x;
t4 = -p4x;
t5 = -p5x;
t6 = -p6x;
t7 = -p7x;
t8 = -p8x;
t9 = -p2y;
t10 = -p3y;
t11 = -p4y;
t12 = -p5y;
t13 = -p6y;
t14 = -p7y;
t15 = -p8y;
t16 = -v2x;
t17 = -v3x;
t18 = -v4x;
t19 = -v5x;
t20 = -v6x;
t21 = -v7x;
t22 = -v8x;
t23 = -v2y;
t24 = -v3y;
t25 = -v4y;
t26 = -v5y;
t27 = -v6y;
t28 = -v7y;
t29 = -v8y;
t30 = sqrt(2.0);
t31 = p1x+t2;
t32 = p1x+t3;
t33 = p1x+t4;
t34 = p1x+t5;
t35 = p1x+t6;
t36 = p1x+t7;
t37 = p1x+t8;
t38 = p1y+t9;
t39 = p1y+t10;
t40 = p1y+t11;
t41 = p1y+t12;
t42 = p1y+t13;
t43 = p1y+t14;
t44 = p1y+t15;
t45 = t16+v1x;
t46 = t17+v1x;
t47 = t18+v1x;
t48 = t19+v1x;
t49 = t20+v1x;
t50 = t21+v1x;
t51 = t22+v1x;
t52 = t23+v1y;
t53 = t24+v1y;
t54 = t25+v1y;
t55 = t26+v1y;
t56 = t27+v1y;
t57 = t28+v1y;
t58 = t29+v1y;
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
t69 = abs(t41);
t70 = abs(t42);
t71 = abs(t43);
t72 = abs(t44);
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
t83 = sign(t41);
t84 = sign(t42);
t85 = sign(t43);
t86 = sign(t44);
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
t111 = t41.*t55;
t112 = t42.*t56;
t113 = t43.*t57;
t114 = t44.*t58;
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
t97 = t69.^2;
t98 = t70.^2;
t99 = t71.^2;
t100 = t72.^2;
t150 = t101+t108;
t151 = t102+t109;
t152 = t103+t110;
t153 = t104+t111;
t154 = t105+t112;
t155 = t106+t113;
t156 = t107+t114;
t115 = t87+t94;
t116 = t88+t95;
t117 = t89+t96;
t118 = t90+t97;
t119 = t91+t98;
t120 = t92+t99;
t121 = t93+t100;
t122 = sqrt(t115);
t123 = sqrt(t116);
t124 = sqrt(t117);
t125 = sqrt(t118);
t126 = sqrt(t119);
t127 = sqrt(t120);
t128 = sqrt(t121);
t129 = 1.0./t122;
t131 = 1.0./t123;
t133 = 1.0./t124;
t135 = 1.0./t125;
t137 = 1.0./t126;
t139 = 1.0./t127;
t141 = 1.0./t128;
t143 = t122.*5.0;
t144 = t123.*5.0;
t145 = t124.*5.0;
t146 = t125.*5.0;
t147 = t126.*5.0;
t148 = t127.*5.0;
t149 = t128.*5.0;
t130 = t129.^3;
t132 = t131.^3;
t134 = t133.^3;
t136 = t135.^3;
t138 = t137.^3;
t140 = t139.^3;
t142 = t141.^3;
t157 = t143-3.0;
t158 = t144-3.0;
t159 = t145-3.0;
t160 = t146-3.0;
t161 = t147-3.0;
t162 = t148-3.0;
t163 = t149-3.0;
t164 = 1.0./sqrt(t157);
t165 = 1.0./sqrt(t158);
t166 = 1.0./sqrt(t159);
t167 = 1.0./sqrt(t160);
t168 = 1.0./sqrt(t161);
t169 = 1.0./sqrt(t162);
t170 = 1.0./sqrt(t163);
mt1 = [t45.*t129-t59.*t73.*t130.*t150+t30.*t59.*t73.*t129.*t164.*5.0,t46.*t131-t60.*t74.*t132.*t151+t30.*t60.*t74.*t131.*t165.*5.0,t47.*t133-t61.*t75.*t134.*t152+t30.*t61.*t75.*t133.*t166.*5.0,t48.*t135-t62.*t76.*t136.*t153+t30.*t62.*t76.*t135.*t167.*5.0,t49.*t137-t63.*t77.*t138.*t154+t30.*t63.*t77.*t137.*t168.*5.0,t50.*t139-t64.*t78.*t140.*t155+t30.*t64.*t78.*t139.*t169.*5.0,t51.*t141-t65.*t79.*t142.*t156+t30.*t65.*t79.*t141.*t170.*5.0,t52.*t129-t66.*t80.*t130.*t150+t30.*t66.*t80.*t129.*t164.*5.0,t53.*t131-t67.*t81.*t132.*t151+t30.*t67.*t81.*t131.*t165.*5.0,t54.*t133-t68.*t82.*t134.*t152+t30.*t68.*t82.*t133.*t166.*5.0,t55.*t135-t69.*t83.*t136.*t153+t30.*t69.*t83.*t135.*t167.*5.0];
mt2 = [t56.*t137-t70.*t84.*t138.*t154+t30.*t70.*t84.*t137.*t168.*5.0,t57.*t139-t71.*t85.*t140.*t155+t30.*t71.*t85.*t139.*t169.*5.0,t58.*t141-t72.*t86.*t142.*t156+t30.*t72.*t86.*t141.*t170.*5.0,t31.*t129,t32.*t131,t33.*t133,t34.*t135,t35.*t137,t36.*t139,t37.*t141,t38.*t129,t39.*t131,t40.*t133,t41.*t135,t42.*t137,t43.*t139,t44.*t141];
qx1 = reshape([mt1,mt2],7,4);
