/***************************************************************************************************
	This header file is generated by the Vega from a xform file.
	Please don't modify it!!
---------------------------------------------------------------------------------------------------*/
		
#ifndef __WIN_SIGNAL_OBJ_H__CCF264A4_D803_43A4_985E_58BE1A2F8BC1
#define __WIN_SIGNAL_OBJ_H__CCF264A4_D803_43A4_985E_58BE1A2F8BC1


/*******************************************************************************
*	Objects definition
*******************************************************************************/
extern PROGRESS_BAR sig_bar_CN;
extern CONTAINER g_win_signal;
extern TEXT_FIELD sig_txt_level_uint;
extern TEXT_FIELD sig_txt_CN_uint;
extern TEXT_FIELD sig_txt_CN;
extern TEXT_FIELD sig_txt_level;
extern PROGRESS_BAR sig_bar_level;
extern TEXT_FIELD sig_txt_BER;
extern TEXT_FIELD sig_txt_BER_uint;
extern CONTAINER g_win_signal_con;
extern PROGRESS_BAR sig_bar_BER;

//g_win_signal ------------------------------------------------------------------------

CONTAINER g_win_signal = {
	.head = {
		.bType = OT_CONTAINER,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {291, 156, 162, 295},
		.style = {
			.bShowIdx = WSTL_LIST_BG, .bHLIdx = WSTL_LIST_BG, .bSelIdx = WSTL_LIST_BG, .bGrayIdx = WSTL_LIST_BG
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)NULL
	},
	.pNextInCntn = (POBJECT_HEAD)&g_win_signal_con,
	.FocusObjectID = 0,
	.bHiliteAsWhole = 0,
};

//g_win_signal_con ------------------------------------------------------------------------

CONTAINER g_win_signal_con = {
	.head = {
		.bType = OT_CONTAINER,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {306, 163, 140, 286},
		.style = {
			.bShowIdx = WSTL_YU_WHITE, .bHLIdx = WSTL_YU_WHITE_FRAME, .bSelIdx = WSTL_YU_WHITE_FRAME, .bGrayIdx = WSTL_YU_WHITE_FRAME
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)&g_win_signal
	},
	.pNextInCntn = (POBJECT_HEAD)&sig_txt_CN,
	.FocusObjectID = 0,
	.bHiliteAsWhole = 0,
};

//sig_txt_CN ------------------------------------------------------------------------

TEXT_FIELD sig_txt_CN = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {309, 413, 47, 24},
		.style = {
			.bShowIdx = WSTL_TXT_5, .bHLIdx = WSTL_TXT_3, .bSelIdx = WSTL_TXT_4, .bGrayIdx = WSTL_TXT_4
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&sig_bar_CN, .pRoot = (POBJECT_HEAD)&g_win_signal_con
	},
	.bAlign = C_ALIGN_LEFT|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = RS_YU_BER,
	.pString = NULL
};

//sig_bar_CN ------------------------------------------------------------------------

PROGRESS_BAR sig_bar_CN = {
	.head = {
		.bType = OT_PROGRESSBAR,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {311, 191, 36, 210},
		.style = {
			.bShowIdx = WSTL_BAR_TICK_FORCE, .bHLIdx = WSTL_BAR_TICK_FORCE, .bSelIdx = WSTL_YU_JINDUTIAO, .bGrayIdx = WSTL_YU_JINDUTIAO
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&sig_txt_CN_uint, .pRoot = (POBJECT_HEAD)&g_win_signal_con
	},
	.bStyle = PROGRESSBAR_VERT_REVERSE|PBAR_STYLE_RECT_STYLE,
	.bX = 0, .bY = 0,
	.wTickBg = NULL, .wTickFg = WSTL_BAR_05,
	.rcBar = {4, 0, 28, 208},
	.nMin = 1, .nMax = 100,
	.nBlocks = 50, .nPos = 50,
};

//sig_txt_CN_uint ------------------------------------------------------------------------

TEXT_FIELD sig_txt_CN_uint = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {301, 162, 45, 24},
		.style = {
			.bShowIdx = WSTL_TXT_6, .bHLIdx = WSTL_TXT_5, .bSelIdx = WSTL_TXT_5, .bGrayIdx = WSTL_TXT_5
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&sig_txt_BER, .pRoot = (POBJECT_HEAD)&g_win_signal_con
	},
	.bAlign = C_ALIGN_LEFT|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = 0,
	.pString = NULL
};

//sig_txt_BER ------------------------------------------------------------------------

