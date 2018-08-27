//-------------------------------------------------------------------------
// STAY/W      Resource file RPT_BS.XME
//-------------------------------------------------------------------------
// Created 29\10\2013 09:57
//-------------------------------------------------------------------------

#include "RPT_BS.h"

PICMODULEBEG(RPT_BS)

static StayFD _nn_RPT_BS = {NULL,TAG_PIC,0,0,0,0,"RPT_BS",NULL};
uint6 PR_CalcSum;
StayFD _n_PR_CalcSum = {&PR_CalcSum,0,0,0,CLS_H,2,"PR_CalcSum","Сумма выплаты расчитаная"};
pStayFD _PR_CalcSum = &_n_PR_CalcSum;

uint6 PR_ContrSum;
StayFD _n_PR_ContrSum = {&PR_ContrSum,0,0,0,CLS_H,2,"PR_ContrSum","Сумма взноса"};
pStayFD _PR_ContrSum = &_n_PR_ContrSum;

char PR_FullName[51];
StayFD _n_PR_FullName = {&PR_FullName,0,0,0,CLS_V,50,"PR_FullName","ФИО"};
pStayFD _PR_FullName = &_n_PR_FullName;

char LI_FullName[51];
StayFD _n_LI_FullName = {&LI_FullName,0,0,0,CLS_V,50,"LI_FullName","ФИО"};
pStayFD _LI_FullName = &_n_LI_FullName;

WORD  PR_IndCode;
StayFD _n_PR_IndCode = {&PR_IndCode,0,0,0,CLS_I,0,"PR_IndCode","Код строки показателя"};
pStayFD _PR_IndCode = &_n_PR_IndCode;

WORD  PR_InsCode;
StayFD _n_PR_InsCode = {&PR_InsCode,0,0,0,CLS_I,0,"PR_InsCode","Код застрахованной особы"};
pStayFD _PR_InsCode = &_n_PR_InsCode;

WORD  PR_Month;
StayFD _n_PR_Month = {&PR_Month,0,0,0,CLS_I,0,"PR_Month","Месяц последнего отчета"};
pStayFD _PR_Month = &_n_PR_Month;

DWORD PR_Nls;
StayFD _n_PR_Nls = {&PR_Nls,0,0,0,CLS_L,0,"PR_Nls","Номер лицевого счета"};
pStayFD _PR_Nls = &_n_PR_Nls;

DWORD LI_Nls;
StayFD _n_LI_Nls = {&LI_Nls,0,0,0,CLS_L,0,"LI_Nls","Номер лицевого счета"};
pStayFD _LI_Nls = &_n_LI_Nls;

uint6 PR_NumIdent;
StayFD _n_PR_NumIdent = {&PR_NumIdent,0,0,0,CLS_H,0,"PR_NumIdent","ИД номер"};
pStayFD _PR_NumIdent = &_n_PR_NumIdent;

uint6 LI_NumIdent;
StayFD _n_LI_NumIdent = {&LI_NumIdent,0,0,0,CLS_H,0,"LI_NumIdent","ИД номер"};
pStayFD _LI_NumIdent = &_n_LI_NumIdent;

WORD  PR_PayM;
StayFD _n_PR_PayM = {&PR_PayM,0,0,0,CLS_I,0,"PR_PayM","Месяц оплаты"};
pStayFD _PR_PayM = &_n_PR_PayM;

WORD  LI_PayM;
StayFD _n_LI_PayM = {&LI_PayM,0,0,0,CLS_I,0,"LI_PayM","Месяц оплаты"};
pStayFD _LI_PayM = &_n_LI_PayM;

uint6 PR_PaySum;
StayFD _n_PR_PaySum = {&PR_PaySum,0,0,0,CLS_H,2,"PR_PaySum","Сумма выплаты минимальная"};
pStayFD _PR_PaySum = &_n_PR_PaySum;

WORD  PR_PayY;
StayFD _n_PR_PayY = {&PR_PayY,0,0,0,CLS_I,0,"PR_PayY","Год оплаты"};
pStayFD _PR_PayY = &_n_PR_PayY;

WORD  LI_PayY;
StayFD _n_LI_PayY = {&LI_PayY,0,0,0,CLS_I,0,"LI_PayY","Год оплаты"};
pStayFD _LI_PayY = &_n_LI_PayY;

