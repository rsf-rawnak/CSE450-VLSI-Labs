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
static const char *ng0 = "/home/ise/computer/Rawnak/cpu_design/alu_8bit_tb.vhd";



static void work_a_1850933034_2372691052_p_0(char *t0)
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
    unsigned int t11;

LAB0:    t1 = (t0 + 2664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 5138);
    t4 = (t0 + 3048);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 2U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(25, ng0);
    t2 = (t0 + 5140);
    t4 = (t0 + 3112);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(25, ng0);
    t2 = (t0 + 5148);
    t4 = (t0 + 3176);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(25, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2472);
    xsi_process_wait(t2, t9);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 5156);
    t10 = 1;
    if (8U == 8U)
        goto LAB10;

LAB11:    t10 = 0;

LAB12:    if (t10 == 0)
        goto LAB8;

LAB9:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 5181);
    t4 = (t0 + 3112);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(27, ng0);
    t2 = (t0 + 5189);
    t4 = (t0 + 3176);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(27, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2472);
    xsi_process_wait(t2, t9);

LAB18:    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    t7 = (t0 + 5164);
    xsi_report(t7, 17U, (unsigned char)2);
    goto LAB9;

LAB10:    t11 = 0;

LAB13:    if (t11 < 8U)
        goto LAB14;
    else
        goto LAB12;

LAB14:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB11;

LAB15:    t11 = (t11 + 1);
    goto LAB13;

LAB16:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 5197);
    t10 = 1;
    if (8U == 8U)
        goto LAB22;

LAB23:    t10 = 0;

LAB24:    if (t10 == 0)
        goto LAB20;

LAB21:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 5222);
    t4 = (t0 + 3112);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(29, ng0);
    t2 = (t0 + 5230);
    t4 = (t0 + 3176);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(29, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2472);
    xsi_process_wait(t2, t9);

LAB30:    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

LAB20:    t7 = (t0 + 5205);
    xsi_report(t7, 17U, (unsigned char)2);
    goto LAB21;

LAB22:    t11 = 0;

LAB25:    if (t11 < 8U)
        goto LAB26;
    else
        goto LAB24;

LAB26:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB23;

LAB27:    t11 = (t11 + 1);
    goto LAB25;

LAB28:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 5238);
    t10 = 1;
    if (8U == 8U)
        goto LAB34;

LAB35:    t10 = 0;

LAB36:    if (t10 == 0)
        goto LAB32;

LAB33:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 5281);
    t4 = (t0 + 3048);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 2U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 5283);
    t4 = (t0 + 3112);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 5291);
    t4 = (t0 + 3176);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(33, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2472);
    xsi_process_wait(t2, t9);

LAB42:    *((char **)t1) = &&LAB43;
    goto LAB1;

LAB29:    goto LAB28;

LAB31:    goto LAB29;

LAB32:    t7 = (t0 + 5246);
    xsi_report(t7, 35U, (unsigned char)2);
    goto LAB33;

LAB34:    t11 = 0;

LAB37:    if (t11 < 8U)
        goto LAB38;
    else
        goto LAB36;

LAB38:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB35;

LAB39:    t11 = (t11 + 1);
    goto LAB37;

LAB40:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 5299);
    t10 = 1;
    if (8U == 8U)
        goto LAB46;

LAB47:    t10 = 0;

LAB48:    if (t10 == 0)
        goto LAB44;

LAB45:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 5324);
    t4 = (t0 + 3112);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(35, ng0);
    t2 = (t0 + 5332);
    t4 = (t0 + 3176);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(35, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2472);
    xsi_process_wait(t2, t9);

LAB54:    *((char **)t1) = &&LAB55;
    goto LAB1;

LAB41:    goto LAB40;

LAB43:    goto LAB41;

LAB44:    t7 = (t0 + 5307);
    xsi_report(t7, 17U, (unsigned char)2);
    goto LAB45;

LAB46:    t11 = 0;

LAB49:    if (t11 < 8U)
        goto LAB50;
    else
        goto LAB48;

LAB50:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB47;

LAB51:    t11 = (t11 + 1);
    goto LAB49;

LAB52:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 5340);
    t10 = 1;
    if (8U == 8U)
        goto LAB58;

LAB59:    t10 = 0;

LAB60:    if (t10 == 0)
        goto LAB56;

LAB57:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 5365);
    t4 = (t0 + 3112);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 5373);
    t4 = (t0 + 3176);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(37, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2472);
    xsi_process_wait(t2, t9);

