    function targMap = targDataMap(),

    ;%***********************
    ;% Create Parameter Map *
    ;%***********************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 1;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc paramMap
        ;%
        paramMap.nSections           = nTotSects;
        paramMap.sectIdxOffset       = sectIdxOffset;
            paramMap.sections(nTotSects) = dumSection; %prealloc
        paramMap.nTotData            = -1;

        ;%
        ;% Auto data (rtP)
        ;%
            section.nData     = 44;
            section.data(44)  = dumData; %prealloc

                    ;% rtP.PIDController_D
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.PIDController_D_e1feedjw5h
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.PIDController_D_pmnoqidxhh
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.PIDController_I
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.PIDController_I_mookvequop
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.PIDController_I_b1xhupkm44
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.PIDController_InitialConditionForFilter
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.PIDController_InitialConditionForFilter_de1ys3ahhh
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 7;

                    ;% rtP.PIDController_InitialConditionForFilter_fvwb31ti1d
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 8;

                    ;% rtP.PIDController_InitialConditionForIntegrator
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 9;

                    ;% rtP.PIDController_InitialConditionForIntegrator_labkggpuwp
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 10;

                    ;% rtP.PIDController_InitialConditionForIntegrator_lz4wascz0h
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 11;

                    ;% rtP.PIDController_N
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 12;

                    ;% rtP.PIDController_N_fjaeixuxyv
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 13;

                    ;% rtP.PIDController_N_by1f323fn4
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 14;

                    ;% rtP.PIDController_P
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 15;

                    ;% rtP.PIDController_P_ahca11nczu
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 16;

                    ;% rtP.PIDController_P_ksfq5ochcx
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 17;

                    ;% rtP.ConstraintEnforcement_c
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 18;

                    ;% rtP.Integrator_UpperSat
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 27;

                    ;% rtP.Integrator_LowerSat
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 28;

                    ;% rtP.Integrator_UpperSat_nzhvzzdcx2
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 29;

                    ;% rtP.Integrator_LowerSat_li4gnjpeq5
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 30;

                    ;% rtP.Integrator_UpperSat_lonuxufgp5
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 31;

                    ;% rtP.Integrator_LowerSat_np30azhqa2
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 32;

                    ;% rtP.Saturation_UpperSat
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 33;

                    ;% rtP.Saturation_LowerSat
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 34;

                    ;% rtP.Gain_Gain
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 35;

                    ;% rtP.Gain_Gain_kdekrvsba1
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 179;

                    ;% rtP.Gain1_Gain
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 180;

                    ;% rtP.Gain2_Gain
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 181;

                    ;% rtP.Constant_Value
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 182;

                    ;% rtP.umaxconstant_Value
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 183;

                    ;% rtP.uminconstant_Value
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 189;

                    ;% rtP.Constant_Value_e5cors3m1f
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 195;

                    ;% rtP.Ref_p1_Value
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 267;

                    ;% rtP.Ref_v1_Value
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 269;

                    ;% rtP.Ref_p1_Value_opouedc3dv
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 271;

                    ;% rtP.Ref_v1_Value_dovcbbjwsu
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 273;

                    ;% rtP.Ref_p1_Value_bmazuu21z2
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 275;

                    ;% rtP.Ref_v1_Value_gcvb1oqdbs
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 277;

                    ;% rtP.initialconditions_Value
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 279;

                    ;% rtP.initialconditions_Value_eczelweelu
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 283;

                    ;% rtP.initialconditions_Value_mwviqzbxqh
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 287;

            nTotData = nTotData + section.nData;
            paramMap.sections(1) = section;
            clear section


            ;%
            ;% Non-auto Data (parameter)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        paramMap.nTotData = nTotData;



    ;%**************************
    ;% Create Block Output Map *
    ;%**************************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 1;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc sigMap
        ;%
        sigMap.nSections           = nTotSects;
        sigMap.sectIdxOffset       = sectIdxOffset;
            sigMap.sections(nTotSects) = dumSection; %prealloc
        sigMap.nTotData            = -1;

        ;%
        ;% Auto data (rtB)
        ;%
            section.nData     = 48;
            section.data(48)  = dumData; %prealloc

                    ;% rtB.jv0m1srrja
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.b1rs1wlrjx
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 2;

                    ;% rtB.kmh4pywknr
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 4;

                    ;% rtB.f0qgskmy2i
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 6;

                    ;% rtB.msrgcxqeju
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 8;

                    ;% rtB.d22xigfax5
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 10;

                    ;% rtB.pyccux13oh
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 12;

                    ;% rtB.iclmzwxqs3
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 14;

                    ;% rtB.mhudpacpgy
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 16;

                    ;% rtB.m2yincydfk
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 20;

                    ;% rtB.kbcqb2x3yb
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 24;

                    ;% rtB.hhdwa0bhgm
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 28;

                    ;% rtB.h1kv0ninpj
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 32;

                    ;% rtB.ksirtn35v4
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 36;

                    ;% rtB.oqcs3qeeli
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 38;

                    ;% rtB.n1unafbpjc
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 40;

                    ;% rtB.fclztygbns
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 42;

                    ;% rtB.ktrk2zt5rh
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 46;

                    ;% rtB.jgom23aadi
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 50;

                    ;% rtB.muzj5q2qkv
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 54;

                    ;% rtB.gc45mejfib
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 58;

                    ;% rtB.nkbh0ad3dz
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 62;

                    ;% rtB.kgqxquypz3
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 64;

                    ;% rtB.prrur2jflh
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 66;

                    ;% rtB.iqoi20gpai
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 68;

                    ;% rtB.lfiv14p2kf
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 72;

                    ;% rtB.ae5dn11ynt
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 76;

                    ;% rtB.gni3bpus51
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 80;

                    ;% rtB.lmwzw5w0jv
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 84;

                    ;% rtB.d3aalpgobu
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 88;

                    ;% rtB.b0agtsqbh3
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 90;

                    ;% rtB.fz1yjtueq2
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 96;

                    ;% rtB.ob4rbqgfim
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 105;

                    ;% rtB.iooh3agbgu
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 159;

                    ;% rtB.lk0k5psk2m
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 163;

                    ;% rtB.hnyu344m25
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 167;

                    ;% rtB.atzbhuadkh
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 171;

                    ;% rtB.ofcujety0u
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 175;

                    ;% rtB.nwpwlpuzte
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 179;

                    ;% rtB.n1m2hbrqv1
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 183;

                    ;% rtB.hl0uuhzuvt
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 189;

                    ;% rtB.kfai1qmqc5
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 195;

                    ;% rtB.fu4mwqiown
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 197;

                    ;% rtB.dbfquspqdj
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 199;

                    ;% rtB.g5pwfmgg0q
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 211;

                    ;% rtB.fzf1y0c02y
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 223;

                    ;% rtB.iymit1x3xp
                    section.data(47).logicalSrcIdx = 46;
                    section.data(47).dtTransOffset = 227;

                    ;% rtB.iifrhx4cko
                    section.data(48).logicalSrcIdx = 47;
                    section.data(48).dtTransOffset = 233;

            nTotData = nTotData + section.nData;
            sigMap.sections(1) = section;
            clear section


            ;%
            ;% Non-auto Data (signal)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        sigMap.nTotData = nTotData;



    ;%*******************
    ;% Create DWork Map *
    ;%*******************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 2;
        sectIdxOffset = 1;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc dworkMap
        ;%
        dworkMap.nSections           = nTotSects;
        dworkMap.sectIdxOffset       = sectIdxOffset;
            dworkMap.sections(nTotSects) = dumSection; %prealloc
        dworkMap.nTotData            = -1;

        ;%
        ;% Auto data (rtDW)
        ;%
            section.nData     = 6;
            section.data(6)  = dumData; %prealloc

                    ;% rtDW.o3f4ljny23.LoggedData
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.brh5emq5l5.LoggedData
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.jnlmh15aax.LoggedData
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.lzglywoncm.LoggedData
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.no1ziyun1a.LoggedData
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.cy2vbl11rb.LoggedData
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 10;
            section.data(10)  = dumData; %prealloc

                    ;% rtDW.pywgroe530
                    section.data(1).logicalSrcIdx = 6;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.bp1r1xfrdc
                    section.data(2).logicalSrcIdx = 7;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.gc4n03nzfn
                    section.data(3).logicalSrcIdx = 8;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.acg1flwbux
                    section.data(4).logicalSrcIdx = 9;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.fnx2sqboij
                    section.data(5).logicalSrcIdx = 10;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.gvjxkecdgi
                    section.data(6).logicalSrcIdx = 11;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.buyrvmnubo
                    section.data(7).logicalSrcIdx = 12;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.frkr0zsk1e
                    section.data(8).logicalSrcIdx = 13;
                    section.data(8).dtTransOffset = 8;

                    ;% rtDW.pfob24qucz
                    section.data(9).logicalSrcIdx = 14;
                    section.data(9).dtTransOffset = 10;

                    ;% rtDW.acfsurjur3
                    section.data(10).logicalSrcIdx = 15;
                    section.data(10).dtTransOffset = 12;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section


            ;%
            ;% Non-auto Data (dwork)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        dworkMap.nTotData = nTotData;



    ;%
    ;% Add individual maps to base struct.
    ;%

    targMap.paramMap  = paramMap;
    targMap.signalMap = sigMap;
    targMap.dworkMap  = dworkMap;

    ;%
    ;% Add checksums to base struct.
    ;%


    targMap.checksum0 = 3056357310;
    targMap.checksum1 = 1959472067;
    targMap.checksum2 = 1379717648;
    targMap.checksum3 = 1374270084;

