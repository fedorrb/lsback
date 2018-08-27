/* Begin FHbegin */
//-------------------------------------------------------------------------
// STAY / W      Resource header file FW.XME
//-------------------------------------------------------------------------
// Created 03\05\2018 15:16
//-------------------------------------------------------------------------

/* End FHbegin */
/* Begin FHhead */
#ifndef _FW_H_
#define _FW_H_

#include "staypic.h"
HPICMODULEBEG(FW)

/* End FHhead */
/* Begin FHdefine */
/* End FHdefine */
/* Begin FHtypedef */
/* End FHtypedef */
/* Begin FHfield */
extern WORD  FW_Raj;
extern StayFD *_FW_Raj;
extern StayFD _n_FW_Raj;

extern DWORD FW_Nls;
extern StayFD *_FW_Nls;
extern StayFD _n_FW_Nls;

extern char FW_Fio[51];
extern StayFD *_FW_Fio;
extern StayFD _n_FW_Fio;

extern char titul[51];
extern StayFD *_titul;
extern StayFD _n_titul;

extern STAYUI6 FW_NLS_FULL;
extern StayFD *_FW_NLS_FULL;
extern StayFD _n_FW_NLS_FULL;

extern STAYUI6 FW_LsNomig;
extern StayFD *_FW_LsNomig;
extern StayFD _n_FW_LsNomig;

extern STAYUI6 FW_IdCode;
extern StayFD *_FW_IdCode;
extern StayFD _n_FW_IdCode;

extern DWORD OR_Nls;
extern StayFD *_OR_Nls;
extern StayFD _n_OR_Nls;

extern STAYUI6 OR_FullNls;
extern StayFD *_OR_FullNls;
extern StayFD _n_OR_FullNls;

extern char OR_Adress[256];
extern StayFD *_OR_Adress;
extern StayFD _n_OR_Adress;

extern STAYUI6 OR_Nomig;
extern StayFD *_OR_Nomig;
extern StayFD _n_OR_Nomig;

extern BYTE  KOR_Number;
extern StayFD *_KOR_Number;
extern StayFD _n_KOR_Number;

extern STAYUI6 KOR_Nomig;
extern StayFD *_KOR_Nomig;
extern StayFD _n_KOR_Nomig;

extern BYTE  IGD_Number;
extern StayFD *_IGD_Number;
extern StayFD _n_IGD_Number;

extern STAYUI6 IGD_Nomig;
extern StayFD *_IGD_Nomig;
extern StayFD _n_IGD_Nomig;

extern STAYUI6 KOR_ID;
extern StayFD *_KOR_ID;
extern StayFD _n_KOR_ID;

extern STAYUI6 IGD_ID;
extern StayFD *_IGD_ID;
extern StayFD _n_IGD_ID;

extern STAYUI8 FW_PFUNls;
extern StayFD *_FW_PFUNls;
extern StayFD _n_FW_PFUNls;

/* End FHfield */
/* Begin FHdataset */
extern StayDataset _n_B_FW;
extern StayDataset *B_FW;
extern StayDataset _n_B_OR;
extern StayDataset *B_OR;
extern StayDataset _n_NKOR;
extern StayDataset *NKOR;
extern StayDataset _n_NIGD;
extern StayDataset *NIGD;
/* End FHdataset */
/* Begin FHmenu */
/* End FHmenu */
/* Begin FHframe */
/* End FHframe */
/* Begin FHtabl */
extern void *FW[];
/* End FHtabl */
/* Begin FDfield */
/* End FDfield */
/* Begin FDextern */
/* End FDextern */
/* Begin FHend */

HPICMODULEEND(FW)

#endif
/* End FHend */
