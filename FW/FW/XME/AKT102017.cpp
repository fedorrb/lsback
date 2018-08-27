/* Begin FCbegin */
//-------------------------------------------------------------------------
// STAY / W      Resource file AKT102017.XME
//-------------------------------------------------------------------------
// Created 03\07\2017 13:22
//-------------------------------------------------------------------------

#include "AKT102017.h"

/* End FCbegin */
/* Begin FCinclude */
/* End FCinclude */
/* Begin FChead */
PICMODULEBEG(AKT102017)

static StayFD _nn_AKT102017 = {NULL,TAG_PIC,0,0,0,0,"AKT102017",NULL};
/* End FChead */
/* Begin FCtypedef */
/* End FCtypedef */
/* Begin FCfield */
WORD  AK_ID;
StayFD _n_AK_ID = {&AK_ID,0,0,0,CLS_I,0,"AK_ID","Ключ1, код таблиці"};
StayFD *_AK_ID = &_n_AK_ID;

WORD  AK_Code;
StayFD _n_AK_Code = {&AK_Code,0,0,0,CLS_I,0,"AK_Code","Ключ2, код діапазону підвищення"};
StayFD *_AK_Code = &_n_AK_Code;

DWORD AK_Accounts;
StayFD _n_AK_Accounts = {&AK_Accounts,0,0,0,CLS_L,0,"AK_Accounts","Кількість особових рахунків"};
StayFD *_AK_Accounts = &_n_AK_Accounts;

STAYI6 AK_SumBefore;
StayFD _n_AK_SumBefore = {&AK_SumBefore,0,0,0,CLS_Hs,2,"AK_SumBefore","Сума пенсій до перерахунку"};
StayFD *_AK_SumBefore = &_n_AK_SumBefore;

STAYI6 AK_SumAfter1;
StayFD _n_AK_SumAfter1 = {&AK_SumAfter1,0,0,0,CLS_Hs,2,"AK_SumAfter1","Сума пенсій після перерахунку, етап 1"};
StayFD *_AK_SumAfter1 = &_n_AK_SumAfter1;

STAYI6 AK_SumDo2;
StayFD _n_AK_SumDo2 = {&AK_SumDo2,0,0,0,CLS_Hs,2,"AK_SumDo2","Сума пенсій до перерахунку"};
StayFD *_AK_SumDo2 = &_n_AK_SumDo2;

STAYI6 AK_SumAfter2;
StayFD _n_AK_SumAfter2 = {&AK_SumAfter2,0,0,0,CLS_Hs,2,"AK_SumAfter2","Сума пенсій після перерахунку, етап 2"};
StayFD *_AK_SumAfter2 = &_n_AK_SumAfter2;

STAYI6 AK_SumOver1;
StayFD _n_AK_SumOver1 = {&AK_SumOver1,0,0,0,CLS_Hs,2,"AK_SumOver1","Сума додаткових витрат, етап 1"};
StayFD *_AK_SumOver1 = &_n_AK_SumOver1;

STAYI6 AK_SumOver2;
StayFD _n_AK_SumOver2 = {&AK_SumOver2,0,0,0,CLS_Hs,2,"AK_SumOver2","Сума додаткових витрат, етап 2"};
StayFD *_AK_SumOver2 = &_n_AK_SumOver2;

STAYI6 AK_SumOver3;
StayFD _n_AK_SumOver3 = {&AK_SumOver3,0,0,0,CLS_Hs,2,"AK_SumOver3","Сума додаткових витрат, загалом"};
StayFD *_AK_SumOver3 = &_n_AK_SumOver3;

STAYI6 AK_SumDo3;
StayFD _n_AK_SumDo3 = {&AK_SumDo3,0,0,0,CLS_Hs,2,"AK_SumDo3","Сума пенсій до перерахунку"};
StayFD *_AK_SumDo3 = &_n_AK_SumDo3;

STAYI6 AK_SumAfter3;
StayFD _n_AK_SumAfter3 = {&AK_SumAfter3,0,0,0,CLS_Hs,2,"AK_SumAfter3","Сума пенсій після перерахунку, етап 1"};
StayFD *_AK_SumAfter3 = &_n_AK_SumAfter3;

char AK_StrPlace[65];
StayFD _n_AK_StrPlace = {&AK_StrPlace,0,0,0,CLS_V,64,"AK_StrPlace",""};
StayFD *_AK_StrPlace = &_n_AK_StrPlace;

char AK_StrDiap[21];
StayFD _n_AK_StrDiap = {&AK_StrDiap,0,0,0,CLS_V,20,"AK_StrDiap",""};
StayFD *_AK_StrDiap = &_n_AK_StrDiap;

