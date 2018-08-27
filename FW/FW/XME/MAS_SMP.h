//-------------------------------------------------------------------------
// STAY/W      Resource header file MAS_SMP.XME
//-------------------------------------------------------------------------
// Created 09\12\2011 18:27
//-------------------------------------------------------------------------

#ifndef _MAS_SMP_H_INCLUDED
#define _MAS_SMP_H_INCLUDED

#include "staypic.h"
HPICMODULEBEG(MAS_SMP)

extern BYTE  SMP_Code;
extern pStayFD _SMP_Code;
extern StayFD _n_SMP_Code;

extern StayDate SMP_DtB;
extern pStayFD _SMP_DtB;
extern StayFD _n_SMP_DtB;

extern StayDate SMP_DtE;
extern pStayFD _SMP_DtE;
extern StayFD _n_SMP_DtE;

extern StayDate SMP_DtMove;
extern pStayFD _SMP_DtMove;
extern StayFD _n_SMP_DtMove;

extern BYTE  MP_Code;
extern pStayFD _MP_Code;
extern StayFD _n_MP_Code;

extern BYTE  ZrDP_Dop_Stg_Y;
extern pStayFD _ZrDP_Dop_Stg_Y;
extern StayFD _n_ZrDP_Dop_Stg_Y;

extern BYTE  ZrDP_Dop_Stg_M;
extern pStayFD _ZrDP_Dop_Stg_M;
extern StayFD _n_ZrDP_Dop_Stg_M;

extern BYTE  ZrDP_Dop_Stg_D;
extern pStayFD _ZrDP_Dop_Stg_D;
extern StayFD _n_ZrDP_Dop_Stg_D;

extern DWORD ZrDP_Procent;
extern pStayFD _ZrDP_Procent;
extern StayFD _n_ZrDP_Procent;

extern DWORD ZrDP_IKoef;
extern pStayFD _ZrDP_IKoef;
extern StayFD _n_ZrDP_IKoef;

extern DWORD ZrDP_IKoef22;
extern pStayFD _ZrDP_IKoef22;
extern StayFD _n_ZrDP_IKoef22;

extern StayDate DP_PBeg;
extern pStayFD _DP_PBeg;
extern StayFD _n_DP_PBeg;

extern StayDate DP_PEnd;
extern pStayFD _DP_PEnd;
extern StayFD _n_DP_PEnd;

extern BYTE  DP_Period;
extern pStayFD _DP_Period;
extern StayFD _n_DP_Period;

extern BYTE  DP_Nepol;
extern pStayFD _DP_Nepol;
extern StayFD _n_DP_Nepol;

extern uint6 DP_Zar;
extern pStayFD _DP_Zar;
extern StayFD _n_DP_Zar;

extern uint6 DP_Dopl;
extern pStayFD _DP_Dopl;
extern StayFD _n_DP_Dopl;

extern uint6 DP_Prem;
extern pStayFD _DP_Prem;
extern StayFD _n_DP_Prem;

extern uint6 DP_Ogr;
extern pStayFD _DP_Ogr;
extern StayFD _n_DP_Ogr;

extern uint6 DP_Ogr22;
extern pStayFD _DP_Ogr22;
extern StayFD _n_DP_Ogr22;

extern uint6 DP_SrNx;
extern pStayFD _DP_SrNx;
extern StayFD _n_DP_SrNx;

extern uint6 DP_SrNx22;
extern pStayFD _DP_SrNx22;
extern StayFD _n_DP_SrNx22;

extern uint6 DP_Koef;
extern pStayFD _DP_Koef;
extern StayFD _n_DP_Koef;

extern uint6 DP_Koef22;
extern pStayFD _DP_Koef22;
extern StayFD _n_DP_Koef22;

extern DWORD ZrDP_Nr;
extern pStayFD _ZrDP_Nr;
extern StayFD _n_ZrDP_Nr;

extern StayDate ZrDP_PBeg;
extern pStayFD _ZrDP_PBeg;
extern StayFD _n_ZrDP_PBeg;

extern StayDate ZrDP_PEnd;
extern pStayFD _ZrDP_PEnd;
extern StayFD _n_ZrDP_PEnd;

extern BYTE  ZrDP_Period;
extern pStayFD _ZrDP_Period;
extern StayFD _n_ZrDP_Period;

extern uint6 ZrDP_Zar;
extern pStayFD _ZrDP_Zar;
extern StayFD _n_ZrDP_Zar;

extern uint6 ZrDP_Ogr;
extern pStayFD _ZrDP_Ogr;
extern StayFD _n_ZrDP_Ogr;

