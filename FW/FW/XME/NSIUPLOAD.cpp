/* Begin FCbegin */
//-------------------------------------------------------------------------
// STAY / W      Resource file NSIUPLOAD.XME
//-------------------------------------------------------------------------
// Created 30\05\2018 10:59
//-------------------------------------------------------------------------

#include "NSIUPLOAD.h"

/* End FCbegin */
/* Begin FCinclude */
/* End FCinclude */
/* Begin FChead */
PICMODULEBEG(NSIUPLOAD)

static StayFD _nn_NSIUPLOAD = {NULL,TAG_PIC,0,0,0,0,"NSIUPLOAD",NULL};
/* End FChead */
/* Begin FCtypedef */
/* End FCtypedef */
/* Begin FCfield */
BYTE  NSI_UlKat;
StayFD _n_NSI_UlKat = {&NSI_UlKat,0,0,0,CLS_S,0,"NSI_UlKat","Код категории улицы"};
StayFD *_NSI_UlKat = &_n_NSI_UlKat;

WORD  NSI_UlRaj;
StayFD _n_NSI_UlRaj = {&NSI_UlRaj,0,0,0,CLS_I,0,"NSI_UlRaj","Код района (KlAt_)"};
StayFD *_NSI_UlRaj = &_n_NSI_UlRaj;

DWORD NSI_UlCode;
StayFD _n_NSI_UlCode = {&NSI_UlCode,0,0,0,CLS_L,0,"NSI_UlCode","Код улицы"};
StayFD *_NSI_UlCode = &_n_NSI_UlCode;

char NSI_UlName[51];
StayFD _n_NSI_UlName = {&NSI_UlName,0,0,0,CLS_V,50,"NSI_UlName","Наименование улицы"};
StayFD *_NSI_UlName = &_n_NSI_UlName;

/* End FCfield */
/* Begin FCextern */
extern StayDataset _n_NSI_KlUl;
/* End FCextern */
/* Begin FCdataset */
static StayFD *tcm_NSI_KlUl[] =
{
 (StayFD *)&_n_NSI_UlRaj,
 (StayFD *)&_n_NSI_UlCode,
 (StayFD *)&_n_NSI_UlName,
 (StayFD *)&_n_NSI_UlKat,
 NULL
};
static BYTE ix_NSI_KlUl[] = {3,1,66,0,1,2,65,1,3,66,0,130,6};
StayDataset _n_NSI_KlUl = {NULL,TAG_DATASET,0,0,DS_QBASE,0,1,0,NULL,tcm_NSI_KlUl,NULL,
"KLBASE2:NSIUL.DT",ix_NSI_KlUl,"Справочник кодов улиц","NSI_KlUl",10};
StayDataset *NSI_KlUl = &_n_NSI_KlUl;

/* End FCdataset */
/* Begin FCmenu */
/* End FCmenu */
/* Begin FCframe */
/* End FCframe */
/* Begin FCtabl */
void *NSIUPLOAD[] =
 {NULL,
  &_nn_NSIUPLOAD,
  &_n_NSI_UlKat,
  &_n_NSI_UlRaj,
  &_n_NSI_UlCode,
  &_n_NSI_UlName,
  (StayFD *)NSI_KlUl,
  NULL};

PICMODULEEND(NSIUPLOAD)

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
