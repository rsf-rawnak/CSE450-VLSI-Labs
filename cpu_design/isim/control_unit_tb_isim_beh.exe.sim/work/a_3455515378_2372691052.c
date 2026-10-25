/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ise/computer/Rawnak/cpu_design/control_unit_tb.vhd";



static void work_a_3455515378_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int64 t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    unsigned char t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 2664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 5000);
    t4 = (t0 + 3048);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(25, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2472);
    xsi_process_wait(t2, t9);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t11 = *((unsigned char *)t3);
    t12 = (t11 == (unsigned char)2);
    if (t12 == 1)
        goto LAB10;

LAB11:    t10 = (unsigned char)0;

LAB12:    if (t10 == 0)
        goto LAB8;

LAB9:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 5013);
    t4 = (t0 + 3048);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(28, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2472);
    xsi_process_wait(t2, t9);

LAB15:    *((char **)t1) = &&LAB16;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    t2 = (t0 + 5004);
    xsi_report(t2, 9U, (unsigned char)2);
    goto LAB9;

LAB10:    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)2);
    t10 = t14;
    goto LAB12;

LAB13:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t11 = *((unsigned char *)t3);
    t12 = (t11 == (unsigned char)3);
    if (t12 == 1)
        goto LAB19;

LAB20:    t10 = (unsigned char)0;

LAB21:    if (t10 == 0)
        goto LAB17;

LAB18:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 5026);
    t4 = (t0 + 3048);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(32, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2472);
    xsi_process_wait(t2, t9);

LAB24:    *((char **)t1) = &&LAB25;
    goto LAB1;

LAB14:    goto LAB13;

LAB16:    goto LAB14;

LAB17:    t2 = (t0 + 5017);
    xsi_report(t2, 9U, (unsigned char)2);
    goto LAB18;

LAB19:    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)3);
    t10 = t14;
    goto LAB21;

LAB22:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t12 = *((unsigned char *)t3);
    t13 = (t12 == (unsigned char)2);
    if (t13 == 1)
        goto LAB31;

LAB32:    t11 = (unsigned char)0;

LAB33:    if (t11 == 1)
        goto LAB28;

LAB29:    t10 = (unsigned char)0;

LAB30:    if (t10 == 0)
        goto LAB26;

LAB27:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 5041);
    t4 = (t0 + 3048);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(35, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2472);
    xsi_process_wait(t2, t9);

LAB42:    *((char **)t1) = &&LAB43;
    goto LAB1;

LAB23:    goto LAB22;

LAB25:    goto LAB23;

LAB26:    t18 = (t0 + 5032);
    xsi_report(t18, 9U, (unsigned char)2);
    goto LAB27;

LAB28:    t2 = (t0 + 1352U);
    t5 = *((char **)t2);
    t2 = (t0 + 5030);
    t16 = 1;
    if (2U == 2U)
        goto LAB34;

LAB35:    t16 = 0;

LAB36:    t10 = t16;
    goto LAB30;

LAB31:    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t14 = *((unsigned char *)t4);
    t15 = (t14 == (unsigned char)3);
    t11 = t15;
    goto LAB33;

LAB34:    t17 = 0;

LAB37:    if (t17 < 2U)
        goto LAB38;
    else
        goto LAB36;

LAB38:    t7 = (t5 + t17);
    t8 = (t2 + t17);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB35;

LAB39:    t17 = (t17 + 1);
    goto LAB37;

LAB40:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t12 = *((unsigned char *)t3);
    t13 = (t12 == (unsigned char)2);
    if (t13 == 1)
        goto LAB49;

LAB50:    t11 = (unsigned char)0;

LAB51:    if (t11 == 1)
        goto LAB46;

LAB47:    t10 = (unsigned char)0;

LAB48:    if (t10 == 0)
        goto LAB44;

LAB45:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 5056);
    t4 = (t0 + 3048);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(39, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2472);
    xsi_process_wait(t2, t9);

LAB60:    *((char **)t1) = &&LAB61;
    goto LAB1;

LAB41:    goto LAB40;

LAB43:    goto LAB41;

LAB44:    t18 = (t0 + 5047);
    xsi_report(t18, 9U, (unsigned char)2);
    goto LAB45;

LAB46:    t2 = (t0 + 1352U);
    t5 = *((char **)t2);
    t2 = (t0 + 5045);
    t16 = 1;
    if (2U == 2U)
        goto LAB52;

LAB53:    t16 = 0;

LAB54:    t10 = t16;
    goto LAB48;

LAB49:    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t14 = *((unsigned char *)t4);
    t15 = (t14 == (unsigned char)3);
    t11 = t15;
    goto LAB51;

