function [h,q,dP] = CBFlfRobotsobs(in1,in2)
%CBFlfRobotsobs
%    [H,Q,dP] = CBFlfRobotsobs(IN1,IN2)

%    This function was generated by the Symbolic Math Toolbox version 9.1.
%    10-Jul-2022 22:30:22

b1 = in2(1,:);
b2 = in2(2,:);
b3 = in2(3,:);
b4 = in2(4,:);
u1 = in1(1,:);
u2 = in1(2,:);
u3 = in1(3,:);
u4 = in1(4,:);
u5 = in1(5,:);
u6 = in1(6,:);
u7 = in1(7,:);
u8 = in1(8,:);
u9 = in1(9,:);
u10 = in1(10,:);
u11 = in1(11,:);
u12 = in1(12,:);
u13 = in1(13,:);
u14 = in1(14,:);
u15 = in1(15,:);
u16 = in1(16,:);
t2 = -u1;
t3 = -u2;
t4 = -u3;
t5 = -u4;
t6 = -u5;
t7 = -u6;
t8 = -u7;
t9 = -u8;
t10 = -u11;
t11 = -u12;
t12 = -u13;
t13 = -u14;
t14 = -u15;
t15 = -u16;
t16 = sqrt(2.0);
t17 = sqrt(1.0e+1);
t18 = b1+t2;
t19 = b1+t4;
t20 = b2+t3;
t21 = b3+t2;
t22 = b1+t6;
t23 = b2+t5;
t24 = b3+t4;
t25 = b4+t3;
t26 = b1+t8;
t27 = b2+t7;
t28 = b3+t6;
t29 = b4+t5;
t30 = b2+t9;
t31 = b3+t8;
t32 = b4+t7;
t33 = b4+t9;
t34 = t4+u1;
t35 = t6+u1;
t36 = t5+u2;
t37 = t8+u1;
t38 = t7+u2;
t39 = t6+u3;
t40 = t9+u2;
t41 = t8+u3;
t42 = t7+u4;
t43 = t9+u4;
t44 = t8+u5;
t45 = t9+u6;
t46 = t10+u9;
t47 = t12+u9;
t48 = t11+u10;
t49 = t14+u9;
t50 = t13+u10;
t51 = t12+u11;
t52 = t15+u10;
t53 = t14+u11;
t54 = t13+u12;
t55 = t15+u12;
t56 = t14+u13;
t57 = t15+u14;
t58 = sign(t18);
t59 = sign(t19);
t60 = sign(t20);
t61 = sign(t21);
t62 = sign(t22);
t63 = sign(t23);
t64 = sign(t24);
t65 = sign(t25);
t66 = sign(t26);
t67 = sign(t27);
t68 = sign(t28);
t69 = sign(t29);
t70 = sign(t30);
t71 = sign(t31);
t72 = sign(t32);
t73 = sign(t33);
t74 = abs(t34);
t75 = abs(t35);
t76 = abs(t36);
t77 = abs(t37);
t78 = abs(t38);
t79 = abs(t39);
t80 = abs(t40);
t81 = abs(t41);
t82 = abs(t42);
t83 = abs(t43);
t84 = abs(t44);
t85 = abs(t45);
t86 = sign(t34);
t87 = sign(t35);
t88 = sign(t36);
t89 = sign(t37);
t90 = sign(t38);
t91 = sign(t39);
t92 = sign(t40);
t93 = sign(t41);
t94 = sign(t42);
t95 = sign(t43);
t96 = sign(t44);
t97 = sign(t45);
t98 = abs(t18);
t99 = abs(t19);
t100 = abs(t20);
t101 = abs(t21);
t102 = abs(t22);
t103 = abs(t23);
t104 = abs(t24);
t105 = abs(t25);
t106 = abs(t26);
t107 = abs(t27);
t108 = abs(t28);
t109 = abs(t29);
t110 = abs(t30);
t111 = abs(t31);
t112 = abs(t32);
t113 = abs(t33);
t114 = t38.^2;
t115 = t18.*u9;
t116 = t21.*u9;
t117 = t20.*u10;
t118 = t19.*u11;
t119 = t25.*u10;
t120 = t24.*u11;
t121 = t23.*u12;
t122 = t22.*u13;
t123 = t29.*u12;
t124 = t28.*u13;
t125 = t27.*u14;
t126 = t26.*u15;
t127 = t32.*u14;
t128 = t31.*u15;
t129 = t30.*u16;
t130 = t33.*u16;
t159 = t34.*t46;
t160 = t35.*t47;
t161 = t36.*t48;
t162 = t37.*t49;
t163 = t38.*t50;
t164 = t39.*t51;
t165 = t40.*t52;
t166 = t41.*t53;
t167 = t42.*t54;
t168 = t43.*t55;
t169 = t44.*t56;
t170 = t45.*t57;
t131 = t98.^2;
t132 = t99.^2;
t133 = t100.^2;
t134 = t101.^2;
t135 = t102.^2;
t136 = t103.^2;
t137 = t104.^2;
t138 = t105.^2;
t139 = t106.^2;
t140 = t107.^2;
t141 = t108.^2;
t142 = t109.^2;
t143 = t110.^2;
t144 = t111.^2;
t145 = t112.^2;
t146 = t113.^2;
t147 = t74.^2;
t148 = t75.^2;
t149 = t76.^2;
t150 = t77.^2;
t151 = t78.^2;
t152 = t79.^2;
t153 = t80.^2;
t154 = t81.^2;
t155 = t82.^2;
t156 = t83.^2;
t157 = t84.^2;
t158 = t85.^2;
t171 = t115+t117;
t172 = t116+t119;
t173 = t118+t121;
t174 = t120+t123;
t175 = t122+t125;
t176 = t124+t127;
t177 = t126+t129;
t178 = t128+t130;
t249 = t159+t161;
t250 = t160+t163;
t251 = t162+t165;
t252 = t164+t167;
t253 = t166+t168;
t254 = t169+t170;
t179 = t131+t133;
t180 = t132+t136;
t181 = t134+t138;
t182 = t135+t140;
t183 = t137+t142;
t184 = t139+t143;
t185 = t141+t145;
t186 = t144+t146;
t187 = t147+t149;
t188 = t148+t151;
t189 = t150+t153;
t190 = t152+t155;
t191 = t154+t156;
t192 = t157+t158;
t193 = sqrt(t179);
t194 = sqrt(t180);
t195 = sqrt(t181);
t196 = sqrt(t182);
t197 = sqrt(t183);
t198 = sqrt(t184);
t199 = sqrt(t185);
t200 = sqrt(t186);
t201 = sqrt(t187);
t202 = sqrt(t188);
t203 = sqrt(t189);
t204 = sqrt(t190);
t205 = sqrt(t191);
t206 = sqrt(t192);
t207 = 1.0./t193;
t209 = 1.0./t194;
t210 = 1.0./t195;
t213 = 1.0./t196;
t214 = 1.0./t197;
t217 = 1.0./t198;
t218 = 1.0./t199;
t221 = 1.0./t200;
t223 = 1.0./t201;
t225 = 1.0./t202;
t227 = 1.0./t203;
t228 = 1.0./t204;
t231 = 1.0./t205;
t233 = 1.0./t206;
t235 = t193.*1.0e+1;
t236 = t194.*1.0e+1;
t237 = t195.*1.0e+1;
t238 = t196.*1.0e+1;
t239 = t197.*1.0e+1;
t240 = t198.*1.0e+1;
t241 = t199.*1.0e+1;
t242 = t200.*1.0e+1;
t243 = t201-2.0;
t244 = t202-2.0;
t245 = t203-2.0;
t246 = t204-2.0;
t247 = t205-2.0;
t248 = t206-2.0;
t208 = t207.^3;
t211 = t209.^3;
t212 = t210.^3;
t215 = t213.^3;
t216 = t214.^3;
t219 = t217.^3;
t220 = t218.^3;
t222 = t221.^3;
t224 = t223.^3;
t226 = t225.^3;
t229 = t227.^3;
t230 = t228.^3;
t232 = t231.^3;
t234 = t233.^3;
t255 = t235-2.3e+1;
t256 = t236-2.3e+1;
t257 = t237-2.3e+1;
t258 = t238-2.3e+1;
t259 = t239-2.3e+1;
t260 = t240-2.3e+1;
t261 = t241-2.3e+1;
t262 = t242-2.3e+1;
t263 = 1.0./sqrt(t243);
t264 = 1.0./sqrt(t244);
t265 = 1.0./sqrt(t245);
t266 = 1.0./sqrt(t246);
t267 = 1.0./sqrt(t247);
t268 = 1.0./sqrt(t248);
t269 = t34.*t223;
t270 = t36.*t223;
t271 = t35.*t225;
t272 = t38.*t225;
t273 = t37.*t227;
t274 = t39.*t228;
t275 = t40.*t227;
t276 = t42.*t228;
t277 = t46.*t223;
t278 = t48.*t223;
t279 = t41.*t231;
t280 = t43.*t231;
t281 = t47.*t225;
t282 = t50.*t225;
t283 = t44.*t233;
t284 = t45.*t233;
t285 = t49.*t227;
t286 = t51.*t228;
t287 = t52.*t227;
t288 = t54.*t228;
t289 = t53.*t231;
t290 = t55.*t231;
t291 = t56.*t233;
t292 = t57.*t233;
t293 = 1.0./sqrt(t255);
t294 = 1.0./sqrt(t256);
t295 = 1.0./sqrt(t257);
t296 = 1.0./sqrt(t258);
t297 = 1.0./sqrt(t259);
t298 = 1.0./sqrt(t260);
t299 = 1.0./sqrt(t261);
t300 = 1.0./sqrt(t262);
h = [t223.*t249+(t17.*2.0)./t263;t225.*t250+(t17.*2.0)./t264;t227.*t251+(t17.*2.0)./t265;t228.*t252+(t17.*2.0)./t266;t231.*t253+(t17.*2.0)./t267;t233.*t254+(t17.*2.0)./t268;-t171.*t207+t16./t293;-t172.*t210+t16./t295;-t173.*t209+t16./t294;-t174.*t214+t16./t297;-t175.*t213+t16./t296;-t176.*t218+t16./t299;-t177.*t217+t16./t298;-t178.*t221+t16./t300];
if nargout > 1
    t301 = t74.*t86.*t224.*t249;
    t302 = t76.*t88.*t224.*t249;
    t303 = t75.*t87.*t226.*t250;
    t304 = t78.*t90.*t226.*t250;
    t305 = t77.*t89.*t229.*t251;
    t306 = t79.*t91.*t230.*t252;
    t307 = t80.*t92.*t229.*t251;
    t308 = t82.*t94.*t230.*t252;
    t309 = t81.*t93.*t232.*t253;
    t310 = t83.*t95.*t232.*t253;
    t311 = t84.*t96.*t234.*t254;
    t312 = t85.*t97.*t234.*t254;
    t313 = t17.*t74.*t86.*t223.*t263;
    t314 = t17.*t76.*t88.*t223.*t263;
    t315 = t17.*t75.*t87.*t225.*t264;
    t316 = t17.*t78.*t90.*t225.*t264;
    t317 = t17.*t77.*t89.*t227.*t265;
    t318 = t17.*t79.*t91.*t228.*t266;
    t319 = t17.*t80.*t92.*t227.*t265;
    t320 = t17.*t82.*t94.*t228.*t266;
    t321 = t17.*t81.*t93.*t231.*t267;
    t322 = t17.*t83.*t95.*t231.*t267;
    t323 = t17.*t84.*t96.*t233.*t268;
    t324 = t17.*t85.*t97.*t233.*t268;
    mt1 = [t277-t301+t313,t281-t303+t315,t285-t305+t317,0.0,0.0,0.0,t207.*u9-t58.*t98.*t171.*t208-t16.*t58.*t98.*t207.*t293.*5.0,t210.*u9-t61.*t101.*t172.*t212-t16.*t61.*t101.*t210.*t295.*5.0,0.0,0.0,0.0,0.0,0.0,0.0,t278-t302+t314,t282-t304+t316,t287-t307+t319,0.0,0.0,0.0,t207.*u10-t60.*t100.*t171.*t208-t16.*t60.*t100.*t207.*t293.*5.0,t210.*u10-t65.*t105.*t172.*t212-t16.*t65.*t105.*t210.*t295.*5.0,0.0,0.0,0.0,0.0,0.0,0.0,-t277+t301-t313,0.0,0.0,t286-t306+t318,t289-t309+t321,0.0,0.0,0.0,t209.*u11-t59.*t99.*t173.*t211-t16.*t59.*t99.*t209.*t294.*5.0];
    mt2 = [t214.*u11-t64.*t104.*t174.*t216-t16.*t64.*t104.*t214.*t297.*5.0,0.0,0.0,0.0,0.0,-t278+t302-t314,0.0,0.0,t288-t308+t320,t290-t310+t322,0.0,0.0,0.0,t209.*u12-t63.*t103.*t173.*t211-t16.*t63.*t103.*t209.*t294.*5.0,t214.*u12-t69.*t109.*t174.*t216-t16.*t69.*t109.*t214.*t297.*5.0,0.0,0.0,0.0,0.0,0.0,-t281+t303-t315,0.0,-t286+t306-t318,0.0,t291-t311+t323,0.0,0.0,0.0,0.0,t213.*u13-t62.*t102.*t175.*t215-t16.*t62.*t102.*t213.*t296.*5.0,t218.*u13-t68.*t108.*t176.*t220-t16.*t68.*t108.*t218.*t299.*5.0,0.0,0.0,0.0,-t282+t304-t316,0.0,-t288+t308-t320,0.0,t292-t312+t324,0.0,0.0];
    mt3 = [0.0,0.0,t213.*u14-t67.*t107.*t175.*t215-t16.*t67.*t107.*t213.*t296.*5.0,t218.*u14-t72.*t112.*t176.*t220-t16.*t72.*t112.*t218.*t299.*5.0,0.0,0.0,0.0,0.0,-t285+t305-t317,0.0,-t289+t309-t321,-t291+t311-t323,0.0,0.0,0.0,0.0,0.0,0.0,t217.*u15-t66.*t106.*t177.*t219-t16.*t66.*t106.*t217.*t298.*5.0,t221.*u15-t71.*t111.*t178.*t222-t16.*t71.*t111.*t221.*t300.*5.0,0.0,0.0,-t287+t307-t319,0.0,-t290+t310-t322,-t292+t312-t324,0.0,0.0,0.0,0.0,0.0,0.0,t217.*u16-t70.*t110.*t177.*t219-t16.*t70.*t110.*t217.*t298.*5.0,t221.*u16-t73.*t113.*t178.*t222-t16.*t73.*t113.*t221.*t300.*5.0,t269,t271,t273,0.0];
    mt4 = [0.0,0.0,-t18.*t207,-t21.*t210,0.0,0.0,0.0,0.0,0.0,0.0,t270,t272,t275,0.0,0.0,0.0,-t20.*t207,-t25.*t210,0.0,0.0,0.0,0.0,0.0,0.0,-t269,0.0,0.0,t274,t279,0.0,0.0,0.0,-t19.*t209,-t24.*t214,0.0,0.0,0.0,0.0,-t270,0.0,0.0,t276,t280,0.0,0.0,0.0,-t23.*t209,-t29.*t214,0.0,0.0,0.0,0.0,0.0,-t271,0.0,-t274,0.0,t283,0.0,0.0,0.0,0.0,-t22.*t213,-t28.*t218,0.0,0.0,0.0,-t272,0.0,-t276,0.0,t284,0.0,0.0,0.0,0.0,-t27.*t213,-t32.*t218,0.0,0.0,0.0,0.0,-t273,0.0,-t279,-t283,0.0,0.0,0.0,0.0,0.0,0.0,-t26.*t217,-t31.*t221,0.0,0.0,-t275,0.0,-t280,-t284,0.0,0.0,0.0,0.0,0.0,0.0];
    mt5 = [-t30.*t217,-t33.*t221];
    q = reshape([mt1,mt2,mt3,mt4,mt5],14,16);
end
if nargout > 2
    dP = [sqrt(t114+t34.^2);sqrt(t114+t35.^2);sqrt(t114+t37.^2);sqrt(t114+t39.^2);sqrt(t114+t41.^2);sqrt(t114+t44.^2)];
end