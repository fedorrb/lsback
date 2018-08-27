/* Begin FCbegin */
//-------------------------------------------------------------------------
// STAY / W      Resource file WOOMEN22.XME
//-------------------------------------------------------------------------
// Created 17\03\2015 10:39
//-------------------------------------------------------------------------

#include "WOOMEN22.h"

/* End FCbegin */
/* Begin FCinclude */
/* End FCinclude */
/* Begin FChead */
PICMODULEBEG(WOOMEN22)

static StayFD _nn_WOOMEN22 = {NULL,TAG_PIC,0,0,0,0,"WOOMEN22",NULL};
/* End FChead */
/* Begin FCtypedef */
/* End FCtypedef */
/* Begin FCfield */
WORD  Woom_Raj;
StayFD _n_Woom_Raj = {&Woom_Raj,0,0,0,CLS_I,0,"Woom_Raj","Номер района"};
StayFD *_Woom_Raj = &_n_Woom_Raj;

DWORD Woom_Nls;
StayFD _n_Woom_Nls = {&Woom_Nls,0,0,0,CLS_L,0,"Woom_Nls","Номер лицевого"};
StayFD *_Woom_Nls = &_n_Woom_Nls;

char Woom_Fio[51];
StayFD _n_Woom_Fio = {&Woom_Fio,0,0,0,CLS_V,50,"Woom_Fio",""};
StayFD *_Woom_Fio = &_n_Woom_Fio;

char Woom_titul[66];
StayFD _n_Woom_titul = {&Woom_titul,0,0,0,CLS_V,65,"Woom_titul","Заголовок отчета"};
StayFD *_Woom_titul = &_n_Woom_titul;

BYTE  Woom_Spos;
StayFD _n_Woom_Spos = {&Woom_Spos,0,0,0,CLS_S,0,"Woom_Spos","Способ выплаты"};
StayFD *_Woom_Spos = &_n_Woom_Spos;

BYTE  Woom_Rab;
StayFD _n_Woom_Rab = {&Woom_Rab,0,0,0,CLS_S,0,"Woom_Rab","Признак работы"};
StayFD *_Woom_Rab = &_n_Woom_Rab;

DWORD Woom_Indots;
StayFD _n_Woom_Indots = {&Woom_Indots,0,0,0,CLS_L,0,"Woom_Indots","Индекс отделения связи"};
StayFD *_Woom_Indots = &_n_Woom_Indots;

StayDate Woom_Drog;
StayFD _n_Woom_Drog = {&Woom_Drog,0,0,0,CLS_Date,0,"Woom_Drog","Дата рождения"};
StayFD *_Woom_Drog = &_n_Woom_Drog;

StayDate Woom_PenVoz;
StayFD _n_Woom_PenVoz = {&Woom_PenVoz,0,0,0,CLS_Date,0,"Woom_PenVoz","Дата достижения пенс. возраста."};
StayFD *_Woom_PenVoz = &_n_Woom_PenVoz;

STAYI6 Woom_Rnaz;
StayFD _n_Woom_Rnaz = {&Woom_Rnaz,0,0,0,CLS_Hs,2,"Woom_Rnaz","Ежемесячная сумма"};
StayFD *_Woom_Rnaz = &_n_Woom_Rnaz;

WORD  Woom_Shifr;
StayFD _n_Woom_Shifr = {&Woom_Shifr,0,0,0,CLS_I,0,"Woom_Shifr","Шифр пенсии"};
StayFD *_Woom_Shifr = &_n_Woom_Shifr;

WORD  Woom_213;
StayFD _n_Woom_213 = {&Woom_213,0,0,0,CLS_I,0,"Woom_213",""};
StayFD *_Woom_213 = &_n_Woom_213;

WORD  Woom_227;
StayFD _n_Woom_227 = {&Woom_227,0,0,0,CLS_I,0,"Woom_227",""};
StayFD *_Woom_227 = &_n_Woom_227;

STAYI6 Woom_Rnaz2;
StayFD _n_Woom_Rnaz2 = {&Woom_Rnaz2,0,0,0,CLS_Hs,2,"Woom_Rnaz2","Сумма выплаты после расчета"};
StayFD *_Woom_Rnaz2 = &_n_Woom_Rnaz2;

STAYI6 Woom_Dot1;
StayFD _n_Woom_Dot1 = {&Woom_Dot1,0,0,0,CLS_Hs,2,"Woom_Dot1","Сума дотяжек 995, 854, 856 до перерахунку"};
StayFD *_Woom_Dot1 = &_n_Woom_Dot1;

STAYI6 Woom_Dot2;
StayFD _n_Woom_Dot2 = {&Woom_Dot2,0,0,0,CLS_Hs,2,"Woom_Dot2","Сума дотяжек 995, 854, 856 після перерахунку"};
StayFD *_Woom_Dot2 = &_n_Woom_Dot2;

STAYI6 Woom_829;
StayFD _n_Woom_829 = {&Woom_829,0,0,0,CLS_Hs,2,"Woom_829",""};
StayFD *_Woom_829 = &_n_Woom_829;

