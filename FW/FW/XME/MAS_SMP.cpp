//-------------------------------------------------------------------------
// STAY/W      Resource file MAS_SMP.XME
//-------------------------------------------------------------------------
// Created 09\12\2011 18:27
//-------------------------------------------------------------------------

#include "MAS_SMP.h"

#include "NAZ_PEL.h"
#include "NAZ_BAI.h"
PICMODULEBEG(MAS_SMP)

static StayFD _nn_MAS_SMP = {NULL,TAG_PIC,0,0,0,0,"MAS_SMP",NULL};
BYTE  SMP_Code;
StayFD _n_SMP_Code = {&SMP_Code,0,0,0,CLS_S,0,"SMP_Code",""};
pStayFD _SMP_Code = &_n_SMP_Code;

StayDate SMP_DtB;
StayFD _n_SMP_DtB = {&SMP_DtB,0,0,0,CLS_Date,0,"SMP_DtB",""};
pStayFD _SMP_DtB = &_n_SMP_DtB;

StayDate SMP_DtE;
StayFD _n_SMP_DtE = {&SMP_DtE,0,0,0,CLS_Date,0,"SMP_DtE",""};
pStayFD _SMP_DtE = &_n_SMP_DtE;

StayDate SMP_DtMove;
StayFD _n_SMP_DtMove = {&SMP_DtMove,0,0,0,CLS_Date,0,"SMP_DtMove",""};
pStayFD _SMP_DtMove = &_n_SMP_DtMove;

BYTE  MP_Code;
StayFD _n_MP_Code = {&MP_Code,0,0,0,CLS_S,0,"MP_Code","-��� ��� ������"};
pStayFD _MP_Code = &_n_MP_Code;

BYTE  ZrDP_Dop_Stg_Y;
StayFD _n_ZrDP_Dop_Stg_Y = {&ZrDP_Dop_Stg_Y,0,0,0,CLS_S,0,"ZrDP_Dop_Stg_Y","-��� ��� ������"};
pStayFD _ZrDP_Dop_Stg_Y = &_n_ZrDP_Dop_Stg_Y;

BYTE  ZrDP_Dop_Stg_M;
StayFD _n_ZrDP_Dop_Stg_M = {&ZrDP_Dop_Stg_M,0,0,0,CLS_S,0,"ZrDP_Dop_Stg_M","-��� ��� ������"};
pStayFD _ZrDP_Dop_Stg_M = &_n_ZrDP_Dop_Stg_M;

BYTE  ZrDP_Dop_Stg_D;
StayFD _n_ZrDP_Dop_Stg_D = {&ZrDP_Dop_Stg_D,0,0,0,CLS_S,0,"ZrDP_Dop_Stg_D","-��� ��� ������"};
pStayFD _ZrDP_Dop_Stg_D = &_n_ZrDP_Dop_Stg_D;

DWORD ZrDP_Procent;
StayFD _n_ZrDP_Procent = {&ZrDP_Procent,0,0,0,CLS_L,5,"ZrDP_Procent",""};
pStayFD _ZrDP_Procent = &_n_ZrDP_Procent;

DWORD ZrDP_IKoef;
StayFD _n_ZrDP_IKoef = {&ZrDP_IKoef,0,0,0,CLS_L,5,"ZrDP_IKoef","����樥�� ���ᨨ �� � ��᫥ 92 ����"};
pStayFD _ZrDP_IKoef = &_n_ZrDP_IKoef;

DWORD ZrDP_IKoef22;
StayFD _n_ZrDP_IKoef22 = {&ZrDP_IKoef22,0,0,0,CLS_L,5,"ZrDP_IKoef22","����樥�� ���ᨨ �� � ��᫥ 92 ����"};
pStayFD _ZrDP_IKoef22 = &_n_ZrDP_IKoef22;

StayDate DP_PBeg;
StayFD _n_DP_PBeg = {&DP_PBeg,0,0,0,CLS_Date,0,"DP_PBeg","���� ������ �������"};
pStayFD _DP_PBeg = &_n_DP_PBeg;

StayDate DP_PEnd;
StayFD _n_DP_PEnd = {&DP_PEnd,0,0,0,CLS_Date,0,"DP_PEnd","���� ����� �������"};
pStayFD _DP_PEnd = &_n_DP_PEnd;

BYTE  DP_Period;
StayFD _n_DP_Period = {&DP_Period,0,0,0,CLS_S,0,"DP_Period","��� ������� � �������"};
pStayFD _DP_Period = &_n_DP_Period;

BYTE  DP_Nepol;
StayFD _n_DP_Nepol = {&DP_Nepol,0,0,0,CLS_S,0,"DP_Nepol","��� ������� � �������"};
pStayFD _DP_Nepol = &_n_DP_Nepol;

uint6 DP_Zar;
StayFD _n_DP_Zar = {&DP_Zar,0,0,0,CLS_H,5,"DP_Zar","��������� �� ������"};
pStayFD _DP_Zar = &_n_DP_Zar;

uint6 DP_Dopl;
StayFD _n_DP_Dopl = {&DP_Dopl,0,0,0,CLS_H,5,"DP_Dopl","��������� �� ������"};
pStayFD _DP_Dopl = &_n_DP_Dopl;

uint6 DP_Prem;
StayFD _n_DP_Prem = {&DP_Prem,0,0,0,CLS_H,5,"DP_Prem","��������� �� ������"};
pStayFD _DP_Prem = &_n_DP_Prem;

uint6 DP_Ogr;
StayFD _n_DP_Ogr = {&DP_Ogr,0,0,0,CLS_H,5,"DP_Ogr","��������� � ������������"};
pStayFD _DP_Ogr = &_n_DP_Ogr;

uint6 DP_Ogr22;
StayFD _n_DP_Ogr22 = {&DP_Ogr22,0,0,0,CLS_H,5,"DP_Ogr22","��������� � ������������"};
pStayFD _DP_Ogr22 = &_n_DP_Ogr22;

uint6 DP_SrNx;
StayFD _n_DP_SrNx = {&DP_SrNx,0,0,0,CLS_H,5,"DP_SrNx","������� �� ��������� ���������"};
pStayFD _DP_SrNx = &_n_DP_SrNx;