WORD  PR_Sel;
StayFD _n_PR_Sel = {&PR_Sel,0,0,0,CLS_I,0,"PR_Sel","Признак выбора для отчета"};
pStayFD _PR_Sel = &_n_PR_Sel;

WORD  PR_SelM;
StayFD _n_PR_SelM = {&PR_SelM,0,0,0,CLS_I,0,"PR_SelM","Месяц отчета"};
pStayFD _PR_SelM = &_n_PR_SelM;

WORD  PR_SelY;
StayFD _n_PR_SelY = {&PR_SelY,0,0,0,CLS_I,0,"PR_SelY","Год отчета"};
pStayFD _PR_SelY = &_n_PR_SelY;

WORD  PR_StartD;
StayFD _n_PR_StartD = {&PR_StartD,0,0,0,CLS_I,0,"PR_StartD","День начала выплаты в отчетном месяце"};
pStayFD _PR_StartD = &_n_PR_StartD;

WORD  PR_StopD;
StayFD _n_PR_StopD = {&PR_StopD,0,0,0,CLS_I,0,"PR_StopD","День окончания выплаты в отчетном месяце"};
pStayFD _PR_StopD = &_n_PR_StopD;

WORD  PR_Year;
StayFD _n_PR_Year = {&PR_Year,0,0,0,CLS_I,0,"PR_Year","Год последнего отчета"};
pStayFD _PR_Year = &_n_PR_Year;

WORD  PR_Count;
StayFD _n_PR_Count = {&PR_Count,0,0,0,CLS_I,0,"PR_Count",""};
pStayFD _PR_Count = &_n_PR_Count;

char PR_Pasp[15];
StayFD _n_PR_Pasp = {&PR_Pasp,0,0,0,CLS_V,14,"PR_Pasp","Серия и номер паспорта"};
pStayFD _PR_Pasp = &_n_PR_Pasp;

BYTE  PR_Ctz;
StayFD _n_PR_Ctz = {&PR_Ctz,0,0,0,CLS_S,0,"PR_Ctz","Гражданство"};
pStayFD _PR_Ctz = &_n_PR_Ctz;

char PR_Pasp2NumId[11];
StayFD _n_PR_Pasp2NumId = {&PR_Pasp2NumId,0,0,0,CLS_V,10,"PR_Pasp2NumId",""};
pStayFD _PR_Pasp2NumId = &_n_PR_Pasp2NumId;

StayDate Inv_Dn;
StayFD _n_Inv_Dn = {&Inv_Dn,0,0,0,CLS_Date,0,"Inv_Dn","Дата нач. периода инвалидности"};
pStayFD _Inv_Dn = &_n_Inv_Dn;

StayDate Inv_Dk;
StayFD _n_Inv_Dk = {&Inv_Dk,0,0,0,CLS_Date,0,"Inv_Dk","Дата кон. периода инвалидности"};
pStayFD _Inv_Dk = &_n_Inv_Dk;

StayDate Dat;
StayFD _n_Dat = {&Dat,0,0,0,CLS_Date,0,"Dat","Для базы получения периодов"};
pStayFD _Dat = &_n_Dat;

extern StayDataset _n_A_Inv;
extern StayDataset _n_A_Date;
extern StayDataset _n_B_PFURPT;
extern StayDataset _n_B_PRLS;
extern StayDataset _n_B_PRLS2ID;
static pStayFD tcm_A_Inv[] =
{
 (StayFD *)&_n_Inv_Dn,
 (StayFD *)&_n_Inv_Dk,
 NULL
};
static BYTE ix_A_Inv[] = {1,1,1,0};
StayDataset _n_A_Inv = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_A_Inv,NULL,
           "LS:INV.DT",ix_A_Inv,NULL,"A_Inv",0};
pStayDataset A_Inv = &_n_A_Inv;

static pStayFD tcm_A_Date[] =
{
 (StayFD *)&_n_Dat,
 NULL
};
static BYTE ix_A_Date[] = {1,1,1,0};
StayDataset _n_A_Date = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_A_Date,NULL,
           NULL,ix_A_Date,"База получения периодов перерасчета","A_Date",0};
