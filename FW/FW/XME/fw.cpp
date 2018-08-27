/* Begin FCbegin */
//-------------------------------------------------------------------------
// STAY / W      Resource file FW.XME
//-------------------------------------------------------------------------
// Created 03\05\2018 15:16
//-------------------------------------------------------------------------

#include "FW.h"

/* End FCbegin */
/* Begin FCinclude */
/* End FCinclude */
/* Begin FChead */
PICMODULEBEG(FW)

static StayFD _nn_FW = {NULL,TAG_PIC,0,0,0,0,"FW",NULL};
/* End FChead */
/* Begin FCtypedef */
/* End FCtypedef */
/* Begin FCfield */
WORD  FW_Raj;
StayFD _n_FW_Raj = {&FW_Raj,0,0,0,CLS_I,0,"FW_Raj","Номер района"};
StayFD *_FW_Raj = &_n_FW_Raj;

DWORD FW_Nls;
StayFD _n_FW_Nls = {&FW_Nls,0,0,0,CLS_L,0,"FW_Nls","Номер лицевого"};
StayFD *_FW_Nls = &_n_FW_Nls;

char FW_Fio[51];
StayFD _n_FW_Fio = {&FW_Fio,0,0,0,CLS_V,50,"FW_Fio",""};
StayFD *_FW_Fio = &_n_FW_Fio;

char titul[51];
StayFD _n_titul = {&titul,0,0,0,CLS_V,50,"titul","Заголовок отчета"};
StayFD *_titul = &_n_titul;

STAYUI6 FW_NLS_FULL;
StayFD _n_FW_NLS_FULL = {&FW_NLS_FULL,0,0,0,CLS_H,0,"FW_NLS_FULL",""};
StayFD *_FW_NLS_FULL = &_n_FW_NLS_FULL;

STAYUI6 FW_LsNomig;
StayFD _n_FW_LsNomig = {&FW_LsNomig,0,0,0,CLS_H,0,"FW_LsNomig",""};
StayFD *_FW_LsNomig = &_n_FW_LsNomig;

STAYUI6 FW_IdCode;
StayFD _n_FW_IdCode = {&FW_IdCode,0,0,0,CLS_H,0,"FW_IdCode",""};
StayFD *_FW_IdCode = &_n_FW_IdCode;

DWORD OR_Nls;
StayFD _n_OR_Nls = {&OR_Nls,0,0,0,CLS_L,0,"OR_Nls",""};
StayFD *_OR_Nls = &_n_OR_Nls;

STAYUI6 OR_FullNls;
StayFD _n_OR_FullNls = {&OR_FullNls,0,0,0,CLS_H,0,"OR_FullNls",""};
StayFD *_OR_FullNls = &_n_OR_FullNls;

char OR_Adress[256];
StayFD _n_OR_Adress = {&OR_Adress,0,0,0,CLS_V,255,"OR_Adress",""};
StayFD *_OR_Adress = &_n_OR_Adress;

STAYUI6 OR_Nomig;
StayFD _n_OR_Nomig = {&OR_Nomig,0,0,0,CLS_H,0,"OR_Nomig",""};
StayFD *_OR_Nomig = &_n_OR_Nomig;

BYTE  KOR_Number;
StayFD _n_KOR_Number = {&KOR_Number,0,0,0,CLS_S,0,"KOR_Number",""};
StayFD *_KOR_Number = &_n_KOR_Number;

STAYUI6 KOR_Nomig;
StayFD _n_KOR_Nomig = {&KOR_Nomig,0,0,0,CLS_H,0,"KOR_Nomig",""};
StayFD *_KOR_Nomig = &_n_KOR_Nomig;

BYTE  IGD_Number;
StayFD _n_IGD_Number = {&IGD_Number,0,0,0,CLS_S,0,"IGD_Number",""};
StayFD *_IGD_Number = &_n_IGD_Number;

STAYUI6 IGD_Nomig;
StayFD _n_IGD_Nomig = {&IGD_Nomig,0,0,0,CLS_H,0,"IGD_Nomig",""};
StayFD *_IGD_Nomig = &_n_IGD_Nomig;

STAYUI6 KOR_ID;
StayFD _n_KOR_ID = {&KOR_ID,0,0,0,CLS_H,0,"KOR_ID",""};
StayFD *_KOR_ID = &_n_KOR_ID;