uint6 DP_SrNx22;
StayFD _n_DP_SrNx22 = {&DP_SrNx22,0,0,0,CLS_H,5,"DP_SrNx22","������� �� ��������� ���������"};
pStayFD _DP_SrNx22 = &_n_DP_SrNx22;

uint6 DP_Koef;
StayFD _n_DP_Koef = {&DP_Koef,0,0,0,CLS_H,5,"DP_Koef","����������� ���������"};
pStayFD _DP_Koef = &_n_DP_Koef;

uint6 DP_Koef22;
StayFD _n_DP_Koef22 = {&DP_Koef22,0,0,0,CLS_H,5,"DP_Koef22","����������� ���������"};
pStayFD _DP_Koef22 = &_n_DP_Koef22;

DWORD ZrDP_Nr;
StayFD _n_ZrDP_Nr = {&ZrDP_Nr,0,0,0,CLS_L,0,"ZrDP_Nr","��� ����"};
pStayFD _ZrDP_Nr = &_n_ZrDP_Nr;

StayDate ZrDP_PBeg;
StayFD _n_ZrDP_PBeg = {&ZrDP_PBeg,0,0,0,CLS_Date,0,"ZrDP_PBeg","���� ������ �������"};
pStayFD _ZrDP_PBeg = &_n_ZrDP_PBeg;

StayDate ZrDP_PEnd;
StayFD _n_ZrDP_PEnd = {&ZrDP_PEnd,0,0,0,CLS_Date,0,"ZrDP_PEnd","���� ����� �������"};
pStayFD _ZrDP_PEnd = &_n_ZrDP_PEnd;

BYTE  ZrDP_Period;
StayFD _n_ZrDP_Period = {&ZrDP_Period,0,0,0,CLS_S,0,"ZrDP_Period","��� ������� � �������"};
pStayFD _ZrDP_Period = &_n_ZrDP_Period;

uint6 ZrDP_Zar;
StayFD _n_ZrDP_Zar = {&ZrDP_Zar,0,0,0,CLS_H,5,"ZrDP_Zar","��������� �� ������"};
pStayFD _ZrDP_Zar = &_n_ZrDP_Zar;

uint6 ZrDP_Ogr;
StayFD _n_ZrDP_Ogr = {&ZrDP_Ogr,0,0,0,CLS_H,5,"ZrDP_Ogr","��������� � ������������"};
pStayFD _ZrDP_Ogr = &_n_ZrDP_Ogr;

uint6 ZrDP_Ogr22;
StayFD _n_ZrDP_Ogr22 = {&ZrDP_Ogr22,0,0,0,CLS_H,5,"ZrDP_Ogr22","��������� � ������������"};
pStayFD _ZrDP_Ogr22 = &_n_ZrDP_Ogr22;

uint6 ZrDP_SrNx;
StayFD _n_ZrDP_SrNx = {&ZrDP_SrNx,0,0,0,CLS_H,5,"ZrDP_SrNx","������� �� ��������� ���������"};
pStayFD _ZrDP_SrNx = &_n_ZrDP_SrNx;

uint6 ZrDP_SrNx22;
StayFD _n_ZrDP_SrNx22 = {&ZrDP_SrNx22,0,0,0,CLS_H,5,"ZrDP_SrNx22","������� �� ��������� ���������"};
pStayFD _ZrDP_SrNx22 = &_n_ZrDP_SrNx22;

uint6 ZrDP_Koef;
StayFD _n_ZrDP_Koef = {&ZrDP_Koef,0,0,0,CLS_H,5,"ZrDP_Koef","����������� ���������"};
pStayFD _ZrDP_Koef = &_n_ZrDP_Koef;

uint6 ZrDP_Koef22;
StayFD _n_ZrDP_Koef22 = {&ZrDP_Koef22,0,0,0,CLS_H,5,"ZrDP_Koef22","����������� ���������"};
pStayFD _ZrDP_Koef22 = &_n_ZrDP_Koef22;

char Pol[4];
StayFD _n_Pol = {&Pol,0,0,0,CLS_V,3,"Pol","���"};
pStayFD _Pol = &_n_Pol;

char Rasp_Adr[51];
StayFD _n_Rasp_Adr = {&Rasp_Adr,0,0,0,CLS_V,50,"Rasp_Adr","�����"};
pStayFD _Rasp_Adr = &_n_Rasp_Adr;

DWORD SerZar;
StayFD _n_SerZar = {&SerZar,0,0,0,CLS_L,0,"SerZar","������� ��������� �� ���.����"};
pStayFD _SerZar = &_n_SerZar;

uint6 Koef_Zrpl;
StayFD _n_Koef_Zrpl = {&Koef_Zrpl,0,0,0,CLS_H,5,"Koef_Zrpl","����������� �������� �����"};
pStayFD _Koef_Zrpl = &_n_Koef_Zrpl;

uint6 SerZarPen;
StayFD _n_SerZarPen = {&SerZarPen,0,0,0,CLS_H,5,"SerZarPen","��������������� ��������� ��� ���������� ����"};
pStayFD _SerZarPen = &_n_SerZarPen;

StayDate MP_DPZar;
StayFD _n_MP_DPZar = {&MP_DPZar,0,0,0,CLS_Date,0,"MP_DPZar","���� ���������� ���������"};
pStayFD _MP_DPZar = &_n_MP_DPZar;

StayDate MP_DateIn;
StayFD _n_MP_DateIn = {&MP_DateIn,0,0,0,CLS_Date,0,"MP_DateIn","���� ����������"};
pStayFD _MP_DateIn = &_n_MP_DateIn;

StayDate MP_DatePer;
StayFD _n_MP_DatePer = {&MP_DatePer,0,0,0,CLS_Date,0,"MP_DatePer","���� �����������"};
pStayFD _MP_DatePer = &_n_MP_DatePer;

StayDate MP_Dnaz;
StayFD _n_MP_Dnaz = {&MP_Dnaz,0,0,0,CLS_Date,0,"MP_Dnaz","���� �������� ����������"};
pStayFD _MP_Dnaz = &_n_MP_Dnaz;

StayDate MP_Dobr;
StayFD _n_MP_Dobr = {&MP_Dobr,0,0,0,CLS_Date,0,"MP_Dobr","���� ��������������� ���������"};
pStayFD _MP_Dobr = &_n_MP_Dobr;