LAB52:    t17 = 0;

LAB55:    if (t17 < 2U)
        goto LAB56;
    else
        goto LAB54;

LAB56:    t7 = (t5 + t17);
    t8 = (t2 + t17);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB53;

LAB57:    t17 = (t17 + 1);
    goto LAB55;

LAB58:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t12 = *((unsigned char *)t3);
    t13 = (t12 == (unsigned char)2);
    if (t13 == 1)
        goto LAB67;

LAB68:    t11 = (unsigned char)0;

LAB69:    if (t11 == 1)
        goto LAB64;

LAB65:    t10 = (unsigned char)0;

LAB66:    if (t10 == 0)
        goto LAB62;

LAB63:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 5071);
    t4 = (t0 + 3048);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(42, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2472);
    xsi_process_wait(t2, t9);

LAB78:    *((char **)t1) = &&LAB79;
    goto LAB1;

LAB59:    goto LAB58;

LAB61:    goto LAB59;

LAB62:    t18 = (t0 + 5062);
    xsi_report(t18, 9U, (unsigned char)2);
    goto LAB63;

LAB64:    t2 = (t0 + 1352U);
    t5 = *((char **)t2);
    t2 = (t0 + 5060);
    t16 = 1;
    if (2U == 2U)
        goto LAB70;

LAB71:    t16 = 0;

LAB72:    t10 = t16;
    goto LAB66;

LAB67:    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t14 = *((unsigned char *)t4);
    t15 = (t14 == (unsigned char)3);
    t11 = t15;
    goto LAB69;

LAB70:    t17 = 0;

LAB73:    if (t17 < 2U)
        goto LAB74;
    else
        goto LAB72;

LAB74:    t7 = (t5 + t17);
    t8 = (t2 + t17);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB71;

LAB75:    t17 = (t17 + 1);
    goto LAB73;

LAB76:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t12 = *((unsigned char *)t3);
    t13 = (t12 == (unsigned char)2);
    if (t13 == 1)
        goto LAB85;

LAB86:    t11 = (unsigned char)0;

LAB87:    if (t11 == 1)
        goto LAB82;

LAB83:    t10 = (unsigned char)0;

LAB84:    if (t10 == 0)
        goto LAB80;

LAB81:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 5086);
    t4 = (t0 + 3048);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(45, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2472);
    xsi_process_wait(t2, t9);

LAB96:    *((char **)t1) = &&LAB97;
    goto LAB1;

LAB77:    goto LAB76;

LAB79:    goto LAB77;

LAB80:    t18 = (t0 + 5077);
    xsi_report(t18, 9U, (unsigned char)2);
    goto LAB81;

LAB82:    t2 = (t0 + 1352U);
    t5 = *((char **)t2);
    t2 = (t0 + 5075);
    t16 = 1;
    if (2U == 2U)
        goto LAB88;

LAB89:    t16 = 0;

LAB90:    t10 = t16;
    goto LAB84;

LAB85:    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t14 = *((unsigned char *)t4);
    t15 = (t14 == (unsigned char)3);
    t11 = t15;
    goto LAB87;

LAB88:    t17 = 0;

LAB91:    if (t17 < 2U)
        goto LAB92;
    else
        goto LAB90;

LAB92:    t7 = (t5 + t17);
    t8 = (t2 + t17);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB89;

LAB93:    t17 = (t17 + 1);
    goto LAB91;

LAB94:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t11 = *((unsigned char *)t3);
    t12 = (t11 == (unsigned char)2);
    if (t12 == 1)
        goto LAB100;

LAB101:    t10 = (unsigned char)0;

LAB102:    if (t10 == 0)
        goto LAB98;

LAB99:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 5113);
    t4 = (t0 + 3048);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(47, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2472);
    xsi_process_wait(t2, t9);

LAB105:    *((char **)t1) = &&LAB106;
    goto LAB1;

LAB95:    goto LAB94;

LAB97:    goto LAB95;

LAB98:    t2 = (t0 + 5090);
    xsi_report(t2, 23U, (unsigned char)2);
    goto LAB99;

LAB100:    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)2);
    t10 = t14;
    goto LAB102;

LAB103:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t11 = *((unsigned char *)t3);
    t12 = (t11 == (unsigned char)2);
    if (t12 == 1)
        goto LAB109;

LAB110:    t10 = (unsigned char)0;

LAB111:    if (t10 == 0)
        goto LAB107;

LAB108:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 5139);
    t4 = (t0 + 3048);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(49, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2472);
    xsi_process_wait(t2, t9);

