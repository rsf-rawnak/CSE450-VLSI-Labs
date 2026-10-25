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
static const char *ng0 = "/home/ise/computer/Rawnak/cpu_design/cpu_top_tb.vhd";



static void work_a_2208116761_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 2944U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 3576);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1968U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 2752);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 3576);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1968U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 2752);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_2208116761_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    unsigned char t8;
    unsigned char t9;
    unsigned char t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned char t14;
    unsigned char t15;
    char *t16;
    unsigned char t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    t1 = (t0 + 3192U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 3640);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1968U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t2 = (t0 + 3000);
    xsi_process_wait(t2, t7);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(50, ng0);
    t7 = (1 * 1000LL);
    t2 = (t0 + 3000);
    xsi_process_wait(t2, t7);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 5720);
    t10 = 1;
    if (8U == 8U)
        goto LAB20;

LAB21:    t10 = 0;

LAB22:    if (t10 == 1)
        goto LAB17;

LAB18:    t9 = (unsigned char)0;

LAB19:    if (t9 == 1)
        goto LAB14;

LAB15:    t8 = (unsigned char)0;

LAB16:    if (t8 == 0)
        goto LAB12;

LAB13:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 3640);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1968U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t2 = (t0 + 3000);
    xsi_process_wait(t2, t7);

LAB34:    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    t22 = (t0 + 5732);
    xsi_report(t22, 17U, (unsigned char)2);
    goto LAB13;

LAB14:    t12 = (t0 + 1672U);
    t16 = *((char **)t12);
    t12 = (t0 + 5728);
    t18 = 1;
    if (4U == 4U)
        goto LAB26;

LAB27:    t18 = 0;

LAB28:    t8 = t18;
    goto LAB16;

LAB17:    t12 = (t0 + 1512U);
    t13 = *((char **)t12);
    t14 = *((unsigned char *)t13);
    t15 = (t14 == (unsigned char)3);
    t9 = t15;
    goto LAB19;

LAB20:    t11 = 0;

LAB23:    if (t11 < 8U)
        goto LAB24;
    else
        goto LAB22;

LAB24:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB21;

LAB25:    t11 = (t11 + 1);
    goto LAB23;

LAB26:    t19 = 0;

LAB29:    if (t19 < 4U)
        goto LAB30;
    else
        goto LAB28;

LAB30:    t20 = (t16 + t19);
    t21 = (t12 + t19);
    if (*((unsigned char *)t20) != *((unsigned char *)t21))
        goto LAB27;

LAB31:    t19 = (t19 + 1);
    goto LAB29;

LAB32:    xsi_set_current_line(53, ng0);
    t7 = (1 * 1000LL);
    t2 = (t0 + 3000);
    xsi_process_wait(t2, t7);

LAB38:    *((char **)t1) = &&LAB39;
    goto LAB1;

LAB33:    goto LAB32;

LAB35:    goto LAB33;

LAB36:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 5749);
    t10 = 1;
    if (8U == 8U)
        goto LAB48;

LAB49:    t10 = 0;

LAB50:    if (t10 == 1)
        goto LAB45;

LAB46:    t9 = (unsigned char)0;

LAB47:    if (t9 == 1)
        goto LAB42;

LAB43:    t8 = (unsigned char)0;

LAB44:    if (t8 == 0)
        goto LAB40;

LAB41:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1968U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t2 = (t0 + 3000);
    xsi_process_wait(t2, t7);

LAB62:    *((char **)t1) = &&LAB63;
    goto LAB1;

LAB37:    goto LAB36;

LAB39:    goto LAB37;

LAB40:    t22 = (t0 + 5761);
    xsi_report(t22, 12U, (unsigned char)2);
    goto LAB41;

LAB42:    t12 = (t0 + 1672U);
    t16 = *((char **)t12);
    t12 = (t0 + 5757);
    t18 = 1;
    if (4U == 4U)
        goto LAB54;

LAB55:    t18 = 0;

LAB56:    t8 = t18;
    goto LAB44;

LAB45:    t12 = (t0 + 1512U);
    t13 = *((char **)t12);
    t14 = *((unsigned char *)t13);
    t15 = (t14 == (unsigned char)2);
    t9 = t15;
    goto LAB47;

LAB48:    t11 = 0;