StayDate MP_Drog;
StayFD _n_MP_Drog = {&MP_Drog,0,0,0,CLS_Date,0,"MP_Drog","���� ��������"};
pStayFD _MP_Drog = &_n_MP_Drog;

DWORD MP_IKoef;
StayFD _n_MP_IKoef = {&MP_IKoef,0,0,0,CLS_L,4,"MP_IKoef","���������� ������ �� � ����� 92 ����"};
pStayFD _MP_IKoef = &_n_MP_IKoef;

DWORD MP_Indots;
StayFD _n_MP_Indots = {&MP_Indots,0,0,0,CLS_L,0,"MP_Indots","������ ��������� ����� (KLI)"};
pStayFD _MP_Indots = &_n_MP_Indots;

WORD  MP_Ncsbb;
StayFD _n_MP_Ncsbb = {&MP_Ncsbb,0,0,0,CLS_I,0,"MP_Ncsbb","���"};
pStayFD _MP_Ncsbb = &_n_MP_Ncsbb;

DWORD MP_Nls;
StayFD _n_MP_Nls = {&MP_Nls,0,0,0,CLS_L,0,"MP_Nls","����� �/�� ���������� ������"};
pStayFD _MP_Nls = &_n_MP_Nls;

WORD  MP_Npsbb;
StayFD _n_MP_Npsbb = {&MP_Npsbb,0,0,0,CLS_I,0,"MP_Npsbb","���"};
pStayFD _MP_Npsbb = &_n_MP_Npsbb;

BYTE  MP_OldPen;
StayFD _n_MP_OldPen = {&MP_OldPen,0,0,0,CLS_S,0,"MP_OldPen","������ ������ ������ 0-������ 1-�����"};
pStayFD _MP_OldPen = &_n_MP_OldPen;

WORD  MP_PrizD;
StayFD _n_MP_PrizD = {&MP_PrizD,0,0,0,CLS_I,0,"MP_PrizD","������� ��������� �������"};
pStayFD _MP_PrizD = &_n_MP_PrizD;

WORD  MP_PrizP;
StayFD _n_MP_PrizP = {&MP_PrizP,0,0,0,CLS_I,0,"MP_PrizP","������� �����������"};
pStayFD _MP_PrizP = &_n_MP_PrizP;

short MP_ProcVzNauk;
StayFD _n_MP_ProcVzNauk = {&MP_ProcVzNauk,0,0,0,CLS_Is,0,"MP_ProcVzNauk","������� �� ��������� � ������ �� ����"};
pStayFD _MP_ProcVzNauk = &_n_MP_ProcVzNauk;

WORD  MP_Procent;
StayFD _n_MP_Procent = {&MP_Procent,0,0,0,CLS_I,0,"MP_Procent",""};
pStayFD _MP_Procent = &_n_MP_Procent;

BYTE  MP_Rab;
StayFD _n_MP_Rab = {&MP_Rab,0,0,0,CLS_S,0,"MP_Rab","������� ������ (KLPRAB)"};
pStayFD _MP_Rab = &_n_MP_Rab;

WORD  MP_Raj;
StayFD _n_MP_Raj = {&MP_Raj,0,0,0,CLS_I,0,"MP_Raj","��� ������"};
pStayFD _MP_Raj = &_n_MP_Raj;

int   MP_S708N;
StayFD _n_MP_S708N = {&MP_S708N,0,0,0,CLS_Ls,2,"MP_S708N","C���� �� 708 �����"};
pStayFD _MP_S708N = &_n_MP_S708N;

int   MP_S708O;
StayFD _n_MP_S708O = {&MP_S708O,0,0,0,CLS_Ls,2,"MP_S708O","C���� �� 708 ������"};
pStayFD _MP_S708O = &_n_MP_S708O;

int   MP_S750N;
StayFD _n_MP_S750N = {&MP_S750N,0,0,0,CLS_Ls,2,"MP_S750N","C���� �� 750 �����"};
pStayFD _MP_S750N = &_n_MP_S750N;

int   MP_S750O;
StayFD _n_MP_S750O = {&MP_S750O,0,0,0,CLS_Ls,2,"MP_S750O","C���� �� 750 ������"};
pStayFD _MP_S750O = &_n_MP_S750O;

int   MP_S808N;
StayFD _n_MP_S808N = {&MP_S808N,0,0,0,CLS_Ls,2,"MP_S808N","C���� �� 808 �����"};
pStayFD _MP_S808N = &_n_MP_S808N;

int   MP_S808O;
StayFD _n_MP_S808O = {&MP_S808O,0,0,0,CLS_Ls,2,"MP_S808O","C���� �� 808 ������"};
pStayFD _MP_S808O = &_n_MP_S808O;

int   MP_S809N;
StayFD _n_MP_S809N = {&MP_S809N,0,0,0,CLS_Ls,2,"MP_S809N","C���� �� 809 �����"};
pStayFD _MP_S809N = &_n_MP_S809N;

int   MP_S809O;
StayFD _n_MP_S809O = {&MP_S809O,0,0,0,CLS_Ls,2,"MP_S809O","C���� �� 809 ������"};
pStayFD _MP_S809O = &_n_MP_S809O;

int   MP_S908N;
StayFD _n_MP_S908N = {&MP_S908N,0,0,0,CLS_Ls,2,"MP_S908N","C���� �� 908 �����"};
pStayFD _MP_S908N = &_n_MP_S908N;

int   MP_S908O;
StayFD _n_MP_S908O = {&MP_S908O,0,0,0,CLS_Ls,2,"MP_S908O","C���� �� 908 ������"};
pStayFD _MP_S908O = &_n_MP_S908O;

int   MP_SDolg;
StayFD _n_MP_SDolg = {&MP_SDolg,0,0,0,CLS_Ls,2,"MP_SDolg","C���� �����"};
pStayFD _MP_SDolg = &_n_MP_SDolg;

int   MP_SKfnlsN;
StayFD _n_MP_SKfnlsN = {&MP_SKfnlsN,0,0,0,CLS_Ls,2,"MP_SKfnlsN","C���� �� Ls_Kfn �����"};
pStayFD _MP_SKfnlsN = &_n_MP_SKfnlsN;

