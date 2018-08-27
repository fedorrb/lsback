//-------------------------------------------------------------------------
// STAY/W      Resource header file RPT_BS.XME
//-------------------------------------------------------------------------
// Created 29\10\2013 09:57
//-------------------------------------------------------------------------

#ifndef _RPT_BS_H_INCLUDED
#define _RPT_BS_H_INCLUDED

#include "staypic.h"
HPICMODULEBEG(RPT_BS)

extern uint6 PR_CalcSum;
extern pStayFD _PR_CalcSum;
extern StayFD _n_PR_CalcSum;

extern uint6 PR_ContrSum;
extern pStayFD _PR_ContrSum;
extern StayFD _n_PR_ContrSum;

extern char PR_FullName[51];
extern pStayFD _PR_FullName;
extern StayFD _n_PR_FullName;

extern char LI_FullName[51];
extern pStayFD _LI_FullName;
extern StayFD _n_LI_FullName;

extern WORD  PR_IndCode;
extern pStayFD _PR_IndCode;
extern StayFD _n_PR_IndCode;

extern WORD  PR_InsCode;
extern pStayFD _PR_InsCode;
extern StayFD _n_PR_InsCode;

extern WORD  PR_Month;
extern pStayFD _PR_Month;
extern StayFD _n_PR_Month;

extern DWORD PR_Nls;
extern pStayFD _PR_Nls;
extern StayFD _n_PR_Nls;

extern DWORD LI_Nls;
extern pStayFD _LI_Nls;
extern StayFD _n_LI_Nls;

extern uint6 PR_NumIdent;
extern pStayFD _PR_NumIdent;
extern StayFD _n_PR_NumIdent;

extern uint6 LI_NumIdent;
extern pStayFD _LI_NumIdent;
extern StayFD _n_LI_NumIdent;

extern WORD  PR_PayM;
extern pStayFD _PR_PayM;
extern StayFD _n_PR_PayM;

extern WORD  LI_PayM;
extern pStayFD _LI_PayM;
extern StayFD _n_LI_PayM;

extern uint6 PR_PaySum;
extern pStayFD _PR_PaySum;
extern StayFD _n_PR_PaySum;

extern WORD  PR_PayY;
extern pStayFD _PR_PayY;
extern StayFD _n_PR_PayY;

extern WORD  LI_PayY;
extern pStayFD _LI_PayY;
extern StayFD _n_LI_PayY;

extern WORD  PR_Sel;
extern pStayFD _PR_Sel;
extern StayFD _n_PR_Sel;

extern WORD  PR_SelM;
extern pStayFD _PR_SelM;
extern StayFD _n_PR_SelM;

extern WORD  PR_SelY;
extern pStayFD _PR_SelY;
extern StayFD _n_PR_SelY;

extern WORD  PR_StartD;
extern pStayFD _PR_StartD;
extern StayFD _n_PR_StartD;

extern WORD  PR_StopD;
extern pStayFD _PR_StopD;
extern StayFD _n_PR_StopD;

extern WORD  PR_Year;
extern pStayFD _PR_Year;
extern StayFD _n_PR_Year;

extern WORD  PR_Count;
extern pStayFD _PR_Count;
extern StayFD _n_PR_Count;

extern char PR_Pasp[15];
extern pStayFD _PR_Pasp;
extern StayFD _n_PR_Pasp;

extern BYTE  PR_Ctz;
extern pStayFD _PR_Ctz;
extern StayFD _n_PR_Ctz;

extern char PR_Pasp2NumId[11];
extern pStayFD _PR_Pasp2NumId;
extern StayFD _n_PR_Pasp2NumId;

extern StayDate Inv_Dn;
extern pStayFD _Inv_Dn;
extern StayFD _n_Inv_Dn;

extern StayDate Inv_Dk;
extern pStayFD _Inv_Dk;
extern StayFD _n_Inv_Dk;

extern StayDate Dat;
extern pStayFD _Dat;
extern StayFD _n_Dat;

extern StayDataset _n_A_Inv;
extern pStayDataset A_Inv;
extern StayDataset _n_A_Date;
extern pStayDataset A_Date;
extern StayDataset _n_B_PFURPT;
extern pStayDataset B_PFURPT;
extern StayDataset _n_B_PRLS;
extern pStayDataset B_PRLS;
extern StayDataset _n_B_PRLS2ID;
extern pStayDataset B_PRLS2ID;
extern void *RPT_BS[];

HPICMODULEEND(RPT_BS)

#endif
