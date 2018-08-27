//-------------------------------------------------------------------------
// STAY/W      Resource file KLDOPVSR.XME
//-------------------------------------------------------------------------
// Created 26\10\2011 11:49
//-------------------------------------------------------------------------

#include "KLDOPVSR.h"

PICMODULEBEG(KLDOPVSR)

static StayFD _nn_KLDOPVSR = {NULL,TAG_PIC,0,0,0,0,"KLDOPVSR",NULL};
BYTE  KlDopVsr_Sex;
StayFD _n_KlDopVsr_Sex = {&KlDopVsr_Sex,0,0,0,CLS_S,0,"KlDopVsr_Sex","Пол 1-М, 2-Ж"};
pStayFD _KlDopVsr_Sex = &_n_KlDopVsr_Sex;

StayDate KlDopVsr_DBeg;
StayFD _n_KlDopVsr_DBeg = {&KlDopVsr_DBeg,0,0,0,CLS_Date,0,"KlDopVsr_DBeg",""};
pStayFD _KlDopVsr_DBeg = &_n_KlDopVsr_DBeg;

StayDate KlDopVsr_DEnd;
StayFD _n_KlDopVsr_DEnd = {&KlDopVsr_DEnd,0,0,0,CLS_Date,0,"KlDopVsr_DEnd",""};
pStayFD _KlDopVsr_DEnd = &_n_KlDopVsr_DEnd;

WORD  KlDopVsr_CV;
StayFD _n_KlDopVsr_CV = {&KlDopVsr_CV,0,0,0,CLS_I,0,"KlDopVsr_CV",""};
pStayFD _KlDopVsr_CV = &_n_KlDopVsr_CV;

BYTE  KlDopVsr_DV;
StayFD _n_KlDopVsr_DV = {&KlDopVsr_DV,0,0,0,CLS_S,0,"KlDopVsr_DV",""};
pStayFD _KlDopVsr_DV = &_n_KlDopVsr_DV;

extern StayDataset _n_B_KlDopVsr;
static pStayFD tcm_B_KlDopVsr[] =
{
 (StayFD *)&_n_KlDopVsr_Sex,
 (StayFD *)&_n_KlDopVsr_DBeg,
 (StayFD *)&_n_KlDopVsr_DEnd,
 (StayFD *)&_n_KlDopVsr_CV,
 (StayFD *)&_n_KlDopVsr_DV,
 NULL
};
static BYTE ix_B_KlDopVsr[] = {1,1,131,0,1,2};
StayDataset _n_B_KlDopVsr = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlDopVsr,NULL,
           "KLBASE1:KLDOPVSR.DT",ix_B_KlDopVsr,"Довідник додаткового стажу","B_KlDopVsr",};
pStayDataset B_KlDopVsr = &_n_B_KlDopVsr;

void *KLDOPVSR[] =
 {NULL,
  &_nn_KLDOPVSR,
  &_n_KlDopVsr_Sex,
  &_n_KlDopVsr_DBeg,
  &_n_KlDopVsr_DEnd,
  &_n_KlDopVsr_CV,
  &_n_KlDopVsr_DV,
  (StayFD *)B_KlDopVsr,
  NULL};

PICMODULEEND(KLDOPVSR)