STAYI6 Woom_Delta1;
StayFD _n_Woom_Delta1 = {&Woom_Delta1,0,0,0,CLS_Hs,2,"Woom_Delta1","Сума пенсії без 995,854,856 до"};
StayFD *_Woom_Delta1 = &_n_Woom_Delta1;

STAYI6 Woom_Delta2;
StayFD _n_Woom_Delta2 = {&Woom_Delta2,0,0,0,CLS_Hs,2,"Woom_Delta2","Сума пенсії без 995,854,856 після"};
StayFD *_Woom_Delta2 = &_n_Woom_Delta2;

BYTE  Woom_pr829;
StayFD _n_Woom_pr829 = {&Woom_pr829,0,0,0,CLS_S,0,"Woom_pr829",""};
StayFD *_Woom_pr829 = &_n_Woom_pr829;

BYTE  Woom_prNo829;
StayFD _n_Woom_prNo829 = {&Woom_prNo829,0,0,0,CLS_S,0,"Woom_prNo829",""};
StayFD *_Woom_prNo829 = &_n_Woom_prNo829;

DWORD Total_829;
StayFD _n_Total_829 = {&Total_829,0,0,0,CLS_L,0,"Total_829",""};
StayFD *_Total_829 = &_n_Total_829;

DWORD Total_Kolvo;
StayFD _n_Total_Kolvo = {&Total_Kolvo,0,0,0,CLS_L,0,"Total_Kolvo",""};
StayFD *_Total_Kolvo = &_n_Total_Kolvo;

DWORD Total_No829;
StayFD _n_Total_No829 = {&Total_No829,0,0,0,CLS_L,0,"Total_No829",""};
StayFD *_Total_No829 = &_n_Total_No829;

DWORD Ttl_829;
StayFD _n_Ttl_829 = {&Ttl_829,0,0,0,CLS_L,0,"Ttl_829",""};
StayFD *_Ttl_829 = &_n_Ttl_829;

DWORD Ttl_Kolvo;
StayFD _n_Ttl_Kolvo = {&Ttl_Kolvo,0,0,0,CLS_L,0,"Ttl_Kolvo",""};
StayFD *_Ttl_Kolvo = &_n_Ttl_Kolvo;

DWORD Ttl_No829;
StayFD _n_Ttl_No829 = {&Ttl_No829,0,0,0,CLS_L,0,"Ttl_No829",""};
StayFD *_Ttl_No829 = &_n_Ttl_No829;

char RajName[46];
StayFD _n_RajName = {&RajName,0,0,0,CLS_V,45,"RajName",""};
StayFD *_RajName = &_n_RajName;

BYTE  Woom_Kand;
StayFD _n_Woom_Kand = {&Woom_Kand,0,0,0,CLS_S,0,"Woom_Kand","Kandidat"};
StayFD *_Woom_Kand = &_n_Woom_Kand;

StayDate Woom_DtLast;
StayFD _n_Woom_DtLast = {&Woom_DtLast,0,0,0,CLS_Date,0,"Woom_DtLast","DateLastMove"};
StayFD *_Woom_DtLast = &_n_Woom_DtLast;

BYTE  Woom_Nauka;
StayFD _n_Woom_Nauka = {&Woom_Nauka,0,0,0,CLS_S,0,"Woom_Nauka",""};
StayFD *_Woom_Nauka = &_n_Woom_Nauka;

STAYI6 Total_Sum9;
StayFD _n_Total_Sum9 = {&Total_Sum9,0,0,0,CLS_Hs,2,"Total_Sum9",""};
StayFD *_Total_Sum9 = &_n_Total_Sum9;

STAYI6 Total_Sum9N;
StayFD _n_Total_Sum9N = {&Total_Sum9N,0,0,0,CLS_Hs,2,"Total_Sum9N",""};
StayFD *_Total_Sum9N = &_n_Total_Sum9N;

STAYI6 Total_Sum9S;
StayFD _n_Total_Sum9S = {&Total_Sum9S,0,0,0,CLS_Hs,2,"Total_Sum9S",""};
StayFD *_Total_Sum9S = &_n_Total_Sum9S;

STAYI6 Total_Sum13;
StayFD _n_Total_Sum13 = {&Total_Sum13,0,0,0,CLS_Hs,2,"Total_Sum13",""};
StayFD *_Total_Sum13 = &_n_Total_Sum13;

STAYI6 Total_Sum13N;
StayFD _n_Total_Sum13N = {&Total_Sum13N,0,0,0,CLS_Hs,2,"Total_Sum13N",""};
StayFD *_Total_Sum13N = &_n_Total_Sum13N;

STAYI6 Total_Sum13S;
StayFD _n_Total_Sum13S = {&Total_Sum13S,0,0,0,CLS_Hs,2,"Total_Sum13S",""};
StayFD *_Total_Sum13S = &_n_Total_Sum13S;

STAYI6 Ttl_Sum9;
StayFD _n_Ttl_Sum9 = {&Ttl_Sum9,0,0,0,CLS_Hs,2,"Ttl_Sum9",""};
StayFD *_Ttl_Sum9 = &_n_Ttl_Sum9;

