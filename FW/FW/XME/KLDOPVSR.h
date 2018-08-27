//-------------------------------------------------------------------------
// STAY/W      Resource header file KLDOPVSR.XME
//-------------------------------------------------------------------------
// Created 26\10\2011 11:49
//-------------------------------------------------------------------------

#ifndef _KLDOPVSR_H_INCLUDED
#define _KLDOPVSR_H_INCLUDED

#include "staypic.h"
HPICMODULEBEG(KLDOPVSR)

extern BYTE  KlDopVsr_Sex;
extern pStayFD _KlDopVsr_Sex;
extern StayFD _n_KlDopVsr_Sex;

extern StayDate KlDopVsr_DBeg;
extern pStayFD _KlDopVsr_DBeg;
extern StayFD _n_KlDopVsr_DBeg;

extern StayDate KlDopVsr_DEnd;
extern pStayFD _KlDopVsr_DEnd;
extern StayFD _n_KlDopVsr_DEnd;

extern WORD  KlDopVsr_CV;
extern pStayFD _KlDopVsr_CV;
extern StayFD _n_KlDopVsr_CV;

extern BYTE  KlDopVsr_DV;
extern pStayFD _KlDopVsr_DV;
extern StayFD _n_KlDopVsr_DV;

extern StayDataset _n_B_KlDopVsr;
extern pStayDataset B_KlDopVsr;
extern void *KLDOPVSR[];

HPICMODULEEND(KLDOPVSR)

#endif