char AK_StrVar[25];
StayFD _n_AK_StrVar = {&AK_StrVar,0,0,0,CLS_V,24,"AK_StrVar",""};
StayFD *_AK_StrVar = &_n_AK_StrVar;

DWORD AK_Nls1;
StayFD _n_AK_Nls1 = {&AK_Nls1,0,0,0,CLS_L,0,"AK_Nls1",""};
StayFD *_AK_Nls1 = &_n_AK_Nls1;

DWORD AK_Nls2;
StayFD _n_AK_Nls2 = {&AK_Nls2,0,0,0,CLS_L,0,"AK_Nls2",""};
StayFD *_AK_Nls2 = &_n_AK_Nls2;

DWORD AK_Nls;
StayFD _n_AK_Nls = {&AK_Nls,0,0,0,CLS_L,0,"AK_Nls",""};
StayFD *_AK_Nls = &_n_AK_Nls;

DWORD Dop_Nls;
StayFD _n_Dop_Nls = {&Dop_Nls,0,0,0,CLS_L,0,"Dop_Nls",""};
StayFD *_Dop_Nls = &_n_Dop_Nls;

WORD  Dop_Var;
StayFD _n_Dop_Var = {&Dop_Var,0,0,0,CLS_I,0,"Dop_Var",""};
StayFD *_Dop_Var = &_n_Dop_Var;

STAYI6 Dop_SumOld;
StayFD _n_Dop_SumOld = {&Dop_SumOld,0,0,0,CLS_Hs,2,"Dop_SumOld",""};
StayFD *_Dop_SumOld = &_n_Dop_SumOld;

STAYI6 Dop_SumNew1;
StayFD _n_Dop_SumNew1 = {&Dop_SumNew1,0,0,0,CLS_Hs,2,"Dop_SumNew1",""};
StayFD *_Dop_SumNew1 = &_n_Dop_SumNew1;

STAYI6 Dop_SumNew2;
StayFD _n_Dop_SumNew2 = {&Dop_SumNew2,0,0,0,CLS_Hs,2,"Dop_SumNew2",""};
StayFD *_Dop_SumNew2 = &_n_Dop_SumNew2;

STAYI6 Dop_Delta1;
StayFD _n_Dop_Delta1 = {&Dop_Delta1,0,0,0,CLS_Hs,2,"Dop_Delta1",""};
StayFD *_Dop_Delta1 = &_n_Dop_Delta1;

STAYI6 Dop_Delta2;
StayFD _n_Dop_Delta2 = {&Dop_Delta2,0,0,0,CLS_Hs,2,"Dop_Delta2",""};
StayFD *_Dop_Delta2 = &_n_Dop_Delta2;

STAYI6 Dop_Delta3;
StayFD _n_Dop_Delta3 = {&Dop_Delta3,0,0,0,CLS_Hs,2,"Dop_Delta3",""};
StayFD *_Dop_Delta3 = &_n_Dop_Delta3;

DWORD AK_Account2;
StayFD _n_AK_Account2 = {&AK_Account2,0,0,0,CLS_L,0,"AK_Account2",""};
StayFD *_AK_Account2 = &_n_AK_Account2;

DWORD AK_Account3;
StayFD _n_AK_Account3 = {&AK_Account3,0,0,0,CLS_L,0,"AK_Account3",""};
StayFD *_AK_Account3 = &_n_AK_Account3;

/* End FCfield */
/* Begin FCextern */
extern StayDataset _n_AKT1017;
extern StayDataset _n_B_Nls;
extern StayDataset _n_B_Nls1;
extern StayDataset _n_B_Nls2;
extern StayDataset _n_B_Dop;
/* End FCextern */
/* Begin FCdataset */
static StayFD *tcm_AKT1017[] =
{
 (StayFD *)&_n_AK_ID,
 (StayFD *)&_n_AK_Code,
 (StayFD *)&_n_AK_Accounts,
 (StayFD *)&_n_AK_SumBefore,
 (StayFD *)&_n_AK_SumAfter1,
 (StayFD *)&_n_AK_SumOver1,
 (StayFD *)&_n_AK_Account2,
 (StayFD *)&_n_AK_SumDo2,
 (StayFD *)&_n_AK_SumAfter2,
 (StayFD *)&_n_AK_SumOver2,
 (StayFD *)&_n_AK_Account3,
 (StayFD *)&_n_AK_SumDo3,
 (StayFD *)&_n_AK_SumAfter3,
 (StayFD *)&_n_AK_SumOver3,
 NULL
};
static BYTE ix_AKT1017[] = {1,1,2,0,1};
StayDataset _n_AKT1017 = {NULL,TAG_DATASET,0,0,DS_BBASE,0,1,0,NULL,tcm_AKT1017,NULL,
"SVODRES:AKT1017.DT",ix_AKT1017,NULL,"AKT1017",100};
StayDataset *AKT1017 = &_n_AKT1017;

