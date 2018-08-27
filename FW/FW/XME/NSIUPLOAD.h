/* Begin FHbegin */
//-------------------------------------------------------------------------
// STAY / W      Resource header file NSIUPLOAD.XME
//-------------------------------------------------------------------------
// Created 30\05\2018 10:59
//-------------------------------------------------------------------------

/* End FHbegin */
/* Begin FHhead */
#ifndef _NSIUPLOAD_H_
#define _NSIUPLOAD_H_

#include "staypic.h"
HPICMODULEBEG(NSIUPLOAD)

/* End FHhead */
/* Begin FHdefine */
/* End FHdefine */
/* Begin FHtypedef */
/* End FHtypedef */
/* Begin FHfield */
extern BYTE  NSI_UlKat;
extern StayFD *_NSI_UlKat;
extern StayFD _n_NSI_UlKat;

extern WORD  NSI_UlRaj;
extern StayFD *_NSI_UlRaj;
extern StayFD _n_NSI_UlRaj;

extern DWORD NSI_UlCode;
extern StayFD *_NSI_UlCode;
extern StayFD _n_NSI_UlCode;

extern char NSI_UlName[51];
extern StayFD *_NSI_UlName;
extern StayFD _n_NSI_UlName;

/* End FHfield */
/* Begin FHdataset */
extern StayDataset _n_NSI_KlUl;
extern StayDataset *NSI_KlUl;
/* End FHdataset */
/* Begin FHmenu */
/* End FHmenu */
/* Begin FHframe */
/* End FHframe */
/* Begin FHtabl */
extern void *NSIUPLOAD[];
/* End FHtabl */
/* Begin FDfield */
/* End FDfield */
/* Begin FDextern */
/* End FDextern */
/* Begin FHend */

HPICMODULEEND(NSIUPLOAD)

#endif
/* End FHend */