int   MP_SKfnlsO;
StayFD _n_MP_SKfnlsO = {&MP_SKfnlsO,0,0,0,CLS_Ls,2,"MP_SKfnlsO","C���� �� Ls_Kfn ������"};
pStayFD _MP_SKfnlsO = &_n_MP_SKfnlsO;

int   MP_SKoef;
StayFD _n_MP_SKoef = {&MP_SKoef,0,0,0,CLS_Ls,5,"MP_SKoef","C���� ��� �����������"};
pStayFD _MP_SKoef = &_n_MP_SKoef;

int   MP_SNP;
StayFD _n_MP_SNP = {&MP_SNP,0,0,0,CLS_Ls,2,"MP_SNP","����� ��������"};
pStayFD _MP_SNP = &_n_MP_SNP;

int   MP_SOsnN;
StayFD _n_MP_SOsnN = {&MP_SOsnN,0,0,0,CLS_Ls,2,"MP_SOsnN","�������� ������"};
pStayFD _MP_SOsnN = &_n_MP_SOsnN;

int   MP_SPenFN;
StayFD _n_MP_SPenFN = {&MP_SPenFN,0,0,0,CLS_Ls,2,"MP_SPenFN","C���� �� 1 ��������� �����"};
pStayFD _MP_SPenFN = &_n_MP_SPenFN;

int   MP_SPenFO;
StayFD _n_MP_SPenFO = {&MP_SPenFO,0,0,0,CLS_Ls,2,"MP_SPenFO","C���� �� 1 ��������� ������"};
pStayFD _MP_SPenFO = &_n_MP_SPenFO;

int   MP_SViplN;
StayFD _n_MP_SViplN = {&MP_SViplN,0,0,0,CLS_Ls,2,"MP_SViplN","C���� � ������� �����"};
pStayFD _MP_SViplN = &_n_MP_SViplN;

int   MP_SViplO;
StayFD _n_MP_SViplO = {&MP_SViplO,0,0,0,CLS_Ls,2,"MP_SViplO","C���� � ������� ������"};
pStayFD _MP_SViplO = &_n_MP_SViplO;

WORD  MP_Shifr;
StayFD _n_MP_Shifr = {&MP_Shifr,0,0,0,CLS_I,0,"MP_Shifr","���� ������"};
pStayFD _MP_Shifr = &_n_MP_Shifr;

BYTE  MP_Spos;
StayFD _n_MP_Spos = {&MP_Spos,0,0,0,CLS_S,0,"MP_Spos","������ ������� (1-, 2-, 3-)"};
pStayFD _MP_Spos = &_n_MP_Spos;

StayDate MP_Srok;
StayFD _n_MP_Srok = {&MP_Srok,0,0,0,CLS_Date,0,"MP_Srok","���� ��"};
pStayFD _MP_Srok = &_n_MP_Srok;

BYTE  MP_VidPen;
StayFD _n_MP_VidPen = {&MP_VidPen,0,0,0,CLS_S,0,"MP_VidPen","��� ������ 1�2�3"};
pStayFD _MP_VidPen = &_n_MP_VidPen;

uint6 MP_Zar;
StayFD _n_MP_Zar = {&MP_Zar,0,0,0,CLS_H,5,"MP_Zar","������������ ���������"};
pStayFD _MP_Zar = &_n_MP_Zar;

uint6 MP_Zar22;
StayFD _n_MP_Zar22 = {&MP_Zar22,0,0,0,CLS_H,5,"MP_Zar22","������������ ���������"};
pStayFD _MP_Zar22 = &_n_MP_Zar22;

DWORD Perp_S163;
StayFD _n_Perp_S163 = {&Perp_S163,0,0,0,CLS_L,2,"Perp_S163",""};
pStayFD _Perp_S163 = &_n_Perp_S163;

DWORD Perp_S163G;
StayFD _n_Perp_S163G = {&Perp_S163G,0,0,0,CLS_L,2,"Perp_S163G",""};
pStayFD _Perp_S163G = &_n_Perp_S163G;

DWORD Perp_S163D;
StayFD _n_Perp_S163D = {&Perp_S163D,0,0,0,CLS_L,2,"Perp_S163D",""};
pStayFD _Perp_S163D = &_n_Perp_S163D;

WORD  ZrDP_Nepol;
StayFD _n_ZrDP_Nepol = {&ZrDP_Nepol,0,0,0,CLS_I,0,"ZrDP_Nepol",""};
pStayFD _ZrDP_Nepol = &_n_ZrDP_Nepol;

uint6 ZrDP_SrNx2;
StayFD _n_ZrDP_SrNx2 = {&ZrDP_SrNx2,0,0,0,CLS_H,5,"ZrDP_SrNx2",""};
pStayFD _ZrDP_SrNx2 = &_n_ZrDP_SrNx2;

uint6 Add_Uint6;
StayFD _n_Add_Uint6 = {&Add_Uint6,0,0,0,CLS_H,5,"Add_Uint6",""};
pStayFD _Add_Uint6 = &_n_Add_Uint6;

int   Add_Uint4;
StayFD _n_Add_Uint4 = {&Add_Uint4,0,0,0,CLS_Ls,2,"Add_Uint4",""};
pStayFD _Add_Uint4 = &_n_Add_Uint4;

StayDate Add_Date;
StayFD _n_Add_Date = {&Add_Date,0,0,0,CLS_Date,0,"Add_Date",""};
pStayFD _Add_Date = &_n_Add_Date;

BYTE  Add_Code;
StayFD _n_Add_Code = {&Add_Code,0,0,0,CLS_S,0,"Add_Code",""};
pStayFD _Add_Code = &_n_Add_Code;

