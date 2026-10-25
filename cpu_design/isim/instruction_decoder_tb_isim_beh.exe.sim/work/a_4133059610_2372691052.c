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
static const char *ng0 = "/home/ise/computer/Rawnak/cpu_design/instruction_decoder_tb.vhd";



static void work_a_4133059610_2372691052_p_0(char *t0)
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
    unsigned int t12;
    unsigned char t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 2504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 4808);
    t4 = (t0 + 2888);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 12U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(22, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2312);
    xsi_process_wait(t2, t9);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(23, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 4820);
    t11 = 1;
    if (4U == 4U)
        goto LAB13;

LAB14:    t11 = 0;

LAB15:    if (t11 == 1)
        goto LAB10;

LAB11:    t10 = (unsigned char)0;

LAB12:    if (t10 == 0)
        goto LAB8;

LAB9:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 4844);
    t4 = (t0 + 2888);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 12U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(24, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2312);
    xsi_process_wait(t2, t9);

LAB27:    *((char **)t1) = &&LAB28;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    t18 = (t0 + 4832);
    xsi_report(t18, 12U, (unsigned char)2);
    goto LAB9;

LAB10:    t7 = (t0 + 1352U);
    t8 = *((char **)t7);
    t7 = (t0 + 4824);
    t14 = 1;
    if (8U == 8U)
        goto LAB19;

LAB20:    t14 = 0;

LAB21:    t10 = t14;
    goto LAB12;

LAB13:    t12 = 0;

LAB16:    if (t12 < 4U)
        goto LAB17;
    else
        goto LAB15;

LAB17:    t5 = (t3 + t12);
    t6 = (t2 + t12);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB14;

LAB18:    t12 = (t12 + 1);
    goto LAB16;

LAB19:    t15 = 0;

LAB22:    if (t15 < 8U)
        goto LAB23;
    else
        goto LAB21;

LAB23:    t16 = (t8 + t15);
    t17 = (t7 + t15);
    if (*((unsigned char *)t16) != *((unsigned char *)t17))
        goto LAB20;

LAB24:    t15 = (t15 + 1);
    goto LAB22;

LAB25:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 4856);
    t11 = 1;
    if (4U == 4U)
        goto LAB34;

LAB35:    t11 = 0;

LAB36:    if (t11 == 1)
        goto LAB31;

LAB32:    t10 = (unsigned char)0;

LAB33:    if (t10 == 0)
        goto LAB29;

LAB30:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 4880);
    t4 = (t0 + 2888);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 12U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(26, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2312);
    xsi_process_wait(t2, t9);

LAB48:    *((char **)t1) = &&LAB49;
    goto LAB1;

LAB26:    goto LAB25;

LAB28:    goto LAB26;

LAB29:    t18 = (t0 + 4868);
    xsi_report(t18, 12U, (unsigned char)2);
    goto LAB30;

LAB31:    t7 = (t0 + 1352U);
    t8 = *((char **)t7);
    t7 = (t0 + 4860);
    t14 = 1;
    if (8U == 8U)
        goto LAB40;

LAB41:    t14 = 0;

LAB42:    t10 = t14;
    goto LAB33;

LAB34:    t12 = 0;

LAB37:    if (t12 < 4U)
        goto LAB38;
    else
        goto LAB36;

LAB38:    t5 = (t3 + t12);
    t6 = (t2 + t12);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB35;

LAB39:    t12 = (t12 + 1);
    goto LAB37;

LAB40:    t15 = 0;

LAB43:    if (t15 < 8U)
        goto LAB44;
    else
        goto LAB42;

LAB44:    t16 = (t8 + t15);
    t17 = (t7 + t15);
    if (*((unsigned char *)t16) != *((unsigned char *)t17))
        goto LAB41;

LAB45:    t15 = (t15 + 1);
    goto LAB43;

LAB46:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 4892);
    t11 = 1;
    if (4U == 4U)
        goto LAB55;

LAB56:    t11 = 0;

LAB57:    if (t11 == 1)
        goto LAB52;

LAB53:    t10 = (unsigned char)0;

LAB54:    if (t10 == 0)
        goto LAB50;

LAB51:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 4916);
    t4 = (t0 + 2888);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 12U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(28, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2312);
    xsi_process_wait(t2, t9);

LAB69:    *((char **)t1) = &&LAB70;
    goto LAB1;

LAB47:    goto LAB46;

LAB49:    goto LAB47;

LAB50:    t18 = (t0 + 4904);
    xsi_report(t18, 12U, (unsigned char)2);
    goto LAB51;

LAB52:    t7 = (t0 + 1352U);
    t8 = *((char **)t7);
    t7 = (t0 + 4896);
    t14 = 1;
    if (8U == 8U)
        goto LAB61;

LAB62:    t14 = 0;

LAB63:    t10 = t14;
    goto LAB54;

LAB55:    t12 = 0;

LAB58:    if (t12 < 4U)
        goto LAB59;
    else
        goto LAB57;

LAB59:    t5 = (t3 + t12);
    t6 = (t2 + t12);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB56;

LAB60:    t12 = (t12 + 1);
    goto LAB58;

LAB61:    t15 = 0;

LAB64:    if (t15 < 8U)
        goto LAB65;
    else
        goto LAB63;

LAB65:    t16 = (t8 + t15);
    t17 = (t7 + t15);
    if (*((unsigned char *)t16) != *((unsigned char *)t17))
        goto LAB62;

LAB66:    t15 = (t15 + 1);
    goto LAB64;

