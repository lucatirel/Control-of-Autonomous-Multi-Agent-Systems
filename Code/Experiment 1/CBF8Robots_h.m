function hx = CBF8Robots_h(in1)
%CBF8Robots_h
%    HX = CBF8Robots_h(IN1)

%    This function was generated by the Symbolic Math Toolbox version 9.1.
%    07-Jul-2022 15:51:11

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
t16 = -v3x;
t17 = -v4x;
t18 = -v5x;
t19 = -v6x;
t20 = -v7x;
t21 = -v8x;
t22 = -v3y;
t23 = -v4y;
t24 = -v5y;
t25 = -v6y;
t26 = -v7y;
t27 = -v8y;
t28 = sqrt(2.0);
t29 = p1x+t2;
t30 = p1x+t3;
t31 = p1x+t4;
t32 = p2x+t3;
t33 = p1x+t5;
t34 = p2x+t4;
t35 = p1x+t6;
t36 = p2x+t5;
t37 = p3x+t4;
t38 = p1x+t7;
t39 = p2x+t6;
t40 = p3x+t5;
t41 = p1x+t8;
t42 = p2x+t7;
t43 = p3x+t6;
t44 = p4x+t5;
t45 = p2x+t8;
t46 = p3x+t7;
t47 = p4x+t6;
t48 = p3x+t8;
t49 = p4x+t7;
t50 = p5x+t6;
t51 = p4x+t8;
t52 = p5x+t7;
t53 = p5x+t8;
t54 = p6x+t7;
t55 = p6x+t8;
t56 = p7x+t8;
t57 = p1y+t9;
t58 = p1y+t10;
t59 = p1y+t11;
t60 = p2y+t10;
t61 = p1y+t12;
t62 = p2y+t11;
t63 = p1y+t13;
t64 = p2y+t12;
t65 = p3y+t11;
t66 = p1y+t14;
t67 = p2y+t13;
t68 = p3y+t12;
t69 = p1y+t15;
t70 = p2y+t14;
t71 = p3y+t13;
t72 = p4y+t12;
t73 = p2y+t15;
t74 = p3y+t14;
t75 = p4y+t13;
t76 = p3y+t15;
t77 = p4y+t14;
t78 = p5y+t13;
t79 = p4y+t15;
t80 = p5y+t14;
t81 = p5y+t15;
t82 = p6y+t14;
t83 = p6y+t15;
t84 = p7y+t15;
t85 = abs(t29);
t86 = abs(t30);
t87 = abs(t31);
t88 = abs(t32);
t89 = abs(t33);
t90 = abs(t34);
t91 = abs(t35);
t92 = abs(t36);
t93 = abs(t37);
t94 = abs(t38);
t95 = abs(t39);
t96 = abs(t40);
t97 = abs(t41);
t98 = abs(t42);
t99 = abs(t43);
t100 = abs(t44);
t101 = abs(t45);
t102 = abs(t46);
t103 = abs(t47);
t104 = abs(t48);
t105 = abs(t49);
t106 = abs(t50);
t107 = abs(t51);
t108 = abs(t52);
t109 = abs(t53);
t110 = abs(t54);
t111 = abs(t55);
t112 = abs(t56);
t113 = abs(t57);
t114 = abs(t58);
t115 = abs(t59);
t116 = abs(t60);
t117 = abs(t61);
t118 = abs(t62);
t119 = abs(t63);
t120 = abs(t64);
t121 = abs(t65);
t122 = abs(t66);
t123 = abs(t67);
t124 = abs(t68);
t125 = abs(t69);
t126 = abs(t70);
t127 = abs(t71);
t128 = abs(t72);
t129 = abs(t73);
t130 = abs(t74);
t131 = abs(t75);
t132 = abs(t76);
t133 = abs(t77);
t134 = abs(t78);
t135 = abs(t79);
t136 = abs(t80);
t137 = abs(t81);
t138 = abs(t82);
t139 = abs(t83);
t140 = abs(t84);
t141 = t85.^2;
t142 = t86.^2;
t143 = t87.^2;
t144 = t88.^2;
t145 = t89.^2;
t146 = t90.^2;
t147 = t91.^2;
t148 = t92.^2;
t149 = t93.^2;
t150 = t94.^2;
t151 = t95.^2;
t152 = t96.^2;
t153 = t97.^2;
t154 = t98.^2;
t155 = t99.^2;
t156 = t100.^2;
t157 = t101.^2;
t158 = t102.^2;
t159 = t103.^2;
t160 = t104.^2;
t161 = t105.^2;
t162 = t106.^2;
t163 = t107.^2;
t164 = t108.^2;
t165 = t109.^2;
t166 = t110.^2;
t167 = t111.^2;
t168 = t112.^2;
t169 = t113.^2;
t170 = t114.^2;
t171 = t115.^2;
t172 = t116.^2;
t173 = t117.^2;
t174 = t118.^2;
t175 = t119.^2;
t176 = t120.^2;
t177 = t121.^2;
t178 = t122.^2;
t179 = t123.^2;
t180 = t124.^2;
t181 = t125.^2;
t182 = t126.^2;
t183 = t127.^2;
t184 = t128.^2;
t185 = t129.^2;
t186 = t130.^2;
t187 = t131.^2;
t188 = t132.^2;
t189 = t133.^2;
t190 = t134.^2;
t191 = t135.^2;
t192 = t136.^2;
t193 = t137.^2;
t194 = t138.^2;
t195 = t139.^2;
t196 = t140.^2;
t197 = t141+t169;
t198 = t142+t170;
t199 = t143+t171;
t200 = t144+t172;
t201 = t145+t173;
t202 = t146+t174;
t203 = t147+t175;
t204 = t148+t176;
t205 = t149+t177;
t206 = t150+t178;
t207 = t151+t179;
t208 = t152+t180;
t209 = t153+t181;
t210 = t154+t182;
t211 = t155+t183;
t212 = t156+t184;
t213 = t157+t185;
t214 = t158+t186;
t215 = t159+t187;
t216 = t160+t188;
t217 = t161+t189;
t218 = t162+t190;
t219 = t163+t191;
t220 = t164+t192;
t221 = t165+t193;
t222 = t166+t194;
t223 = t167+t195;
t224 = t168+t196;
mt1 = [1.0./sqrt(t197).*(t29.*(v1x-v2x)+t57.*(v1y-v2y))+t28.*sqrt(sqrt(t197).*5.0-3.0).*2.0;t28.*sqrt(sqrt(t198).*5.0-3.0).*2.0+1.0./sqrt(t198).*(t30.*(t16+v1x)+t58.*(t22+v1y));t28.*sqrt(sqrt(t199).*5.0-3.0).*2.0+1.0./sqrt(t199).*(t31.*(t17+v1x)+t59.*(t23+v1y));t28.*sqrt(sqrt(t201).*5.0-3.0).*2.0+1.0./sqrt(t201).*(t33.*(t18+v1x)+t61.*(t24+v1y));t28.*sqrt(sqrt(t203).*5.0-3.0).*2.0+1.0./sqrt(t203).*(t35.*(t19+v1x)+t63.*(t25+v1y))];
mt2 = [t28.*sqrt(sqrt(t206).*5.0-3.0).*2.0+1.0./sqrt(t206).*(t38.*(t20+v1x)+t66.*(t26+v1y));t28.*sqrt(sqrt(t209).*5.0-3.0).*2.0+1.0./sqrt(t209).*(t41.*(t21+v1x)+t69.*(t27+v1y));t28.*sqrt(sqrt(t200).*5.0-3.0).*2.0+1.0./sqrt(t200).*(t32.*(t16+v2x)+t60.*(t22+v2y));t28.*sqrt(sqrt(t202).*5.0-3.0).*2.0+1.0./sqrt(t202).*(t34.*(t17+v2x)+t62.*(t23+v2y));t28.*sqrt(sqrt(t204).*5.0-3.0).*2.0+1.0./sqrt(t204).*(t36.*(t18+v2x)+t64.*(t24+v2y))];
mt3 = [t28.*sqrt(sqrt(t207).*5.0-3.0).*2.0+1.0./sqrt(t207).*(t39.*(t19+v2x)+t67.*(t25+v2y));t28.*sqrt(sqrt(t210).*5.0-3.0).*2.0+1.0./sqrt(t210).*(t42.*(t20+v2x)+t70.*(t26+v2y));t28.*sqrt(sqrt(t213).*5.0-3.0).*2.0+1.0./sqrt(t213).*(t45.*(t21+v2x)+t73.*(t27+v2y));t28.*sqrt(sqrt(t205).*5.0-3.0).*2.0+1.0./sqrt(t205).*(t37.*(t17+v3x)+t65.*(t23+v3y));t28.*sqrt(sqrt(t208).*5.0-3.0).*2.0+1.0./sqrt(t208).*(t40.*(t18+v3x)+t68.*(t24+v3y))];
mt4 = [t28.*sqrt(sqrt(t211).*5.0-3.0).*2.0+1.0./sqrt(t211).*(t43.*(t19+v3x)+t71.*(t25+v3y));t28.*sqrt(sqrt(t214).*5.0-3.0).*2.0+1.0./sqrt(t214).*(t46.*(t20+v3x)+t74.*(t26+v3y));t28.*sqrt(sqrt(t216).*5.0-3.0).*2.0+1.0./sqrt(t216).*(t48.*(t21+v3x)+t76.*(t27+v3y));t28.*sqrt(sqrt(t212).*5.0-3.0).*2.0+1.0./sqrt(t212).*(t44.*(t18+v4x)+t72.*(t24+v4y));t28.*sqrt(sqrt(t215).*5.0-3.0).*2.0+1.0./sqrt(t215).*(t47.*(t19+v4x)+t75.*(t25+v4y))];
mt5 = [t28.*sqrt(sqrt(t217).*5.0-3.0).*2.0+1.0./sqrt(t217).*(t49.*(t20+v4x)+t77.*(t26+v4y));t28.*sqrt(sqrt(t219).*5.0-3.0).*2.0+1.0./sqrt(t219).*(t51.*(t21+v4x)+t79.*(t27+v4y));t28.*sqrt(sqrt(t218).*5.0-3.0).*2.0+1.0./sqrt(t218).*(t50.*(t19+v5x)+t78.*(t25+v5y));t28.*sqrt(sqrt(t220).*5.0-3.0).*2.0+1.0./sqrt(t220).*(t52.*(t20+v5x)+t80.*(t26+v5y));t28.*sqrt(sqrt(t221).*5.0-3.0).*2.0+1.0./sqrt(t221).*(t53.*(t21+v5x)+t81.*(t27+v5y))];
mt6 = [t28.*sqrt(sqrt(t222).*5.0-3.0).*2.0+1.0./sqrt(t222).*(t54.*(t20+v6x)+t82.*(t26+v6y));t28.*sqrt(sqrt(t223).*5.0-3.0).*2.0+1.0./sqrt(t223).*(t55.*(t21+v6x)+t83.*(t27+v6y));t28.*sqrt(sqrt(t224).*5.0-3.0).*2.0+1.0./sqrt(t224).*(t56.*(t21+v7x)+t84.*(t27+v7y))];
hx = [mt1;mt2;mt3;mt4;mt5;mt6];