static StayFD *tcm_B_Nls[] =
{
 (StayFD *)&_n_AK_Nls,
 NULL
};
static BYTE ix_B_Nls[] = {1,1,65,0};
StayDataset _n_B_Nls = {NULL,TAG_DATASET,0,0,DS_BBASE,0,1,0,NULL,tcm_B_Nls,NULL,
"WORK:NLS.dt",ix_B_Nls,NULL,"B_Nls",0};
StayDataset *B_Nls = &_n_B_Nls;

static StayFD *tcm_B_Nls1[] =
{
 (StayFD *)&_n_AK_Nls1,
 NULL
};
static BYTE ix_B_Nls1[] = {1,1,65,0};
StayDataset _n_B_Nls1 = {NULL,TAG_DATASET,0,0,DS_BBASE,0,1,0,NULL,tcm_B_Nls1,NULL,
"WORK:NLS1.DT",ix_B_Nls1,NULL,"B_Nls1",0};
StayDataset *B_Nls1 = &_n_B_Nls1;

static StayFD *tcm_B_Nls2[] =
{
 (StayFD *)&_n_AK_Nls2,
 NULL
};
static BYTE ix_B_Nls2[] = {1,1,65,0};
StayDataset _n_B_Nls2 = {NULL,TAG_DATASET,0,0,DS_BBASE,0,1,0,NULL,tcm_B_Nls2,NULL,
"WORK:NLS2.DT",ix_B_Nls2,NULL,"B_Nls2",0};
StayDataset *B_Nls2 = &_n_B_Nls2;

static StayFD *tcm_B_Dop[] =
{
 (StayFD *)&_n_Dop_Nls,
 (StayFD *)&_n_Dop_Var,
 (StayFD *)&_n_Dop_SumOld,
 (StayFD *)&_n_Dop_SumNew1,
 (StayFD *)&_n_Dop_SumNew2,
 (StayFD *)&_n_Dop_Delta1,
 (StayFD *)&_n_Dop_Delta2,
 (StayFD *)&_n_Dop_Delta3,
 NULL
};
static BYTE ix_B_Dop[] = {5,1,2,1,0,2,65,0,3,65,5,4,65,6,5,65,7};
StayDataset _n_B_Dop = {NULL,TAG_DATASET,0,0,DS_BBASE,0,1,0,NULL,tcm_B_Dop,NULL,
"WORK:AKTDOP10.DT",ix_B_Dop,NULL,"B_Dop",100};
StayDataset *B_Dop = &_n_B_Dop;

/* End FCdataset */
/* Begin FCmenu */
/* End FCmenu */
/* Begin FCframe */
/* End FCframe */
/* Begin FCtabl */
void *AKT102017[] =
 {NULL,
  &_nn_AKT102017,
  &_n_AK_ID,
  &_n_AK_Code,
  &_n_AK_Accounts,
  &_n_AK_SumBefore,
  &_n_AK_SumAfter1,
  &_n_AK_SumDo2,
  &_n_AK_SumAfter2,
  &_n_AK_SumOver1,
  &_n_AK_SumOver2,
  &_n_AK_SumOver3,
  &_n_AK_SumDo3,
  &_n_AK_SumAfter3,
  &_n_AK_StrPlace,
  &_n_AK_StrDiap,
  &_n_AK_StrVar,
  &_n_AK_Nls1,
  &_n_AK_Nls2,
  &_n_AK_Nls,
  &_n_Dop_Nls,
  &_n_Dop_Var,
  &_n_Dop_SumOld,
  &_n_Dop_SumNew1,
  &_n_Dop_SumNew2,
  &_n_Dop_Delta1,
  &_n_Dop_Delta2,
  &_n_Dop_Delta3,
  &_n_AK_Account2,
  &_n_AK_Account3,
  (StayFD *)AKT1017,
  (StayFD *)B_Nls,
  (StayFD *)B_Nls1,
  (StayFD *)B_Nls2,
  (StayFD *)B_Dop,
  NULL};

PICMODULEEND(AKT102017)

/* End FCtabl */
/* Begin FTfield */
/* End FTfield */
/* Begin FTdataset */
/* End FTdataset */
/* Begin FTtcm */
/* End FTtcm */
/* Begin FTframe */
/* End FTframe */
/* Begin FTtabl */
/* End FTtabl */
/* Begin FCmmm */
/* End FCmmm */
/* Begin FMfield */
/* End FMfield */
/* Begin FMdataset */
/* End FMdataset */
/* Begin FMframe */
/* End FMframe */
/* Begin FMend */
/* End FMend */
/* Begin FTend */
/* End FTend */
/* Begin FCend */
/* End FCend */