pStayDataset A_Date = &_n_A_Date;

static pStayFD tcm_B_PFURPT[] =
{
 (StayFD *)&_n_PR_NumIdent,
 (StayFD *)&_n_PR_FullName,
 (StayFD *)&_n_PR_Year,
 (StayFD *)&_n_PR_Month,
 (StayFD *)&_n_PR_Pasp,
 (StayFD *)&_n_PR_Ctz,
 (StayFD *)&_n_PR_Pasp2NumId,
 (StayFD *)&_n_B_PRLS,
 NULL
};
static BYTE ix_B_PFURPT[] = {3,1,2,0,1,2,67,2,3,0,3,65,1};
StayDataset _n_B_PFURPT = {NULL,TAG_DATASET,0,0,DS_BBASE,0,1,0,NULL,tcm_B_PFURPT,NULL,
           "LS:PFU_RPT.DT",ix_B_PFURPT,NULL,"B_PFURPT",100};
pStayDataset B_PFURPT = &_n_B_PFURPT;

static pStayFD tcm_B_PRLS[] =
{
 (StayFD *)&_n_PR_PayY,
 (StayFD *)&_n_PR_PayM,
 (StayFD *)&_n_PR_StartD,
 (StayFD *)&_n_PR_Nls,
 (StayFD *)&_n_PR_InsCode,
 (StayFD *)&_n_PR_StopD,
 (StayFD *)&_n_PR_PaySum,
 (StayFD *)&_n_PR_CalcSum,
 (StayFD *)&_n_PR_ContrSum,
 (StayFD *)&_n_PR_IndCode,
 (StayFD *)&_n_PR_Sel,
 (StayFD *)&_n_PR_SelY,
 (StayFD *)&_n_PR_SelM,
 NULL
};
static BYTE ix_B_PRLS[] = {1,1,68,0,1,2,3};
StayDataset _n_B_PRLS = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_PRLS,NULL,
           NULL,ix_B_PRLS,NULL,"B_PRLS",0};
pStayDataset B_PRLS = &_n_B_PRLS;

static pStayFD tcm_B_PRLS2ID[] =
{
 (StayFD *)&_n_LI_Nls,
 (StayFD *)&_n_LI_NumIdent,
 (StayFD *)&_n_LI_FullName,
 (StayFD *)&_n_LI_PayY,
 (StayFD *)&_n_LI_PayM,
 NULL
};
static BYTE ix_B_PRLS2ID[] = {2,1,3,0,1,2,2,67,0,3,4};
StayDataset _n_B_PRLS2ID = {NULL,TAG_DATASET,0,0,DS_BBASE,0,1,0,NULL,tcm_B_PRLS2ID,NULL,
           "LS:PR_LS2ID.DT",ix_B_PRLS2ID,NULL,"B_PRLS2ID",100};
pStayDataset B_PRLS2ID = &_n_B_PRLS2ID;

void *RPT_BS[] =
 {NULL,
  &_nn_RPT_BS,
  &_n_PR_CalcSum,
  &_n_PR_ContrSum,
  &_n_PR_FullName,
  &_n_LI_FullName,
  &_n_PR_IndCode,
  &_n_PR_InsCode,
  &_n_PR_Month,
  &_n_PR_Nls,
  &_n_LI_Nls,
  &_n_PR_NumIdent,
  &_n_LI_NumIdent,
  &_n_PR_PayM,
  &_n_LI_PayM,
  &_n_PR_PaySum,
  &_n_PR_PayY,
  &_n_LI_PayY,
  &_n_PR_Sel,
  &_n_PR_SelM,
  &_n_PR_SelY,
  &_n_PR_StartD,
  &_n_PR_StopD,
  &_n_PR_Year,
  &_n_PR_Count,
  &_n_PR_Pasp,
  &_n_PR_Ctz,
  &_n_PR_Pasp2NumId,
  &_n_Inv_Dn,
  &_n_Inv_Dk,
  &_n_Dat,
  (StayFD *)A_Inv,
  (StayFD *)A_Date,
  (StayFD *)B_PFURPT,
  (StayFD *)B_PRLS,
  (StayFD *)B_PRLS2ID,
  NULL};

PICMODULEEND(RPT_BS)