LAB66:    *((char **)t1) = &&LAB67;
    goto LAB1;

LAB53:    goto LAB52;

LAB55:    goto LAB53;

LAB56:    t7 = (t0 + 5348);
    xsi_report(t7, 17U, (unsigned char)2);
    goto LAB57;

LAB58:    t11 = 0;

LAB61:    if (t11 < 8U)
        goto LAB62;
    else
        goto LAB60;

LAB62:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB59;

LAB63:    t11 = (t11 + 1);
    goto LAB61;

LAB64:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 5381);
    t10 = 1;
    if (8U == 8U)
        goto LAB70;

LAB71:    t10 = 0;

LAB72:    if (t10 == 0)
        goto LAB68;

LAB69:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 5406);
    t4 = (t0 + 3048);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 2U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 5408);
    t4 = (t0 + 3112);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 5416);
    t4 = (t0 + 3176);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(41, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2472);
    xsi_process_wait(t2, t9);

LAB78:    *((char **)t1) = &&LAB79;
    goto LAB1;

LAB65:    goto LAB64;

LAB67:    goto LAB65;

LAB68:    t7 = (t0 + 5389);
    xsi_report(t7, 17U, (unsigned char)2);
    goto LAB69;

LAB70:    t11 = 0;

LAB73:    if (t11 < 8U)
        goto LAB74;
    else
        goto LAB72;

LAB74:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB71;

LAB75:    t11 = (t11 + 1);
    goto LAB73;

LAB76:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 5424);
    t10 = 1;
    if (8U == 8U)
        goto LAB82;

LAB83:    t10 = 0;

LAB84:    if (t10 == 0)
        goto LAB80;

LAB81:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 5449);
    t4 = (t0 + 3112);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 5457);
    t4 = (t0 + 3176);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(43, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2472);
    xsi_process_wait(t2, t9);

LAB90:    *((char **)t1) = &&LAB91;
    goto LAB1;

LAB77:    goto LAB76;

LAB79:    goto LAB77;

LAB80:    t7 = (t0 + 5432);
    xsi_report(t7, 17U, (unsigned char)2);
    goto LAB81;

LAB82:    t11 = 0;

LAB85:    if (t11 < 8U)
        goto LAB86;
    else
        goto LAB84;

LAB86:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB83;

LAB87:    t11 = (t11 + 1);
    goto LAB85;

LAB88:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 5465);
    t10 = 1;
    if (8U == 8U)
        goto LAB94;

LAB95:    t10 = 0;

LAB96:    if (t10 == 0)
        goto LAB92;

LAB93:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 5490);
    t4 = (t0 + 3112);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 5498);
    t4 = (t0 + 3176);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(45, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2472);
    xsi_process_wait(t2, t9);

LAB102:    *((char **)t1) = &&LAB103;
    goto LAB1;

LAB89:    goto LAB88;

LAB91:    goto LAB89;

LAB92:    t7 = (t0 + 5473);
    xsi_report(t7, 17U, (unsigned char)2);
    goto LAB93;

LAB94:    t11 = 0;

LAB97:    if (t11 < 8U)
        goto LAB98;
    else
        goto LAB96;

LAB98:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB95;

LAB99:    t11 = (t11 + 1);
    goto LAB97;

LAB100:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 5506);
    t10 = 1;
    if (8U == 8U)
        goto LAB106;

LAB107:    t10 = 0;

LAB108:    if (t10 == 0)
        goto LAB104;

LAB105:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 5544);
    t4 = (t0 + 3112);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 5552);
    t4 = (t0 + 3176);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(47, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2472);
    xsi_process_wait(t2, t9);

LAB114:    *((char **)t1) = &&LAB115;
    goto LAB1;

LAB101:    goto LAB100;

LAB103:    goto LAB101;

LAB104:    t7 = (t0 + 5514);
    xsi_report(t7, 30U, (unsigned char)2);
    goto LAB105;

LAB106:    t11 = 0;

LAB109:    if (t11 < 8U)
        goto LAB110;
    else
        goto LAB108;

LAB110:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB107;

LAB111:    t11 = (t11 + 1);
    goto LAB109;

LAB112:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 5560);
    t10 = 1;
    if (8U == 8U)
        goto LAB118;

LAB119:    t10 = 0;

LAB120:    if (t10 == 0)
        goto LAB116;

LAB117:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 5598);
    t4 = (t0 + 3048);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 2U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 5600);
    t4 = (t0 + 3112);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 5608);
    t4 = (t0 + 3176);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(51, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2472);
    xsi_process_wait(t2, t9);