extern StayDataset _n_B_MP;
extern StayDataset _n_PravoMp;
extern StayDataset _n_PerMp;
extern StayDataset _n_NpMp;
extern StayDataset _n_DpMp;
extern StayDataset _n_PerpMp;
extern StayDataset _n_ZrbMp;
extern StayDataset _n_RizrbKfMp;
extern StayDataset _n_B_DpMp;
extern StayDataset _n_B_Dp;
extern StayDataset _n_B_Add;
extern StayDataset _n_AddPerp;
extern StayDataset _n_AddPravo;
extern StayDataset _n_AddPer;
extern StayDataset _n_AddDpMp;
extern StayDataset _n_AddDP;
static pStayFD tcm_B_MP[] =
{
 (StayFD *)&_n_MP_Code,
 (StayFD *)&_n_MP_Nls,
 (StayFD *)&_n_MP_PrizD,
 (StayFD *)&_n_MP_PrizP,
 (StayFD *)&_n_MP_SNP,
 (StayFD *)&_n_MP_SOsnN,
 (StayFD *)&_n_MP_Drog,
 (StayFD *)&_n_MP_IKoef,
 (StayFD *)&_n_MP_VidPen,
 (StayFD *)&_n_MP_OldPen,
 (StayFD *)&_n_MP_DPZar,
 (StayFD *)&_n_MP_Zar,
 (StayFD *)&_n_MP_Zar22,
 (StayFD *)&_n_MP_Procent,
 (StayFD *)&_n_MP_Spos,
 (StayFD *)&_n_MP_Ncsbb,
 (StayFD *)&_n_MP_Npsbb,
 (StayFD *)&_n_MP_Indots,
 (StayFD *)&_n_MP_DatePer,
 (StayFD *)&_n_MP_DateIn,
 (StayFD *)&_n_MP_Shifr,
 (StayFD *)&_n_MP_Rab,
 (StayFD *)&_n_MP_Raj,
 (StayFD *)&_n_MP_S750O,
 (StayFD *)&_n_MP_S750N,
 (StayFD *)&_n_MP_S708O,
 (StayFD *)&_n_MP_S708N,
 (StayFD *)&_n_MP_S908O,
 (StayFD *)&_n_MP_S908N,
 (StayFD *)&_n_MP_S808O,
 (StayFD *)&_n_MP_S808N,
 (StayFD *)&_n_MP_S809O,
 (StayFD *)&_n_MP_S809N,
 (StayFD *)&_n_MP_SKfnlsO,
 (StayFD *)&_n_MP_SKfnlsN,
 (StayFD *)&_n_MP_SPenFO,
 (StayFD *)&_n_MP_SPenFN,
 (StayFD *)&_n_MP_SViplO,
 (StayFD *)&_n_MP_SViplN,
 (StayFD *)&_n_MP_SKoef,
 (StayFD *)&_n_MP_SDolg,
 (StayFD *)&_n_MP_Srok,
 (StayFD *)&_n_MP_Dnaz,
 (StayFD *)&_n_MP_Dobr,
 (StayFD *)&_n_MP_ProcVzNauk,
 (StayFD *)&_n_PravoMp,
 (StayFD *)&_n_PerpMp,
 (StayFD *)&_n_ZrbMp,
 (StayFD *)&_n_RizrbKfMp,
 (StayFD *)&_n_B_DpMp,
 (StayFD *)&_n_B_Add,
 NULL
};
static BYTE ix_B_MP[] = {5,1,2,0,1,2,69,0,14,15,16,1,3,67,0,17,1,4,67,0,19,1,5,66,0,8};
StayDataset _n_B_MP = {NULL,TAG_DATASET,0,0,DS_BBASE,0,1,0,NULL,tcm_B_MP,NULL,
           "MP:MP1216.DT",ix_B_MP,"���� ��������� �����������","B_MP",100};
pStayDataset B_MP = &_n_B_MP;

static pStayFD tcm_PravoMp[] =
{
 (StayFD *)&_n_Pravo_VPen,
 (StayFD *)&_n_Pravo_Zak,
 (StayFD *)&_n_Pravo_Nomig,
 (StayFD *)&_n_Pravo_Nr,
 (StayFD *)&_n_Pravo_DateBeg,
 (StayFD *)&_n_Pravo_Prof,
 (StayFD *)&_n_Pravo_DateVsr,
 (StayFD *)&_n_Pravo_Kfn,
 (StayFD *)&_n_Pravo_DateEnd,
 (StayFD *)&_n_Pravo_Che,
 (StayFD *)&_n_Pravo_Op,
 (StayFD *)&_n_Pravo_DateCHK,
 (StayFD *)&_n_Pravo_DateChe,
 (StayFD *)&_n_Pravo_DateZan,
 (StayFD *)&_n_Pravo_FullYes,
 (StayFD *)&_n_Pravo_DateMax,
 (StayFD *)&_n_Pravo_MaxPens,
 (StayFD *)&_n_Pravo_DopPens,
 (StayFD *)&_n_Pravo_Zan,
 (StayFD *)&_n_Pravo_Koef,
 (StayFD *)&_n_Pens_Procent,
 (StayFD *)&_n_Pens_Koef,
 (StayFD *)&_n_Pens_IKf,
 (StayFD *)&_n_Pens_RazmKoef,
 (StayFD *)&_n_Pens_RazmNP,
 (StayFD *)&_n_Pens_RazmOgr,
 (StayFD *)&_n_Pens_RazmOgrNS,
 (StayFD *)&_n_Pens_RazmOgrS,
 (StayFD *)&_n_Pens_RazmOsn,
 (StayFD *)&_n_Pens_RazmVipl,
 (StayFD *)&_n_Pens_RazmGos,
 (StayFD *)&_n_Pens_RazmDot,
 (StayFD *)&_n_Pens_RazmGDot,
 (StayFD *)&_n_Pens_RazG908,
 (StayFD *)&_n_Pens_Razm908,
 (StayFD *)&_n_Pens_RazG808,
 (StayFD *)&_n_Pens_Razm808,
 (StayFD *)&_n_Pens_SirG908,
 (StayFD *)&_n_Pens_Razm709,
 (StayFD *)&_n_Pens_Razm850,
 (StayFD *)&_n_Pens_Sir908,
 (StayFD *)&_n_Pens_Razm991,
 (StayFD *)&_n_Pens_RazG991,
 (StayFD *)&_n_Pens_VarRas,
 (StayFD *)&_n_Pens_FaktSt,
 (StayFD *)&_n_Pens_RazmMALOB,
 (StayFD *)&_n_Pens_RazmIND,
 (StayFD *)&_n_Pens_RazmSIND,
 (StayFD *)&_n_Pens_RazmGIND,
 (StayFD *)&_n_Pravo_Shifr,
 (StayFD *)&_n_Pens_PlanSt,
 (StayFD *)&_n_Pens_RazmVipl5,
 (StayFD *)&_n_Pravo_NMDolja,
 (StayFD *)&_n_PerMp,
 (StayFD *)&_n_AddPravo,
 NULL
};
static BYTE ix_PravoMp[] = {1,1,6,0,1,2,3,4,5};
StayDataset _n_PravoMp = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_PravoMp,NULL,
           NULL,ix_PravoMp,NULL,"PravoMp",};