STAYI6 Ttl_Sum9N;
StayFD _n_Ttl_Sum9N = {&Ttl_Sum9N,0,0,0,CLS_Hs,2,"Ttl_Sum9N",""};
StayFD *_Ttl_Sum9N = &_n_Ttl_Sum9N;

STAYI6 Ttl_Sum9S;
StayFD _n_Ttl_Sum9S = {&Ttl_Sum9S,0,0,0,CLS_Hs,2,"Ttl_Sum9S",""};
StayFD *_Ttl_Sum9S = &_n_Ttl_Sum9S;

STAYI6 Ttl_Sum13;
StayFD _n_Ttl_Sum13 = {&Ttl_Sum13,0,0,0,CLS_Hs,2,"Ttl_Sum13",""};
StayFD *_Ttl_Sum13 = &_n_Ttl_Sum13;

STAYI6 Ttl_Sum13N;
StayFD _n_Ttl_Sum13N = {&Ttl_Sum13N,0,0,0,CLS_Hs,2,"Ttl_Sum13N",""};
StayFD *_Ttl_Sum13N = &_n_Ttl_Sum13N;

STAYI6 Ttl_Sum13S;
StayFD _n_Ttl_Sum13S = {&Ttl_Sum13S,0,0,0,CLS_Hs,2,"Ttl_Sum13S",""};
StayFD *_Ttl_Sum13S = &_n_Ttl_Sum13S;

/* End FCfield */
/* Begin FCextern */
extern StayDataset _n_B_Woomen;
/* End FCextern */
/* Begin FCdataset */
static StayFD *tcm_B_Woomen[] =
{
 (StayFD *)&_n_Woom_Indots,
 (StayFD *)&_n_Woom_Nls,
 (StayFD *)&_n_Woom_Fio,
 (StayFD *)&_n_Woom_Shifr,
 (StayFD *)&_n_Woom_Spos,
 (StayFD *)&_n_Woom_Rab,
 (StayFD *)&_n_Woom_Rnaz,
 (StayFD *)&_n_Woom_Raj,
 (StayFD *)&_n_Woom_Rnaz2,
 (StayFD *)&_n_Woom_Dot1,
 (StayFD *)&_n_Woom_Dot2,
 (StayFD *)&_n_Woom_Delta1,
 (StayFD *)&_n_Woom_Delta2,
 (StayFD *)&_n_Woom_829,
 (StayFD *)&_n_Woom_pr829,
 (StayFD *)&_n_Woom_prNo829,
 (StayFD *)&_n_Woom_Kand,
 (StayFD *)&_n_Woom_DtLast,
 (StayFD *)&_n_Woom_Nauka,
 NULL
};
static BYTE ix_B_Woomen[] = {2,1,130,0,1,2,129,1};
StayDataset _n_B_Woomen = {NULL,TAG_DATASET,0,0,DS_BBASE,0,1,0,NULL,tcm_B_Woomen,NULL,
"WORK:osuch995.DT",ix_B_Woomen,NULL,"B_Woomen",0};
StayDataset *B_Woomen = &_n_B_Woomen;

/* End FCdataset */
/* Begin FCmenu */
/* End FCmenu */
/* Begin FCframe */
/* End FCframe */
/* Begin FCtabl */
void *WOOMEN22[] =
 {NULL,
  &_nn_WOOMEN22,
  &_n_Woom_Raj,
  &_n_Woom_Nls,
  &_n_Woom_Fio,
  &_n_Woom_titul,
  &_n_Woom_Spos,
  &_n_Woom_Rab,
  &_n_Woom_Indots,
  &_n_Woom_Drog,
  &_n_Woom_PenVoz,
  &_n_Woom_Rnaz,
  &_n_Woom_Shifr,
  &_n_Woom_213,
  &_n_Woom_227,
  &_n_Woom_Rnaz2,
  &_n_Woom_Dot1,
  &_n_Woom_Dot2,
  &_n_Woom_829,
  &_n_Woom_Delta1,
  &_n_Woom_Delta2,
  &_n_Woom_pr829,
  &_n_Woom_prNo829,
  &_n_Total_829,
  &_n_Total_Kolvo,
  &_n_Total_No829,
  &_n_Ttl_829,
  &_n_Ttl_Kolvo,
  &_n_Ttl_No829,
  &_n_RajName,
  &_n_Woom_Kand,
  &_n_Woom_DtLast,
  &_n_Woom_Nauka,
  &_n_Total_Sum9,
  &_n_Total_Sum9N,
  &_n_Total_Sum9S,
  &_n_Total_Sum13,
  &_n_Total_Sum13N,
  &_n_Total_Sum13S,
  &_n_Ttl_Sum9,
  &_n_Ttl_Sum9N,
  &_n_Ttl_Sum9S,
  &_n_Ttl_Sum13,
  &_n_Ttl_Sum13N,
  &_n_Ttl_Sum13S,
  (StayFD *)B_Woomen,
  NULL};

PICMODULEEND(WOOMEN22)

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