extern uint6 ZrDP_Ogr22;
extern pStayFD _ZrDP_Ogr22;
extern StayFD _n_ZrDP_Ogr22;

extern uint6 ZrDP_SrNx;
extern pStayFD _ZrDP_SrNx;
extern StayFD _n_ZrDP_SrNx;

extern uint6 ZrDP_SrNx22;
extern pStayFD _ZrDP_SrNx22;
extern StayFD _n_ZrDP_SrNx22;

extern uint6 ZrDP_Koef;
extern pStayFD _ZrDP_Koef;
extern StayFD _n_ZrDP_Koef;

extern uint6 ZrDP_Koef22;
extern pStayFD _ZrDP_Koef22;
extern StayFD _n_ZrDP_Koef22;

extern char Pol[4];
extern pStayFD _Pol;
extern StayFD _n_Pol;

extern char Rasp_Adr[51];
extern pStayFD _Rasp_Adr;
extern StayFD _n_Rasp_Adr;

extern DWORD SerZar;
extern pStayFD _SerZar;
extern StayFD _n_SerZar;

extern uint6 Koef_Zrpl;
extern pStayFD _Koef_Zrpl;
extern StayFD _n_Koef_Zrpl;

extern uint6 SerZarPen;
extern pStayFD _SerZarPen;
extern StayFD _n_SerZarPen;

extern StayDate MP_DPZar;
extern pStayFD _MP_DPZar;
extern StayFD _n_MP_DPZar;

extern StayDate MP_DateIn;
extern pStayFD _MP_DateIn;
extern StayFD _n_MP_DateIn;

extern StayDate MP_DatePer;
extern pStayFD _MP_DatePer;
extern StayFD _n_MP_DatePer;

extern StayDate MP_Dnaz;
extern pStayFD _MP_Dnaz;
extern StayFD _n_MP_Dnaz;

extern StayDate MP_Dobr;
extern pStayFD _MP_Dobr;
extern StayFD _n_MP_Dobr;

extern StayDate MP_Drog;
extern pStayFD _MP_Drog;
extern StayFD _n_MP_Drog;

extern DWORD MP_IKoef;
extern pStayFD _MP_IKoef;
extern StayFD _n_MP_IKoef;

extern DWORD MP_Indots;
extern pStayFD _MP_Indots;
extern StayFD _n_MP_Indots;

extern WORD  MP_Ncsbb;
extern pStayFD _MP_Ncsbb;
extern StayFD _n_MP_Ncsbb;

extern DWORD MP_Nls;
extern pStayFD _MP_Nls;
extern StayFD _n_MP_Nls;

extern WORD  MP_Npsbb;
extern pStayFD _MP_Npsbb;
extern StayFD _n_MP_Npsbb;

extern BYTE  MP_OldPen;
extern pStayFD _MP_OldPen;
extern StayFD _n_MP_OldPen;

extern WORD  MP_PrizD;
extern pStayFD _MP_PrizD;
extern StayFD _n_MP_PrizD;

extern WORD  MP_PrizP;
extern pStayFD _MP_PrizP;
extern StayFD _n_MP_PrizP;

extern short MP_ProcVzNauk;
extern pStayFD _MP_ProcVzNauk;
extern StayFD _n_MP_ProcVzNauk;

extern WORD  MP_Procent;
extern pStayFD _MP_Procent;
extern StayFD _n_MP_Procent;

extern BYTE  MP_Rab;
extern pStayFD _MP_Rab;
extern StayFD _n_MP_Rab;

extern WORD  MP_Raj;
extern pStayFD _MP_Raj;
extern StayFD _n_MP_Raj;

extern int   MP_S708N;
extern pStayFD _MP_S708N;
extern StayFD _n_MP_S708N;

extern int   MP_S708O;
extern pStayFD _MP_S708O;
extern StayFD _n_MP_S708O;

extern int   MP_S750N;
extern pStayFD _MP_S750N;
extern StayFD _n_MP_S750N;

extern int   MP_S750O;
extern pStayFD _MP_S750O;
extern StayFD _n_MP_S750O;

extern int   MP_S808N;
extern pStayFD _MP_S808N;
extern StayFD _n_MP_S808N;

extern int   MP_S808O;
extern pStayFD _MP_S808O;
extern StayFD _n_MP_S808O;

extern int   MP_S809N;
extern pStayFD _MP_S809N;
extern StayFD _n_MP_S809N;

extern int   MP_S809O;
extern pStayFD _MP_S809O;
extern StayFD _n_MP_S809O;

extern int   MP_S908N;
extern pStayFD _MP_S908N;
extern StayFD _n_MP_S908N;