LAB67:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 4928);
    t11 = 1;
    if (4U == 4U)
        goto LAB76;

LAB77:    t11 = 0;

LAB78:    if (t11 == 1)
        goto LAB73;

LAB74:    t10 = (unsigned char)0;

LAB75:    if (t10 == 0)
        goto LAB71;

LAB72:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 4952);
    t4 = (t0 + 2888);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 12U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(30, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2312);
    xsi_process_wait(t2, t9);

LAB90:    *((char **)t1) = &&LAB91;
    goto LAB1;

LAB68:    goto LAB67;

LAB70:    goto LAB68;

LAB71:    t18 = (t0 + 4940);
    xsi_report(t18, 12U, (unsigned char)2);
    goto LAB72;

LAB73:    t7 = (t0 + 1352U);
    t8 = *((char **)t7);
    t7 = (t0 + 4932);
    t14 = 1;
    if (8U == 8U)
        goto LAB82;

LAB83:    t14 = 0;

LAB84:    t10 = t14;
    goto LAB75;

LAB76:    t12 = 0;

LAB79:    if (t12 < 4U)
        goto LAB80;
    else
        goto LAB78;

LAB80:    t5 = (t3 + t12);
    t6 = (t2 + t12);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB77;

LAB81:    t12 = (t12 + 1);
    goto LAB79;

LAB82:    t15 = 0;

LAB85:    if (t15 < 8U)
        goto LAB86;
    else
        goto LAB84;

LAB86:    t16 = (t8 + t15);
    t17 = (t7 + t15);
    if (*((unsigned char *)t16) != *((unsigned char *)t17))
        goto LAB83;

LAB87:    t15 = (t15 + 1);
    goto LAB85;

LAB88:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 4964);
    t11 = 1;
    if (4U == 4U)
        goto LAB97;

LAB98:    t11 = 0;

LAB99:    if (t11 == 1)
        goto LAB94;

LAB95:    t10 = (unsigned char)0;

LAB96:    if (t10 == 0)
        goto LAB92;

LAB93:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 4985);
    t4 = (t0 + 2888);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 12U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(32, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2312);
    xsi_process_wait(t2, t9);

LAB111:    *((char **)t1) = &&LAB112;
    goto LAB1;

LAB89:    goto LAB88;

LAB91:    goto LAB89;

LAB92:    t18 = (t0 + 4976);
    xsi_report(t18, 9U, (unsigned char)2);
    goto LAB93;

LAB94:    t7 = (t0 + 1352U);
    t8 = *((char **)t7);
    t7 = (t0 + 4968);
    t14 = 1;
    if (8U == 8U)
        goto LAB103;

LAB104:    t14 = 0;

LAB105:    t10 = t14;
    goto LAB96;

LAB97:    t12 = 0;

LAB100:    if (t12 < 4U)
        goto LAB101;
    else
        goto LAB99;

LAB101:    t5 = (t3 + t12);
    t6 = (t2 + t12);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB98;

LAB102:    t12 = (t12 + 1);
    goto LAB100;

LAB103:    t15 = 0;

LAB106:    if (t15 < 8U)
        goto LAB107;
    else
        goto LAB105;

LAB107:    t16 = (t8 + t15);
    t17 = (t7 + t15);
    if (*((unsigned char *)t16) != *((unsigned char *)t17))
        goto LAB104;

LAB108:    t15 = (t15 + 1);
    goto LAB106;

LAB109:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 4997);
    t11 = 1;
    if (4U == 4U)
        goto LAB118;

LAB119:    t11 = 0;

LAB120:    if (t11 == 1)
        goto LAB115;

LAB116:    t10 = (unsigned char)0;

LAB117:    if (t10 == 0)
        goto LAB113;

LAB114:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 5018);
    xsi_report(t2, 40U, (unsigned char)0);
    xsi_set_current_line(35, ng0);

LAB132:    *((char **)t1) = &&LAB133;
    goto LAB1;

LAB110:    goto LAB109;

LAB112:    goto LAB110;

LAB113:    t18 = (t0 + 5009);
    xsi_report(t18, 9U, (unsigned char)2);
    goto LAB114;

LAB115:    t7 = (t0 + 1352U);
    t8 = *((char **)t7);
    t7 = (t0 + 5001);
    t14 = 1;
    if (8U == 8U)
        goto LAB124;

LAB125:    t14 = 0;

LAB126:    t10 = t14;
    goto LAB117;

LAB118:    t12 = 0;

LAB121:    if (t12 < 4U)
        goto LAB122;
    else
        goto LAB120;

LAB122:    t5 = (t3 + t12);
    t6 = (t2 + t12);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB119;

LAB123:    t12 = (t12 + 1);
    goto LAB121;

LAB124:    t15 = 0;

LAB127:    if (t15 < 8U)
        goto LAB128;
    else
        goto LAB126;

LAB128:    t16 = (t8 + t15);
    t17 = (t7 + t15);
    if (*((unsigned char *)t16) != *((unsigned char *)t17))
        goto LAB125;

LAB129:    t15 = (t15 + 1);
    goto LAB127;

LAB130:    goto LAB2;

LAB131:    goto LAB130;

LAB133:    goto LAB131;

}


extern void work_a_4133059610_2372691052_init()
{
	static char *pe[] = {(void *)work_a_4133059610_2372691052_p_0};
	xsi_register_didat("work_a_4133059610_2372691052", "isim/instruction_decoder_tb_isim_beh.exe.sim/work/a_4133059610_2372691052.didat");
	xsi_register_executes(pe);
}