STAYUI6 IGD_ID;
StayFD _n_IGD_ID = {&IGD_ID,0,0,0,CLS_H,0,"IGD_ID",""};
StayFD *_IGD_ID = &_n_IGD_ID;

STAYUI8 FW_PFUNls;
StayFD _n_FW_PFUNls = {&FW_PFUNls,0,0,0,CLS_G,0,"FW_PFUNls",""};
StayFD *_FW_PFUNls = &_n_FW_PFUNls;

/* End FCfield */
/* Begin FCextern */
extern StayDataset _n_B_FW;
extern StayDataset _n_B_OR;
extern StayDataset _n_NKOR;
extern StayDataset _n_NIGD;
/* End FCextern */
/* Begin FCdataset */
static StayFD *tcm_B_FW[] =
{
 (StayFD *)&_n_FW_Raj,
 (StayFD *)&_n_FW_Nls,
 (StayFD *)&_n_FW_Fio,
 NULL
};
static BYTE ix_B_FW[] = {2,1,130,0,1,2,129,1};
StayDataset _n_B_FW = {NULL,TAG_DATASET,0,0,DS_BBASE,0,1,0,NULL,tcm_B_FW,NULL,
"WORK:FW.DT",ix_B_FW,NULL,"B_FW",0};
StayDataset *B_FW = &_n_B_FW;

static StayFD *tcm_B_OR[] =
{
 (StayFD *)&_n_OR_Nls,
 (StayFD *)&_n_OR_FullNls,
 (StayFD *)&_n_OR_Nomig,
 (StayFD *)&_n_OR_Adress,
 (StayFD *)&_n_NKOR,
 (StayFD *)&_n_NIGD,
 NULL
};
static BYTE ix_B_OR[] = {1,1,1,0};
StayDataset _n_B_OR = {NULL,TAG_DATASET,0,0,DS_BBASE,0,1,0,NULL,tcm_B_OR,NULL,
"LS:OR.DT",ix_B_OR,NULL,"B_OR",0};
StayDataset *B_OR = &_n_B_OR;

static StayFD *tcm_NKOR[] =
{
 (StayFD *)&_n_KOR_Number,
 (StayFD *)&_n_KOR_Nomig,
 (StayFD *)&_n_KOR_ID,
 NULL
};
static BYTE ix_NKOR[] = {1,1,1,0};
StayDataset _n_NKOR = {NULL,TAG_DATASET,0,0,DS_BBASE,0,1,0,NULL,tcm_NKOR,NULL,
NULL,ix_NKOR,NULL,"NKOR",0};
StayDataset *NKOR = &_n_NKOR;

static StayFD *tcm_NIGD[] =
{
 (StayFD *)&_n_IGD_Number,
 (StayFD *)&_n_IGD_Nomig,
 (StayFD *)&_n_IGD_ID,
 NULL
};
static BYTE ix_NIGD[] = {1,1,1,0};
StayDataset _n_NIGD = {NULL,TAG_DATASET,0,0,DS_BBASE,0,1,0,NULL,tcm_NIGD,NULL,
NULL,ix_NIGD,NULL,"NIGD",0};
StayDataset *NIGD = &_n_NIGD;

/* End FCdataset */
/* Begin FCmenu */
/* End FCmenu */
/* Begin FCframe */
/* End FCframe */
/* Begin FCtabl */
void *FW[] =
 {NULL,
  &_nn_FW,
  &_n_FW_Raj,
  &_n_FW_Nls,
  &_n_FW_Fio,
  &_n_titul,
  &_n_FW_NLS_FULL,
  &_n_FW_LsNomig,
  &_n_FW_IdCode,
  &_n_OR_Nls,
  &_n_OR_FullNls,
  &_n_OR_Adress,
  &_n_OR_Nomig,
  &_n_KOR_Number,
  &_n_KOR_Nomig,
  &_n_IGD_Number,
  &_n_IGD_Nomig,
  &_n_KOR_ID,
  &_n_IGD_ID,
  &_n_FW_PFUNls,
  (StayFD *)B_FW,
  (StayFD *)B_OR,
  (StayFD *)NKOR,
  (StayFD *)NIGD,
  NULL};

PICMODULEEND(FW)

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