extern int   MP_S908O;
extern pStayFD _MP_S908O;
extern StayFD _n_MP_S908O;

extern int   MP_SDolg;
extern pStayFD _MP_SDolg;
extern StayFD _n_MP_SDolg;

extern int   MP_SKfnlsN;
extern pStayFD _MP_SKfnlsN;
extern StayFD _n_MP_SKfnlsN;

extern int   MP_SKfnlsO;
extern pStayFD _MP_SKfnlsO;
extern StayFD _n_MP_SKfnlsO;

extern int   MP_SKoef;
extern pStayFD _MP_SKoef;
extern StayFD _n_MP_SKoef;

extern int   MP_SNP;
extern pStayFD _MP_SNP;
extern StayFD _n_MP_SNP;

extern int   MP_SOsnN;
extern pStayFD _MP_SOsnN;
extern StayFD _n_MP_SOsnN;

extern int   MP_SPenFN;
extern pStayFD _MP_SPenFN;
extern StayFD _n_MP_SPenFN;

extern int   MP_SPenFO;
extern pStayFD _MP_SPenFO;
extern StayFD _n_MP_SPenFO;

extern int   MP_SViplN;
extern pStayFD _MP_SViplN;
extern StayFD _n_MP_SViplN;

extern int   MP_SViplO;
extern pStayFD _MP_SViplO;
extern StayFD _n_MP_SViplO;

extern WORD  MP_Shifr;
extern pStayFD _MP_Shifr;
extern StayFD _n_MP_Shifr;

extern BYTE  MP_Spos;
extern pStayFD _MP_Spos;
extern StayFD _n_MP_Spos;

extern StayDate MP_Srok;
extern pStayFD _MP_Srok;
extern StayFD _n_MP_Srok;

extern BYTE  MP_VidPen;
extern pStayFD _MP_VidPen;
extern StayFD _n_MP_VidPen;

extern uint6 MP_Zar;
extern pStayFD _MP_Zar;
extern StayFD _n_MP_Zar;

extern uint6 MP_Zar22;
extern pStayFD _MP_Zar22;
extern StayFD _n_MP_Zar22;

extern DWORD Perp_S163;
extern pStayFD _Perp_S163;
extern StayFD _n_Perp_S163;

extern DWORD Perp_S163G;
extern pStayFD _Perp_S163G;
extern StayFD _n_Perp_S163G;

extern DWORD Perp_S163D;
extern pStayFD _Perp_S163D;
extern StayFD _n_Perp_S163D;

extern WORD  ZrDP_Nepol;
extern pStayFD _ZrDP_Nepol;
extern StayFD _n_ZrDP_Nepol;

extern uint6 ZrDP_SrNx2;
extern pStayFD _ZrDP_SrNx2;
extern StayFD _n_ZrDP_SrNx2;

extern uint6 Add_Uint6;
extern pStayFD _Add_Uint6;
extern StayFD _n_Add_Uint6;

extern int   Add_Uint4;
extern pStayFD _Add_Uint4;
extern StayFD _n_Add_Uint4;

extern StayDate Add_Date;
extern pStayFD _Add_Date;
extern StayFD _n_Add_Date;

extern BYTE  Add_Code;
extern pStayFD _Add_Code;
extern StayFD _n_Add_Code;

extern StayDataset _n_B_MP;
extern pStayDataset B_MP;
extern StayDataset _n_PravoMp;
extern pStayDataset PravoMp;
extern StayDataset _n_PerMp;
extern pStayDataset PerMp;
extern StayDataset _n_NpMp;
extern pStayDataset NpMp;
extern StayDataset _n_DpMp;
extern pStayDataset DpMp;
extern StayDataset _n_PerpMp;
extern pStayDataset PerpMp;
extern StayDataset _n_ZrbMp;
extern pStayDataset ZrbMp;
extern StayDataset _n_RizrbKfMp;
extern pStayDataset RizrbKfMp;
extern StayDataset _n_B_DpMp;
extern pStayDataset B_DpMp;
extern StayDataset _n_B_Dp;
extern pStayDataset B_Dp;
extern StayDataset _n_B_Add;
extern pStayDataset B_Add;
extern StayDataset _n_AddPerp;
extern pStayDataset AddPerp;
extern StayDataset _n_AddPravo;
extern pStayDataset AddPravo;
extern StayDataset _n_AddPer;
extern pStayDataset AddPer;
extern StayDataset _n_AddDpMp;
extern pStayDataset AddDpMp;
extern StayDataset _n_AddDP;
extern pStayDataset AddDP;
extern void *MAS_SMP[];

HPICMODULEEND(MAS_SMP)

#endif
