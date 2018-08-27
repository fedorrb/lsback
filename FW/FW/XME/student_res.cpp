/* Begin FCbegin */
//-------------------------------------------------------------------------
// STAY / W      Resource file STUDENT_RES.XME
//-------------------------------------------------------------------------
// Created 12\04\2017 10:51
//-------------------------------------------------------------------------

#include "STUDENT_RES.h"

/* End FCbegin */
/* Begin FCinclude */
/* End FCinclude */
/* Begin FChead */
PICMODULEBEG(STUDENT_RES)

static StayFD _nn_STUDENT_RES = {NULL,TAG_PIC,0,0,0,0,"STUDENT_RES",NULL};
/* End FChead */
/* Begin FCtypedef */
/* End FCtypedef */
/* Begin FCfield */
WORD  Stud_Region;
StayFD _n_Stud_Region = {&Stud_Region,0,0,0,CLS_I,0,"Stud_Region","Регіон (область)"};
StayFD *_Stud_Region = &_n_Stud_Region;

WORD  Stud_Rayon;
StayFD _n_Stud_Rayon = {&Stud_Rayon,0,0,0,CLS_I,0,"Stud_Rayon",""};
StayFD *_Stud_Rayon = &_n_Stud_Rayon;

DWORD Stud_Sirota;
StayFD _n_Stud_Sirota = {&Stud_Sirota,0,0,0,CLS_L,0,"Stud_Sirota",""};
StayFD *_Stud_Sirota = &_n_Stud_Sirota;

DWORD Stud_CHAES;
StayFD _n_Stud_CHAES = {&Stud_CHAES,0,0,0,CLS_L,0,"Stud_CHAES",""};
StayFD *_Stud_CHAES = &_n_Stud_CHAES;

DWORD Stud_Shaht;
StayFD _n_Stud_Shaht = {&Stud_Shaht,0,0,0,CLS_L,0,"Stud_Shaht",""};
StayFD *_Stud_Shaht = &_n_Stud_Shaht;

DWORD Stud_ShahtStg;
StayFD _n_Stud_ShahtStg = {&Stud_ShahtStg,0,0,0,CLS_L,0,"Stud_ShahtStg","батьки яких є шахтарями із стажем 15 років, або загинули на шахті"};
StayFD *_Stud_ShahtStg = &_n_Stud_ShahtStg;

DWORD Stud_UBD;
StayFD _n_Stud_UBD = {&Stud_UBD,0,0,0,CLS_L,0,"Stud_UBD","учасники бойових дій"};
StayFD *_Stud_UBD = &_n_Stud_UBD;

DWORD Stud_ATO;
StayFD _n_Stud_ATO = {&Stud_ATO,0,0,0,CLS_L,0,"Stud_ATO",""};
StayFD *_Stud_ATO = &_n_Stud_ATO;

DWORD Stud_Revol;
StayFD _n_Stud_Revol = {&Stud_Revol,0,0,0,CLS_L,0,"Stud_Revol",""};
StayFD *_Stud_Revol = &_n_Stud_Revol;

DWORD Stud_Moved;
StayFD _n_Stud_Moved = {&Stud_Moved,0,0,0,CLS_L,0,"Stud_Moved","зареєстровані, як внутрішньо переміщені особи"};
StayFD *_Stud_Moved = &_n_Stud_Moved;

DWORD Stud_Social;
StayFD _n_Stud_Social = {&Stud_Social,0,0,0,CLS_L,0,"Stud_Social",""};
StayFD *_Stud_Social = &_n_Stud_Social;

DWORD Stud_Inv;
StayFD _n_Stud_Inv = {&Stud_Inv,0,0,0,CLS_L,0,"Stud_Inv",""};
StayFD *_Stud_Inv = &_n_Stud_Inv;

DWORD Stud_Malozab;
StayFD _n_Stud_Malozab = {&Stud_Malozab,0,0,0,CLS_L,0,"Stud_Malozab",""};
StayFD *_Stud_Malozab = &_n_Stud_Malozab;

char S_NameRegion[21];
StayFD _n_S_NameRegion = {&S_NameRegion,0,0,0,CLS_V,20,"S_NameRegion","Назва області"};
StayFD *_S_NameRegion = &_n_S_NameRegion;