TEXT_FIELD sig_txt_BER = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 4, .bLeftID = 4, .bRightID = 4, .bUpID = 4, .bDownID = 4,
		.frame = {358, 413, 45, 24},
		.style = {
			.bShowIdx = WSTL_TXT_5, .bHLIdx = WSTL_TXT_3, .bSelIdx = WSTL_TXT_4, .bGrayIdx = WSTL_TXT_4
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&sig_bar_BER, .pRoot = (POBJECT_HEAD)&g_win_signal_con
	},
	.bAlign = C_ALIGN_LEFT|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = RS_YU_DBuV,
	.pString = NULL
};

//sig_bar_BER ------------------------------------------------------------------------

PROGRESS_BAR sig_bar_BER = {
	.head = {
		.bType = OT_PROGRESSBAR,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {357, 191, 36, 210},
		.style = {
			.bShowIdx = WSTL_BAR_TICK_FORCE, .bHLIdx = WSTL_BAR_TICK_FORCE, .bSelIdx = WSTL_YU_JINDUTIAO, .bGrayIdx = WSTL_YU_JINDUTIAO
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&sig_txt_BER_uint, .pRoot = (POBJECT_HEAD)&g_win_signal_con
	},
	.bStyle = PROGRESSBAR_VERT_REVERSE|PBAR_STYLE_RECT_STYLE,
	.bX = 0, .bY = 0,
	.wTickBg = NULL, .wTickFg = WSTL_BAR_05,
	.rcBar = {4, 0, 28, 208},
	.nMin = 1, .nMax = 100,
	.nBlocks = 50, .nPos = 50,
};

//sig_txt_BER_uint ------------------------------------------------------------------------

TEXT_FIELD sig_txt_BER_uint = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {353, 162, 44, 24},
		.style = {
			.bShowIdx = WSTL_TXT_5, .bHLIdx = WSTL_TXT_5, .bSelIdx = WSTL_TXT_5, .bGrayIdx = WSTL_TXT_5
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&sig_txt_level, .pRoot = (POBJECT_HEAD)&g_win_signal_con
	},
	.bAlign = C_ALIGN_LEFT|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = 0,
	.pString = NULL
};

//sig_txt_level ------------------------------------------------------------------------

TEXT_FIELD sig_txt_level = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 6, .bLeftID = 6, .bRightID = 6, .bUpID = 6, .bDownID = 6,
		.frame = {409, 413, 31, 25},
		.style = {
			.bShowIdx = WSTL_TXT_5, .bHLIdx = WSTL_TXT_3, .bSelIdx = WSTL_TXT_4, .bGrayIdx = WSTL_TXT_4
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&sig_bar_level, .pRoot = (POBJECT_HEAD)&g_win_signal_con
	},
	.bAlign = C_ALIGN_LEFT|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = RS_YU_STRINGTH,
	.pString = NULL
};

//sig_bar_level ------------------------------------------------------------------------

PROGRESS_BAR sig_bar_level = {
	.head = {
		.bType = OT_PROGRESSBAR,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {403, 191, 36, 210},
		.style = {
			.bShowIdx = WSTL_BAR_TICK_FORCE, .bHLIdx = WSTL_BAR_TICK_FORCE, .bSelIdx = WSTL_YU_JINDUTIAO, .bGrayIdx = WSTL_YU_JINDUTIAO
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)&sig_txt_level_uint, .pRoot = (POBJECT_HEAD)&g_win_signal_con
	},
	.bStyle = PROGRESSBAR_VERT_REVERSE|PBAR_STYLE_RECT_STYLE,
	.bX = 0, .bY = 0,
	.wTickBg = NULL, .wTickFg = WSTL_BAR_05,
	.rcBar = {4, 0, 28, 208},
	.nMin = 1, .nMax = 100,
	.nBlocks = 50, .nPos = 50,
};

//sig_txt_level_uint ------------------------------------------------------------------------

TEXT_FIELD sig_txt_level_uint = {
	.head = {
		.bType = OT_TEXTFIELD,
		.bAttr = C_ATTR_ACTIVE, .bFont = 0,
		.bID = 0, .bLeftID = 0, .bRightID = 0, .bUpID = 0, .bDownID = 0,
		.frame = {402, 163, 49, 24},
		.style = {
			.bShowIdx = WSTL_TXT_5, .bHLIdx = WSTL_TXT_5, .bSelIdx = WSTL_TXT_5, .bGrayIdx = WSTL_TXT_5
		},
		.pfnKeyMap = NULL, .pfnCallback = NULL,
		.pNext = (POBJECT_HEAD)NULL, .pRoot = (POBJECT_HEAD)&g_win_signal_con
	},
	.bAlign = C_ALIGN_LEFT|C_ALIGN_VCENTER,
	.bX = 0, .bY = 0,
	.wStringID = 0,
	.pString = NULL
};
#endif//__WIN_SIGNAL_OBJ_H__CCF264A4_D803_43A4_985E_58BE1A2F8BC1