LAB51:    if (t11 < 8U)
        goto LAB52;
    else
        goto LAB50;

LAB52:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB49;

LAB53:    t11 = (t11 + 1);
    goto LAB51;

LAB54:    t19 = 0;

LAB57:    if (t19 < 4U)
        goto LAB58;
    else
        goto LAB56;

LAB58:    t20 = (t16 + t19);
    t21 = (t12 + t19);
    if (*((unsigned char *)t20) != *((unsigned char *)t21))
        goto LAB55;

LAB59:    t19 = (t19 + 1);
    goto LAB57;

LAB60:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 5773);
    t10 = 1;
    if (8U == 8U)
        goto LAB72;

LAB73:    t10 = 0;

LAB74:    if (t10 == 1)
        goto LAB69;

LAB70:    t9 = (unsigned char)0;

LAB71:    if (t9 == 1)
        goto LAB66;

LAB67:    t8 = (unsigned char)0;

LAB68:    if (t8 == 0)
        goto LAB64;

LAB65:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1968U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t2 = (t0 + 3000);
    xsi_process_wait(t2, t7);

LAB86:    *((char **)t1) = &&LAB87;
    goto LAB1;

LAB61:    goto LAB60;

LAB63:    goto LAB61;

LAB64:    t22 = (t0 + 5785);
    xsi_report(t22, 18U, (unsigned char)2);
    goto LAB65;

LAB66:    t12 = (t0 + 1672U);
    t16 = *((char **)t12);
    t12 = (t0 + 5781);
    t18 = 1;
    if (4U == 4U)
        goto LAB78;

LAB79:    t18 = 0;

LAB80:    t8 = t18;
    goto LAB68;

LAB69:    t12 = (t0 + 1512U);
    t13 = *((char **)t12);
    t14 = *((unsigned char *)t13);
    t15 = (t14 == (unsigned char)2);
    t9 = t15;
    goto LAB71;

LAB72:    t11 = 0;

LAB75:    if (t11 < 8U)
        goto LAB76;
    else
        goto LAB74;

LAB76:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB73;

LAB77:    t11 = (t11 + 1);
    goto LAB75;

LAB78:    t19 = 0;

LAB81:    if (t19 < 4U)
        goto LAB82;
    else
        goto LAB80;

LAB82:    t20 = (t16 + t19);
    t21 = (t12 + t19);
    if (*((unsigned char *)t20) != *((unsigned char *)t21))
        goto LAB79;

LAB83:    t19 = (t19 + 1);
    goto LAB81;

LAB84:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 5803);
    t10 = 1;
    if (8U == 8U)
        goto LAB96;

LAB97:    t10 = 0;

LAB98:    if (t10 == 1)
        goto LAB93;

LAB94:    t9 = (unsigned char)0;

LAB95:    if (t9 == 1)
        goto LAB90;

LAB91:    t8 = (unsigned char)0;

LAB92:    if (t8 == 0)
        goto LAB88;

LAB89:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1968U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t2 = (t0 + 3000);
    xsi_process_wait(t2, t7);

LAB110:    *((char **)t1) = &&LAB111;
    goto LAB1;

LAB85:    goto LAB84;

LAB87:    goto LAB85;

LAB88:    t22 = (t0 + 5815);
    xsi_report(t22, 12U, (unsigned char)2);
    goto LAB89;

LAB90:    t12 = (t0 + 1672U);
    t16 = *((char **)t12);
    t12 = (t0 + 5811);
    t18 = 1;
    if (4U == 4U)
        goto LAB102;

LAB103:    t18 = 0;

LAB104:    t8 = t18;
    goto LAB92;

LAB93:    t12 = (t0 + 1512U);
    t13 = *((char **)t12);
    t14 = *((unsigned char *)t13);
    t15 = (t14 == (unsigned char)2);
    t9 = t15;
    goto LAB95;

LAB96:    t11 = 0;

LAB99:    if (t11 < 8U)
        goto LAB100;
    else
        goto LAB98;

LAB100:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB97;

LAB101:    t11 = (t11 + 1);
    goto LAB99;

LAB102:    t19 = 0;

LAB105:    if (t19 < 4U)
        goto LAB106;
    else
        goto LAB104;