LAB114:    *((char **)t1) = &&LAB115;
    goto LAB1;

LAB104:    goto LAB103;

LAB106:    goto LAB104;

LAB107:    t2 = (t0 + 5117);
    xsi_report(t2, 22U, (unsigned char)2);
    goto LAB108;

LAB109:    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)2);
    t10 = t14;
    goto LAB111;

LAB112:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t11 = *((unsigned char *)t3);
    t12 = (t11 == (unsigned char)2);
    if (t12 == 1)
        goto LAB118;

LAB119:    t10 = (unsigned char)0;

LAB120:    if (t10 == 0)
        goto LAB116;

LAB117:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 5166);
    t4 = (t0 + 3048);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(51, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2472);
    xsi_process_wait(t2, t9);

LAB123:    *((char **)t1) = &&LAB124;
    goto LAB1;

LAB113:    goto LAB112;

LAB115:    goto LAB113;

LAB116:    t2 = (t0 + 5143);
    xsi_report(t2, 23U, (unsigned char)2);
    goto LAB117;

LAB118:    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)2);
    t10 = t14;
    goto LAB120;

LAB121:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t11 = *((unsigned char *)t3);
    t12 = (t11 == (unsigned char)2);
    if (t12 == 1)
        goto LAB127;

LAB128:    t10 = (unsigned char)0;

LAB129:    if (t10 == 0)
        goto LAB125;

LAB126:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 5193);
    t4 = (t0 + 3048);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(53, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2472);
    xsi_process_wait(t2, t9);

LAB132:    *((char **)t1) = &&LAB133;
    goto LAB1;

LAB122:    goto LAB121;

LAB124:    goto LAB122;

LAB125:    t2 = (t0 + 5170);
    xsi_report(t2, 23U, (unsigned char)2);
    goto LAB126;

LAB127:    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)2);
    t10 = t14;
    goto LAB129;

LAB130:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t11 = *((unsigned char *)t3);
    t12 = (t11 == (unsigned char)2);
    if (t12 == 1)
        goto LAB136;

LAB137:    t10 = (unsigned char)0;

LAB138:    if (t10 == 0)
        goto LAB134;

LAB135:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 5220);
    t4 = (t0 + 3048);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(55, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2472);
    xsi_process_wait(t2, t9);

LAB141:    *((char **)t1) = &&LAB142;
    goto LAB1;

LAB131:    goto LAB130;

LAB133:    goto LAB131;

LAB134:    t2 = (t0 + 5197);
    xsi_report(t2, 23U, (unsigned char)2);
    goto LAB135;

LAB136:    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)2);
    t10 = t14;
    goto LAB138;

LAB139:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t11 = *((unsigned char *)t3);
    t12 = (t11 == (unsigned char)2);
    if (t12 == 1)
        goto LAB145;

LAB146:    t10 = (unsigned char)0;

LAB147:    if (t10 == 0)
        goto LAB143;

LAB144:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 5247);
    t4 = (t0 + 3048);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(57, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2472);
    xsi_process_wait(t2, t9);

LAB150:    *((char **)t1) = &&LAB151;
    goto LAB1;

LAB140:    goto LAB139;

LAB142:    goto LAB140;

LAB143:    t2 = (t0 + 5224);
    xsi_report(t2, 23U, (unsigned char)2);
    goto LAB144;

LAB145:    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)2);
    t10 = t14;
    goto LAB147;

LAB148:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t11 = *((unsigned char *)t3);
    t12 = (t11 == (unsigned char)2);
    if (t12 == 1)
        goto LAB154;

LAB155:    t10 = (unsigned char)0;

LAB156:    if (t10 == 0)
        goto LAB152;

LAB153:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 5273);
    xsi_report(t2, 33U, (unsigned char)0);
    xsi_set_current_line(60, ng0);

LAB159:    *((char **)t1) = &&LAB160;
    goto LAB1;

LAB149:    goto LAB148;

LAB151:    goto LAB149;

LAB152:    t2 = (t0 + 5251);
    xsi_report(t2, 22U, (unsigned char)2);
    goto LAB153;

LAB154:    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)2);
    t10 = t14;
    goto LAB156;

LAB157:    goto LAB2;

LAB158:    goto LAB157;

LAB160:    goto LAB158;

}


extern void work_a_3455515378_2372691052_init()
{
	static char *pe[] = {(void *)work_a_3455515378_2372691052_p_0};
	xsi_register_didat("work_a_3455515378_2372691052", "isim/control_unit_tb_isim_beh.exe.sim/work/a_3455515378_2372691052.didat");
	xsi_register_executes(pe);
}
