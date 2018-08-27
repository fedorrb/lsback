/* Begin FCbegin */
//-------------------------------------------------------------------------
// STAY / W      Resource file DELAY.XME
//-------------------------------------------------------------------------
// Created 05\12\2016 13:21
//-------------------------------------------------------------------------

#include "DELAY.h"

/* End FCbegin */
/* Begin FCinclude */
/* End FCinclude */
/* Begin FChead */
PICMODULEBEG(DELAY)

static StayFD _nn_DELAY = {NULL,TAG_PIC,0,0,0,0,"DELAY",NULL};
/* End FChead */
/* Begin FCtypedef */
/* End FCtypedef */
/* Begin FCfield */
DWORD D_Nls;
StayFD _n_D_Nls = {&D_Nls,0,0,0,CLS_L,0,"D_Nls",""};
StayFD *_D_Nls = &_n_D_Nls;

WORD  D_Shifr;
StayFD _n_D_Shifr = {&D_Shifr,0,0,0,CLS_I,0,"D_Shifr",""};
StayFD *_D_Shifr = &_n_D_Shifr;

long  D_Delta1;
StayFD _n_D_Delta1 = {&D_Delta1,0,0,0,CLS_Ls,0,"D_Delta1",""};
StayFD *_D_Delta1 = &_n_D_Delta1;

long  D_Delta2;
StayFD _n_D_Delta2 = {&D_Delta2,0,0,0,CLS_Ls,0,"D_Delta2",""};
StayFD *_D_Delta2 = &_n_D_Delta2;

StayTime T_Beg;
StayFD _n_T_Beg = {&T_Beg,0,0,0,CLS_Time,0,"T_Beg",""};
StayFD *_T_Beg = &_n_T_Beg;

StayTime T_End;
StayFD _n_T_End = {&T_End,0,0,0,CLS_Time,0,"T_End",""};
StayFD *_T_End = &_n_T_End;

DWORD s_sec;
StayFD _n_s_sec = {&s_sec,0,0,0,CLS_L,0,"s_sec",""};
StayFD *_s_sec = &_n_s_sec;

DWORD s_ls;
StayFD _n_s_ls = {&s_ls,0,0,0,CLS_L,0,"s_ls",""};
StayFD *_s_ls = &_n_s_ls;

DWORD s_sum;
StayFD _n_s_sum = {&s_sum,0,0,0,CLS_L,0,"s_sum",""};
StayFD *_s_sum = &_n_s_sum;

STAYUI6 s_hour;
StayFD _n_s_hour = {&s_hour,0,0,0,CLS_H,2,"s_hour",""};
StayFD *_s_hour = &_n_s_hour;

DWORD s_optim;
StayFD _n_s_optim = {&s_optim,0,0,0,CLS_L,0,"s_optim",""};
StayFD *_s_optim = &_n_s_optim;

/* End FCfield */
/* Begin FCextern */
extern StayDataset _n_B_DelayLs;
extern StayDataset _n_B_TimeMas;
extern StayDataset _n_B_Sum;
/* End FCextern */
/* Begin FCdataset */
static StayFD *tcm_B_DelayLs[] =
{
 (StayFD *)&_n_D_Nls,
 (StayFD *)&_n_D_Shifr,
 (StayFD *)&_n_D_Delta1,
 (StayFD *)&_n_D_Delta2,
 NULL
};
static BYTE ix_B_DelayLs[] = {4,1,65,0,2,65,1,3,65,2,4,65,3};
StayDataset _n_B_DelayLs = {NULL,TAG_DATASET,0,0,DS_BBASE,0,1,0,NULL,tcm_B_DelayLs,NULL,
"WORK:DELAYLS.DT",ix_B_DelayLs,NULL,"B_DelayLs",0};
StayDataset *B_DelayLs = &_n_B_DelayLs;

static StayFD *tcm_B_TimeMas[] =
{
 (StayFD *)&_n_T_Beg,
 (StayFD *)&_n_T_End,
 NULL
};
StayDataset _n_B_TimeMas = {NULL,TAG_DATASET,0,0,DS_STRUCT,0,1,0,NULL,tcm_B_TimeMas,NULL,
"WORK:TIMEMAS.DT",NULL,NULL,"B_TimeMas",0};
StayDataset *B_TimeMas = &_n_B_TimeMas;

static StayFD *tcm_B_Sum[] =
{
 (StayFD *)&_n_s_sec,
 (StayFD *)&_n_s_ls,
 (StayFD *)&_n_s_sum,
 (StayFD *)&_n_s_hour,
 (StayFD *)&_n_s_optim,
 NULL
};
static BYTE ix_B_Sum[] = {1,1,65,0};
StayDataset _n_B_Sum = {NULL,TAG_DATASET,0,0,DS_BBASE,0,1,0,NULL,tcm_B_Sum,NULL,
"WORK:BSUM.DT",ix_B_Sum,NULL,"B_Sum",0};
StayDataset *B_Sum = &_n_B_Sum;

/* End FCdataset */
/* Begin FCmenu */
/* End FCmenu */
/* Begin FCframe */
/* End FCframe */
/* Begin FCtabl */
void *DELAY[] =
 {NULL,
  &_nn_DELAY,
  &_n_D_Nls,
  &_n_D_Shifr,
  &_n_D_Delta1,
  &_n_D_Delta2,
  &_n_T_Beg,
  &_n_T_End,
  &_n_s_sec,
  &_n_s_ls,
  &_n_s_sum,
  &_n_s_hour,
  &_n_s_optim,
  (StayFD *)B_DelayLs,
  (StayFD *)B_TimeMas,
  (StayFD *)B_Sum,
  NULL};

PICMODULEEND(DELAY)

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