LAB106:    t20 = (t16 + t19);
    t21 = (t12 + t19);
    if (*((unsigned char *)t20) != *((unsigned char *)t21))
        goto LAB103;

LAB107:    t19 = (t19 + 1);
    goto LAB105;

LAB108:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 5827);
    t10 = 1;
    if (8U == 8U)
        goto LAB120;

LAB121:    t10 = 0;

LAB122:    if (t10 == 1)
        goto LAB117;

LAB118:    t9 = (unsigned char)0;

LAB119:    if (t9 == 1)
        goto LAB114;

LAB115:    t8 = (unsigned char)0;

LAB116:    if (t8 == 0)
        goto LAB112;

LAB113:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1968U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t2 = (t0 + 3000);
    xsi_process_wait(t2, t7);

LAB134:    *((char **)t1) = &&LAB135;
    goto LAB1;

LAB109:    goto LAB108;

LAB111:    goto LAB109;

LAB112:    t22 = (t0 + 5839);
    xsi_report(t22, 12U, (unsigned char)2);
    goto LAB113;

LAB114:    t12 = (t0 + 1672U);
    t16 = *((char **)t12);
    t12 = (t0 + 5835);
    t18 = 1;
    if (4U == 4U)
        goto LAB126;

LAB127:    t18 = 0;

LAB128:    t8 = t18;
    goto LAB116;

LAB117:    t12 = (t0 + 1512U);
    t13 = *((char **)t12);
    t14 = *((unsigned char *)t13);
    t15 = (t14 == (unsigned char)2);
    t9 = t15;
    goto LAB119;

LAB120:    t11 = 0;

LAB123:    if (t11 < 8U)
        goto LAB124;
    else
        goto LAB122;

LAB124:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB121;

LAB125:    t11 = (t11 + 1);
    goto LAB123;

LAB126:    t19 = 0;

LAB129:    if (t19 < 4U)
        goto LAB130;
    else
        goto LAB128;

LAB130:    t20 = (t16 + t19);
    t21 = (t12 + t19);
    if (*((unsigned char *)t20) != *((unsigned char *)t21))
        goto LAB127;

LAB131:    t19 = (t19 + 1);
    goto LAB129;

LAB132:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 5851);
    t10 = 1;
    if (8U == 8U)
        goto LAB144;

LAB145:    t10 = 0;

LAB146:    if (t10 == 1)
        goto LAB141;

LAB142:    t9 = (unsigned char)0;

LAB143:    if (t9 == 1)
        goto LAB138;

LAB139:    t8 = (unsigned char)0;

LAB140:    if (t8 == 0)
        goto LAB136;

LAB137:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1968U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t2 = (t0 + 3000);
    xsi_process_wait(t2, t7);

LAB158:    *((char **)t1) = &&LAB159;
    goto LAB1;

LAB133:    goto LAB132;

LAB135:    goto LAB133;

LAB136:    t22 = (t0 + 5863);
    xsi_report(t22, 12U, (unsigned char)2);
    goto LAB137;

LAB138:    t12 = (t0 + 1672U);
    t16 = *((char **)t12);
    t12 = (t0 + 5859);
    t18 = 1;
    if (4U == 4U)
        goto LAB150;

LAB151:    t18 = 0;

LAB152:    t8 = t18;
    goto LAB140;

LAB141:    t12 = (t0 + 1512U);
    t13 = *((char **)t12);
    t14 = *((unsigned char *)t13);
    t15 = (t14 == (unsigned char)3);
    t9 = t15;
    goto LAB143;

LAB144:    t11 = 0;

LAB147:    if (t11 < 8U)
        goto LAB148;
    else
        goto LAB146;

LAB148:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB145;

LAB149:    t11 = (t11 + 1);
    goto LAB147;

LAB150:    t19 = 0;

LAB153:    if (t19 < 4U)
        goto LAB154;
    else
        goto LAB152;

LAB154:    t20 = (t16 + t19);
    t21 = (t12 + t19);
    if (*((unsigned char *)t20) != *((unsigned char *)t21))
        goto LAB151;

LAB155:    t19 = (t19 + 1);
    goto LAB153;

LAB156:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 5875);
    t10 = 1;
    if (8U == 8U)
        goto LAB168;

LAB169:    t10 = 0;

LAB170:    if (t10 == 1)
        goto LAB165;