pStayDataset PravoMp = &_n_PravoMp;

static pStayFD tcm_PerMp[] =
{
 (StayFD *)&_n_Per_DateBeg,
 (StayFD *)&_n_Per_DopBeg,
 (StayFD *)&_n_Per_DateEnd,
 (StayFD *)&_n_Per_Procent,
 (StayFD *)&_n_Per_RazmOsn,
 (StayFD *)&_n_Per_RazmOgr,
 (StayFD *)&_n_Per_RazmOgrNS,
 (StayFD *)&_n_Per_RazmOgrS,
 (StayFD *)&_n_Per_RazmKoef,
 (StayFD *)&_n_Per_RazmVipl,
 (StayFD *)&_n_Per_RazmGos,
 (StayFD *)&_n_Per_RazmDot,
 (StayFD *)&_n_Per_RazmGDot,
 (StayFD *)&_n_Per_Razm908,
 (StayFD *)&_n_Per_RazG908,
 (StayFD *)&_n_Per_Razm808,
 (StayFD *)&_n_Per_Razm814,
 (StayFD *)&_n_Per_Razm815,
 (StayFD *)&_n_Per_Razm853,
 (StayFD *)&_n_Per_Razm854,
 (StayFD *)&_n_Per_Razm854,
 (StayFD *)&_n_Per_RazG808,
 (StayFD *)&_n_Per_Sir908,
 (StayFD *)&_n_Per_SirG908,
 (StayFD *)&_n_Per_Razm991,
 (StayFD *)&_n_Per_RazG991,
 (StayFD *)&_n_Per_IgdVs,
 (StayFD *)&_n_Per_IgdGs,
 (StayFD *)&_n_Per_Shifr,
 (StayFD *)&_n_Per_PShifr,
 (StayFD *)&_n_Per_VarRas,
 (StayFD *)&_n_Pern_Kfn,
 (StayFD *)&_n_Per_Koef,
 (StayFD *)&_n_Per_RazmMALOB,
 (StayFD *)&_n_Per_RazmIND,
 (StayFD *)&_n_Per_RazmSIND,
 (StayFD *)&_n_Per_RazmGIND,
 (StayFD *)&_n_Per_NMDolja,
 (StayFD *)&_n_DpMp,
 (StayFD *)&_n_NpMp,
 (StayFD *)&_n_AddPer,
 NULL
};
static BYTE ix_PerMp[] = {1,1,1,0};
StayDataset _n_PerMp = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_PerMp,NULL,
           NULL,ix_PerMp,NULL,"PerMp",};
pStayDataset PerMp = &_n_PerMp;

static pStayFD tcm_NpMp[] =
{
 (StayFD *)&_n_Np_Code,
 (StayFD *)&_n_Np_Razm,
 (StayFD *)&_n_Np_Proc,
 NULL
};
static BYTE ix_NpMp[] = {1,1,65,0};
StayDataset _n_NpMp = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_NpMp,NULL,
           NULL,ix_NpMp,NULL,"NpMp",};
pStayDataset NpMp = &_n_NpMp;

static pStayFD tcm_DpMp[] =
{
 (StayFD *)&_n_Dp_Code,
 (StayFD *)&_n_Dp_NomIgd,
 (StayFD *)&_n_Dp_DateBeg,
 (StayFD *)&_n_Dp_DateEnd,
 (StayFD *)&_n_Dp_Razm,
 (StayFD *)&_n_Dp_Proc,
 (StayFD *)&_n_Dp_Kodbl,
 NULL
};
static BYTE ix_DpMp[] = {1,1,2,0,1};
StayDataset _n_DpMp = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_DpMp,NULL,
           NULL,ix_DpMp,NULL,"DpMp",};
pStayDataset DpMp = &_n_DpMp;

static pStayFD tcm_PerpMp[] =
{
 (StayFD *)&_n_Perp_Zak,
 (StayFD *)&_n_Perp_NMDolja,
 (StayFD *)&_n_Perp_DateBeg,
 (StayFD *)&_n_Perp_DopBeg,
 (StayFD *)&_n_Perp_DateEnd,
 (StayFD *)&_n_Perp_Kfn,
 (StayFD *)&_n_Perp_Op,
 (StayFD *)&_n_Perp_RazmKoef,
 (StayFD *)&_n_Perp_Summa,
 (StayFD *)&_n_Perp_RazmGos,
 (StayFD *)&_n_Perp_RazmDot,
 (StayFD *)&_n_Perp_RazmGDot,
 (StayFD *)&_n_Perp_Razm709,
 (StayFD *)&_n_Perp_RazG709,
 (StayFD *)&_n_Perp_Razm908,
 (StayFD *)&_n_Perp_RazG908,
 (StayFD *)&_n_Perp_Razm808,
 (StayFD *)&_n_Perp_RazG808,
 (StayFD *)&_n_Perp_RazG808,
 (StayFD *)&_n_Perp_Razm809,
 (StayFD *)&_n_Perp_Razm812,
 (StayFD *)&_n_Perp_Razm814,
 (StayFD *)&_n_Perp_Razm815,
 (StayFD *)&_n_Perp_Razm850,
 (StayFD *)&_n_Perp_Razm853,
 (StayFD *)&_n_Perp_Razm854,
 (StayFD *)&_n_Perp_Razm855,
 (StayFD *)&_n_Perp_RazG850,
 (StayFD *)&_n_Perp_Razm852,
 (StayFD *)&_n_Perp_Razm991,
 (StayFD *)&_n_Perp_RazG991,
 (StayFD *)&_n_Perp_IgdVs,
 (StayFD *)&_n_Perp_IgdGs,
 (StayFD *)&_n_Perp_Shifr,
 (StayFD *)&_n_Perp_RazmMALOB,
 (StayFD *)&_n_Perp_RazmIND,
 (StayFD *)&_n_Perp_RazmSIND,
 (StayFD *)&_n_Perp_RazmGIND,
 (StayFD *)&_n_Perp_RazmPF,
 (StayFD *)&_n_Perp_RazmOsPF,
 (StayFD *)&_n_Perp_RazmKfPF,
 (StayFD *)&_n_Perp_ProcPF,
 (StayFD *)&_n_Perp_ShifrPF,
 (StayFD *)&_n_Perp_KfnPF,
 (StayFD *)&_n_Perp_Pr,
 (StayFD *)&_n_Perp_VarRas,
 (StayFD *)&_n_AddPerp,
 NULL
};
static BYTE ix_PerpMp[] = {1,1,3,0,1,2};
StayDataset _n_PerpMp = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_PerpMp,NULL,
           NULL,ix_PerpMp,"���� ������ ��� ������ � ���� ������������","PerpMp",};