DWORD S_Sum1;
StayFD _n_S_Sum1 = {&S_Sum1,0,0,0,CLS_L,0,"S_Sum1",""};
StayFD *_S_Sum1 = &_n_S_Sum1;

DWORD S_Sum2;
StayFD _n_S_Sum2 = {&S_Sum2,0,0,0,CLS_L,0,"S_Sum2",""};
StayFD *_S_Sum2 = &_n_S_Sum2;

DWORD S_Sum3;
StayFD _n_S_Sum3 = {&S_Sum3,0,0,0,CLS_L,0,"S_Sum3",""};
StayFD *_S_Sum3 = &_n_S_Sum3;

DWORD S_Sum4;
StayFD _n_S_Sum4 = {&S_Sum4,0,0,0,CLS_L,0,"S_Sum4",""};
StayFD *_S_Sum4 = &_n_S_Sum4;

DWORD S_Sum5;
StayFD _n_S_Sum5 = {&S_Sum5,0,0,0,CLS_L,0,"S_Sum5",""};
StayFD *_S_Sum5 = &_n_S_Sum5;

DWORD S_Sum6;
StayFD _n_S_Sum6 = {&S_Sum6,0,0,0,CLS_L,0,"S_Sum6",""};
StayFD *_S_Sum6 = &_n_S_Sum6;

DWORD S_Sum7;
StayFD _n_S_Sum7 = {&S_Sum7,0,0,0,CLS_L,0,"S_Sum7",""};
StayFD *_S_Sum7 = &_n_S_Sum7;

DWORD S_Sum8;
StayFD _n_S_Sum8 = {&S_Sum8,0,0,0,CLS_L,0,"S_Sum8",""};
StayFD *_S_Sum8 = &_n_S_Sum8;

DWORD S_Sum9;
StayFD _n_S_Sum9 = {&S_Sum9,0,0,0,CLS_L,0,"S_Sum9",""};
StayFD *_S_Sum9 = &_n_S_Sum9;

DWORD S_Sum10;
StayFD _n_S_Sum10 = {&S_Sum10,0,0,0,CLS_L,0,"S_Sum10",""};
StayFD *_S_Sum10 = &_n_S_Sum10;

DWORD S_Sum11;
StayFD _n_S_Sum11 = {&S_Sum11,0,0,0,CLS_L,0,"S_Sum11",""};
StayFD *_S_Sum11 = &_n_S_Sum11;

DWORD S_Sum1Ttl;
StayFD _n_S_Sum1Ttl = {&S_Sum1Ttl,0,0,0,CLS_L,0,"S_Sum1Ttl",""};
StayFD *_S_Sum1Ttl = &_n_S_Sum1Ttl;

DWORD S_Sum2Ttl;
StayFD _n_S_Sum2Ttl = {&S_Sum2Ttl,0,0,0,CLS_L,0,"S_Sum2Ttl",""};
StayFD *_S_Sum2Ttl = &_n_S_Sum2Ttl;

DWORD S_Sum3Ttl;
StayFD _n_S_Sum3Ttl = {&S_Sum3Ttl,0,0,0,CLS_L,0,"S_Sum3Ttl",""};
StayFD *_S_Sum3Ttl = &_n_S_Sum3Ttl;

DWORD S_Sum4Ttl;
StayFD _n_S_Sum4Ttl = {&S_Sum4Ttl,0,0,0,CLS_L,0,"S_Sum4Ttl",""};
StayFD *_S_Sum4Ttl = &_n_S_Sum4Ttl;

DWORD S_Sum5Ttl;
StayFD _n_S_Sum5Ttl = {&S_Sum5Ttl,0,0,0,CLS_L,0,"S_Sum5Ttl",""};
StayFD *_S_Sum5Ttl = &_n_S_Sum5Ttl;

DWORD S_Sum6Ttl;
StayFD _n_S_Sum6Ttl = {&S_Sum6Ttl,0,0,0,CLS_L,0,"S_Sum6Ttl",""};
StayFD *_S_Sum6Ttl = &_n_S_Sum6Ttl;

DWORD S_Sum7Ttl;
StayFD _n_S_Sum7Ttl = {&S_Sum7Ttl,0,0,0,CLS_L,0,"S_Sum7Ttl",""};
StayFD *_S_Sum7Ttl = &_n_S_Sum7Ttl;