LAB166:    t9 = (unsigned char)0;

LAB167:    if (t9 == 1)
        goto LAB162;

LAB163:    t8 = (unsigned char)0;

LAB164:    if (t8 == 0)
        goto LAB160;

LAB161:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1968U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t2 = (t0 + 3000);
    xsi_process_wait(t2, t7);

LAB182:    *((char **)t1) = &&LAB183;
    goto LAB1;

LAB157:    goto LAB156;

LAB159:    goto LAB157;

LAB160:    t22 = (t0 + 5887);
    xsi_report(t22, 12U, (unsigned char)2);
    goto LAB161;

LAB162:    t12 = (t0 + 1672U);
    t16 = *((char **)t12);
    t12 = (t0 + 5883);
    t18 = 1;
    if (4U == 4U)
        goto LAB174;

LAB175:    t18 = 0;

LAB176:    t8 = t18;
    goto LAB164;

LAB165:    t12 = (t0 + 1512U);
    t13 = *((char **)t12);
    t14 = *((unsigned char *)t13);
    t15 = (t14 == (unsigned char)2);
    t9 = t15;
    goto LAB167;

LAB168:    t11 = 0;

LAB171:    if (t11 < 8U)
        goto LAB172;
    else
        goto LAB170;

LAB172:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB169;

LAB173:    t11 = (t11 + 1);
    goto LAB171;

LAB174:    t19 = 0;

LAB177:    if (t19 < 4U)
        goto LAB178;
    else
        goto LAB176;

LAB178:    t20 = (t16 + t19);
    t21 = (t12 + t19);
    if (*((unsigned char *)t20) != *((unsigned char *)t21))
        goto LAB175;

LAB179:    t19 = (t19 + 1);
    goto LAB177;

LAB180:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 5899);
    t10 = 1;
    if (8U == 8U)
        goto LAB192;

LAB193:    t10 = 0;

LAB194:    if (t10 == 1)
        goto LAB189;

LAB190:    t9 = (unsigned char)0;

LAB191:    if (t9 == 1)
        goto LAB186;

LAB187:    t8 = (unsigned char)0;

LAB188:    if (t8 == 0)
        goto LAB184;

LAB185:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 5929);
    xsi_report(t2, 30U, (unsigned char)0);
    xsi_set_current_line(72, ng0);

LAB206:    *((char **)t1) = &&LAB207;
    goto LAB1;

LAB181:    goto LAB180;

LAB183:    goto LAB181;

LAB184:    t22 = (t0 + 5911);
    xsi_report(t22, 18U, (unsigned char)2);
    goto LAB185;

LAB186:    t12 = (t0 + 1672U);
    t16 = *((char **)t12);
    t12 = (t0 + 5907);
    t18 = 1;
    if (4U == 4U)
        goto LAB198;

LAB199:    t18 = 0;

LAB200:    t8 = t18;
    goto LAB188;

LAB189:    t12 = (t0 + 1512U);
    t13 = *((char **)t12);
    t14 = *((unsigned char *)t13);
    t15 = (t14 == (unsigned char)2);
    t9 = t15;
    goto LAB191;

LAB192:    t11 = 0;

LAB195:    if (t11 < 8U)
        goto LAB196;
    else
        goto LAB194;

LAB196:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB193;

LAB197:    t11 = (t11 + 1);
    goto LAB195;

LAB198:    t19 = 0;

LAB201:    if (t19 < 4U)
        goto LAB202;
    else
        goto LAB200;

LAB202:    t20 = (t16 + t19);
    t21 = (t12 + t19);
    if (*((unsigned char *)t20) != *((unsigned char *)t21))
        goto LAB199;

LAB203:    t19 = (t19 + 1);
    goto LAB201;

LAB204:    goto LAB2;

LAB205:    goto LAB204;

LAB207:    goto LAB205;

}


extern void work_a_2208116761_2372691052_init()
{
	static char *pe[] = {(void *)work_a_2208116761_2372691052_p_0,(void *)work_a_2208116761_2372691052_p_1};
	xsi_register_didat("work_a_2208116761_2372691052", "isim/cpu_top_tb_isim_beh.exe.sim/work/a_2208116761_2372691052.didat");
	xsi_register_executes(pe);
}