pStayDataset PerpMp = &_n_PerpMp;

static pStayFD tcm_ZrbMp[] =
{
 (StayFD *)&_n_Rizrb_DEZF192,
 (StayFD *)&_n_Rizrb_DEZF292,
 (StayFD *)&_n_Rizrb_MaxMF192,
 (StayFD *)&_n_Rizrb_MaxMF292,
 (StayFD *)&_n_Rizrb_MaxMZFP,
 NULL
};
StayDataset _n_ZrbMp = {NULL,TAG_DATASET,0,0,DS_STRUCT,0,1,0,NULL,tcm_ZrbMp,NULL,
           NULL,NULL,NULL,"ZrbMp",};
pStayDataset ZrbMp = &_n_ZrbMp;

static pStayFD tcm_RizrbKfMp[] =
{
 (StayFD *)&_n_RizrbKf_Nr,
 (StayFD *)&_n_RizrbKf_Nrs,
 (StayFD *)&_n_RizrbKf_Dbeg,
 (StayFD *)&_n_RizrbKf_Dend,
 (StayFD *)&_n_RizrbKf_Mes,
 (StayFD *)&_n_RizrbKf_Suma,
 (StayFD *)&_n_RizrbKf_Koef,
 (StayFD *)&_n_RizrbKf_SumaP,
 (StayFD *)&_n_RizrbKf_SrNx,
 NULL
};
static BYTE ix_RizrbKfMp[] = {1,1,3,0,1,2};
StayDataset _n_RizrbKfMp = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_RizrbKfMp,NULL,
           NULL,ix_RizrbKfMp,NULL,"RizrbKfMp",};
pStayDataset RizrbKfMp = &_n_RizrbKfMp;

static pStayFD tcm_B_DpMp[] =
{
 (StayFD *)&_n_ZrDP_Nr,
 (StayFD *)&_n_ZrDP_PBeg,
 (StayFD *)&_n_ZrDP_PEnd,
 (StayFD *)&_n_ZrDP_Period,
 (StayFD *)&_n_ZrDP_Zar,
 (StayFD *)&_n_ZrDP_Ogr,
 (StayFD *)&_n_ZrDP_Ogr22,
 (StayFD *)&_n_ZrDP_SrNx,
 (StayFD *)&_n_ZrDP_SrNx22,
 (StayFD *)&_n_ZrDP_SrNx2,
 (StayFD *)&_n_ZrDP_Koef,
 (StayFD *)&_n_ZrDP_Koef22,
 (StayFD *)&_n_ZrDP_Procent,
 (StayFD *)&_n_ZrDP_IKoef,
 (StayFD *)&_n_ZrDP_IKoef22,
 (StayFD *)&_n_ZrDP_Dop_Stg_Y,
 (StayFD *)&_n_ZrDP_Dop_Stg_M,
 (StayFD *)&_n_ZrDP_Dop_Stg_D,
 (StayFD *)&_n_ZrDP_Nepol,
 (StayFD *)&_n_B_Dp,
 (StayFD *)&_n_AddDpMp,
 NULL
};
static BYTE ix_B_DpMp[] = {1,1,129,0};
StayDataset _n_B_DpMp = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_DpMp,NULL,
           NULL,ix_B_DpMp,"���� ������� �����","B_DpMp",};
pStayDataset B_DpMp = &_n_B_DpMp;

static pStayFD tcm_B_Dp[] =
{
 (StayFD *)&_n_DP_PBeg,
 (StayFD *)&_n_DP_PEnd,
 (StayFD *)&_n_DP_Period,
 (StayFD *)&_n_DP_Zar,
 (StayFD *)&_n_DP_Dopl,
 (StayFD *)&_n_DP_Prem,
 (StayFD *)&_n_DP_Ogr,
 (StayFD *)&_n_DP_Ogr22,
 (StayFD *)&_n_DP_SrNx,
 (StayFD *)&_n_DP_SrNx22,
 (StayFD *)&_n_DP_Koef,
 (StayFD *)&_n_DP_Koef22,
 (StayFD *)&_n_AddDP,
 NULL
};
static BYTE ix_B_Dp[] = {1,1,129,0};
StayDataset _n_B_Dp = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_Dp,NULL,
           NULL,ix_B_Dp,"���� ������� �����","B_Dp",};
pStayDataset B_Dp = &_n_B_Dp;

static pStayFD tcm_B_Add[] =
{
 (StayFD *)&_n_Add_Code,
 (StayFD *)&_n_Add_Date,
 (StayFD *)&_n_Add_Uint6,
 (StayFD *)&_n_Add_Uint4,
 NULL
};
static BYTE ix_B_Add[] = {1,1,129,0};
StayDataset _n_B_Add = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_Add,NULL,
           NULL,ix_B_Add,"���� ������� �����","B_Add",};
pStayDataset B_Add = &_n_B_Add;

static pStayFD tcm_AddPerp[] =
{
 (StayFD *)&_n_Add_Code,
 (StayFD *)&_n_Add_Date,
 (StayFD *)&_n_Add_Uint6,
 (StayFD *)&_n_Add_Uint4,
 NULL
};
static BYTE ix_AddPerp[] = {1,1,129,0};
StayDataset _n_AddPerp = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_AddPerp,NULL,
           NULL,ix_AddPerp,"���� ������� �����","AddPerp",};
pStayDataset AddPerp = &_n_AddPerp;