DWORD S_Sum8Ttl;
StayFD _n_S_Sum8Ttl = {&S_Sum8Ttl,0,0,0,CLS_L,0,"S_Sum8Ttl",""};
StayFD *_S_Sum8Ttl = &_n_S_Sum8Ttl;

DWORD S_Sum9Ttl;
StayFD _n_S_Sum9Ttl = {&S_Sum9Ttl,0,0,0,CLS_L,0,"S_Sum9Ttl",""};
StayFD *_S_Sum9Ttl = &_n_S_Sum9Ttl;

DWORD S_Sum10Ttl;
StayFD _n_S_Sum10Ttl = {&S_Sum10Ttl,0,0,0,CLS_L,0,"S_Sum10Ttl",""};
StayFD *_S_Sum10Ttl = &_n_S_Sum10Ttl;

DWORD S_Sum11Ttl;
StayFD _n_S_Sum11Ttl = {&S_Sum11Ttl,0,0,0,CLS_L,0,"S_Sum11Ttl",""};
StayFD *_S_Sum11Ttl = &_n_S_Sum11Ttl;

StayDate Stud_Date;
StayFD _n_Stud_Date = {&Stud_Date,0,0,0,CLS_Date,0,"Stud_Date",""};
StayFD *_Stud_Date = &_n_Stud_Date;

/* End FCfield */
/* Begin FCextern */
extern StayDataset _n_B_Stud1045;
/* End FCextern */
/* Begin FCdataset */
static StayFD *tcm_B_Stud1045[] =
{
 (StayFD *)&_n_Stud_Region,
 (StayFD *)&_n_Stud_Rayon,
 (StayFD *)&_n_Stud_Sirota,
 (StayFD *)&_n_Stud_CHAES,
 (StayFD *)&_n_Stud_Shaht,
 (StayFD *)&_n_Stud_ShahtStg,
 (StayFD *)&_n_Stud_UBD,
 (StayFD *)&_n_Stud_ATO,
 (StayFD *)&_n_Stud_Revol,
 (StayFD *)&_n_Stud_Moved,
 (StayFD *)&_n_Stud_Social,
 (StayFD *)&_n_Stud_Inv,
 (StayFD *)&_n_Stud_Malozab,
 NULL
};
static BYTE ix_B_Stud1045[] = {2,1,65,1,2,66,0,1};
StayDataset _n_B_Stud1045 = {NULL,TAG_DATASET,0,0,DS_BBASE,0,1,0,NULL,tcm_B_Stud1045,NULL,
"SVODRES:stud1045.dt",ix_B_Stud1045,"постанова кабміну від 28.12.16 №1045","B_Stud1045",16};
StayDataset *B_Stud1045 = &_n_B_Stud1045;

/* End FCdataset */
/* Begin FCmenu */
/* End FCmenu */
/* Begin FCframe */
/* End FCframe */
/* Begin FCtabl */
void *STUDENT_RES[] =
 {NULL,
  &_nn_STUDENT_RES,
  &_n_Stud_Region,
  &_n_Stud_Rayon,
  &_n_Stud_Sirota,
  &_n_Stud_CHAES,
  &_n_Stud_Shaht,
  &_n_Stud_ShahtStg,
  &_n_Stud_UBD,
  &_n_Stud_ATO,
  &_n_Stud_Revol,
  &_n_Stud_Moved,
  &_n_Stud_Social,
  &_n_Stud_Inv,
  &_n_Stud_Malozab,
  &_n_S_NameRegion,
  &_n_S_Sum1,
  &_n_S_Sum2,
  &_n_S_Sum3,
  &_n_S_Sum4,
  &_n_S_Sum5,
  &_n_S_Sum6,
  &_n_S_Sum7,
  &_n_S_Sum8,
  &_n_S_Sum9,
  &_n_S_Sum10,
  &_n_S_Sum11,
  &_n_S_Sum1Ttl,
  &_n_S_Sum2Ttl,
  &_n_S_Sum3Ttl,
  &_n_S_Sum4Ttl,
  &_n_S_Sum5Ttl,
  &_n_S_Sum6Ttl,
  &_n_S_Sum7Ttl,
  &_n_S_Sum8Ttl,
  &_n_S_Sum9Ttl,
  &_n_S_Sum10Ttl,
  &_n_S_Sum11Ttl,
  &_n_Stud_Date,
  (StayFD *)B_Stud1045,
  NULL};

PICMODULEEND(STUDENT_RES)

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
