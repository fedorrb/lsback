/* Begin FHbegin */
//-------------------------------------------------------------------------
// STAY / W      Resource header file DELAY.XME
//-------------------------------------------------------------------------
// Created 05\12\2016 13:21
//-------------------------------------------------------------------------

/* End FHbegin */
/* Begin FHhead */
#ifndef _DELAY_H_
#define _DELAY_H_

#include "staypic.h"
HPICMODULEBEG(DELAY)

/* End FHhead */
/* Begin FHdefine */
/* End FHdefine */
/* Begin FHtypedef */
/* End FHtypedef */
/* Begin FHfield */
extern DWORD D_Nls;
extern StayFD *_D_Nls;
extern StayFD _n_D_Nls;

extern WORD  D_Shifr;
extern StayFD *_D_Shifr;
extern StayFD _n_D_Shifr;

extern long  D_Delta1;
extern StayFD *_D_Delta1;
extern StayFD _n_D_Delta1;

extern long  D_Delta2;
extern StayFD *_D_Delta2;
extern StayFD _n_D_Delta2;

extern StayTime T_Beg;
extern StayFD *_T_Beg;
extern StayFD _n_T_Beg;

extern StayTime T_End;
extern StayFD *_T_End;
extern StayFD _n_T_End;

extern DWORD s_sec;
extern StayFD *_s_sec;
extern StayFD _n_s_sec;

extern DWORD s_ls;
extern StayFD *_s_ls;
extern StayFD _n_s_ls;

extern DWORD s_sum;
extern StayFD *_s_sum;
extern StayFD _n_s_sum;

extern STAYUI6 s_hour;
extern StayFD *_s_hour;
extern StayFD _n_s_hour;

extern DWORD s_optim;
extern StayFD *_s_optim;
extern StayFD _n_s_optim;

/* End FHfield */
/* Begin FHdataset */
extern StayDataset _n_B_DelayLs;
extern StayDataset *B_DelayLs;
extern StayDataset _n_B_TimeMas;
extern StayDataset *B_TimeMas;
extern StayDataset _n_B_Sum;
extern StayDataset *B_Sum;
/* End FHdataset */
/* Begin FHmenu */
/* End FHmenu */
/* Begin FHframe */
/* End FHframe */
/* Begin FHtabl */
extern void *DELAY[];
/* End FHtabl */
/* Begin FDfield */
/* End FDfield */
/* Begin FDextern */
/* End FDextern */
/* Begin FHend */

HPICMODULEEND(DELAY)

#endif
/* End FHend */