static pStayFD tcm_AddPravo[] =
{
 (StayFD *)&_n_Add_Code,
 (StayFD *)&_n_Add_Date,
 (StayFD *)&_n_Add_Uint6,
 (StayFD *)&_n_Add_Uint4,
 NULL
};
static BYTE ix_AddPravo[] = {1,1,129,0};
StayDataset _n_AddPravo = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_AddPravo,NULL,
           NULL,ix_AddPravo,"���� ������� �����","AddPravo",};
pStayDataset AddPravo = &_n_AddPravo;

static pStayFD tcm_AddPer[] =
{
 (StayFD *)&_n_Add_Code,
 (StayFD *)&_n_Add_Date,
 (StayFD *)&_n_Add_Uint6,
 (StayFD *)&_n_Add_Uint4,
 NULL
};
static BYTE ix_AddPer[] = {1,1,129,0};
StayDataset _n_AddPer = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_AddPer,NULL,
           NULL,ix_AddPer,"���� ������� �����","AddPer",};
pStayDataset AddPer = &_n_AddPer;

static pStayFD tcm_AddDpMp[] =
{
 (StayFD *)&_n_Add_Code,
 (StayFD *)&_n_Add_Date,
 (StayFD *)&_n_Add_Uint6,
 (StayFD *)&_n_Add_Uint4,
 NULL
};
static BYTE ix_AddDpMp[] = {1,1,129,0};
StayDataset _n_AddDpMp = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_AddDpMp,NULL,
           NULL,ix_AddDpMp,"���� ������� �����","AddDpMp",};
pStayDataset AddDpMp = &_n_AddDpMp;

static pStayFD tcm_AddDP[] =
{
 (StayFD *)&_n_Add_Code,
 (StayFD *)&_n_Add_Date,
 (StayFD *)&_n_Add_Uint6,
 (StayFD *)&_n_Add_Uint4,
 NULL
};
static BYTE ix_AddDP[] = {1,1,129,0};
StayDataset _n_AddDP = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_AddDP,NULL,
           NULL,ix_AddDP,"���� ������� �����","AddDP",};
pStayDataset AddDP = &_n_AddDP;

void *MAS_SMP[] =
 {NULL,
  &_nn_MAS_SMP,
  &_n_SMP_Code,
  &_n_SMP_DtB,
  &_n_SMP_DtE,
  &_n_SMP_DtMove,
  &_n_MP_Code,
  &_n_ZrDP_Dop_Stg_Y,
  &_n_ZrDP_Dop_Stg_M,
  &_n_ZrDP_Dop_Stg_D,
  &_n_ZrDP_Procent,
  &_n_ZrDP_IKoef,
  &_n_ZrDP_IKoef22,
  &_n_DP_PBeg,
  &_n_DP_PEnd,
  &_n_DP_Period,
  &_n_DP_Nepol,
  &_n_DP_Zar,
  &_n_DP_Dopl,
  &_n_DP_Prem,
  &_n_DP_Ogr,
  &_n_DP_Ogr22,
  &_n_DP_SrNx,
  &_n_DP_SrNx22,
  &_n_DP_Koef,
  &_n_DP_Koef22,
  &_n_ZrDP_Nr,
  &_n_ZrDP_PBeg,
  &_n_ZrDP_PEnd,
  &_n_ZrDP_Period,
  &_n_ZrDP_Zar,
  &_n_ZrDP_Ogr,
  &_n_ZrDP_Ogr22,
  &_n_ZrDP_SrNx,
  &_n_ZrDP_SrNx22,
  &_n_ZrDP_Koef,
  &_n_ZrDP_Koef22,
  &_n_Pol,
  &_n_Rasp_Adr,
  &_n_SerZar,
  &_n_Koef_Zrpl,
  &_n_SerZarPen,
  &_n_MP_DPZar,
  &_n_MP_DateIn,
  &_n_MP_DatePer,
  &_n_MP_Dnaz,
  &_n_MP_Dobr,
  &_n_MP_Drog,
  &_n_MP_IKoef,
  &_n_MP_Indots,
  &_n_MP_Ncsbb,
  &_n_MP_Nls,
  &_n_MP_Npsbb,
  &_n_MP_OldPen,
  &_n_MP_PrizD,
  &_n_MP_PrizP,
  &_n_MP_ProcVzNauk,
  &_n_MP_Procent,
  &_n_MP_Rab,
  &_n_MP_Raj,
  &_n_MP_S708N,
  &_n_MP_S708O,
  &_n_MP_S750N,
  &_n_MP_S750O,
  &_n_MP_S808N,
  &_n_MP_S808O,
  &_n_MP_S809N,
  &_n_MP_S809O,
  &_n_MP_S908N,
  &_n_MP_S908O,
  &_n_MP_SDolg,
  &_n_MP_SKfnlsN,
  &_n_MP_SKfnlsO,
  &_n_MP_SKoef,
  &_n_MP_SNP,
  &_n_MP_SOsnN,
  &_n_MP_SPenFN,
  &_n_MP_SPenFO,
  &_n_MP_SViplN,
  &_n_MP_SViplO,
  &_n_MP_Shifr,
  &_n_MP_Spos,
  &_n_MP_Srok,
  &_n_MP_VidPen,
  &_n_MP_Zar,
  &_n_MP_Zar22,
  &_n_Perp_S163,
  &_n_Perp_S163G,
  &_n_Perp_S163D,
  &_n_ZrDP_Nepol,
  &_n_ZrDP_SrNx2,
  &_n_Add_Uint6,
  &_n_Add_Uint4,
  &_n_Add_Date,
  &_n_Add_Code,
  (StayFD *)B_MP,
  (StayFD *)PravoMp,
  (StayFD *)PerMp,
  (StayFD *)NpMp,
  (StayFD *)DpMp,
  (StayFD *)PerpMp,
  (StayFD *)ZrbMp,
  (StayFD *)RizrbKfMp,
  (StayFD *)B_DpMp,
  (StayFD *)B_Dp,
  (StayFD *)B_Add,
  (StayFD *)AddPerp,
  (StayFD *)AddPravo,
  (StayFD *)AddPer,
  (StayFD *)AddDpMp,
  (StayFD *)AddDP,
  NULL};

PICMODULEEND(MAS_SMP)