LAB126:    *((char **)t1) = &&LAB127;
    goto LAB1;

LAB113:    goto LAB112;

LAB115:    goto LAB113;

LAB116:    t7 = (t0 + 5568);
    xsi_report(t7, 30U, (unsigned char)2);
    goto LAB117;

LAB118:    t11 = 0;

LAB121:    if (t11 < 8U)
        goto LAB122;
    else
        goto LAB120;

LAB122:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB119;

LAB123:    t11 = (t11 + 1);
    goto LAB121;

LAB124:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 5616);
    t10 = 1;
    if (8U == 8U)
        goto LAB130;

LAB131:    t10 = 0;

LAB132:    if (t10 == 0)
        goto LAB128;

LAB129:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 5636);
    t4 = (t0 + 3112);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 5644);
    t4 = (t0 + 3176);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(53, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2472);
    xsi_process_wait(t2, t9);

LAB138:    *((char **)t1) = &&LAB139;
    goto LAB1;

LAB125:    goto LAB124;

LAB127:    goto LAB125;

LAB128:    t7 = (t0 + 5624);
    xsi_report(t7, 12U, (unsigned char)2);
    goto LAB129;

LAB130:    t11 = 0;

LAB133:    if (t11 < 8U)
        goto LAB134;
    else
        goto LAB132;

LAB134:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB131;

LAB135:    t11 = (t11 + 1);
    goto LAB133;

LAB136:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 5652);
    t10 = 1;
    if (8U == 8U)
        goto LAB142;

LAB143:    t10 = 0;

LAB144:    if (t10 == 0)
        goto LAB140;

LAB141:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 5672);
    t4 = (t0 + 3112);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 5680);
    t4 = (t0 + 3176);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(55, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2472);
    xsi_process_wait(t2, t9);

LAB150:    *((char **)t1) = &&LAB151;
    goto LAB1;

LAB137:    goto LAB136;

LAB139:    goto LAB137;

LAB140:    t7 = (t0 + 5660);
    xsi_report(t7, 12U, (unsigned char)2);
    goto LAB141;

LAB142:    t11 = 0;

LAB145:    if (t11 < 8U)
        goto LAB146;
    else
        goto LAB144;

LAB146:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB143;

LAB147:    t11 = (t11 + 1);
    goto LAB145;

LAB148:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 5688);
    t10 = 1;
    if (8U == 8U)
        goto LAB154;

LAB155:    t10 = 0;

LAB156:    if (t10 == 0)
        goto LAB152;

LAB153:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 5708);
    t4 = (t0 + 3112);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 5716);
    t4 = (t0 + 3176);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(57, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2472);
    xsi_process_wait(t2, t9);

LAB162:    *((char **)t1) = &&LAB163;
    goto LAB1;

LAB149:    goto LAB148;

LAB151:    goto LAB149;

LAB152:    t7 = (t0 + 5696);
    xsi_report(t7, 12U, (unsigned char)2);
    goto LAB153;

LAB154:    t11 = 0;

LAB157:    if (t11 < 8U)
        goto LAB158;
    else
        goto LAB156;

LAB158:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB155;

LAB159:    t11 = (t11 + 1);
    goto LAB157;

LAB160:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 5724);
    t10 = 1;
    if (8U == 8U)
        goto LAB166;

LAB167:    t10 = 0;

LAB168:    if (t10 == 0)
        goto LAB164;

LAB165:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 5764);
    xsi_report(t2, 29U, (unsigned char)0);
    xsi_set_current_line(61, ng0);

LAB174:    *((char **)t1) = &&LAB175;
    goto LAB1;

LAB161:    goto LAB160;

LAB163:    goto LAB161;

LAB164:    t7 = (t0 + 5732);
    xsi_report(t7, 32U, (unsigned char)2);
    goto LAB165;

LAB166:    t11 = 0;

LAB169:    if (t11 < 8U)
        goto LAB170;
    else
        goto LAB168;

LAB170:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB167;

LAB171:    t11 = (t11 + 1);
    goto LAB169;

LAB172:    goto LAB2;

LAB173:    goto LAB172;

LAB175:    goto LAB173;

}


extern void work_a_1850933034_2372691052_init()
{
	static char *pe[] = {(void *)work_a_1850933034_2372691052_p_0};
	xsi_register_didat("work_a_1850933034_2372691052", "isim/alu_8bit_tb_isim_beh.exe.sim/work/a_1850933034_2372691052.didat");
	xsi_register_executes(pe);
}
