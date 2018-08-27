//-------------------------------------------------------------------------
// STAY/W      Resource file KL.XME
//-------------------------------------------------------------------------
// Created 26\10\2011 11:49
//-------------------------------------------------------------------------

#include "KL.h"

PICMODULEBEG(KL)

static StayFD _nn_KL = {NULL,TAG_PIC,0,0,0,0,"KL",NULL};
WORD  PtSan_Code;
StayFD _n_PtSan_Code = {&PtSan_Code,0,0,0,CLS_I,0,"PtSan_Code","��� ���������"};
pStayFD _PtSan_Code = &_n_PtSan_Code;

uint6 PtSan_Code1;
StayFD _n_PtSan_Code1 = {&PtSan_Code1,0,0,0,CLS_H,0,"PtSan_Code1","��� ������"};
pStayFD _PtSan_Code1 = &_n_PtSan_Code1;

char PtSan_Name[31];
StayFD _n_PtSan_Name = {&PtSan_Name,0,0,0,CLS_V,30,"PtSan_Name","������������ ���������"};
pStayFD _PtSan_Name = &_n_PtSan_Name;

char PtSan_Kurort[21];
StayFD _n_PtSan_Kurort = {&PtSan_Kurort,0,0,0,CLS_V,20,"PtSan_Kurort","������������ �������"};
pStayFD _PtSan_Kurort = &_n_PtSan_Kurort;

BYTE  PtSan_Prvv;
StayFD _n_PtSan_Prvv = {&PtSan_Prvv,0,0,0,CLS_S,0,"PtSan_Prvv","������� �����"};
pStayFD _PtSan_Prvv = &_n_PtSan_Prvv;

WORD  KlPitDsh_Code;
StayFD _n_KlPitDsh_Code = {&KlPitDsh_Code,0,0,0,CLS_I,0,"KlPitDsh_Code","��� ����.��.�����.���."};
pStayFD _KlPitDsh_Code = &_n_KlPitDsh_Code;

StayDate KlPitDsh_DataB;
StayFD _n_KlPitDsh_DataB = {&KlPitDsh_DataB,0,0,0,CLS_Date,0,"KlPitDsh_DataB","���� ���.�������� ����"};
pStayFD _KlPitDsh_DataB = &_n_KlPitDsh_DataB;

StayDate KlPitDsh_DataE;
StayFD _n_KlPitDsh_DataE = {&KlPitDsh_DataE,0,0,0,CLS_Date,0,"KlPitDsh_DataE","���� ���. ������.����"};
pStayFD _KlPitDsh_DataE = &_n_KlPitDsh_DataE;

char KlPitDsh_Name[26];
StayFD _n_KlPitDsh_Name = {&KlPitDsh_Name,0,0,0,CLS_V,25,"KlPitDsh_Name","������������"};
pStayFD _KlPitDsh_Name = &_n_KlPitDsh_Name;

int6 KlPitDsh_Sum;
StayFD _n_KlPitDsh_Sum = {&KlPitDsh_Sum,0,0,0,CLS_Hs,2,"KlPitDsh_Sum","����.��.�����.���."};
pStayFD _KlPitDsh_Sum = &_n_KlPitDsh_Sum;

WORD  KlKEKV_KFN;
StayFD _n_KlKEKV_KFN = {&KlKEKV_KFN,0,0,0,CLS_I,0,"KlKEKV_KFN","��� ���� �������"};
pStayFD _KlKEKV_KFN = &_n_KlKEKV_KFN;

WORD  KlKEKV_KEKV;
StayFD _n_KlKEKV_KEKV = {&KlKEKV_KEKV,0,0,0,CLS_I,0,"KlKEKV_KEKV","��� ����"};
pStayFD _KlKEKV_KEKV = &_n_KlKEKV_KEKV;

char KlKEKV_NameRR[11];
StayFD _n_KlKEKV_NameRR = {&KlKEKV_NameRR,0,0,0,CLS_V,10,"KlKEKV_NameRR","����. �/� (��� ��� ��� ...)"};
pStayFD _KlKEKV_NameRR = &_n_KlKEKV_NameRR;

char KlKEKV_CdKlas[15];
StayFD _n_KlKEKV_CdKlas = {&KlKEKV_CdKlas,0,0,0,CLS_V,14,"KlKEKV_CdKlas","��� �������������"};
pStayFD _KlKEKV_CdKlas = &_n_KlKEKV_CdKlas;

uint6 KlMinZar_Razm;
StayFD _n_KlMinZar_Razm = {&KlMinZar_Razm,0,0,0,CLS_H,5,"KlMinZar_Razm","����� MIN ���.�����"};
pStayFD _KlMinZar_Razm = &_n_KlMinZar_Razm;

StayDate KlMinZar_DataB;
StayFD _n_KlMinZar_DataB = {&KlMinZar_DataB,0,0,0,CLS_Date,0,"KlMinZar_DataB","���� ��������.MIN ���.�����  - �������"};
pStayFD _KlMinZar_DataB = &_n_KlMinZar_DataB;

StayDate KlMinZar_DataE;
StayFD _n_KlMinZar_DataE = {&KlMinZar_DataE,0,0,0,CLS_Date,0,"KlMinZar_DataE","���� ��������.MIN ���.�����  - ������"};
pStayFD _KlMinZar_DataE = &_n_KlMinZar_DataE;

StayDate KlMinZar_DtSys;
StayFD _n_KlMinZar_DtSys = {&KlMinZar_DtSys,0,0,0,CLS_Date,0,"KlMinZar_DtSys","���� ����.������.��� ����.���.�����"};
pStayFD _KlMinZar_DtSys = &_n_KlMinZar_DtSys;

BYTE  Doc_Code;
StayFD _n_Doc_Code = {&Doc_Code,0,0,0,CLS_S,0,"Doc_Code","��� ���������"};
pStayFD _Doc_Code = &_n_Doc_Code;

WORD  Doc_Kfn;
StayFD _n_Doc_Kfn = {&Doc_Kfn,0,0,0,CLS_I,0,"Doc_Kfn","��� ��������"};
pStayFD _Doc_Kfn = &_n_Doc_Kfn;

WORD  Joint_Kfn1;
StayFD _n_Joint_Kfn1 = {&Joint_Kfn1,0,0,0,CLS_I,0,"Joint_Kfn1","��� ������� 1"};
pStayFD _Joint_Kfn1 = &_n_Joint_Kfn1;

WORD  Joint_Kfn2;
StayFD _n_Joint_Kfn2 = {&Joint_Kfn2,0,0,0,CLS_I,0,"Joint_Kfn2","��� ������� 2"};
pStayFD _Joint_Kfn2 = &_n_Joint_Kfn2;

BYTE  Joint_Pr;
StayFD _n_Joint_Pr = {&Joint_Pr,0,0,0,CLS_S,0,"Joint_Pr","������� ����������"};
pStayFD _Joint_Pr = &_n_Joint_Pr;

WORD  KlAt_Code;
StayFD _n_KlAt_Code = {&KlAt_Code,0,0,0,CLS_I,0,"KlAt_Code","��� ���-���� �����������"};
pStayFD _KlAt_Code = &_n_KlAt_Code;

char KlAt_Name[41];
StayFD _n_KlAt_Name = {&KlAt_Name,0,0,0,CLS_V,40,"KlAt_Name","������. ���-���� �������."};
pStayFD _KlAt_Name = &_n_KlAt_Name;

BYTE  KlCFam_Code;
StayFD _n_KlCFam_Code = {&KlCFam_Code,0,0,0,CLS_S,0,"KlCFam_Code","��� ����� �����"};
pStayFD _KlCFam_Code = &_n_KlCFam_Code;

char KlCFam_Name[31];
StayFD _n_KlCFam_Name = {&KlCFam_Name,0,0,0,CLS_V,30,"KlCFam_Name","������������ ����� �����"};
pStayFD _KlCFam_Name = &_n_KlCFam_Name;

BYTE  KlChe_Code;
StayFD _n_KlChe_Code = {&KlChe_Code,0,0,0,CLS_S,0,"KlChe_Code","��� �����-� �������������"};
pStayFD _KlChe_Code = &_n_KlChe_Code;

char KlChe_Name[24];
StayFD _n_KlChe_Name = {&KlChe_Name,0,0,0,CLS_V,23,"KlChe_Name","����. �����-� ����������."};
pStayFD _KlChe_Name = &_n_KlChe_Name;

WORD  KlComDsh_Code;
StayFD _n_KlComDsh_Code = {&KlComDsh_Code,0,0,0,CLS_I,0,"KlComDsh_Code","��� ������"};
pStayFD _KlComDsh_Code = &_n_KlComDsh_Code;

StayDate KlComDsh_DtB;
StayFD _n_KlComDsh_DtB = {&KlComDsh_DtB,0,0,0,CLS_Date,0,"KlComDsh_DtB","���� ������ �������"};
pStayFD _KlComDsh_DtB = &_n_KlComDsh_DtB;

StayDate KlComDsh_DtE;
StayFD _n_KlComDsh_DtE = {&KlComDsh_DtE,0,0,0,CLS_Date,0,"KlComDsh_DtE","���� ����� �������"};
pStayFD _KlComDsh_DtE = &_n_KlComDsh_DtE;

int6 KlComDsh_Razm;
StayFD _n_KlComDsh_Razm = {&KlComDsh_Razm,0,0,0,CLS_Hs,5,"KlComDsh_Razm","������ �����������"};
pStayFD _KlComDsh_Razm = &_n_KlComDsh_Razm;

char KlComDsh_Name[26];
StayFD _n_KlComDsh_Name = {&KlComDsh_Name,0,0,0,CLS_V,25,"KlComDsh_Name","������������ ������"};
pStayFD _KlComDsh_Name = &_n_KlComDsh_Name;

WORD  KlDKVp_Code;
StayFD _n_KlDKVp_Code = {&KlDKVp_Code,0,0,0,CLS_I,0,"KlDKVp_Code","��� ���������-���������"};
pStayFD _KlDKVp_Code = &_n_KlDKVp_Code;

StayDate KlDKVp_Data;
StayFD _n_KlDKVp_Data = {&KlDKVp_Data,0,0,0,CLS_Date,0,"KlDKVp_Data","���� ���������-���������"};
pStayFD _KlDKVp_Data = &_n_KlDKVp_Data;

char KlDKVp_Name[41];
StayFD _n_KlDKVp_Name = {&KlDKVp_Name,0,0,0,CLS_V,40,"KlDKVp_Name","����. ���������-���������"};
pStayFD _KlDKVp_Name = &_n_KlDKVp_Name;

BYTE  KlDKVp_Num;
StayFD _n_KlDKVp_Num = {&KlDKVp_Num,0,0,0,CLS_S,0,"KlDKVp_Num","����� ���������-���������"};
pStayFD _KlDKVp_Num = &_n_KlDKVp_Num;

char KlDUch_About[101];
StayFD _n_KlDUch_About = {&KlDUch_About,0,0,0,CLS_V,100,"KlDUch_About","����-� ������������ ��-��"};
pStayFD _KlDUch_About = &_n_KlDUch_About;

BYTE  KlDUch_Code;
StayFD _n_KlDUch_Code = {&KlDUch_Code,0,0,0,CLS_S,0,"KlDUch_Code","��� ������������ ��-��"};
pStayFD _KlDUch_Code = &_n_KlDUch_Code;

WORD  KlDUch_CodeUl;
StayFD _n_KlDUch_CodeUl = {&KlDUch_CodeUl,0,0,0,CLS_I,0,"KlDUch_CodeUl","��� �����(KlUl_)"};
pStayFD _KlDUch_CodeUl = &_n_KlDUch_CodeUl;

BYTE  KlDUch_Data;
StayFD _n_KlDUch_Data = {&KlDUch_Data,0,0,0,CLS_S,0,"KlDUch_Data","���� ������������ �.�."};
pStayFD _KlDUch_Data = &_n_KlDUch_Data;

DWORD KlDUch_IndOS;
StayFD _n_KlDUch_IndOS = {&KlDUch_IndOS,0,0,0,CLS_L,0,"KlDUch_IndOS","������ �����.�����(KlInd)"};
pStayFD _KlDUch_IndOS = &_n_KlDUch_IndOS;

BYTE  KlDUch_Prizn;
StayFD _n_KlDUch_Prizn = {&KlDUch_Prizn,0,0,0,CLS_S,0,"KlDUch_Prizn","�����.�������.���-�� ��-��=1"};
pStayFD _KlDUch_Prizn = &_n_KlDUch_Prizn;

BYTE  KlDoUd_Code;
StayFD _n_KlDoUd_Code = {&KlDoUd_Code,0,0,0,CLS_S,0,"KlDoUd_Code","��� ���������-���������"};
pStayFD _KlDoUd_Code = &_n_KlDoUd_Code;

char KlDoUd_Name[26];
StayFD _n_KlDoUd_Name = {&KlDoUd_Name,0,0,0,CLS_V,25,"KlDoUd_Name","����. ���������-���������"};
pStayFD _KlDoUd_Name = &_n_KlDoUd_Name;

BYTE  KlDoc_Kdoc;
StayFD _n_KlDoc_Kdoc = {&KlDoc_Kdoc,0,0,0,CLS_S,0,"KlDoc_Kdoc","��� ���������"};
pStayFD _KlDoc_Kdoc = &_n_KlDoc_Kdoc;

char KlDoc_Ndoc[43];
StayFD _n_KlDoc_Ndoc = {&KlDoc_Ndoc,0,0,0,CLS_V,42,"KlDoc_Ndoc","������������ ���������"};
pStayFD _KlDoc_Ndoc = &_n_KlDoc_Ndoc;

BYTE  KlDox_Code;
StayFD _n_KlDox_Code = {&KlDox_Code,0,0,0,CLS_S,0,"KlDox_Code","��� ������"};
pStayFD _KlDox_Code = &_n_KlDox_Code;

char KlDox_Name[41];
StayFD _n_KlDox_Name = {&KlDox_Name,0,0,0,CLS_V,40,"KlDox_Name","������������ ������"};
pStayFD _KlDox_Name = &_n_KlDox_Name;

BYTE  KlEarth_Code;
StayFD _n_KlEarth_Code = {&KlEarth_Code,0,0,0,CLS_S,0,"KlEarth_Code","��� ���������� �������"};
pStayFD _KlEarth_Code = &_n_KlEarth_Code;

StayDate KlEarth_DtB;
StayFD _n_KlEarth_DtB = {&KlEarth_DtB,0,0,0,CLS_Date,0,"KlEarth_DtB","���� ������"};
pStayFD _KlEarth_DtB = &_n_KlEarth_DtB;

StayDate KlEarth_DtE;
StayFD _n_KlEarth_DtE = {&KlEarth_DtE,0,0,0,CLS_Date,0,"KlEarth_DtE","���� �����"};
pStayFD _KlEarth_DtE = &_n_KlEarth_DtE;

char KlEarth_Name[51];
StayFD _n_KlEarth_Name = {&KlEarth_Name,0,0,0,CLS_V,50,"KlEarth_Name","������������ �����. �������"};
pStayFD _KlEarth_Name = &_n_KlEarth_Name;

int6 KlEarth_Razm;
StayFD _n_KlEarth_Razm = {&KlEarth_Razm,0,0,0,CLS_Hs,3,"KlEarth_Razm","��������� ����� �����"};
pStayFD _KlEarth_Razm = &_n_KlEarth_Razm;

WORD  KlFN_Code;
StayFD _n_KlFN_Code = {&KlFN_Code,0,0,0,CLS_I,0,"KlFN_Code","��� ��������(�����.����.)"};
pStayFD _KlFN_Code = &_n_KlFN_Code;

BYTE  KlFN_CodeIF;
StayFD _n_KlFN_CodeIF = {&KlFN_CodeIF,0,0,0,CLS_S,0,"KlFN_CodeIF","��� �����. ������-�(KlIF)"};
pStayFD _KlFN_CodeIF = &_n_KlFN_CodeIF;

StayDate KlFN_DataB;
StayFD _n_KlFN_DataB = {&KlFN_DataB,0,0,0,CLS_Date,0,"KlFN_DataB","���� ������ ��������"};
pStayFD _KlFN_DataB = &_n_KlFN_DataB;

StayDate KlFN_DataE;
StayFD _n_KlFN_DataE = {&KlFN_DataE,0,0,0,CLS_Date,0,"KlFN_DataE","���� ����� ��������"};
pStayFD _KlFN_DataE = &_n_KlFN_DataE;

char KlFN_Name[51];
StayFD _n_KlFN_Name = {&KlFN_Name,0,0,0,CLS_V,50,"KlFN_Name","������������"};
pStayFD _KlFN_Name = &_n_KlFN_Name;

BYTE  KlFN_ORVp;
StayFD _n_KlFN_ORVp = {&KlFN_ORVp,0,0,0,CLS_S,0,"KlFN_ORVp","��������� ������� ������"};
pStayFD _KlFN_ORVp = &_n_KlFN_ORVp;

BYTE  KlFN_PCh;
StayFD _n_KlFN_PCh = {&KlFN_PCh,0,0,0,CLS_S,0,"KlFN_PCh","������� ����� � ��"};
pStayFD _KlFN_PCh = &_n_KlFN_PCh;

BYTE  KlFN_PInd;
StayFD _n_KlFN_PInd = {&KlFN_PInd,0,0,0,CLS_S,0,"KlFN_PInd","������� ����������"};
pStayFD _KlFN_PInd = &_n_KlFN_PInd;

BYTE  KlFN_PUd;
StayFD _n_KlFN_PUd = {&KlFN_PUd,0,0,0,CLS_S,0,"KlFN_PUd","������� ���������"};
pStayFD _KlFN_PUd = &_n_KlFN_PUd;

uint6 KlFN_RVp;
StayFD _n_KlFN_RVp = {&KlFN_RVp,0,0,0,CLS_H,2,"KlFN_RVp","����.����.(� % ��� �����)"};
pStayFD _KlFN_RVp = &_n_KlFN_RVp;

BYTE  KlIFUK_Code;
StayFD _n_KlIFUK_Code = {&KlIFUK_Code,0,0,0,CLS_S,0,"KlIFUK_Code","��� ��������� ������-�"};
pStayFD _KlIFUK_Code = &_n_KlIFUK_Code;

BYTE  KlIFUK_CodeVIF;
StayFD _n_KlIFUK_CodeVIF = {&KlIFUK_CodeVIF,0,0,0,CLS_S,0,"KlIFUK_CodeVIF","��� ���� ���.���."};
pStayFD _KlIFUK_CodeVIF = &_n_KlIFUK_CodeVIF;

DWORD KlIFUK_MFO;
StayFD _n_KlIFUK_MFO = {&KlIFUK_MFO,0,0,0,CLS_L,0,"KlIFUK_MFO","��� �����"};
pStayFD _KlIFUK_MFO = &_n_KlIFUK_MFO;

DWORD KlIFUK_NBal;
StayFD _n_KlIFUK_NBal = {&KlIFUK_NBal,0,0,0,CLS_L,0,"KlIFUK_NBal","����� ���.����� � ������."};
pStayFD _KlIFUK_NBal = &_n_KlIFUK_NBal;

uint6 KlIFUK_NRS;
StayFD _n_KlIFUK_NRS = {&KlIFUK_NRS,0,0,0,CLS_H,0,"KlIFUK_NRS","����� ����..����� ���.���-�"};
pStayFD _KlIFUK_NRS = &_n_KlIFUK_NRS;

char KlIFUK_NRSB[15];
StayFD _n_KlIFUK_NRSB = {&KlIFUK_NRSB,0,0,0,CLS_V,14,"KlIFUK_NRSB","����� ������. ����� �����"};
pStayFD _KlIFUK_NRSB = &_n_KlIFUK_NRSB;

char KlIFUK_Name[21];
StayFD _n_KlIFUK_Name = {&KlIFUK_Name,0,0,0,CLS_V,20,"KlIFUK_Name","����. ���� �����. �����-�"};
pStayFD _KlIFUK_Name = &_n_KlIFUK_Name;

char KlIFUK_NameB[41];
StayFD _n_KlIFUK_NameB = {&KlIFUK_NameB,0,0,0,CLS_V,40,"KlIFUK_NameB","������������ �����"};
pStayFD _KlIFUK_NameB = &_n_KlIFUK_NameB;

char KlIFUK_Razd[11];
StayFD _n_KlIFUK_Razd = {&KlIFUK_Razd,0,0,0,CLS_V,10,"KlIFUK_Razd","������ ������. ����-���"};
pStayFD _KlIFUK_Razd = &_n_KlIFUK_Razd;

BYTE  KlIF_Code;
StayFD _n_KlIF_Code = {&KlIF_Code,0,0,0,CLS_S,0,"KlIF_Code","��� ��������� ������-�"};
pStayFD _KlIF_Code = &_n_KlIF_Code;

BYTE  KlIF_CodeVIF;
StayFD _n_KlIF_CodeVIF = {&KlIF_CodeVIF,0,0,0,CLS_S,0,"KlIF_CodeVIF","��� ���� ���.���."};
pStayFD _KlIF_CodeVIF = &_n_KlIF_CodeVIF;

DWORD KlIF_MFO;
StayFD _n_KlIF_MFO = {&KlIF_MFO,0,0,0,CLS_L,0,"KlIF_MFO","��� �����"};
pStayFD _KlIF_MFO = &_n_KlIF_MFO;

DWORD KlIF_NBal;
StayFD _n_KlIF_NBal = {&KlIF_NBal,0,0,0,CLS_L,0,"KlIF_NBal","����� ���.����� � ������."};
pStayFD _KlIF_NBal = &_n_KlIF_NBal;

uint6 KlIF_NRS;
StayFD _n_KlIF_NRS = {&KlIF_NRS,0,0,0,CLS_H,0,"KlIF_NRS","����� ����..����� ���.���-�"};
pStayFD _KlIF_NRS = &_n_KlIF_NRS;

char KlIF_NRSB[15];
StayFD _n_KlIF_NRSB = {&KlIF_NRSB,0,0,0,CLS_V,14,"KlIF_NRSB","����� ������. ����� �����"};
pStayFD _KlIF_NRSB = &_n_KlIF_NRSB;

char KlIF_Name[21];
StayFD _n_KlIF_Name = {&KlIF_Name,0,0,0,CLS_V,20,"KlIF_Name","����. ���� �����. �����-�"};
pStayFD _KlIF_Name = &_n_KlIF_Name;

char KlIF_NameB[41];
StayFD _n_KlIF_NameB = {&KlIF_NameB,0,0,0,CLS_V,40,"KlIF_NameB","������������ �����"};
pStayFD _KlIF_NameB = &_n_KlIF_NameB;

char KlIF_Razd[11];
StayFD _n_KlIF_Razd = {&KlIF_Razd,0,0,0,CLS_V,10,"KlIF_Razd","������ ������. ����-���"};
pStayFD _KlIF_Razd = &_n_KlIF_Razd;

char KlInd_Adr[51];
StayFD _n_KlInd_Adr = {&KlInd_Adr,0,0,0,CLS_V,50,"KlInd_Adr","�������� ����� �������"};
pStayFD _KlInd_Adr = &_n_KlInd_Adr;

DWORD KlInd_Ind;
StayFD _n_KlInd_Ind = {&KlInd_Ind,0,0,0,CLS_L,0,"KlInd_Ind","������"};
pStayFD _KlInd_Ind = &_n_KlInd_Ind;

BYTE  KlInd_TPS;
StayFD _n_KlInd_TPS = {&KlInd_TPS,0,0,0,CLS_S,0,"KlInd_TPS","����� �������� ������"};
pStayFD _KlInd_TPS = &_n_KlInd_TPS;

BYTE  KlInf_Code;
StayFD _n_KlInf_Code = {&KlInf_Code,0,0,0,CLS_S,0,"KlInf_Code","��� �������"};
pStayFD _KlInf_Code = &_n_KlInf_Code;

char KlInf_Name[201];
StayFD _n_KlInf_Name = {&KlInf_Name,0,0,0,CLS_V,200,"KlInf_Name","������������ �������"};
pStayFD _KlInf_Name = &_n_KlInf_Name;

BYTE  KlInv_Code;
StayFD _n_KlInv_Code = {&KlInv_Code,0,0,0,CLS_S,0,"KlInv_Code","��� ���� ������������"};
pStayFD _KlInv_Code = &_n_KlInv_Code;

char KlInv_Name[19];
StayFD _n_KlInv_Name = {&KlInv_Name,0,0,0,CLS_V,18,"KlInv_Name","������������ ���� ���-��"};
pStayFD _KlInv_Name = &_n_KlInv_Name;

StayDate KlKRZp_DtB;
StayFD _n_KlKRZp_DtB = {&KlKRZp_DtB,0,0,0,CLS_Date,0,"KlKRZp_DtB","���� ������"};
pStayFD _KlKRZp_DtB = &_n_KlKRZp_DtB;

StayDate KlKRZp_DtE;
StayFD _n_KlKRZp_DtE = {&KlKRZp_DtE,0,0,0,CLS_Date,0,"KlKRZp_DtE","���� �����"};
pStayFD _KlKRZp_DtE = &_n_KlKRZp_DtE;

DWORD KlKRZp_Razm;
StayFD _n_KlKRZp_Razm = {&KlKRZp_Razm,0,0,0,CLS_L,3,"KlKRZp_Razm","������ ������������ �����"};
pStayFD _KlKRZp_Razm = &_n_KlKRZp_Razm;

BYTE  KlKatUl_Code;
StayFD _n_KlKatUl_Code = {&KlKatUl_Code,0,0,0,CLS_S,0,"KlKatUl_Code","��� ��������� ����"};
pStayFD _KlKatUl_Code = &_n_KlKatUl_Code;

char KlKatUl_Name[8];
StayFD _n_KlKatUl_Name = {&KlKatUl_Name,0,0,0,CLS_V,7,"KlKatUl_Name","������������ ���������"};
pStayFD _KlKatUl_Name = &_n_KlKatUl_Name;

WORD  KlKfp_Coeff;
StayFD _n_KlKfp_Coeff = {&KlKfp_Coeff,0,0,0,CLS_I,2,"KlKfp_Coeff","����. �����. ������"};
pStayFD _KlKfp_Coeff = &_n_KlKfp_Coeff;

WORD  KlKfp_Coeff2;
StayFD _n_KlKfp_Coeff2 = {&KlKfp_Coeff2,0,0,0,CLS_I,3,"KlKfp_Coeff2","����������� ����"};
pStayFD _KlKfp_Coeff2 = &_n_KlKfp_Coeff2;

uint6 KlKfp_Coeff3;
StayFD _n_KlKfp_Coeff3 = {&KlKfp_Coeff3,0,0,0,CLS_H,5,"KlKfp_Coeff3","����������� ����"};
pStayFD _KlKfp_Coeff3 = &_n_KlKfp_Coeff3;

StayDate KlKfp_Data;
StayFD _n_KlKfp_Data = {&KlKfp_Data,0,0,0,CLS_Date,0,"KlKfp_Data","���� ��������. ����."};
pStayFD _KlKfp_Data = &_n_KlKfp_Data;

uint6 KlKfp_MaxD996;
StayFD _n_KlKfp_MaxD996 = {&KlKfp_MaxD996,0,0,0,CLS_H,5,"KlKfp_MaxD996","������������ ��������� �� 09.9"};
pStayFD _KlKfp_MaxD996 = &_n_KlKfp_MaxD996;

uint6 KlKfp_MaxP996;
StayFD _n_KlKfp_MaxP996 = {&KlKfp_MaxP996,0,0,0,CLS_H,5,"KlKfp_MaxP996","������������ ��������� ����� 0"};
pStayFD _KlKfp_MaxP996 = &_n_KlKfp_MaxP996;

uint6 KlKfp_Zregr;
StayFD _n_KlKfp_Zregr = {&KlKfp_Zregr,0,0,0,CLS_H,5,"KlKfp_Zregr","��������� ��� �������"};
pStayFD _KlKfp_Zregr = &_n_KlKfp_Zregr;

BYTE  KlKor_Code;
StayFD _n_KlKor_Code = {&KlKor_Code,0,0,0,CLS_S,0,"KlKor_Code","��� ��������� ���������"};
pStayFD _KlKor_Code = &_n_KlKor_Code;

char KlKor_Name[31];
StayFD _n_KlKor_Name = {&KlKor_Name,0,0,0,CLS_V,30,"KlKor_Name","��������. ���-� ���������"};
pStayFD _KlKor_Name = &_n_KlKor_Name;

WORD  KlLRab_Code;
StayFD _n_KlLRab_Code = {&KlLRab_Code,0,0,0,CLS_I,0,"KlLRab_Code","��� ������� ������"};
pStayFD _KlLRab_Code = &_n_KlLRab_Code;

short KlLRab_Coef;
StayFD _n_KlLRab_Coef = {&KlLRab_Coef,0,0,0,CLS_Is,2,"KlLRab_Coef","����������� ���������"};
pStayFD _KlLRab_Coef = &_n_KlLRab_Coef;

char KlLRab_KrNam[12];
StayFD _n_KlLRab_KrNam = {&KlLRab_KrNam,0,0,0,CLS_V,11,"KlLRab_KrNam","������� ������������"};
pStayFD _KlLRab_KrNam = &_n_KlLRab_KrNam;

char KlLRab_Name[36];
StayFD _n_KlLRab_Name = {&KlLRab_Name,0,0,0,CLS_V,35,"KlLRab_Name","����-� ������� ������"};
pStayFD _KlLRab_Name = &_n_KlLRab_Name;

BYTE  KlLgk_Alg;
StayFD _n_KlLgk_Alg = {&KlLgk_Alg,0,0,0,CLS_S,0,"KlLgk_Alg","����� ��������� �������"};
pStayFD _KlLgk_Alg = &_n_KlLgk_Alg;

BYTE  KlLgk_Code;
StayFD _n_KlLgk_Code = {&KlLgk_Code,0,0,0,CLS_S,0,"KlLgk_Code","��� ���� ������������"};
pStayFD _KlLgk_Code = &_n_KlLgk_Code;

WORD  KlLgk_Coeff;
StayFD _n_KlLgk_Coeff = {&KlLgk_Coeff,0,0,0,CLS_I,2,"KlLgk_Coeff","����.�������� ����������"};
pStayFD _KlLgk_Coeff = &_n_KlLgk_Coeff;

StayDate KlLgk_DataB;
StayFD _n_KlLgk_DataB = {&KlLgk_DataB,0,0,0,CLS_Date,0,"KlLgk_DataB","����  �"};
pStayFD _KlLgk_DataB = &_n_KlLgk_DataB;

StayDate KlLgk_DataE;
StayFD _n_KlLgk_DataE = {&KlLgk_DataE,0,0,0,CLS_Date,0,"KlLgk_DataE","����  ��"};
pStayFD _KlLgk_DataE = &_n_KlLgk_DataE;

char KlLgk_KrName[12];
StayFD _n_KlLgk_KrName = {&KlLgk_KrName,0,0,0,CLS_V,11,"KlLgk_KrName","�����. ��������.��������."};
pStayFD _KlLgk_KrName = &_n_KlLgk_KrName;

char KlLgk_Name[31];
StayFD _n_KlLgk_Name = {&KlLgk_Name,0,0,0,CLS_V,30,"KlLgk_Name","������. ���� ������."};
pStayFD _KlLgk_Name = &_n_KlLgk_Name;

BYTE  KlNet_Code;
StayFD _n_KlNet_Code = {&KlNet_Code,0,0,0,CLS_S,0,"KlNet_Code","��� ���. ��������������."};
pStayFD _KlNet_Code = &_n_KlNet_Code;

char KlNet_Name[41];
StayFD _n_KlNet_Name = {&KlNet_Name,0,0,0,CLS_V,40,"KlNet_Name","����.���.��������������."};
pStayFD _KlNet_Name = &_n_KlNet_Name;

char KlORG163_Adr[51];
StayFD _n_KlORG163_Adr = {&KlORG163_Adr,0,0,0,CLS_V,50,"KlORG163_Adr","����� ���."};
pStayFD _KlORG163_Adr = &_n_KlORG163_Adr;

BYTE  KlORG163_Code;
StayFD _n_KlORG163_Code = {&KlORG163_Code,0,0,0,CLS_S,0,"KlORG163_Code","��� ���."};
pStayFD _KlORG163_Code = &_n_KlORG163_Code;

char KlORG163_DopNr[15];
StayFD _n_KlORG163_DopNr = {&KlORG163_DopNr,0,0,0,CLS_V,14,"KlORG163_DopNr","���.� ���.�/� �����������"};
pStayFD _KlORG163_DopNr = &_n_KlORG163_DopNr;

DWORD KlORG163_IndPO;
StayFD _n_KlORG163_IndPO = {&KlORG163_IndPO,0,0,0,CLS_L,0,"KlORG163_IndPO","������ �� (KlInd_)"};
pStayFD _KlORG163_IndPO = &_n_KlORG163_IndPO;

DWORD KlORG163_MFO;
StayFD _n_KlORG163_MFO = {&KlORG163_MFO,0,0,0,CLS_L,0,"KlORG163_MFO","���"};
pStayFD _KlORG163_MFO = &_n_KlORG163_MFO;

char KlORG163_NRSB[15];
StayFD _n_KlORG163_NRSB = {&KlORG163_NRSB,0,0,0,CLS_V,14,"KlORG163_NRSB","����� �/� �����"};
pStayFD _KlORG163_NRSB = &_n_KlORG163_NRSB;

char KlORG163_NRSO[15];
StayFD _n_KlORG163_NRSO = {&KlORG163_NRSO,0,0,0,CLS_V,14,"KlORG163_NRSO","����� �/� ���."};
pStayFD _KlORG163_NRSO = &_n_KlORG163_NRSO;

char KlORG163_Name[41];
StayFD _n_KlORG163_Name = {&KlORG163_Name,0,0,0,CLS_V,40,"KlORG163_Name","����. �����������"};
pStayFD _KlORG163_Name = &_n_KlORG163_Name;

char KlORG163_NameB[41];
StayFD _n_KlORG163_NameB = {&KlORG163_NameB,0,0,0,CLS_V,40,"KlORG163_NameB","������������ �����"};
pStayFD _KlORG163_NameB = &_n_KlORG163_NameB;

char KlORG163_Prim[51];
StayFD _n_KlORG163_Prim = {&KlORG163_Prim,0,0,0,CLS_V,50,"KlORG163_Prim","����������"};
pStayFD _KlORG163_Prim = &_n_KlORG163_Prim;

char KlORG163_PrivO[15];
StayFD _n_KlORG163_PrivO = {&KlORG163_PrivO,0,0,0,CLS_V,14,"KlORG163_PrivO","����.�/� �����������"};
pStayFD _KlORG163_PrivO = &_n_KlORG163_PrivO;

char KlOSZ_Adr[51];
StayFD _n_KlOSZ_Adr = {&KlOSZ_Adr,0,0,0,CLS_V,50,"KlOSZ_Adr","����� (��., ���)"};
pStayFD _KlOSZ_Adr = &_n_KlOSZ_Adr;

WORD  KlOSZ_Code;
StayFD _n_KlOSZ_Code = {&KlOSZ_Code,0,0,0,CLS_I,0,"KlOSZ_Code","���"};
pStayFD _KlOSZ_Code = &_n_KlOSZ_Code;

char KlOSZ_FIOB[41];
StayFD _n_KlOSZ_FIOB = {&KlOSZ_FIOB,0,0,0,CLS_V,40,"KlOSZ_FIOB","��� ����������"};
pStayFD _KlOSZ_FIOB = &_n_KlOSZ_FIOB;

char KlOSZ_FION[41];
StayFD _n_KlOSZ_FION = {&KlOSZ_FION,0,0,0,CLS_V,40,"KlOSZ_FION","��� ����������"};
pStayFD _KlOSZ_FION = &_n_KlOSZ_FION;

DWORD KlOSZ_IPOV;
StayFD _n_KlOSZ_IPOV = {&KlOSZ_IPOV,0,0,0,CLS_L,0,"KlOSZ_IPOV","���.�� ��� ����.���.�����."};
pStayFD _KlOSZ_IPOV = &_n_KlOSZ_IPOV;

DWORD KlOSZ_IndPO;
StayFD _n_KlOSZ_IndPO = {&KlOSZ_IndPO,0,0,0,CLS_L,0,"KlOSZ_IndPO","������ �� ( KlInd_ )"};
pStayFD _KlOSZ_IndPO = &_n_KlOSZ_IndPO;

DWORD KlOSZ_MFOB;
StayFD _n_KlOSZ_MFOB = {&KlOSZ_MFOB,0,0,0,CLS_L,0,"KlOSZ_MFOB","��� �����"};
pStayFD _KlOSZ_MFOB = &_n_KlOSZ_MFOB;

char KlOSZ_NRSB[15];
StayFD _n_KlOSZ_NRSB = {&KlOSZ_NRSB,0,0,0,CLS_V,14,"KlOSZ_NRSB","�/� �����"};
pStayFD _KlOSZ_NRSB = &_n_KlOSZ_NRSB;

char KlOSZ_NRSO[15];
StayFD _n_KlOSZ_NRSO = {&KlOSZ_NRSO,0,0,0,CLS_V,14,"KlOSZ_NRSO","�/� �����������"};
pStayFD _KlOSZ_NRSO = &_n_KlOSZ_NRSO;

char KlOSZ_Name[41];
StayFD _n_KlOSZ_Name = {&KlOSZ_Name,0,0,0,CLS_V,40,"KlOSZ_Name","������������"};
pStayFD _KlOSZ_Name = &_n_KlOSZ_Name;

char KlOSZ_NameB[41];
StayFD _n_KlOSZ_NameB = {&KlOSZ_NameB,0,0,0,CLS_V,40,"KlOSZ_NameB","������������ �����"};
pStayFD _KlOSZ_NameB = &_n_KlOSZ_NameB;

BYTE  KlOSZ_PrV;
StayFD _n_KlOSZ_PrV = {&KlOSZ_PrV,0,0,0,CLS_S,0,"KlOSZ_PrV","������� �������"};
pStayFD _KlOSZ_PrV = &_n_KlOSZ_PrV;

DWORD KlOSZ_TelB;
StayFD _n_KlOSZ_TelB = {&KlOSZ_TelB,0,0,0,CLS_L,0,"KlOSZ_TelB","������� ����������"};
pStayFD _KlOSZ_TelB = &_n_KlOSZ_TelB;

DWORD KlOSZ_TelN;
StayFD _n_KlOSZ_TelN = {&KlOSZ_TelN,0,0,0,CLS_L,0,"KlOSZ_TelN","������� ����������"};
pStayFD _KlOSZ_TelN = &_n_KlOSZ_TelN;

WORD  KlOS_CodeOS;
StayFD _n_KlOS_CodeOS = {&KlOS_CodeOS,0,0,0,CLS_I,0,"KlOS_CodeOS","��� ���� ����� ( KlUS_ )"};
pStayFD _KlOS_CodeOS = &_n_KlOS_CodeOS;

WORD  KlOS_CodeRn;
StayFD _n_KlOS_CodeRn = {&KlOS_CodeRn,0,0,0,CLS_I,0,"KlOS_CodeRn","��� ������ ( KlAt_ )"};
pStayFD _KlOS_CodeRn = &_n_KlOS_CodeRn;

DWORD KlOS_NumOS;
StayFD _n_KlOS_NumOS = {&KlOS_NumOS,0,0,0,CLS_L,0,"KlOS_NumOS","����� ���.����� (KlInd_)"};
pStayFD _KlOS_NumOS = &_n_KlOS_NumOS;

char KlOVUd_Adr[51];
StayFD _n_KlOVUd_Adr = {&KlOVUd_Adr,0,0,0,CLS_V,50,"KlOVUd_Adr","����� ���.-�����.(������ ���."};
pStayFD _KlOVUd_Adr = &_n_KlOVUd_Adr;

BYTE  KlOVUd_Code;
StayFD _n_KlOVUd_Code = {&KlOVUd_Code,0,0,0,CLS_S,0,"KlOVUd_Code","��� ���.-����������"};
pStayFD _KlOVUd_Code = &_n_KlOVUd_Code;

char KlOVUd_DopNr[15];
StayFD _n_KlOVUd_DopNr = {&KlOVUd_DopNr,0,0,0,CLS_V,14,"KlOVUd_DopNr","���.� ���.�/� �����������"};
pStayFD _KlOVUd_DopNr = &_n_KlOVUd_DopNr;

DWORD KlOVUd_IndPO;
StayFD _n_KlOVUd_IndPO = {&KlOVUd_IndPO,0,0,0,CLS_L,0,"KlOVUd_IndPO","������ �� (KlInd_)"};
pStayFD _KlOVUd_IndPO = &_n_KlOVUd_IndPO;

DWORD KlOVUd_MFO;
StayFD _n_KlOVUd_MFO = {&KlOVUd_MFO,0,0,0,CLS_L,0,"KlOVUd_MFO","���"};
pStayFD _KlOVUd_MFO = &_n_KlOVUd_MFO;

char KlOVUd_NRSB[15];
StayFD _n_KlOVUd_NRSB = {&KlOVUd_NRSB,0,0,0,CLS_V,14,"KlOVUd_NRSB","����� �/� �����"};
pStayFD _KlOVUd_NRSB = &_n_KlOVUd_NRSB;

char KlOVUd_NRSO[15];
StayFD _n_KlOVUd_NRSO = {&KlOVUd_NRSO,0,0,0,CLS_V,14,"KlOVUd_NRSO","����� �/� ���."};
pStayFD _KlOVUd_NRSO = &_n_KlOVUd_NRSO;

char KlOVUd_Name[41];
StayFD _n_KlOVUd_Name = {&KlOVUd_Name,0,0,0,CLS_V,40,"KlOVUd_Name","����. �����������-�����."};
pStayFD _KlOVUd_Name = &_n_KlOVUd_Name;

char KlOVUd_NameB[41];
StayFD _n_KlOVUd_NameB = {&KlOVUd_NameB,0,0,0,CLS_V,40,"KlOVUd_NameB","������������ �����"};
pStayFD _KlOVUd_NameB = &_n_KlOVUd_NameB;

char KlOVUd_Prim[51];
StayFD _n_KlOVUd_Prim = {&KlOVUd_Prim,0,0,0,CLS_V,50,"KlOVUd_Prim","����������"};
pStayFD _KlOVUd_Prim = &_n_KlOVUd_Prim;

char KlOVUd_PrivO[15];
StayFD _n_KlOVUd_PrivO = {&KlOVUd_PrivO,0,0,0,CLS_V,14,"KlOVUd_PrivO","����.�/� �����������"};
pStayFD _KlOVUd_PrivO = &_n_KlOVUd_PrivO;

WORD  KlOp_Code;
StayFD _n_KlOp_Code = {&KlOp_Code,0,0,0,CLS_I,0,"KlOp_Code","��� ��������"};
pStayFD _KlOp_Code = &_n_KlOp_Code;

char KlOp_Name[51];
StayFD _n_KlOp_Name = {&KlOp_Name,0,0,0,CLS_V,50,"KlOp_Name","������������ ��������"};
pStayFD _KlOp_Name = &_n_KlOp_Name;

BYTE  KlOrg_Code;
StayFD _n_KlOrg_Code = {&KlOrg_Code,0,0,0,CLS_S,0,"KlOrg_Code","��� ����������"};
pStayFD _KlOrg_Code = &_n_KlOrg_Code;

char KlOrg_Name[41];
StayFD _n_KlOrg_Name = {&KlOrg_Name,0,0,0,CLS_V,40,"KlOrg_Name","������������ �����������"};
pStayFD _KlOrg_Name = &_n_KlOrg_Name;

WORD  KlOsob_Code;
StayFD _n_KlOsob_Code = {&KlOsob_Code,0,0,0,CLS_I,0,"KlOsob_Code","��������������"};
pStayFD _KlOsob_Code = &_n_KlOsob_Code;

char KlOsob_Name[51];
StayFD _n_KlOsob_Name = {&KlOsob_Name,0,0,0,CLS_V,50,"KlOsob_Name","������������ �����������"};
pStayFD _KlOsob_Name = &_n_KlOsob_Name;

BYTE  KlPInv_Code;
StayFD _n_KlPInv_Code = {&KlPInv_Code,0,0,0,CLS_S,0,"KlPInv_Code","��� ������ ������������"};
pStayFD _KlPInv_Code = &_n_KlPInv_Code;

char KlPInv_Name[33];
StayFD _n_KlPInv_Name = {&KlPInv_Name,0,0,0,CLS_V,32,"KlPInv_Name","����. ������ ������������"};
pStayFD _KlPInv_Name = &_n_KlPInv_Name;

BYTE  KlPNo_Code;
StayFD _n_KlPNo_Code = {&KlPNo_Code,0,0,0,CLS_S,0,"KlPNo_Code","��� ������� ��������"};
pStayFD _KlPNo_Code = &_n_KlPNo_Code;

char KlPNo_Name[19];
StayFD _n_KlPNo_Name = {&KlPNo_Name,0,0,0,CLS_V,18,"KlPNo_Name","������������ �������"};
pStayFD _KlPNo_Name = &_n_KlPNo_Name;

BYTE  KlPRab_Code;
StayFD _n_KlPRab_Code = {&KlPRab_Code,0,0,0,CLS_S,0,"KlPRab_Code","��� �������������� ���.�."};
pStayFD _KlPRab_Code = &_n_KlPRab_Code;

char KlPRab_Name[41];
StayFD _n_KlPRab_Name = {&KlPRab_Name,0,0,0,CLS_V,40,"KlPRab_Name","����. �-�� ���. ����."};
pStayFD _KlPRab_Name = &_n_KlPRab_Name;

WORD  KlPSB_CodeCB;
StayFD _n_KlPSB_CodeCB = {&KlPSB_CodeCB,0,0,0,CLS_I,0,"KlPSB_CodeCB","��� �����-�� �� (KlUS_)"};
pStayFD _KlPSB_CodeCB = &_n_KlPSB_CodeCB;

WORD  KlPSB_CodeRn;
StayFD _n_KlPSB_CodeRn = {&KlPSB_CodeRn,0,0,0,CLS_I,0,"KlPSB_CodeRn","��� ������ ( KlAt_)"};
pStayFD _KlPSB_CodeRn = &_n_KlPSB_CodeRn;

WORD  KlPSB_CodeSB;
StayFD _n_KlPSB_CodeSB = {&KlPSB_CodeSB,0,0,0,CLS_I,0,"KlPSB_CodeSB","��� ��(��������� ��� ���)"};
pStayFD _KlPSB_CodeSB = &_n_KlPSB_CodeSB;

char KlPSB_NameSB[41];
StayFD _n_KlPSB_NameSB = {&KlPSB_NameSB,0,0,0,CLS_V,40,"KlPSB_NameSB","������������ ��"};
pStayFD _KlPSB_NameSB = &_n_KlPSB_NameSB;

BYTE  KlPSUd_Code;
StayFD _n_KlPSUd_Code = {&KlPSUd_Code,0,0,0,CLS_S,0,"KlPSUd_Code","��� ������ ������ �������."};
pStayFD _KlPSUd_Code = &_n_KlPSUd_Code;

char KlPSUd_Name[31];
StayFD _n_KlPSUd_Name = {&KlPSUd_Name,0,0,0,CLS_V,30,"KlPSUd_Name","����.������ ����.�������."};
pStayFD _KlPSUd_Name = &_n_KlPSUd_Name;

BYTE  KlPS_Code;
StayFD _n_KlPS_Code = {&KlPS_Code,0,0,0,CLS_S,0,"KlPS_Code","��� ��������� ������"};
pStayFD _KlPS_Code = &_n_KlPS_Code;

char KlPS_Name[41];
StayFD _n_KlPS_Name = {&KlPS_Name,0,0,0,CLS_V,40,"KlPS_Name","������������ �����.������"};
pStayFD _KlPS_Name = &_n_KlPS_Name;

WORD  KlPS_Pros;
StayFD _n_KlPS_Pros = {&KlPS_Pros,0,0,0,CLS_I,0,"KlPS_Pros","% ����. ������ �� ������ ���."};
pStayFD _KlPS_Pros = &_n_KlPS_Pros;

BYTE  KlPSn_Code;
StayFD _n_KlPSn_Code = {&KlPSn_Code,0,0,0,CLS_S,0,"KlPSn_Code","��� ������ ������  ������"};
pStayFD _KlPSn_Code = &_n_KlPSn_Code;

char KlPSn_Name[36];
StayFD _n_KlPSn_Name = {&KlPSn_Name,0,0,0,CLS_V,35,"KlPSn_Name","����. ������ � ������"};
pStayFD _KlPSn_Name = &_n_KlPSn_Name;

BYTE  KlPost_Code;
StayFD _n_KlPost_Code = {&KlPost_Code,0,0,0,CLS_S,0,"KlPost_Code","��� ���� �������������"};
pStayFD _KlPost_Code = &_n_KlPost_Code;

char KlPost_Name[36];
StayFD _n_KlPost_Name = {&KlPost_Name,0,0,0,CLS_V,35,"KlPost_Name","������������ ���� �����."};
pStayFD _KlPost_Name = &_n_KlPost_Name;

WORD  KlPov_Code;
StayFD _n_KlPov_Code = {&KlPov_Code,0,0,0,CLS_I,0,"KlPov_Code","��� ���������"};
pStayFD _KlPov_Code = &_n_KlPov_Code;

BYTE  KlPov_GrPov;
StayFD _n_KlPov_GrPov = {&KlPov_GrPov,0,0,0,CLS_S,0,"KlPov_GrPov","������ ���������"};
pStayFD _KlPov_GrPov = &_n_KlPov_GrPov;

BYTE  KlPov_NBit;
StayFD _n_KlPov_NBit = {&KlPov_NBit,0,0,0,CLS_S,0,"KlPov_NBit","N ���� � �����"};
pStayFD _KlPov_NBit = &_n_KlPov_NBit;

char KlPov_Name[55];
StayFD _n_KlPov_Name = {&KlPov_Name,0,0,0,CLS_V,54,"KlPov_Name","������. ���������"};
pStayFD _KlPov_Name = &_n_KlPov_Name;

WORD  KlPov_Prizn;
StayFD _n_KlPov_Prizn = {&KlPov_Prizn,0,0,0,CLS_I,0,"KlPov_Prizn","�������"};
pStayFD _KlPov_Prizn = &_n_KlPov_Prizn;

DWORD KlPred_Code;
StayFD _n_KlPred_Code = {&KlPred_Code,0,0,0,CLS_L,0,"KlPred_Code","��� �����������"};
pStayFD _KlPred_Code = &_n_KlPred_Code;

char KlPred_Name[51];
StayFD _n_KlPred_Name = {&KlPred_Name,0,0,0,CLS_V,50,"KlPred_Name","������������ �����������"};
pStayFD _KlPred_Name = &_n_KlPred_Name;

BYTE  KlProf_Code;
StayFD _n_KlProf_Code = {&KlProf_Code,0,0,0,CLS_S,0,"KlProf_Code","��� ���������"};
pStayFD _KlProf_Code = &_n_KlProf_Code;

char KlProf_KrName[12];
StayFD _n_KlProf_KrName = {&KlProf_KrName,0,0,0,CLS_V,11,"KlProf_KrName","�����. ������. ���������"};
pStayFD _KlProf_KrName = &_n_KlProf_KrName;

char KlProf_Name[27];
StayFD _n_KlProf_Name = {&KlProf_Name,0,0,0,CLS_V,26,"KlProf_Name","������. ���������"};
pStayFD _KlProf_Name = &_n_KlProf_Name;

BYTE  KlProf_Probr;
StayFD _n_KlProf_Probr = {&KlProf_Probr,0,0,0,CLS_S,0,"KlProf_Probr","��������"};
pStayFD _KlProf_Probr = &_n_KlProf_Probr;

BYTE  KlRPen_ChPri;
StayFD _n_KlRPen_ChPri = {&KlRPen_ChPri,0,0,0,CLS_S,0,"KlRPen_ChPri","������� ����� � ��"};
pStayFD _KlRPen_ChPri = &_n_KlRPen_ChPri;

WORD  KlRPen_Code;
StayFD _n_KlRPen_Code = {&KlRPen_Code,0,0,0,CLS_I,0,"KlRPen_Code","��� ������� �������"};
pStayFD _KlRPen_Code = &_n_KlRPen_Code;

StayDate KlRPen_DataB;
StayFD _n_KlRPen_DataB = {&KlRPen_DataB,0,0,0,CLS_Date,0,"KlRPen_DataB","���� ���.�������� ����"};
pStayFD _KlRPen_DataB = &_n_KlRPen_DataB;

StayDate KlRPen_DataE;
StayFD _n_KlRPen_DataE = {&KlRPen_DataE,0,0,0,CLS_Date,0,"KlRPen_DataE","���� ���. ������.����"};
pStayFD _KlRPen_DataE = &_n_KlRPen_DataE;

char KlRPen_Name[45];
StayFD _n_KlRPen_Name = {&KlRPen_Name,0,0,0,CLS_V,44,"KlRPen_Name","������������"};
pStayFD _KlRPen_Name = &_n_KlRPen_Name;

DWORD KlRPen_Proc;
StayFD _n_KlRPen_Proc = {&KlRPen_Proc,0,0,0,CLS_L,2,"KlRPen_Proc","��������"};
pStayFD _KlRPen_Proc = &_n_KlRPen_Proc;

BYTE  KlRPen_Tag;
StayFD _n_KlRPen_Tag = {&KlRPen_Tag,0,0,0,CLS_S,0,"KlRPen_Tag","���.�����.����.����.KlFN"};
pStayFD _KlRPen_Tag = &_n_KlRPen_Tag;

BYTE  KlRod_Code;
StayFD _n_KlRod_Code = {&KlRod_Code,0,0,0,CLS_S,0,"KlRod_Code","��� ��������� �������"};
pStayFD _KlRod_Code = &_n_KlRod_Code;

char KlRod_Name[21];
StayFD _n_KlRod_Name = {&KlRod_Name,0,0,0,CLS_V,20,"KlRod_Name","����. ��������� �������"};
pStayFD _KlRod_Name = &_n_KlRod_Name;

BYTE  KlSPUd_Code;
StayFD _n_KlSPUd_Code = {&KlSPUd_Code,0,0,0,CLS_S,0,"KlSPUd_Code","��� ����. �������� �����."};
pStayFD _KlSPUd_Code = &_n_KlSPUd_Code;

char KlSPUd_Name[41];
StayFD _n_KlSPUd_Name = {&KlSPUd_Name,0,0,0,CLS_V,40,"KlSPUd_Name","����. ����. �������� �����."};
pStayFD _KlSPUd_Name = &_n_KlSPUd_Name;

BYTE  KlSVUd_Code;
StayFD _n_KlSVUd_Code = {&KlSVUd_Code,0,0,0,CLS_S,0,"KlSVUd_Code","��� ������. ����. �����."};
pStayFD _KlSVUd_Code = &_n_KlSVUd_Code;

char KlSVUd_Name[26];
StayFD _n_KlSVUd_Name = {&KlSVUd_Name,0,0,0,CLS_V,25,"KlSVUd_Name","����. ����. ����. �����."};
pStayFD _KlSVUd_Name = &_n_KlSVUd_Name;

BYTE  KlShPN_CodeIF;
StayFD _n_KlShPN_CodeIF = {&KlShPN_CodeIF,0,0,0,CLS_S,0,"KlShPN_CodeIF","��� ��������� ������-�"};
pStayFD _KlShPN_CodeIF = &_n_KlShPN_CodeIF;

char KlShPN_Name[251];
StayFD _n_KlShPN_Name = {&KlShPN_Name,0,0,0,CLS_V,250,"KlShPN_Name","������������ �������"};
pStayFD _KlShPN_Name = &_n_KlShPN_Name;

WORD  KlShPN_ShP;
StayFD _n_KlShPN_ShP = {&KlShPN_ShP,0,0,0,CLS_I,0,"KlShPN_ShP","���� ������(�������)"};
pStayFD _KlShPN_ShP = &_n_KlShPN_ShP;

BYTE  KlShP_All;
StayFD _n_KlShP_All = {&KlShP_All,0,0,0,CLS_S,0,"KlShP_All","����� ����(1-��������)"};
pStayFD _KlShP_All = &_n_KlShP_All;

BYTE  KlShP_CodeIF;
StayFD _n_KlShP_CodeIF = {&KlShP_CodeIF,0,0,0,CLS_S,0,"KlShP_CodeIF","��� ��������� ������-�"};
pStayFD _KlShP_CodeIF = &_n_KlShP_CodeIF;

WORD  KlShP_CodeVp;
StayFD _n_KlShP_CodeVp = {&KlShP_CodeVp,0,0,0,CLS_I,0,"KlShP_CodeVp","��� ������� (KlFN_)"};
pStayFD _KlShP_CodeVp = &_n_KlShP_CodeVp;

BYTE  KlShP_IFN;
StayFD _n_KlShP_IFN = {&KlShP_IFN,0,0,0,CLS_S,0,"KlShP_IFN","����� ShP c KFN"};
pStayFD _KlShP_IFN = &_n_KlShP_IFN;

BYTE  KlShP_KIgd;
StayFD _n_KlShP_KIgd = {&KlShP_KIgd,0,0,0,CLS_S,0,"KlShP_KIgd","���������� ����������"};
pStayFD _KlShP_KIgd = &_n_KlShP_KIgd;

BYTE  KlShP_Kor;
StayFD _n_KlShP_Kor = {&KlShP_Kor,0,0,0,CLS_S,0,"KlShP_Kor","��������� ������.(KlKor_)"};
pStayFD _KlShP_Kor = &_n_KlShP_Kor;

BYTE  KlShP_Lgt;
StayFD _n_KlShP_Lgt = {&KlShP_Lgt,0,0,0,CLS_S,0,"KlShP_Lgt","�������� ����(1-��������)"};
pStayFD _KlShP_Lgt = &_n_KlShP_Lgt;

BYTE  KlShP_Netr;
StayFD _n_KlShP_Netr = {&KlShP_Netr,0,0,0,CLS_S,0,"KlShP_Netr","�������. ������.(KlNet_)"};
pStayFD _KlShP_Netr = &_n_KlShP_Netr;

BYTE  KlShP_Nr;
StayFD _n_KlShP_Nr = {&KlShP_Nr,0,0,0,CLS_S,0,"KlShP_Nr","����� �������(1,2,3)"};
pStayFD _KlShP_Nr = &_n_KlShP_Nr;

BYTE  KlShP_PSKor;
StayFD _n_KlShP_PSKor = {&KlShP_PSKor,0,0,0,CLS_S,0,"KlShP_PSKor","����. ������ ����.(KlPS_)"};
pStayFD _KlShP_PSKor = &_n_KlShP_PSKor;

BYTE  KlShP_PoCH;
StayFD _n_KlShP_PoCH = {&KlShP_PoCH,0,0,0,CLS_S,0,"KlShP_PoCH","��� ���������. ����(KlPost)"};
pStayFD _KlShP_PoCH = &_n_KlShP_PoCH;

BYTE  KlShP_PrCH;
StayFD _n_KlShP_PrCH = {&KlShP_PrCH,0,0,0,CLS_S,0,"KlShP_PrCH","������������ ����(KlChe_)"};
pStayFD _KlShP_PrCH = &_n_KlShP_PrCH;

BYTE  KlShP_PrInv;
StayFD _n_KlShP_PrInv = {&KlShP_PrInv,0,0,0,CLS_S,0,"KlShP_PrInv","������� ���-�� (KlPInv_)"};
pStayFD _KlShP_PrInv = &_n_KlShP_PrInv;

BYTE  KlShP_Prof;
StayFD _n_KlShP_Prof = {&KlShP_Prof,0,0,0,CLS_S,0,"KlShP_Prof","��� ���������"};
pStayFD _KlShP_Prof = &_n_KlShP_Prof;

BYTE  KlShP_Sex;
StayFD _n_KlShP_Sex = {&KlShP_Sex,0,0,0,CLS_S,0,"KlShP_Sex","���"};
pStayFD _KlShP_Sex = &_n_KlShP_Sex;

WORD  KlShP_ShP;
StayFD _n_KlShP_ShP = {&KlShP_ShP,0,0,0,CLS_I,0,"KlShP_ShP","���� ������(�������)"};
pStayFD _KlShP_ShP = &_n_KlShP_ShP;

BYTE  KlShP_VInv;
StayFD _n_KlShP_VInv = {&KlShP_VInv,0,0,0,CLS_S,0,"KlShP_VInv","��� ������������ (KlInv_)"};
pStayFD _KlShP_VInv = &_n_KlShP_VInv;

BYTE  KlShP_VP;
StayFD _n_KlShP_VP = {&KlShP_VP,0,0,0,CLS_S,0,"KlShP_VP","��� ������(KlVPen_)"};
pStayFD _KlShP_VP = &_n_KlShP_VP;

BYTE  KlSposUd_Code;
StayFD _n_KlSposUd_Code = {&KlSposUd_Code,0,0,0,CLS_S,0,"KlSposUd_Code","��� ������� ���������"};
pStayFD _KlSposUd_Code = &_n_KlSposUd_Code;

char KlSposUd_Name[13];
StayFD _n_KlSposUd_Name = {&KlSposUd_Name,0,0,0,CLS_V,12,"KlSposUd_Name","������. �������"};
pStayFD _KlSposUd_Name = &_n_KlSposUd_Name;

BYTE  KlStag_Stag;
StayFD _n_KlStag_Stag = {&KlStag_Stag,0,0,0,CLS_S,0,"KlStag_Stag","�����.�����.����"};
pStayFD _KlStag_Stag = &_n_KlStag_Stag;

BYTE  KlStag_Vozr;
StayFD _n_KlStag_Vozr = {&KlStag_Vozr,0,0,0,CLS_S,0,"KlStag_Vozr","������� �������� (���)"};
pStayFD _KlStag_Vozr = &_n_KlStag_Vozr;

char KlSud_Adr[51];
StayFD _n_KlSud_Adr = {&KlSud_Adr,0,0,0,CLS_V,50,"KlSud_Adr","����� ����(��.,���)"};
pStayFD _KlSud_Adr = &_n_KlSud_Adr;

BYTE  KlSud_Code;
StayFD _n_KlSud_Code = {&KlSud_Code,0,0,0,CLS_S,0,"KlSud_Code","��� ����"};
pStayFD _KlSud_Code = &_n_KlSud_Code;

DWORD KlSud_IndPO;
StayFD _n_KlSud_IndPO = {&KlSud_IndPO,0,0,0,CLS_L,0,"KlSud_IndPO","������ ���-�� ���(KlInd_)"};
pStayFD _KlSud_IndPO = &_n_KlSud_IndPO;

char KlSud_Name[41];
StayFD _n_KlSud_Name = {&KlSud_Name,0,0,0,CLS_V,40,"KlSud_Name","������������ ����"};
pStayFD _KlSud_Name = &_n_KlSud_Name;

BYTE  KlTPer_Code;
StayFD _n_KlTPer_Code = {&KlTPer_Code,0,0,0,CLS_S,0,"KlTPer_Code","��� ���� �������"};
pStayFD _KlTPer_Code = &_n_KlTPer_Code;

char KlTPer_Name[31];
StayFD _n_KlTPer_Name = {&KlTPer_Name,0,0,0,CLS_V,30,"KlTPer_Name","������������ ���� �������"};
pStayFD _KlTPer_Name = &_n_KlTPer_Name;

BYTE  KlTpVzs_Code;
StayFD _n_KlTpVzs_Code = {&KlTpVzs_Code,0,0,0,CLS_S,0,"KlTpVzs_Code","��� ���������"};
pStayFD _KlTpVzs_Code = &_n_KlTpVzs_Code;

char KlTpVzs_Name[18];
StayFD _n_KlTpVzs_Name = {&KlTpVzs_Name,0,0,0,CLS_V,17,"KlTpVzs_Name","������. ���������"};
pStayFD _KlTpVzs_Name = &_n_KlTpVzs_Name;

WORD  KlUS_Code;
StayFD _n_KlUS_Code = {&KlUS_Code,0,0,0,CLS_I,0,"KlUS_Code","��� ���� �����"};
pStayFD _KlUS_Code = &_n_KlUS_Code;

DWORD KlUS_MFO;
StayFD _n_KlUS_MFO = {&KlUS_MFO,0,0,0,CLS_L,0,"KlUS_MFO","��� �����"};
pStayFD _KlUS_MFO = &_n_KlUS_MFO;

char KlUS_NRSB[15];
StayFD _n_KlUS_NRSB = {&KlUS_NRSB,0,0,0,CLS_V,14,"KlUS_NRSB","����� �/� ����� ���.���� ���."};
pStayFD _KlUS_NRSB = &_n_KlUS_NRSB;

char KlUS_NRSUS[15];
StayFD _n_KlUS_NRSUS = {&KlUS_NRSUS,0,0,0,CLS_V,14,"KlUS_NRSUS","����� �/� ���� ����� �����"};
pStayFD _KlUS_NRSUS = &_n_KlUS_NRSUS;

char KlUS_Name[21];
StayFD _n_KlUS_Name = {&KlUS_Name,0,0,0,CLS_V,20,"KlUS_Name","��������. ���� ����� ���"};
pStayFD _KlUS_Name = &_n_KlUS_Name;

char KlUS_NameB[41];
StayFD _n_KlUS_NameB = {&KlUS_NameB,0,0,0,CLS_V,40,"KlUS_NameB","����.�����,��� ���-�� �/� ��"};
pStayFD _KlUS_NameB = &_n_KlUS_NameB;

uint6 KlUS_PrcPS;
StayFD _n_KlUS_PrcPS = {&KlUS_PrcPS,0,0,0,CLS_H,2,"KlUS_PrcPS","% �������� ������(��� ��)"};
pStayFD _KlUS_PrcPS = &_n_KlUS_PrcPS;

BYTE  KlUd_Code;
StayFD _n_KlUd_Code = {&KlUd_Code,0,0,0,CLS_S,0,"KlUd_Code","��� ���������"};
pStayFD _KlUd_Code = &_n_KlUd_Code;

char KlUd_Name[26];
StayFD _n_KlUd_Name = {&KlUd_Name,0,0,0,CLS_V,25,"KlUd_Name","������������ ���������"};
pStayFD _KlUd_Name = &_n_KlUd_Name;

uint6 KlUd_Ogr;
StayFD _n_KlUd_Ogr = {&KlUd_Ogr,0,0,0,CLS_H,2,"KlUd_Ogr","���. ������� (� % �� ����)"};
pStayFD _KlUd_Ogr = &_n_KlUd_Ogr;

BYTE  KlUd_PInd;
StayFD _n_KlUd_PInd = {&KlUd_PInd,0,0,0,CLS_S,0,"KlUd_PInd","������� ��������. �����."};
pStayFD _KlUd_PInd = &_n_KlUd_PInd;

BYTE  KlUd_Vid;
StayFD _n_KlUd_Vid = {&KlUd_Vid,0,0,0,CLS_S,0,"KlUd_Vid","��� ��������� (������)"};
pStayFD _KlUd_Vid = &_n_KlUd_Vid;

BYTE  KlUl_CodeKUl;
StayFD _n_KlUl_CodeKUl = {&KlUl_CodeKUl,0,0,0,CLS_S,0,"KlUl_CodeKUl","��� ��������� �����"};
pStayFD _KlUl_CodeKUl = &_n_KlUl_CodeKUl;

WORD  KlUl_CodeRn;
StayFD _n_KlUl_CodeRn = {&KlUl_CodeRn,0,0,0,CLS_I,0,"KlUl_CodeRn","��� ������ (KlAt_)"};
pStayFD _KlUl_CodeRn = &_n_KlUl_CodeRn;

WORD  KlUl_CodeUl;
StayFD _n_KlUl_CodeUl = {&KlUl_CodeUl,0,0,0,CLS_I,0,"KlUl_CodeUl","��� �����"};
pStayFD _KlUl_CodeUl = &_n_KlUl_CodeUl;

char KlUl_Name[51];
StayFD _n_KlUl_Name = {&KlUl_Name,0,0,0,CLS_V,50,"KlUl_Name","������������ �����"};
pStayFD _KlUl_Name = &_n_KlUl_Name;

BYTE  KlVPen_Code;
StayFD _n_KlVPen_Code = {&KlVPen_Code,0,0,0,CLS_S,0,"KlVPen_Code","��� ���� ������"};
pStayFD _KlVPen_Code = &_n_KlVPen_Code;

char KlVPen_Name[26];
StayFD _n_KlVPen_Name = {&KlVPen_Name,0,0,0,CLS_V,25,"KlVPen_Name","������������ ���� ������"};
pStayFD _KlVPen_Name = &_n_KlVPen_Name;

BYTE  KlVZvan_Code;
StayFD _n_KlVZvan_Code = {&KlVZvan_Code,0,0,0,CLS_S,0,"KlVZvan_Code","��� ������"};
pStayFD _KlVZvan_Code = &_n_KlVZvan_Code;

char KlVZvan_Name[11];
StayFD _n_KlVZvan_Name = {&KlVZvan_Name,0,0,0,CLS_V,10,"KlVZvan_Name","������������ ������"};
pStayFD _KlVZvan_Name = &_n_KlVZvan_Name;

BYTE  KlVis_ChPri;
StayFD _n_KlVis_ChPri = {&KlVis_ChPri,0,0,0,CLS_S,0,"KlVis_ChPri","������� ����� � ����"};
pStayFD _KlVis_ChPri = &_n_KlVis_ChPri;

WORD  KlVis_Code;
StayFD _n_KlVis_Code = {&KlVis_Code,0,0,0,CLS_I,0,"KlVis_Code","��� ���������"};
pStayFD _KlVis_Code = &_n_KlVis_Code;

WORD  KlVis_M1;
StayFD _n_KlVis_M1 = {&KlVis_M1,0,0,0,CLS_I,0,"KlVis_M1","������� � �������"};
pStayFD _KlVis_M1 = &_n_KlVis_M1;

WORD  KlVis_M2;
StayFD _n_KlVis_M2 = {&KlVis_M2,0,0,0,CLS_I,0,"KlVis_M2","����� ����"};
pStayFD _KlVis_M2 = &_n_KlVis_M2;

WORD  KlVis_M3;
StayFD _n_KlVis_M3 = {&KlVis_M3,0,0,0,CLS_I,0,"KlVis_M3","�������� ����"};
pStayFD _KlVis_M3 = &_n_KlVis_M3;

WORD  KlVis_M4;
StayFD _n_KlVis_M4 = {&KlVis_M4,0,0,0,CLS_I,0,"KlVis_M4","�������� ���� - �����������"};
pStayFD _KlVis_M4 = &_n_KlVis_M4;

StayDate KlVis_DBeg;
StayFD _n_KlVis_DBeg = {&KlVis_DBeg,0,0,0,CLS_Date,0,"KlVis_DBeg","���� ������ �����"};
pStayFD _KlVis_DBeg = &_n_KlVis_DBeg;

StayDate KlVis_DEnd;
StayFD _n_KlVis_DEnd = {&KlVis_DEnd,0,0,0,CLS_Date,0,"KlVis_DEnd","���� �����  �����"};
pStayFD _KlVis_DEnd = &_n_KlVis_DEnd;

BYTE  KlVis_Sex;
StayFD _n_KlVis_Sex = {&KlVis_Sex,0,0,0,CLS_S,0,"KlVis_Sex","���"};
pStayFD _KlVis_Sex = &_n_KlVis_Sex;

BYTE  KlVozvr_Code;
StayFD _n_KlVozvr_Code = {&KlVozvr_Code,0,0,0,CLS_S,0,"KlVozvr_Code","��� ������� ��������"};
pStayFD _KlVozvr_Code = &_n_KlVozvr_Code;

char KlVozvr_Name[20];
StayFD _n_KlVozvr_Name = {&KlVozvr_Name,0,0,0,CLS_V,19,"KlVozvr_Name","������������ �������"};
pStayFD _KlVozvr_Name = &_n_KlVozvr_Name;

WORD  KlVsr_CL;
StayFD _n_KlVsr_CL = {&KlVsr_CL,0,0,0,CLS_I,0,"KlVsr_CL","�������� ����"};
pStayFD _KlVsr_CL = &_n_KlVsr_CL;

WORD  KlVsr_CSG1;
StayFD _n_KlVsr_CSG1 = {&KlVsr_CSG1,0,0,0,CLS_I,0,"KlVsr_CSG1","����. ����. ����. �� ���"};
pStayFD _KlVsr_CSG1 = &_n_KlVsr_CSG1;

WORD  KlVsr_CSG2;
StayFD _n_KlVsr_CSG2 = {&KlVsr_CSG2,0,0,0,CLS_I,0,"KlVsr_CSG2","����. ����. ����."};
pStayFD _KlVsr_CSG2 = &_n_KlVsr_CSG2;

WORD  KlVsr_CSP;
StayFD _n_KlVsr_CSP = {&KlVsr_CSP,0,0,0,CLS_I,0,"KlVsr_CSP","����.����.����.�� ���"};
pStayFD _KlVsr_CSP = &_n_KlVsr_CSP;

WORD  KlVsr_CST;
StayFD _n_KlVsr_CST = {&KlVsr_CST,0,0,0,CLS_I,0,"KlVsr_CST","����� ����"};
pStayFD _KlVsr_CST = &_n_KlVsr_CST;

WORD  KlVsr_CV;
StayFD _n_KlVsr_CV = {&KlVsr_CV,0,0,0,CLS_I,0,"KlVsr_CV","������� � �������"};
pStayFD _KlVsr_CV = &_n_KlVsr_CV;

BYTE  KlVsr_ChPri;
StayFD _n_KlVsr_ChPri = {&KlVsr_ChPri,0,0,0,CLS_S,0,"KlVsr_ChPri","������� ����� � ����"};
pStayFD _KlVsr_ChPri = &_n_KlVsr_ChPri;

BYTE  KlVsr_Code;
StayFD _n_KlVsr_Code = {&KlVsr_Code,0,0,0,CLS_S,0,"KlVsr_Code","��� ���������"};
pStayFD _KlVsr_Code = &_n_KlVsr_Code;

BYTE  KlVsr_Sex;
StayFD _n_KlVsr_Sex = {&KlVsr_Sex,0,0,0,CLS_S,0,"KlVsr_Sex","���"};
pStayFD _KlVsr_Sex = &_n_KlVsr_Sex;

DWORD KlZR92_Coeff;
StayFD _n_KlZR92_Coeff = {&KlZR92_Coeff,0,0,0,CLS_L,2,"KlZR92_Coeff","�����������"};
pStayFD _KlZR92_Coeff = &_n_KlZR92_Coeff;

StayDate KlZR92_Data;
StayFD _n_KlZR92_Data = {&KlZR92_Data,0,0,0,CLS_Date,0,"KlZR92_Data","���� ��������. ����."};
pStayFD _KlZR92_Data = &_n_KlZR92_Data;

DWORD KlZR_Coeff;
StayFD _n_KlZR_Coeff = {&KlZR_Coeff,0,0,0,CLS_L,2,"KlZR_Coeff","�����������"};
pStayFD _KlZR_Coeff = &_n_KlZR_Coeff;

StayDate KlZR_Data;
StayFD _n_KlZR_Data = {&KlZR_Data,0,0,0,CLS_Date,0,"KlZR_Data","���� ��������. ����."};
pStayFD _KlZR_Data = &_n_KlZR_Data;

BYTE  KlZach_Code;
StayFD _n_KlZach_Code = {&KlZach_Code,0,0,0,CLS_S,0,"KlZach_Code","��� ���������"};
pStayFD _KlZach_Code = &_n_KlZach_Code;

BYTE  KlZach_CodeZ;
StayFD _n_KlZach_CodeZ = {&KlZach_CodeZ,0,0,0,CLS_S,0,"KlZach_CodeZ","��� ������. �� ������"};
pStayFD _KlZach_CodeZ = &_n_KlZach_CodeZ;

char KlZach_Name[43];
StayFD _n_KlZach_Name = {&KlZach_Name,0,0,0,CLS_V,42,"KlZach_Name","������. ���������"};
pStayFD _KlZach_Name = &_n_KlZach_Name;

BYTE  KlZach_Prizn;
StayFD _n_KlZach_Prizn = {&KlZach_Prizn,0,0,0,CLS_S,0,"KlZach_Prizn","������� �������� ���������"};
pStayFD _KlZach_Prizn = &_n_KlZach_Prizn;

StayDate KlZach_DBeg;
StayFD _n_KlZach_DBeg = {&KlZach_DBeg,0,0,0,CLS_Date,0,"KlZach_DBeg","���� ������ �����"};
pStayFD _KlZach_DBeg = &_n_KlZach_DBeg;

StayDate KlZach_DEnd;
StayFD _n_KlZach_DEnd = {&KlZach_DEnd,0,0,0,CLS_Date,0,"KlZach_DEnd","���� �����  �����"};
pStayFD _KlZach_DEnd = &_n_KlZach_DEnd;

BYTE  KlZem_Code;
StayFD _n_KlZem_Code = {&KlZem_Code,0,0,0,CLS_S,0,"KlZem_Code","��� ���������� �������"};
pStayFD _KlZem_Code = &_n_KlZem_Code;

char KlZem_Name[51];
StayFD _n_KlZem_Name = {&KlZem_Name,0,0,0,CLS_V,50,"KlZem_Name","������������ �����. �������"};
pStayFD _KlZem_Name = &_n_KlZem_Name;

BYTE  KlZon_Code;
StayFD _n_KlZon_Code = {&KlZon_Code,0,0,0,CLS_S,0,"KlZon_Code","���� ��������� ����"};
pStayFD _KlZon_Code = &_n_KlZon_Code;

char KlZon_Name[51];
StayFD _n_KlZon_Name = {&KlZon_Name,0,0,0,CLS_V,50,"KlZon_Name","������������ �������.����"};
pStayFD _KlZon_Name = &_n_KlZon_Name;

StayDate Klhl_Date;
StayFD _n_Klhl_Date = {&Klhl_Date,0,0,0,CLS_Date,0,"Klhl_Date","���� ���������"};
pStayFD _Klhl_Date = &_n_Klhl_Date;

char Klhl_Name[51];
StayFD _n_Klhl_Name = {&Klhl_Name,0,0,0,CLS_V,50,"Klhl_Name","������������ ���������"};
pStayFD _Klhl_Name = &_n_Klhl_Name;

StayDate Km_Date;
StayFD _n_Km_Date = {&Km_Date,0,0,0,CLS_Date,0,"Km_Date","���� �������. ������� ���. ���"};
pStayFD _Km_Date = &_n_Km_Date;

int6 Km_Razm;
StayFD _n_Km_Razm = {&Km_Razm,0,0,0,CLS_Hs,2,"Km_Razm","������ ���. ����. ���. ������"};
pStayFD _Km_Razm = &_n_Km_Razm;

StayDate Kmd_Date;
StayFD _n_Kmd_Date = {&Kmd_Date,0,0,0,CLS_Date,0,"Kmd_Date","���� ��������� �������"};
pStayFD _Kmd_Date = &_n_Kmd_Date;

int6 Kmd_Razm;
StayFD _n_Kmd_Razm = {&Kmd_Razm,0,0,0,CLS_Hs,2,"Kmd_Razm","������ ���.����.���.������ �/���.�� ����������"};
pStayFD _Kmd_Razm = &_n_Kmd_Razm;

BYTE  NWork_Code;
StayFD _n_NWork_Code = {&NWork_Code,0,0,0,CLS_S,0,"NWork_Code","��� �������, �� ���. �� ���."};
pStayFD _NWork_Code = &_n_NWork_Code;

char NWork_Name[51];
StayFD _n_NWork_Name = {&NWork_Name,0,0,0,CLS_V,50,"NWork_Name","������������ ��., �� ���. ��"};
pStayFD _NWork_Name = &_n_NWork_Name;

BYTE  Par_Code;
StayFD _n_Par_Code = {&Par_Code,0,0,0,CLS_S,0,"Par_Code","��� ��������� ��������"};
pStayFD _Par_Code = &_n_Par_Code;

char Par_Name[21];
StayFD _n_Par_Name = {&Par_Name,0,0,0,CLS_V,20,"Par_Name","������������ ��������� �������"};
pStayFD _Par_Name = &_n_Par_Name;

StayDate Prav_DBeg;
StayFD _n_Prav_DBeg = {&Prav_DBeg,0,0,0,CLS_Date,0,"Prav_DBeg","���� ������ ��� �������� ����"};
pStayFD _Prav_DBeg = &_n_Prav_DBeg;

StayDate Prav_DEnd;
StayFD _n_Prav_DEnd = {&Prav_DEnd,0,0,0,CLS_Date,0,"Prav_DEnd","���� ����� ��� �������� ����"};
pStayFD _Prav_DEnd = &_n_Prav_DEnd;

BYTE  Prav_MesNaz;
StayFD _n_Prav_MesNaz = {&Prav_MesNaz,0,0,0,CLS_S,0,"Prav_MesNaz","���-�� ������� ��� ����������"};
pStayFD _Prav_MesNaz = &_n_Prav_MesNaz;

BYTE  Prav_MesReas;
StayFD _n_Prav_MesReas = {&Prav_MesReas,0,0,0,CLS_S,0,"Prav_MesReas","���-�� ������� ��� �����.�����"};
pStayFD _Prav_MesReas = &_n_Prav_MesReas;

BYTE  Prav_MesRet;
StayFD _n_Prav_MesRet = {&Prav_MesRet,0,0,0,CLS_S,0,"Prav_MesRet","���. ���-�� ������� ��� ����."};
pStayFD _Prav_MesRet = &_n_Prav_MesRet;

DWORD SysP_CMPer;
StayFD _n_SysP_CMPer = {&SysP_CMPer,0,0,0,CLS_L,5,"SysP_CMPer","����.�������� ������������"};
pStayFD _SysP_CMPer = &_n_SysP_CMPer;

uint6 SysP_CMinZp;
StayFD _n_SysP_CMinZp = {&SysP_CMinZp,0,0,0,CLS_H,5,"SysP_CMinZp","����.����.���.��"};
pStayFD _SysP_CMinZp = &_n_SysP_CMinZp;

uint6 SysP_CMinZpCh;
StayFD _n_SysP_CMinZpCh = {&SysP_CMinZpCh,0,0,0,CLS_H,5,"SysP_CMinZpCh","����.����. �� ��� ����"};
pStayFD _SysP_CMinZpCh = &_n_SysP_CMinZpCh;

uint6 SysP_CNS;
StayFD _n_SysP_CNS = {&SysP_CNS,0,0,0,CLS_H,5,"SysP_CNS","����.���� �������� - ������"};
pStayFD _SysP_CNS = &_n_SysP_CNS;

uint6 SysP_CNadb;
StayFD _n_SysP_CNadb = {&SysP_CNadb,0,0,0,CLS_H,5,"SysP_CNadb","����.���� ��������"};
pStayFD _SysP_CNadb = &_n_SysP_CNadb;

uint6 SysP_CPen;
StayFD _n_SysP_CPen = {&SysP_CPen,0,0,0,CLS_H,5,"SysP_CPen","����. ���� ����."};
pStayFD _SysP_CPen = &_n_SysP_CPen;

uint6 SysP_CPenCh;
StayFD _n_SysP_CPenCh = {&SysP_CPenCh,0,0,0,CLS_H,5,"SysP_CPenCh","����. ���� ����. - ���������"};
pStayFD _SysP_CPenCh = &_n_SysP_CPenCh;

uint6 SysP_CPenSc;
StayFD _n_SysP_CPenSc = {&SysP_CPenSc,0,0,0,CLS_H,5,"SysP_CPenSc","����. ���� ����. - ����������"};
pStayFD _SysP_CPenSc = &_n_SysP_CPenSc;

uint6 SysP_CPenVn;
StayFD _n_SysP_CPenVn = {&SysP_CPenVn,0,0,0,CLS_H,5,"SysP_CPenVn","����. ���� ����. - �������"};
pStayFD _SysP_CPenVn = &_n_SysP_CPenVn;

uint6 SysP_CPenVz;
StayFD _n_SysP_CPenVz = {&SysP_CPenVz,0,0,0,CLS_H,5,"SysP_CPenVz","����. ���� ����. - ����������"};
pStayFD _SysP_CPenVz = &_n_SysP_CPenVz;

WORD  SysP_CodeInsp;
StayFD _n_SysP_CodeInsp = {&SysP_CodeInsp,0,0,0,CLS_I,0,"SysP_CodeInsp","��� ����������"};
pStayFD _SysP_CodeInsp = &_n_SysP_CodeInsp;

StayDate SysP_Data;
StayFD _n_SysP_Data = {&SysP_Data,0,0,0,CLS_Date,0,"SysP_Data","���� ����� ���. �������"};
pStayFD _SysP_Data = &_n_SysP_Data;

DWORD SysP_MinPen;
StayFD _n_SysP_MinPen = {&SysP_MinPen,0,0,0,CLS_L,2,"SysP_MinPen","����. ���. ����."};
pStayFD _SysP_MinPen = &_n_SysP_MinPen;

DWORD SysP_MinPenCh;
StayFD _n_SysP_MinPenCh = {&SysP_MinPenCh,0,0,0,CLS_L,2,"SysP_MinPenCh","����. ���. ����. - ���������"};
pStayFD _SysP_MinPenCh = &_n_SysP_MinPenCh;

DWORD SysP_MinPenNS;
StayFD _n_SysP_MinPenNS = {&SysP_MinPenNS,0,0,0,CLS_L,2,"SysP_MinPenNS","����. ���. ����. - ��� �������� - ������ �� ��"};
pStayFD _SysP_MinPenNS = &_n_SysP_MinPenNS;

DWORD SysP_MinPenNb;
StayFD _n_SysP_MinPenNb = {&SysP_MinPenNb,0,0,0,CLS_L,2,"SysP_MinPenNb","����. ���. ����. - ��� ��������"};
pStayFD _SysP_MinPenNb = &_n_SysP_MinPenNb;

DWORD SysP_MinPenSc;
StayFD _n_SysP_MinPenSc = {&SysP_MinPenSc,0,0,0,CLS_L,2,"SysP_MinPenSc","����. ���. ����. - ����������"};
pStayFD _SysP_MinPenSc = &_n_SysP_MinPenSc;

DWORD SysP_MinPenVn;
StayFD _n_SysP_MinPenVn = {&SysP_MinPenVn,0,0,0,CLS_L,2,"SysP_MinPenVn","����. ���. ����. - �������"};
pStayFD _SysP_MinPenVn = &_n_SysP_MinPenVn;

DWORD SysP_MinPenVz;
StayFD _n_SysP_MinPenVz = {&SysP_MinPenVz,0,0,0,CLS_L,2,"SysP_MinPenVz","����. ���. ����. - ����������"};
pStayFD _SysP_MinPenVz = &_n_SysP_MinPenVz;

DWORD SysP_MinZp;
StayFD _n_SysP_MinZp = {&SysP_MinZp,0,0,0,CLS_L,2,"SysP_MinZp","����. ���. ��"};
pStayFD _SysP_MinZp = &_n_SysP_MinZp;

uint6 SysP_OgrPKoef;
StayFD _n_SysP_OgrPKoef = {&SysP_OgrPKoef,0,0,0,CLS_H,0,"SysP_OgrPKoef","����������� ���������� ����"};
pStayFD _SysP_OgrPKoef = &_n_SysP_OgrPKoef;

uint6 SysP_OgrRez;
StayFD _n_SysP_OgrRez = {&SysP_OgrRez,0,0,0,CLS_H,0,"SysP_OgrRez","����������� ���������� �������"};
pStayFD _SysP_OgrRez = &_n_SysP_OgrRez;

BYTE  SysP_PrMPer;
StayFD _n_SysP_PrMPer = {&SysP_PrMPer,0,0,0,CLS_S,0,"SysP_PrMPer","������� ��������� �����������"};
pStayFD _SysP_PrMPer = &_n_SysP_PrMPer;

BYTE  SysP_PrOgr;
StayFD _n_SysP_PrOgr = {&SysP_PrOgr,0,0,0,CLS_S,0,"SysP_PrOgr","������� �����������"};
pStayFD _SysP_PrOgr = &_n_SysP_PrOgr;

StayDate TarPS_Data;
StayFD _n_TarPS_Data = {&TarPS_Data,0,0,0,CLS_Date,0,"TarPS_Data","���� ������� �_�:\tSI\tIC\t�"};
pStayFD _TarPS_Data = &_n_TarPS_Data;

BYTE  TarPS_Kod;
StayFD _n_TarPS_Kod = {&TarPS_Kod,0,0,0,CLS_S,0,"TarPS_Kod","��� ������"};
pStayFD _TarPS_Kod = &_n_TarPS_Kod;

StayDate TarPS_DataE;
StayFD _n_TarPS_DataE = {&TarPS_DataE,0,0,0,CLS_Date,0,"TarPS_DataE","���� ������.�_�"};
pStayFD _TarPS_DataE = &_n_TarPS_DataE;

char TarPS_Name[51];
StayFD _n_TarPS_Name = {&TarPS_Name,0,0,0,CLS_V,50,"TarPS_Name","��� ������"};
pStayFD _TarPS_Name = &_n_TarPS_Name;

uint6 TarPS_Prc;
StayFD _n_TarPS_Prc = {&TarPS_Prc,0,0,0,CLS_H,2,"TarPS_Prc","������� �������� ������"};
pStayFD _TarPS_Prc = &_n_TarPS_Prc;

WORD  KlCheKfn_Cd1;
StayFD _n_KlCheKfn_Cd1 = {&KlCheKfn_Cd1,0,0,0,CLS_I,0,"KlCheKfn_Cd1","�� ������������� ���"};
pStayFD _KlCheKfn_Cd1 = &_n_KlCheKfn_Cd1;

WORD  KlCheKfn_Cd2;
StayFD _n_KlCheKfn_Cd2 = {&KlCheKfn_Cd2,0,0,0,CLS_I,0,"KlCheKfn_Cd2","�����. ������������� ���"};
pStayFD _KlCheKfn_Cd2 = &_n_KlCheKfn_Cd2;

WORD  KlCng_NewKfn;
StayFD _n_KlCng_NewKfn = {&KlCng_NewKfn,0,0,0,CLS_I,0,"KlCng_NewKfn","����� �������� ��� �������"};
pStayFD _KlCng_NewKfn = &_n_KlCng_NewKfn;

WORD  KlCng_OldKfn;
StayFD _n_KlCng_OldKfn = {&KlCng_OldKfn,0,0,0,CLS_I,0,"KlCng_OldKfn","������ �������� ��� �������"};
pStayFD _KlCng_OldKfn = &_n_KlCng_OldKfn;

BYTE  KlTerm_Code;
StayFD _n_KlTerm_Code = {&KlTerm_Code,0,0,0,CLS_S,0,"KlTerm_Code","��� �������"};
pStayFD _KlTerm_Code = &_n_KlTerm_Code;

char KlTerm_Name[51];
StayFD _n_KlTerm_Name = {&KlTerm_Name,0,0,0,CLS_V,50,"KlTerm_Name","������������ �������"};
pStayFD _KlTerm_Name = &_n_KlTerm_Name;

WORD  KlProMin_Code;
StayFD _n_KlProMin_Code = {&KlProMin_Code,0,0,0,CLS_I,0,"KlProMin_Code","��� ������� ����.���."};
pStayFD _KlProMin_Code = &_n_KlProMin_Code;

StayDate KlProMin_DataB;
StayFD _n_KlProMin_DataB = {&KlProMin_DataB,0,0,0,CLS_Date,0,"KlProMin_DataB","���� ���.�������� ����"};
pStayFD _KlProMin_DataB = &_n_KlProMin_DataB;

StayDate KlProMin_DataE;
StayFD _n_KlProMin_DataE = {&KlProMin_DataE,0,0,0,CLS_Date,0,"KlProMin_DataE","���� ���. ������.����"};
pStayFD _KlProMin_DataE = &_n_KlProMin_DataE;

char KlProMin_Name[26];
StayFD _n_KlProMin_Name = {&KlProMin_Name,0,0,0,CLS_V,25,"KlProMin_Name","������������"};
pStayFD _KlProMin_Name = &_n_KlProMin_Name;

int6 KlProMin_Sum;
StayFD _n_KlProMin_Sum = {&KlProMin_Sum,0,0,0,CLS_Hs,2,"KlProMin_Sum","������ ����.���."};
pStayFD _KlProMin_Sum = &_n_KlProMin_Sum;

char Kltpl_Name[51];
StayFD _n_Kltpl_Name = {&Kltpl_Name,0,0,0,CLS_V,50,"Kltpl_Name","�������� ���������"};
pStayFD _Kltpl_Name = &_n_Kltpl_Name;

char Kltpl_Ob[11];
StayFD _n_Kltpl_Ob = {&Kltpl_Ob,0,0,0,CLS_V,10,"Kltpl_Ob","����� ��������������"};
pStayFD _Kltpl_Ob = &_n_Kltpl_Ob;

BYTE  Kltpl_Tip;
StayFD _n_Kltpl_Tip = {&Kltpl_Tip,0,0,0,CLS_S,0,"Kltpl_Tip","����� ���������"};
pStayFD _Kltpl_Tip = &_n_Kltpl_Tip;

char KlOrgR_Adr[51];
StayFD _n_KlOrgR_Adr = {&KlOrgR_Adr,0,0,0,CLS_V,50,"KlOrgR_Adr","����� �����������"};
pStayFD _KlOrgR_Adr = &_n_KlOrgR_Adr;

uint6 KlOrgR_Code;
StayFD _n_KlOrgR_Code = {&KlOrgR_Code,0,0,0,CLS_H,0,"KlOrgR_Code","��� ����������� �� ����"};
pStayFD _KlOrgR_Code = &_n_KlOrgR_Code;

StayDate KlOrgR_DBeg;
StayFD _n_KlOrgR_DBeg = {&KlOrgR_DBeg,0,0,0,CLS_Date,0,"KlOrgR_DBeg","���� ������ �������� ������"};
pStayFD _KlOrgR_DBeg = &_n_KlOrgR_DBeg;

StayDate KlOrgR_DEnd;
StayFD _n_KlOrgR_DEnd = {&KlOrgR_DEnd,0,0,0,CLS_Date,0,"KlOrgR_DEnd","���� �����  �������� ������"};
pStayFD _KlOrgR_DEnd = &_n_KlOrgR_DEnd;

DWORD KlOrgR_IndPO;
StayFD _n_KlOrgR_IndPO = {&KlOrgR_IndPO,0,0,0,CLS_L,0,"KlOrgR_IndPO","������ �� (KlInd_)"};
pStayFD _KlOrgR_IndPO = &_n_KlOrgR_IndPO;

DWORD KlOrgR_MFO;
StayFD _n_KlOrgR_MFO = {&KlOrgR_MFO,0,0,0,CLS_L,0,"KlOrgR_MFO","���"};
pStayFD _KlOrgR_MFO = &_n_KlOrgR_MFO;

char KlOrgR_NRSO[15];
StayFD _n_KlOrgR_NRSO = {&KlOrgR_NRSO,0,0,0,CLS_V,14,"KlOrgR_NRSO","����� �/� �����������"};
pStayFD _KlOrgR_NRSO = &_n_KlOrgR_NRSO;

char KlOrgR_Name[51];
StayFD _n_KlOrgR_Name = {&KlOrgR_Name,0,0,0,CLS_V,50,"KlOrgR_Name","������������ �����������"};
pStayFD _KlOrgR_Name = &_n_KlOrgR_Name;

char KlOrgR_NameB[41];
StayFD _n_KlOrgR_NameB = {&KlOrgR_NameB,0,0,0,CLS_V,40,"KlOrgR_NameB","������������ �����"};
pStayFD _KlOrgR_NameB = &_n_KlOrgR_NameB;

char KlOrgR_DopNr[15];
StayFD _n_KlOrgR_DopNr = {&KlOrgR_DopNr,0,0,0,CLS_V,14,"KlOrgR_DopNr","���.� ���.�/� �����������"};
pStayFD _KlOrgR_DopNr = &_n_KlOrgR_DopNr;

char KlOrgR_PrivO[15];
StayFD _n_KlOrgR_PrivO = {&KlOrgR_PrivO,0,0,0,CLS_V,14,"KlOrgR_PrivO","����.�/� �����������"};
pStayFD _KlOrgR_PrivO = &_n_KlOrgR_PrivO;

char KlOrgR_Prim[51];
StayFD _n_KlOrgR_Prim = {&KlOrgR_Prim,0,0,0,CLS_V,50,"KlOrgR_Prim","����������"};
pStayFD _KlOrgR_Prim = &_n_KlOrgR_Prim;

WORD  KlOrgR_ProcB;
StayFD _n_KlOrgR_ProcB = {&KlOrgR_ProcB,0,0,0,CLS_I,2,"KlOrgR_ProcB","������� ������� �����������"};
pStayFD _KlOrgR_ProcB = &_n_KlOrgR_ProcB;

BYTE  DiapPS_Code;
StayFD _n_DiapPS_Code = {&DiapPS_Code,0,0,0,CLS_S,0,"DiapPS_Code","��� ������ �� ��������� ����"};
pStayFD _DiapPS_Code = &_n_DiapPS_Code;

uint6 DiapPS_Min;
StayFD _n_DiapPS_Min = {&DiapPS_Min,0,0,0,CLS_H,2,"DiapPS_Min","���.  ����� ���������"};
pStayFD _DiapPS_Min = &_n_DiapPS_Min;

uint6 DiapPS_Max;
StayFD _n_DiapPS_Max = {&DiapPS_Max,0,0,0,CLS_H,2,"DiapPS_Max","����. ����� ���������"};
pStayFD _DiapPS_Max = &_n_DiapPS_Max;

BYTE  DiapPS_PrEd;
StayFD _n_DiapPS_PrEd = {&DiapPS_PrEd,0,0,0,CLS_S,0,"DiapPS_PrEd","�����.,� ����� ��.�����.�/�(0 - � %,1 - � ���.)"};
pStayFD _DiapPS_PrEd = &_n_DiapPS_PrEd;

uint6 DiapPS_Prc;
StayFD _n_DiapPS_Prc = {&DiapPS_Prc,0,0,0,CLS_H,2,"DiapPS_Prc","�������� ���� ( � % ���� � ���.)"};
pStayFD _DiapPS_Prc = &_n_DiapPS_Prc;

WORD  KlAtQ_Code;
StayFD _n_KlAtQ_Code = {&KlAtQ_Code,0,0,0,CLS_I,0,"KlAtQ_Code","��� ���-���� �����������"};
pStayFD _KlAtQ_Code = &_n_KlAtQ_Code;

char KlAtQ_Name[101];
StayFD _n_KlAtQ_Name = {&KlAtQ_Name,0,0,0,CLS_V,100,"KlAtQ_Name","����� ���-���� ���������"};
pStayFD _KlAtQ_Name = &_n_KlAtQ_Name;

uint6 KlDohNal_Razm;
StayFD _n_KlDohNal_Razm = {&KlDohNal_Razm,0,0,0,CLS_H,2,"KlDohNal_Razm","���� MAX ������"};
pStayFD _KlDohNal_Razm = &_n_KlDohNal_Razm;

StayDate KlDohNal_DataB;
StayFD _n_KlDohNal_DataB = {&KlDohNal_DataB,0,0,0,CLS_Date,0,"KlDohNal_DataB","���� ��������.MAX ������  - �������"};
pStayFD _KlDohNal_DataB = &_n_KlDohNal_DataB;

StayDate KlDohNal_DataE;
StayFD _n_KlDohNal_DataE = {&KlDohNal_DataE,0,0,0,CLS_Date,0,"KlDohNal_DataE","���� ��������.MAX ������  - ������"};
pStayFD _KlDohNal_DataE = &_n_KlDohNal_DataE;

BYTE  KlVidZar_Code;
StayFD _n_KlVidZar_Code = {&KlVidZar_Code,0,0,0,CLS_S,0,"KlVidZar_Code","��� ��������"};
pStayFD _KlVidZar_Code = &_n_KlVidZar_Code;

char KlVidZar_Name[41];
StayFD _n_KlVidZar_Name = {&KlVidZar_Name,0,0,0,CLS_V,40,"KlVidZar_Name","����� ���� ��������"};
pStayFD _KlVidZar_Name = &_n_KlVidZar_Name;

uint6 KlSrNx_Razm;
StayFD _n_KlSrNx_Razm = {&KlSrNx_Razm,0,0,0,CLS_H,5,"KlSrNx_Razm","���� ������.�����.�� �/�"};
pStayFD _KlSrNx_Razm = &_n_KlSrNx_Razm;

StayDate KlSrNx_DataB;
StayFD _n_KlSrNx_DataB = {&KlSrNx_DataB,0,0,0,CLS_Date,0,"KlSrNx_DataB","���� ��������.������.�����.�� �/�- �������"};
pStayFD _KlSrNx_DataB = &_n_KlSrNx_DataB;

StayDate KlSrNx_DataE;
StayFD _n_KlSrNx_DataE = {&KlSrNx_DataE,0,0,0,CLS_Date,0,"KlSrNx_DataE","���� ��������.������.�����.�� �/�- �����"};
pStayFD _KlSrNx_DataE = &_n_KlSrNx_DataE;

StayDate KlSrNx_DataNad;
StayFD _n_KlSrNx_DataNad = {&KlSrNx_DataNad,0,0,0,CLS_Date,0,"KlSrNx_DataNad","���� ������� ������.��� ���.�����.�� �/�"};
pStayFD _KlSrNx_DataNad = &_n_KlSrNx_DataNad;

char KlOsVidz_Name[151];
StayFD _n_KlOsVidz_Name = {&KlOsVidz_Name,0,0,0,CLS_V,150,"KlOsVidz_Name","����� �����.�������"};
pStayFD _KlOsVidz_Name = &_n_KlOsVidz_Name;

WORD  KlOsVidz_Code;
StayFD _n_KlOsVidz_Code = {&KlOsVidz_Code,0,0,0,CLS_I,0,"KlOsVidz_Code","��� �����.�������"};
pStayFD _KlOsVidz_Code = &_n_KlOsVidz_Code;

WORD  KlStran_Code;
StayFD _n_KlStran_Code = {&KlStran_Code,0,0,0,CLS_I,0,"KlStran_Code","��� ������"};
pStayFD _KlStran_Code = &_n_KlStran_Code;

char KlStran_Name[41];
StayFD _n_KlStran_Name = {&KlStran_Name,0,0,0,CLS_V,40,"KlStran_Name","������.������"};
pStayFD _KlStran_Name = &_n_KlStran_Name;

WORD  KlIndex_GodNar;
StayFD _n_KlIndex_GodNar = {&KlIndex_GodNar,0,0,0,CLS_I,0,"KlIndex_GodNar","г� �����������"};
pStayFD _KlIndex_GodNar = &_n_KlIndex_GodNar;

BYTE  KlIndex_MecNar;
StayFD _n_KlIndex_MecNar = {&KlIndex_MecNar,0,0,0,CLS_S,0,"KlIndex_MecNar","̳���� �����������"};
pStayFD _KlIndex_MecNar = &_n_KlIndex_MecNar;

WORD  KlIndex_GodBaz;
StayFD _n_KlIndex_GodBaz = {&KlIndex_GodBaz,0,0,0,CLS_I,0,"KlIndex_GodBaz","������� ��"};
pStayFD _KlIndex_GodBaz = &_n_KlIndex_GodBaz;

BYTE  KlIndex_MecBaz;
StayFD _n_KlIndex_MecBaz = {&KlIndex_MecBaz,0,0,0,CLS_S,0,"KlIndex_MecBaz","������� �����"};
pStayFD _KlIndex_MecBaz = &_n_KlIndex_MecBaz;

uint6 KlIndex_Koef;
StayFD _n_KlIndex_Koef = {&KlIndex_Koef,0,0,0,CLS_H,5,"KlIndex_Koef","���������� ����������"};
pStayFD _KlIndex_Koef = &_n_KlIndex_Koef;

WORD  Cost_CodeOrg;
StayFD _n_Cost_CodeOrg = {&Cost_CodeOrg,0,0,0,CLS_I,0,"Cost_CodeOrg","��� ��������.�� B_KlOVUd"};
pStayFD _Cost_CodeOrg = &_n_Cost_CodeOrg;

WORD  Cost_CodeSum;
StayFD _n_Cost_CodeSum = {&Cost_CodeSum,0,0,0,CLS_I,0,"Cost_CodeSum","��� ������� ���������"};
pStayFD _Cost_CodeSum = &_n_Cost_CodeSum;

StayDate Cost_DtB;
StayFD _n_Cost_DtB = {&Cost_DtB,0,0,0,CLS_Date,0,"Cost_DtB","���� �������  �"};
pStayFD _Cost_DtB = &_n_Cost_DtB;

StayDate Cost_DtE;
StayFD _n_Cost_DtE = {&Cost_DtE,0,0,0,CLS_Date,0,"Cost_DtE","���� �������  ��"};
pStayFD _Cost_DtE = &_n_Cost_DtE;

uint6 Cost_SumDpi;
StayFD _n_Cost_SumDpi = {&Cost_SumDpi,0,0,0,CLS_H,2,"Cost_SumDpi","����� ������� ���������"};
pStayFD _Cost_SumDpi = &_n_Cost_SumDpi;

uint6 Cost_DodSum;
StayFD _n_Cost_DodSum = {&Cost_DodSum,0,0,0,CLS_H,2,"Cost_DodSum","��������� ����"};
pStayFD _Cost_DodSum = &_n_Cost_DodSum;

WORD  Cost_Priznak;
StayFD _n_Cost_Priznak = {&Cost_Priznak,0,0,0,CLS_I,0,"Cost_Priznak","������"};
pStayFD _Cost_Priznak = &_n_Cost_Priznak;

uint6 Cost_Procent;
StayFD _n_Cost_Procent = {&Cost_Procent,0,0,0,CLS_H,2,"Cost_Procent","�������"};
pStayFD _Cost_Procent = &_n_Cost_Procent;

char KlInd6PF_Adr[51];
StayFD _n_KlInd6PF_Adr = {&KlInd6PF_Adr,0,0,0,CLS_V,50,"KlInd6PF_Adr","������.������ �������"};
pStayFD _KlInd6PF_Adr = &_n_KlInd6PF_Adr;

DWORD KlInd6PF_Ind;
StayFD _n_KlInd6PF_Ind = {&KlInd6PF_Ind,0,0,0,CLS_L,0,"KlInd6PF_Ind","������"};
pStayFD _KlInd6PF_Ind = &_n_KlInd6PF_Ind;

BYTE  KlInd6PF_TPS;
StayFD _n_KlInd6PF_TPS = {&KlInd6PF_TPS,0,0,0,CLS_S,0,"KlInd6PF_TPS","����� �������� �����"};
pStayFD _KlInd6PF_TPS = &_n_KlInd6PF_TPS;

WORD  KlInd6PF_Kod;
StayFD _n_KlInd6PF_Kod = {&KlInd6PF_Kod,0,0,0,CLS_I,0,"KlInd6PF_Kod","��� �����.������"};
pStayFD _KlInd6PF_Kod = &_n_KlInd6PF_Kod;

char KlInd6PF_Name[31];
StayFD _n_KlInd6PF_Name = {&KlInd6PF_Name,0,0,0,CLS_V,30,"KlInd6PF_Name","����� ���� �����.������"};
pStayFD _KlInd6PF_Name = &_n_KlInd6PF_Name;

char KlNpVidz_Name[251];
StayFD _n_KlNpVidz_Name = {&KlNpVidz_Name,0,0,0,CLS_V,250,"KlNpVidz_Name","����� �������"};
pStayFD _KlNpVidz_Name = &_n_KlNpVidz_Name;

WORD  KlNpVidz_Code;
StayFD _n_KlNpVidz_Code = {&KlNpVidz_Code,0,0,0,CLS_I,0,"KlNpVidz_Code","��� �������"};
pStayFD _KlNpVidz_Code = &_n_KlNpVidz_Code;

WORD  KlNpVidz_CdSt;
StayFD _n_KlNpVidz_CdSt = {&KlNpVidz_CdSt,0,0,0,CLS_I,0,"KlNpVidz_CdSt","��� ������ �����"};
pStayFD _KlNpVidz_CdSt = &_n_KlNpVidz_CdSt;

WORD  KlNpVidz_Razm;
StayFD _n_KlNpVidz_Razm = {&KlNpVidz_Razm,0,0,0,CLS_I,0,"KlNpVidz_Razm","����� ��������(� %)"};
pStayFD _KlNpVidz_Razm = &_n_KlNpVidz_Razm;

extern StayDataset _n_B_Joint;
extern StayDataset _n_B_KlAt;
extern StayDataset _n_B_KlCFam;
extern StayDataset _n_B_KlChe;
extern StayDataset _n_B_KlComDsh;
extern StayDataset _n_B_KlDKVp;
extern StayDataset _n_B_KlDUch;
extern StayDataset _n_B_KlDUch_D;
extern StayDataset _n_B_KlDUch_A;
extern StayDataset _n_B_KlDoUd;
extern StayDataset _n_B_KlDoc;
extern StayDataset _n_B_KlDocNz;
extern StayDataset _n_Doc_Reg1;
extern StayDataset _n_Doc_Reg2;
extern StayDataset _n_B_KlDox;
extern StayDataset _n_B_KlEarth;
extern StayDataset _n_B_KlFN;
extern StayDataset _n_B_KlHl;
extern StayDataset _n_B_KlIF;
extern StayDataset _n_B_KlIFUKR;
extern StayDataset _n_B_KlInd;
extern StayDataset _n_B_KlInf;
extern StayDataset _n_B_KlInv;
extern StayDataset _n_B_KlKRZp;
extern StayDataset _n_B_KlKatUl;
extern StayDataset _n_B_KlKfp;
extern StayDataset _n_B_KlKor;
extern StayDataset _n_B_KlLRab;
extern StayDataset _n_B_KlLgk;
extern StayDataset _n_B_KlNWork;
extern StayDataset _n_B_KlNet;
extern StayDataset _n_B_KlORG163;
extern StayDataset _n_B_KlOS;
extern StayDataset _n_B_KlOSZ;
extern StayDataset _n_B_KlOVUd;
extern StayDataset _n_B_KlOp;
extern StayDataset _n_B_KlOrg;
extern StayDataset _n_B_KlOsob;
extern StayDataset _n_B_KlPInv;
extern StayDataset _n_B_KlPNo;
extern StayDataset _n_B_KlPRab;
extern StayDataset _n_B_KlPS;
extern StayDataset _n_B_KlPSB;
extern StayDataset _n_B_KlPSUd;
extern StayDataset _n_B_KlPSn;
extern StayDataset _n_B_KlPar;
extern StayDataset _n_B_KlPost;
extern StayDataset _n_B_KlPov;
extern StayDataset _n_B_KlPred;
extern StayDataset _n_B_KlProf;
extern StayDataset _n_B_KlRPen;
extern StayDataset _n_B_KlRod;
extern StayDataset _n_B_KlSPUd;
extern StayDataset _n_B_KlSVUd;
extern StayDataset _n_B_KlShP;
extern StayDataset _n_B_KlShPN;
extern StayDataset _n_B_KlSposUd;
extern StayDataset _n_B_KlStagInv;
extern StayDataset _n_B_KlSud;
extern StayDataset _n_B_KlTPer;
extern StayDataset _n_B_KlTarPS;
extern StayDataset _n_B_KlTpVzs;
extern StayDataset _n_B_KlUS;
extern StayDataset _n_B_KlUd;
extern StayDataset _n_B_KlUl;
extern StayDataset _n_B_KlVPen;
extern StayDataset _n_B_KlVZvan;
extern StayDataset _n_B_KlVis;
extern StayDataset _n_B_KlVozvr;
extern StayDataset _n_B_KlVsr;
extern StayDataset _n_B_KlZR;
extern StayDataset _n_B_KlZR92;
extern StayDataset _n_B_KlZach;
extern StayDataset _n_B_KlZem;
extern StayDataset _n_B_KlZon;
extern StayDataset _n_B_PravPom;
extern StayDataset _n_B_SysP;
extern StayDataset _n_KDMinDox;
extern StayDataset _n_KMinDox;
extern StayDataset _n_B_KlCheKfn;
extern StayDataset _n_B_KlCngKfn;
extern StayDataset _n_B_KlTerm;
extern StayDataset _n_B_KlProMin;
extern StayDataset _n_B_Kltpl;
extern StayDataset _n_B_KlOrgR;
extern StayDataset _n_B_KlDiapPS;
extern StayDataset _n_B_KlAtQ;
extern StayDataset _n_B_KlVidZar;
extern StayDataset _n_B_KlDohNal;
extern StayDataset _n_B_KlSrNx;
extern StayDataset _n_B_KlSr0124;
extern StayDataset _n_B_KlSr4024;
extern StayDataset _n_B_KlSr424Y;
extern StayDataset _n_B_KlSrNxY;
extern StayDataset _n_B_KlOsVidz;
extern StayDataset _n_B_KlStran;
extern StayDataset _n_B_KlIndex;
extern StayDataset _n_B_KlCostDpi;
extern StayDataset _n_B_KlInd6PF;
extern StayDataset _n_B_KlMinZar;
extern StayDataset _n_B_KlKEKV;
extern StayDataset _n_B_KlPitDsh;
extern StayDataset _n_B_PtSan;
extern StayDataset _n_B_KlNpVidz;
static pStayFD tcm_B_Joint[] =
{
 (StayFD *)&_n_Joint_Kfn1,
 (StayFD *)&_n_Joint_Kfn2,
 (StayFD *)&_n_Joint_Pr,
 NULL
};
static BYTE ix_B_Joint[] = {1,1,2,0,1};
StayDataset _n_B_Joint = {NULL,TAG_DATASET,0,0,DS_QBASE,0,1,0,NULL,tcm_B_Joint,NULL,
           "KLBASE1:JOINT.DT",ix_B_Joint,"���� ������������� �������","B_Joint",16};
pStayDataset B_Joint = &_n_B_Joint;

static pStayFD tcm_B_KlAt[] =
{
 (StayFD *)&_n_KlAt_Code,
 (StayFD *)&_n_KlAt_Name,
 NULL
};
static BYTE ix_B_KlAt[] = {1,1,1,0};
StayDataset _n_B_KlAt = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlAt,NULL,
           "KLBASE1:KLAT.DT",ix_B_KlAt,"���������� ��������������� �����������","B_KlAt",};
pStayDataset B_KlAt = &_n_B_KlAt;

static pStayFD tcm_B_KlCFam[] =
{
 (StayFD *)&_n_KlCFam_Code,
 (StayFD *)&_n_KlCFam_Name,
 NULL
};
static BYTE ix_B_KlCFam[] = {1,1,65,0};
StayDataset _n_B_KlCFam = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlCFam,NULL,
           "KLBASE1:KLCFAM.DT",ix_B_KlCFam,"������������� ��������� ������ �����","B_KlCFam",};
pStayDataset B_KlCFam = &_n_B_KlCFam;

static pStayFD tcm_B_KlChe[] =
{
 (StayFD *)&_n_KlChe_Code,
 (StayFD *)&_n_KlChe_Name,
 NULL
};
static BYTE ix_B_KlChe[] = {1,1,1,0};
StayDataset _n_B_KlChe = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlChe,NULL,
           "KLBASE1:KLCHE.DT",ix_B_KlChe,"���������� ��������� ������������ �� ����","B_KlChe",};
pStayDataset B_KlChe = &_n_B_KlChe;

static pStayFD tcm_B_KlComDsh[] =
{
 (StayFD *)&_n_KlComDsh_DtB,
 (StayFD *)&_n_KlComDsh_Code,
 (StayFD *)&_n_KlComDsh_DtE,
 (StayFD *)&_n_KlComDsh_Razm,
 (StayFD *)&_n_KlComDsh_Name,
 NULL
};
static BYTE ix_B_KlComDsh[] = {1,1,2,0,1};
StayDataset _n_B_KlComDsh = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlComDsh,NULL,
           "KLBASE3:KLCOMDSH.DT",ix_B_KlComDsh,"���������� �������� ����������� ������������","B_KlComDsh",0};
pStayDataset B_KlComDsh = &_n_B_KlComDsh;

static pStayFD tcm_B_KlDKVp[] =
{
 (StayFD *)&_n_KlDKVp_Code,
 (StayFD *)&_n_KlDKVp_Name,
 (StayFD *)&_n_KlDKVp_Num,
 (StayFD *)&_n_KlDKVp_Data,
 NULL
};
static BYTE ix_B_KlDKVp[] = {1,1,1,0};
StayDataset _n_B_KlDKVp = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlDKVp,NULL,
           "KLBASE1:KLDKVP.DT",ix_B_KlDKVp,"���������� ����������-��������� ��� ���������������","B_KlDKVp",};
pStayDataset B_KlDKVp = &_n_B_KlDKVp;

static pStayFD tcm_B_KlDUch[] =
{
 (StayFD *)&_n_KlDUch_Code,
 (StayFD *)&_n_KlDUch_Prizn,
 (StayFD *)&_n_KlDUch_IndOS,
 (StayFD *)&_n_B_KlDUch_D,
 NULL
};
static BYTE ix_B_KlDUch[] = {2,1,2,2,0,2,67,1,2,0};
StayDataset _n_B_KlDUch = {NULL,TAG_DATASET,0,0,DS_QBASE,0,1,0,NULL,tcm_B_KlDUch,NULL,
           "KLBASE3:KLDUCH.DT",ix_B_KlDUch,"���������� ����������� ��������","B_KlDUch",10};
pStayDataset B_KlDUch = &_n_B_KlDUch;

static pStayFD tcm_B_KlDUch_D[] =
{
 (StayFD *)&_n_KlDUch_Data,
 (StayFD *)&_n_B_KlDUch_A,
 NULL
};
static BYTE ix_B_KlDUch_D[] = {1,1,1,0};
StayDataset _n_B_KlDUch_D = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlDUch_D,NULL,
           NULL,ix_B_KlDUch_D,"���� ����������� ��������","B_KlDUch_D",};
pStayDataset B_KlDUch_D = &_n_B_KlDUch_D;

static pStayFD tcm_B_KlDUch_A[] =
{
 (StayFD *)&_n_KlDUch_CodeUl,
 (StayFD *)&_n_KlDUch_About,
 NULL
};
static BYTE ix_B_KlDUch_A[] = {1,1,65,0};
StayDataset _n_B_KlDUch_A = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlDUch_A,NULL,
           NULL,ix_B_KlDUch_A,"���������� �������� �.�.","B_KlDUch_A",};
pStayDataset B_KlDUch_A = &_n_B_KlDUch_A;

static pStayFD tcm_B_KlDoUd[] =
{
 (StayFD *)&_n_KlDoUd_Code,
 (StayFD *)&_n_KlDoUd_Name,
 NULL
};
static BYTE ix_B_KlDoUd[] = {1,1,1,0};
StayDataset _n_B_KlDoUd = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlDoUd,NULL,
           "KLBASE1:KLDOUD.DT",ix_B_KlDoUd,"���������� ����������-��������� ��� ���������","B_KlDoUd",};
pStayDataset B_KlDoUd = &_n_B_KlDoUd;

static pStayFD tcm_B_KlDoc[] =
{
 (StayFD *)&_n_KlDoc_Kdoc,
 (StayFD *)&_n_KlDoc_Ndoc,
 NULL
};
static BYTE ix_B_KlDoc[] = {1,1,1,0};
StayDataset _n_B_KlDoc = {NULL,TAG_DATASET,0,0,DS_QBASE,0,1,0,NULL,tcm_B_KlDoc,NULL,
           "KLBASE4:KLDOC.DT",ix_B_KlDoc,"���������� ���������� ������� ��","B_KlDoc",16};
pStayDataset B_KlDoc = &_n_B_KlDoc;

static pStayFD tcm_B_KlDocNz[] =
{
 (StayFD *)&_n_Doc_Kfn,
 (StayFD *)&_n_Doc_Reg1,
 (StayFD *)&_n_Doc_Reg2,
 NULL
};
static BYTE ix_B_KlDocNz[] = {1,1,1,0};
StayDataset _n_B_KlDocNz = {NULL,TAG_DATASET,0,0,DS_QBASE,0,1,0,NULL,tcm_B_KlDocNz,NULL,
           "KLBASE1:KLDOCNZ.DT",ix_B_KlDocNz,"������ ����������� ����������","B_KlDocNz",16};
pStayDataset B_KlDocNz = &_n_B_KlDocNz;

static pStayFD tcm_Doc_Reg1[] =
{
 (StayFD *)&_n_Doc_Code,
 NULL
};
static BYTE ix_Doc_Reg1[] = {1,1,1,0};
StayDataset _n_Doc_Reg1 = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_Doc_Reg1,NULL,
           NULL,ix_Doc_Reg1,"������ ���������� ��� ����������","Doc_Reg1",};
pStayDataset Doc_Reg1 = &_n_Doc_Reg1;

static pStayFD tcm_Doc_Reg2[] =
{
 (StayFD *)&_n_Doc_Code,
 NULL
};
static BYTE ix_Doc_Reg2[] = {1,1,65,0};
StayDataset _n_Doc_Reg2 = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_Doc_Reg2,NULL,
           NULL,ix_Doc_Reg2,"������ ���������� ��� ����������","Doc_Reg2",};
pStayDataset Doc_Reg2 = &_n_Doc_Reg2;

static pStayFD tcm_B_KlDox[] =
{
 (StayFD *)&_n_KlDox_Code,
 (StayFD *)&_n_KlDox_Name,
 NULL
};
static BYTE ix_B_KlDox[] = {1,1,1,0};
StayDataset _n_B_KlDox = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlDox,NULL,
           "KLBASE1:KLDOX.DT",ix_B_KlDox,"������ ��������� �������","B_KlDox",};
pStayDataset B_KlDox = &_n_B_KlDox;

static pStayFD tcm_B_KlEarth[] =
{
 (StayFD *)&_n_KlEarth_Code,
 (StayFD *)&_n_KlEarth_DtB,
 (StayFD *)&_n_KlEarth_DtE,
 (StayFD *)&_n_KlEarth_Razm,
 (StayFD *)&_n_KlEarth_Name,
 NULL
};
static BYTE ix_B_KlEarth[] = {1,1,67,0,1,2};
StayDataset _n_B_KlEarth = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlEarth,NULL,
           "KLBASE3:KLEARTH.DT",ix_B_KlEarth,"���� �������� ��������� �����","B_KlEarth",};
pStayDataset B_KlEarth = &_n_B_KlEarth;

static pStayFD tcm_B_KlFN[] =
{
 (StayFD *)&_n_KlFN_Code,
 (StayFD *)&_n_KlFN_DataB,
 (StayFD *)&_n_KlFN_DataE,
 (StayFD *)&_n_KlFN_Name,
 (StayFD *)&_n_KlFN_CodeIF,
 (StayFD *)&_n_KlFN_ORVp,
 (StayFD *)&_n_KlFN_PCh,
 (StayFD *)&_n_KlFN_PInd,
 (StayFD *)&_n_KlFN_PUd,
 (StayFD *)&_n_KlFN_RVp,
 NULL
};
static BYTE ix_B_KlFN[] = {2,1,65,0,2,3,0,1,2};
StayDataset _n_B_KlFN = {NULL,TAG_DATASET,0,0,DS_QBASE,0,1,0,NULL,tcm_B_KlFN,NULL,
           "KLBASE1:KLFN.DT",ix_B_KlFN,"���������� ����� ������","B_KlFN",10};
pStayDataset B_KlFN = &_n_B_KlFN;

static pStayFD tcm_B_KlHl[] =
{
 (StayFD *)&_n_Klhl_Date,
 (StayFD *)&_n_Klhl_Name,
 NULL
};
static BYTE ix_B_KlHl[] = {1,1,1,0};
StayDataset _n_B_KlHl = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlHl,NULL,
           "KLBASE1:KLHL.DT",ix_B_KlHl,"���������� ���������� �������� � ����������� ����","B_KlHl",};
pStayDataset B_KlHl = &_n_B_KlHl;

static pStayFD tcm_B_KlIF[] =
{
 (StayFD *)&_n_KlIF_Code,
 (StayFD *)&_n_KlIF_Name,
 (StayFD *)&_n_KlIF_CodeVIF,
 (StayFD *)&_n_KlIF_NBal,
 (StayFD *)&_n_KlIF_NRSB,
 (StayFD *)&_n_KlIF_NRS,
 (StayFD *)&_n_KlIF_NameB,
 (StayFD *)&_n_KlIF_MFO,
 (StayFD *)&_n_KlIF_Razd,
 NULL
};
static BYTE ix_B_KlIF[] = {1,1,1,0};
StayDataset _n_B_KlIF = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlIF,NULL,
           "KLBASE3:KLIF.DT",ix_B_KlIF,"�����. �/� ���.������.","B_KlIF",};
pStayDataset B_KlIF = &_n_B_KlIF;

static pStayFD tcm_B_KlIFUKR[] =
{
 (StayFD *)&_n_KlIFUK_Code,
 (StayFD *)&_n_KlIFUK_Name,
 (StayFD *)&_n_KlIFUK_CodeVIF,
 (StayFD *)&_n_KlIFUK_NBal,
 (StayFD *)&_n_KlIFUK_NRSB,
 (StayFD *)&_n_KlIFUK_NRS,
 (StayFD *)&_n_KlIFUK_NameB,
 (StayFD *)&_n_KlIFUK_MFO,
 (StayFD *)&_n_KlIFUK_Razd,
 NULL
};
static BYTE ix_B_KlIFUKR[] = {1,1,1,0};
StayDataset _n_B_KlIFUKR = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlIFUKR,NULL,
           "KLBASE1:KLIFUKR.DT",ix_B_KlIFUKR,"���������� ���������� ��������������","B_KlIFUKR",};
pStayDataset B_KlIFUKR = &_n_B_KlIFUKR;

static pStayFD tcm_B_KlInd[] =
{
 (StayFD *)&_n_KlInd_Ind,
 (StayFD *)&_n_KlInd_Adr,
 (StayFD *)&_n_KlInd_TPS,
 NULL
};
static BYTE ix_B_KlInd[] = {1,1,1,0};
StayDataset _n_B_KlInd = {NULL,TAG_DATASET,0,0,DS_QBASE,0,1,0,NULL,tcm_B_KlInd,NULL,
           "KLBASE2:KLIND.DT",ix_B_KlInd,"���������� ������� �������� ��������","B_KlInd",16};
pStayDataset B_KlInd = &_n_B_KlInd;

static pStayFD tcm_B_KlInf[] =
{
 (StayFD *)&_n_KlInf_Code,
 (StayFD *)&_n_KlInf_Name,
 NULL
};
static BYTE ix_B_KlInf[] = {1,1,1,0};
StayDataset _n_B_KlInf = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlInf,NULL,
           "KLBASE1:KLINF.DT",ix_B_KlInf,"���������� ������� ��� ���������� �������","B_KlInf",};
pStayDataset B_KlInf = &_n_B_KlInf;

static pStayFD tcm_B_KlInv[] =
{
 (StayFD *)&_n_KlInv_Code,
 (StayFD *)&_n_KlInv_Name,
 NULL
};
static BYTE ix_B_KlInv[] = {1,1,1,0};
StayDataset _n_B_KlInv = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlInv,NULL,
           "KLBASE1:KLINV.DT",ix_B_KlInv,"���������� ����� ������������ (�����)","B_KlInv",};
pStayDataset B_KlInv = &_n_B_KlInv;

static pStayFD tcm_B_KlKRZp[] =
{
 (StayFD *)&_n_KlKRZp_DtB,
 (StayFD *)&_n_KlKRZp_DtE,
 (StayFD *)&_n_KlKRZp_Razm,
 NULL
};
static BYTE ix_B_KlKRZp[] = {1,1,2,0,1};
StayDataset _n_B_KlKRZp = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlKRZp,NULL,
           "KLBASE1:KLKRZP.DT",ix_B_KlKRZp,"���� ������������� ����� ���������� �����","B_KlKRZp",};
pStayDataset B_KlKRZp = &_n_B_KlKRZp;

static pStayFD tcm_B_KlKatUl[] =
{
 (StayFD *)&_n_KlKatUl_Code,
 (StayFD *)&_n_KlKatUl_Name,
 NULL
};
static BYTE ix_B_KlKatUl[] = {1,1,1,0};
StayDataset _n_B_KlKatUl = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlKatUl,NULL,
           "KLBASE1:KLKATUL.DT",ix_B_KlKatUl,"���������� ��������� ����","B_KlKatUl",};
pStayDataset B_KlKatUl = &_n_B_KlKatUl;

static pStayFD tcm_B_KlKfp[] =
{
 (StayFD *)&_n_KlKfp_Data,
 (StayFD *)&_n_KlKfp_Coeff,
 (StayFD *)&_n_KlKfp_Coeff2,
 (StayFD *)&_n_KlKfp_Coeff3,
 (StayFD *)&_n_KlKfp_MaxD996,
 (StayFD *)&_n_KlKfp_MaxP996,
 (StayFD *)&_n_KlKfp_Zregr,
 NULL
};
static BYTE ix_B_KlKfp[] = {1,1,1,0};
StayDataset _n_B_KlKfp = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlKfp,NULL,
           "KLBASE1:KLKFP.DT",ix_B_KlKfp,"���������� ������������� ��������� ������","B_KlKfp",};
pStayDataset B_KlKfp = &_n_B_KlKfp;

static pStayFD tcm_B_KlKor[] =
{
 (StayFD *)&_n_KlKor_Code,
 (StayFD *)&_n_KlKor_Name,
 NULL
};
static BYTE ix_B_KlKor[] = {1,1,1,0};
StayDataset _n_B_KlKor = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlKor,NULL,
           "KLBASE1:KLKOR.DT",ix_B_KlKor,"���������� ��������� ����������","B_KlKor",};
pStayDataset B_KlKor = &_n_B_KlKor;

static pStayFD tcm_B_KlLRab[] =
{
 (StayFD *)&_n_KlLRab_Code,
 (StayFD *)&_n_KlLRab_Name,
 (StayFD *)&_n_KlLRab_KrNam,
 (StayFD *)&_n_KlLRab_Coef,
 NULL
};
static BYTE ix_B_KlLRab[] = {1,1,1,0};
StayDataset _n_B_KlLRab = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlLRab,NULL,
           "KLBASE1:KLLRAB.DT",ix_B_KlLRab,"���������� ����� �������� �������","B_KlLRab",};
pStayDataset B_KlLRab = &_n_B_KlLRab;

static pStayFD tcm_B_KlLgk[] =
{
 (StayFD *)&_n_KlLgk_Code,
 (StayFD *)&_n_KlLgk_Alg,
 (StayFD *)&_n_KlLgk_DataB,
 (StayFD *)&_n_KlLgk_DataE,
 (StayFD *)&_n_KlLgk_Coeff,
 (StayFD *)&_n_KlLgk_KrName,
 (StayFD *)&_n_KlLgk_Name,
 NULL
};
static BYTE ix_B_KlLgk[] = {1,1,1,0};
StayDataset _n_B_KlLgk = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlLgk,NULL,
           "KLBASE1:KLLGK.DT",ix_B_KlLgk,"���������� �������� �������������","B_KlLgk",};
pStayDataset B_KlLgk = &_n_B_KlLgk;

static pStayFD tcm_B_KlNWork[] =
{
 (StayFD *)&_n_NWork_Code,
 (StayFD *)&_n_NWork_Name,
 NULL
};
static BYTE ix_B_KlNWork[] = {1,1,65,0};
StayDataset _n_B_KlNWork = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlNWork,NULL,
           "KLBASE1:KLNWORK.DT",ix_B_KlNWork,"���� ������, �� ���. �� ���.","B_KlNWork",};
pStayDataset B_KlNWork = &_n_B_KlNWork;

static pStayFD tcm_B_KlNet[] =
{
 (StayFD *)&_n_KlNet_Code,
 (StayFD *)&_n_KlNet_Name,
 NULL
};
static BYTE ix_B_KlNet[] = {1,1,1,0};
StayDataset _n_B_KlNet = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlNet,NULL,
           "KLBASE1:KLNET.DT",ix_B_KlNet,"���������� ��������� ������������������","B_KlNet",};
pStayDataset B_KlNet = &_n_B_KlNet;

static pStayFD tcm_B_KlORG163[] =
{
 (StayFD *)&_n_KlORG163_Code,
 (StayFD *)&_n_KlORG163_Name,
 (StayFD *)&_n_KlORG163_NRSB,
 (StayFD *)&_n_KlORG163_NRSO,
 (StayFD *)&_n_KlORG163_DopNr,
 (StayFD *)&_n_KlORG163_PrivO,
 (StayFD *)&_n_KlORG163_NameB,
 (StayFD *)&_n_KlORG163_MFO,
 (StayFD *)&_n_KlORG163_IndPO,
 (StayFD *)&_n_KlORG163_Adr,
 (StayFD *)&_n_KlORG163_Prim,
 NULL
};
static BYTE ix_B_KlORG163[] = {1,1,1,0};
StayDataset _n_B_KlORG163 = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlORG163,NULL,
           "KLBASE3:KLORG163.DT",ix_B_KlORG163,"���������� ���,��������.���.��� ����.","B_KlORG163",};
pStayDataset B_KlORG163 = &_n_B_KlORG163;

static pStayFD tcm_B_KlOS[] =
{
 (StayFD *)&_n_KlOS_CodeRn,
 (StayFD *)&_n_KlOS_NumOS,
 (StayFD *)&_n_KlOS_CodeOS,
 NULL
};
static BYTE ix_B_KlOS[] = {1,1,66,0,1};
StayDataset _n_B_KlOS = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlOS,NULL,
           "KLBASE2:KLOS.DT",ix_B_KlOS,"���������� ��������� �����","B_KlOS",};
pStayDataset B_KlOS = &_n_B_KlOS;

static pStayFD tcm_B_KlOSZ[] =
{
 (StayFD *)&_n_KlOSZ_Code,
 (StayFD *)&_n_KlOSZ_Adr,
 (StayFD *)&_n_KlOSZ_FIOB,
 (StayFD *)&_n_KlOSZ_FION,
 (StayFD *)&_n_KlOSZ_IPOV,
 (StayFD *)&_n_KlOSZ_IndPO,
 (StayFD *)&_n_KlOSZ_MFOB,
 (StayFD *)&_n_KlOSZ_NRSB,
 (StayFD *)&_n_KlOSZ_NRSO,
 (StayFD *)&_n_KlOSZ_Name,
 (StayFD *)&_n_KlOSZ_NameB,
 (StayFD *)&_n_KlOSZ_PrV,
 (StayFD *)&_n_KlOSZ_TelB,
 (StayFD *)&_n_KlOSZ_TelN,
 NULL
};
static BYTE ix_B_KlOSZ[] = {1,1,1,0};
StayDataset _n_B_KlOSZ = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlOSZ,NULL,
           "KLBASE2:KLOSZ.DT",ix_B_KlOSZ,"���������� ������� ���������� ������","B_KlOSZ",};
pStayDataset B_KlOSZ = &_n_B_KlOSZ;

static pStayFD tcm_B_KlOVUd[] =
{
 (StayFD *)&_n_KlOVUd_Code,
 (StayFD *)&_n_KlOVUd_Name,
 (StayFD *)&_n_KlOVUd_NRSB,
 (StayFD *)&_n_KlOVUd_NRSO,
 (StayFD *)&_n_KlOVUd_DopNr,
 (StayFD *)&_n_KlOVUd_PrivO,
 (StayFD *)&_n_KlOVUd_NameB,
 (StayFD *)&_n_KlOVUd_MFO,
 (StayFD *)&_n_KlOVUd_IndPO,
 (StayFD *)&_n_KlOVUd_Adr,
 (StayFD *)&_n_KlOVUd_Prim,
 NULL
};
static BYTE ix_B_KlOVUd[] = {1,1,1,0};
StayDataset _n_B_KlOVUd = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlOVUd,NULL,
           "KLBASE4:KLOVUD.DT",ix_B_KlOVUd,"���������� �����������-����������� ���������","B_KlOVUd",};
pStayDataset B_KlOVUd = &_n_B_KlOVUd;

static pStayFD tcm_B_KlOp[] =
{
 (StayFD *)&_n_KlOp_Code,
 (StayFD *)&_n_KlOp_Name,
 NULL
};
static BYTE ix_B_KlOp[] = {1,1,1,0};
StayDataset _n_B_KlOp = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlOp,NULL,
           "KLBASE1:KLOP.DT",ix_B_KlOp,"���������� ����� ��������","B_KlOp",};
pStayDataset B_KlOp = &_n_B_KlOp;

static pStayFD tcm_B_KlOrg[] =
{
 (StayFD *)&_n_KlOrg_Code,
 (StayFD *)&_n_KlOrg_Name,
 NULL
};
static BYTE ix_B_KlOrg[] = {1,1,1,0};
StayDataset _n_B_KlOrg = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlOrg,NULL,
           "KLBASE4:KLORG.DT",ix_B_KlOrg,"���������� �����������, �������� ������������","B_KlOrg",};
pStayDataset B_KlOrg = &_n_B_KlOrg;

static pStayFD tcm_B_KlOsob[] =
{
 (StayFD *)&_n_KlOsob_Code,
 (StayFD *)&_n_KlOsob_Name,
 NULL
};
static BYTE ix_B_KlOsob[] = {1,1,1,0};
StayDataset _n_B_KlOsob = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlOsob,NULL,
           "KLBASE1:BKLOSOB.DT",ix_B_KlOsob,"���������� ������������","B_KlOsob",};
pStayDataset B_KlOsob = &_n_B_KlOsob;

static pStayFD tcm_B_KlPInv[] =
{
 (StayFD *)&_n_KlPInv_Code,
 (StayFD *)&_n_KlPInv_Name,
 NULL
};
static BYTE ix_B_KlPInv[] = {1,1,1,0};
StayDataset _n_B_KlPInv = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlPInv,NULL,
           "KLBASE1:KLPINV.DT",ix_B_KlPInv,"���������� ������ ������������","B_KlPInv",};
pStayDataset B_KlPInv = &_n_B_KlPInv;

static pStayFD tcm_B_KlPNo[] =
{
 (StayFD *)&_n_KlPNo_Code,
 (StayFD *)&_n_KlPNo_Name,
 NULL
};
static BYTE ix_B_KlPNo[] = {1,1,1,0};
StayDataset _n_B_KlPNo = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlPNo,NULL,
           "KLBASE1:KLPNO.DT",ix_B_KlPNo,"���������� ������ ��������","B_KlPNo",};
pStayDataset B_KlPNo = &_n_B_KlPNo;

static pStayFD tcm_B_KlPRab[] =
{
 (StayFD *)&_n_KlPRab_Code,
 (StayFD *)&_n_KlPRab_Name,
 NULL
};
static BYTE ix_B_KlPRab[] = {1,1,1,0};
StayDataset _n_B_KlPRab = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlPRab,NULL,
           "KLBASE1:KLPRAB.DT",ix_B_KlPRab,"���������� ������������� ������ �����������","B_KlPRab",};
pStayDataset B_KlPRab = &_n_B_KlPRab;

static pStayFD tcm_B_KlPS[] =
{
 (StayFD *)&_n_KlPS_Code,
 (StayFD *)&_n_KlPS_Pros,
 (StayFD *)&_n_KlPS_Name,
 NULL
};
static BYTE ix_B_KlPS[] = {1,1,1,0};
StayDataset _n_B_KlPS = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlPS,NULL,
           "KLBASE1:KLPS.DT",ix_B_KlPS,"���������� ������ ������ ���������","B_KlPS",};
pStayDataset B_KlPS = &_n_B_KlPS;

static pStayFD tcm_B_KlPSB[] =
{
 (StayFD *)&_n_KlPSB_CodeRn,
 (StayFD *)&_n_KlPSB_CodeCB,
 (StayFD *)&_n_KlPSB_CodeSB,
 (StayFD *)&_n_KlPSB_NameSB,
 NULL
};
static BYTE ix_B_KlPSB[] = {1,1,3,0,1,2};
StayDataset _n_B_KlPSB = {NULL,TAG_DATASET,0,0,DS_QBASE,0,1,0,NULL,tcm_B_KlPSB,NULL,
           "KLBASE2:KLPSB.DT",ix_B_KlPSB,"���������� ������","B_KlPSB",10};
pStayDataset B_KlPSB = &_n_B_KlPSB;

static pStayFD tcm_B_KlPSUd[] =
{
 (StayFD *)&_n_KlPSUd_Code,
 (StayFD *)&_n_KlPSUd_Name,
 NULL
};
static BYTE ix_B_KlPSUd[] = {1,1,1,0};
StayDataset _n_B_KlPSUd = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlPSUd,NULL,
           "KLBASE1:KLPSUD.DT",ix_B_KlPSUd,"���������� ������ ������ ���������","B_KlPSUd",};
pStayDataset B_KlPSUd = &_n_B_KlPSUd;

static pStayFD tcm_B_KlPSn[] =
{
 (StayFD *)&_n_KlPSn_Code,
 (StayFD *)&_n_KlPSn_Name,
 NULL
};
static BYTE ix_B_KlPSn[] = {1,1,1,0};
StayDataset _n_B_KlPSn = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlPSn,NULL,
           "KLBASE1:KLPSN.DT",ix_B_KlPSn,"���������� ������ ������ � ������","B_KlPSn",};
pStayDataset B_KlPSn = &_n_B_KlPSn;

static pStayFD tcm_B_KlPar[] =
{
 (StayFD *)&_n_Par_Code,
 (StayFD *)&_n_Par_Name,
 NULL
};
static BYTE ix_B_KlPar[] = {1,1,65,0};
StayDataset _n_B_KlPar = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlPar,NULL,
           "KLBASE1:KLPAR.DT",ix_B_KlPar,"���������� ��������� ���������","B_KlPar",};
pStayDataset B_KlPar = &_n_B_KlPar;

static pStayFD tcm_B_KlPost[] =
{
 (StayFD *)&_n_KlPost_Code,
 (StayFD *)&_n_KlPost_Name,
 NULL
};
static BYTE ix_B_KlPost[] = {1,1,1,0};
StayDataset _n_B_KlPost = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlPost,NULL,
           "KLBASE1:KLPOST.DT",ix_B_KlPost,"���������� ����� ������������ �� ����","B_KlPost",};
pStayDataset B_KlPost = &_n_B_KlPost;

static pStayFD tcm_B_KlPov[] =
{
 (StayFD *)&_n_KlPov_Code,
 (StayFD *)&_n_KlPov_GrPov,
 (StayFD *)&_n_KlPov_NBit,
 (StayFD *)&_n_KlPov_Name,
 (StayFD *)&_n_KlPov_Prizn,
 NULL
};
static BYTE ix_B_KlPov[] = {1,1,1,0};
StayDataset _n_B_KlPov = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlPov,NULL,
           "KLBASE1:KLPOV.DT",ix_B_KlPov,"���������� ���������","B_KlPov",};
pStayDataset B_KlPov = &_n_B_KlPov;

static pStayFD tcm_B_KlPred[] =
{
 (StayFD *)&_n_KlPred_Code,
 (StayFD *)&_n_KlPred_Name,
 NULL
};
static BYTE ix_B_KlPred[] = {1,1,1,0};
StayDataset _n_B_KlPred = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlPred,NULL,
           "KLBASE3:KLPRED.DT",ix_B_KlPred,"���������� �����������-������������","B_KlPred",};
pStayDataset B_KlPred = &_n_B_KlPred;

static pStayFD tcm_B_KlProf[] =
{
 (StayFD *)&_n_KlProf_Code,
 (StayFD *)&_n_KlProf_KrName,
 (StayFD *)&_n_KlProf_Probr,
 (StayFD *)&_n_KlProf_Name,
 NULL
};
static BYTE ix_B_KlProf[] = {1,1,1,0};
StayDataset _n_B_KlProf = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlProf,NULL,
           "KLBASE1:KLPROF.DT",ix_B_KlProf,"���������� ���������","B_KlProf",};
pStayDataset B_KlProf = &_n_B_KlProf;

static pStayFD tcm_B_KlRPen[] =
{
 (StayFD *)&_n_KlRPen_Code,
 (StayFD *)&_n_KlRPen_ChPri,
 (StayFD *)&_n_KlRPen_DataB,
 (StayFD *)&_n_KlRPen_DataE,
 (StayFD *)&_n_KlRPen_Name,
 (StayFD *)&_n_KlRPen_Proc,
 (StayFD *)&_n_KlRPen_Tag,
 NULL
};
static BYTE ix_B_KlRPen[] = {1,1,1,0};
StayDataset _n_B_KlRPen = {NULL,TAG_DATASET,0,0,DS_QBASE,0,1,0,NULL,tcm_B_KlRPen,NULL,
           "KLBASE1:KLRPEN.DT",ix_B_KlRPen,"���������� �������� ��������","B_KlRPen",16};
pStayDataset B_KlRPen = &_n_B_KlRPen;

static pStayFD tcm_B_KlRod[] =
{
 (StayFD *)&_n_KlRod_Code,
 (StayFD *)&_n_KlRod_Name,
 NULL
};
static BYTE ix_B_KlRod[] = {1,1,1,0};
StayDataset _n_B_KlRod = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlRod,NULL,
           "KLBASE1:KLROD.DT",ix_B_KlRod,"������������� ��������� ������� ���������","B_KlRod",};
pStayDataset B_KlRod = &_n_B_KlRod;

static pStayFD tcm_B_KlSPUd[] =
{
 (StayFD *)&_n_KlSPUd_Code,
 (StayFD *)&_n_KlSPUd_Name,
 NULL
};
static BYTE ix_B_KlSPUd[] = {1,1,1,0};
StayDataset _n_B_KlSPUd = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlSPUd,NULL,
           "KLBASE1:KLSPUD.DT",ix_B_KlSPUd,"���������� ��������� ��������� ���������","B_KlSPUd",};
pStayDataset B_KlSPUd = &_n_B_KlSPUd;

static pStayFD tcm_B_KlSVUd[] =
{
 (StayFD *)&_n_KlSVUd_Code,
 (StayFD *)&_n_KlSVUd_Name,
 NULL
};
static BYTE ix_B_KlSVUd[] = {1,1,1,0};
StayDataset _n_B_KlSVUd = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlSVUd,NULL,
           "KLBASE1:KLSVUD.DT",ix_B_KlSVUd,"���������� �������� ������� ���������","B_KlSVUd",};
pStayDataset B_KlSVUd = &_n_B_KlSVUd;

static pStayFD tcm_B_KlShP[] =
{
 (StayFD *)&_n_KlShP_CodeIF,
 (StayFD *)&_n_KlShP_IFN,
 (StayFD *)&_n_KlShP_ShP,
 (StayFD *)&_n_KlShP_VP,
 (StayFD *)&_n_KlShP_CodeVp,
 (StayFD *)&_n_KlShP_KIgd,
 (StayFD *)&_n_KlShP_Kor,
 (StayFD *)&_n_KlShP_Netr,
 (StayFD *)&_n_KlShP_PoCH,
 (StayFD *)&_n_KlShP_PrInv,
 (StayFD *)&_n_KlShP_PSKor,
 (StayFD *)&_n_KlShP_PrCH,
 (StayFD *)&_n_KlShP_Prof,
 (StayFD *)&_n_KlShP_Sex,
 (StayFD *)&_n_KlShP_VInv,
 (StayFD *)&_n_KlShP_All,
 (StayFD *)&_n_KlShP_Nr,
 (StayFD *)&_n_KlShP_Lgt,
 NULL
};
static BYTE ix_B_KlShP[] = {4,1,66,0,2,2,65,2,3,67,1,4,5,4,66,1,2};
StayDataset _n_B_KlShP = {NULL,TAG_DATASET,0,0,DS_QBASE,0,1,0,NULL,tcm_B_KlShP,NULL,
           "KLBASE1:KLSHP.DT",ix_B_KlShP,"���������� ������ ������","B_KlShP",16};
pStayDataset B_KlShP = &_n_B_KlShP;

static pStayFD tcm_B_KlShPN[] =
{
 (StayFD *)&_n_KlShPN_CodeIF,
 (StayFD *)&_n_KlShPN_ShP,
 (StayFD *)&_n_KlShPN_Name,
 NULL
};
static BYTE ix_B_KlShPN[] = {1,1,2,0,1};
StayDataset _n_B_KlShPN = {NULL,TAG_DATASET,0,0,DS_QBASE,0,1,0,NULL,tcm_B_KlShPN,NULL,
           "KLBASE1:KLSHPN.DT",ix_B_KlShPN,"���������� ������������ ������","B_KlShPN",16};
pStayDataset B_KlShPN = &_n_B_KlShPN;

static pStayFD tcm_B_KlSposUd[] =
{
 (StayFD *)&_n_KlSposUd_Code,
 (StayFD *)&_n_KlSposUd_Name,
 NULL
};
static BYTE ix_B_KlSposUd[] = {1,1,1,0};
StayDataset _n_B_KlSposUd = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlSposUd,NULL,
           "KLBASE1:KLSPOSUD.DT",ix_B_KlSposUd,"���������� �������� ���������","B_KlSposUd",};
pStayDataset B_KlSposUd = &_n_B_KlSposUd;

static pStayFD tcm_B_KlStagInv[] =
{
 (StayFD *)&_n_KlStag_Vozr,
 (StayFD *)&_n_KlStag_Stag,
 NULL
};
static BYTE ix_B_KlStagInv[] = {1,1,1,0};
StayDataset _n_B_KlStagInv = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlStagInv,NULL,
           "KLBASE1:KLSTAGIN.DT",ix_B_KlStagInv,"���������� ������","B_KlStagInv",};
pStayDataset B_KlStagInv = &_n_B_KlStagInv;

static pStayFD tcm_B_KlSud[] =
{
 (StayFD *)&_n_KlSud_Code,
 (StayFD *)&_n_KlSud_Name,
 (StayFD *)&_n_KlSud_IndPO,
 (StayFD *)&_n_KlSud_Adr,
 NULL
};
static BYTE ix_B_KlSud[] = {1,1,1,0};
StayDataset _n_B_KlSud = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlSud,NULL,
           "KLBASE4:KLSUD.DT",ix_B_KlSud,"���������� �����","B_KlSud",};
pStayDataset B_KlSud = &_n_B_KlSud;

static pStayFD tcm_B_KlTPer[] =
{
 (StayFD *)&_n_KlTPer_Code,
 (StayFD *)&_n_KlTPer_Name,
 NULL
};
static BYTE ix_B_KlTPer[] = {1,1,1,0};
StayDataset _n_B_KlTPer = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlTPer,NULL,
           "KLBASE1:KLTPER.DT",ix_B_KlTPer,"���������� ����� ��������","B_KlTPer",};
pStayDataset B_KlTPer = &_n_B_KlTPer;

static pStayFD tcm_B_KlTarPS[] =
{
 (StayFD *)&_n_TarPS_Kod,
 (StayFD *)&_n_TarPS_Data,
 (StayFD *)&_n_TarPS_Name,
 (StayFD *)&_n_TarPS_Prc,
 (StayFD *)&_n_TarPS_DataE,
 NULL
};
static BYTE ix_B_KlTarPS[] = {1,1,2,0,1};
StayDataset _n_B_KlTarPS = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlTarPS,NULL,
           "KLBASE3:KLTARPS.DT",ix_B_KlTarPS,"���_���� �����_� �������� ����_�","B_KlTarPS",0};
pStayDataset B_KlTarPS = &_n_B_KlTarPS;

static pStayFD tcm_B_KlTpVzs[] =
{
 (StayFD *)&_n_KlTpVzs_Code,
 (StayFD *)&_n_KlTpVzs_Name,
 NULL
};
static BYTE ix_B_KlTpVzs[] = {1,1,1,0};
StayDataset _n_B_KlTpVzs = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlTpVzs,NULL,
           "KLBASE1:KLTPVZS.DT",ix_B_KlTpVzs,"���������� ����� �����������","B_KlTpVzs",};
pStayDataset B_KlTpVzs = &_n_B_KlTpVzs;

static pStayFD tcm_B_KlUS[] =
{
 (StayFD *)&_n_KlUS_Code,
 (StayFD *)&_n_KlUS_Name,
 (StayFD *)&_n_KlUS_NameB,
 (StayFD *)&_n_KlUS_PrcPS,
 (StayFD *)&_n_KlUS_NRSB,
 (StayFD *)&_n_KlUS_NRSUS,
 (StayFD *)&_n_KlUS_MFO,
 NULL
};
static BYTE ix_B_KlUS[] = {1,1,1,0};
StayDataset _n_B_KlUS = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlUS,NULL,
           "KLBASE2:KLUS.DT",ix_B_KlUS,"���������� ����� ����� � �����.������","B_KlUS",};
pStayDataset B_KlUS = &_n_B_KlUS;

static pStayFD tcm_B_KlUd[] =
{
 (StayFD *)&_n_KlUd_Code,
 (StayFD *)&_n_KlUd_Name,
 (StayFD *)&_n_KlUd_Ogr,
 (StayFD *)&_n_KlUd_PInd,
 (StayFD *)&_n_KlUd_Vid,
 NULL
};
static BYTE ix_B_KlUd[] = {1,1,1,0};
StayDataset _n_B_KlUd = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlUd,NULL,
           "KLBASE1:KLUD.DT",ix_B_KlUd,"���������� ���������","B_KlUd",};
pStayDataset B_KlUd = &_n_B_KlUd;

static pStayFD tcm_B_KlUl[] =
{
 (StayFD *)&_n_KlUl_CodeRn,
 (StayFD *)&_n_KlUl_CodeUl,
 (StayFD *)&_n_KlUl_Name,
 (StayFD *)&_n_KlUl_CodeKUl,
 NULL
};
static BYTE ix_B_KlUl[] = {3,1,2,0,1,2,65,1,3,66,0,130,6};
StayDataset _n_B_KlUl = {NULL,TAG_DATASET,0,0,DS_QBASE,0,1,0,NULL,tcm_B_KlUl,NULL,
           "KLBASE2:KLUL.DT",ix_B_KlUl,"���������� ����� ����","B_KlUl",10};
pStayDataset B_KlUl = &_n_B_KlUl;

static pStayFD tcm_B_KlVPen[] =
{
 (StayFD *)&_n_KlVPen_Code,
 (StayFD *)&_n_KlVPen_Name,
 NULL
};
static BYTE ix_B_KlVPen[] = {1,1,1,0};
StayDataset _n_B_KlVPen = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlVPen,NULL,
           "KLBASE1:KLVPEN.DT",ix_B_KlVPen,"���������� ����� ������","B_KlVPen",};
pStayDataset B_KlVPen = &_n_B_KlVPen;

static pStayFD tcm_B_KlVZvan[] =
{
 (StayFD *)&_n_KlVZvan_Code,
 (StayFD *)&_n_KlVZvan_Name,
 NULL
};
static BYTE ix_B_KlVZvan[] = {1,1,1,0};
StayDataset _n_B_KlVZvan = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlVZvan,NULL,
           "KLBASE1:KLVZVAN.DT",ix_B_KlVZvan,"���������� �������� ������","B_KlVZvan",};
pStayDataset B_KlVZvan = &_n_B_KlVZvan;

static pStayFD tcm_B_KlVis[] =
{
 (StayFD *)&_n_KlVis_Sex,
 (StayFD *)&_n_KlVis_ChPri,
 (StayFD *)&_n_KlVis_Code,
 (StayFD *)&_n_KlVis_M1,
 (StayFD *)&_n_KlVis_M2,
 (StayFD *)&_n_KlVis_M3,
 (StayFD *)&_n_KlVis_M4,
 (StayFD *)&_n_KlVis_DBeg,
 (StayFD *)&_n_KlVis_DEnd,
 NULL
};
static BYTE ix_B_KlVis[] = {1,1,3,0,1,2};
StayDataset _n_B_KlVis = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlVis,NULL,
           "KLBASE1:KLVIS.DT",ix_B_KlVis,"���������� �������������� �� ���","B_KlVis",};
pStayDataset B_KlVis = &_n_B_KlVis;

static pStayFD tcm_B_KlVozvr[] =
{
 (StayFD *)&_n_KlVozvr_Code,
 (StayFD *)&_n_KlVozvr_Name,
 NULL
};
static BYTE ix_B_KlVozvr[] = {1,1,1,0};
StayDataset _n_B_KlVozvr = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlVozvr,NULL,
           "KLBASE1:KLVOZVR.DT",ix_B_KlVozvr,"���������� ����������� ��������","B_KlVozvr",};
pStayDataset B_KlVozvr = &_n_B_KlVozvr;

static pStayFD tcm_B_KlVsr[] =
{
 (StayFD *)&_n_KlVsr_Sex,
 (StayFD *)&_n_KlVsr_ChPri,
 (StayFD *)&_n_KlVsr_Code,
 (StayFD *)&_n_KlVsr_CV,
 (StayFD *)&_n_KlVsr_CST,
 (StayFD *)&_n_KlVsr_CL,
 (StayFD *)&_n_KlVsr_CSP,
 (StayFD *)&_n_KlVsr_CSG1,
 (StayFD *)&_n_KlVsr_CSG2,
 NULL
};
static BYTE ix_B_KlVsr[] = {1,1,3,0,1,2};
StayDataset _n_B_KlVsr = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlVsr,NULL,
           "KLBASE1:KLVSR.DT",ix_B_KlVsr,"���������� �������� �� �������","B_KlVsr",};
pStayDataset B_KlVsr = &_n_B_KlVsr;

static pStayFD tcm_B_KlZR[] =
{
 (StayFD *)&_n_KlZR_Data,
 (StayFD *)&_n_KlZR_Coeff,
 NULL
};
static BYTE ix_B_KlZR[] = {1,1,1,0};
StayDataset _n_B_KlZR = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlZR,NULL,
           "KLBASE1:KLZR.DT",ix_B_KlZR,"���������� ������������� ��������� �� �� 01.01.1992","B_KlZR",};
pStayDataset B_KlZR = &_n_B_KlZR;

static pStayFD tcm_B_KlZR92[] =
{
 (StayFD *)&_n_KlZR92_Data,
 (StayFD *)&_n_KlZR92_Coeff,
 NULL
};
static BYTE ix_B_KlZR92[] = {1,1,1,0};
StayDataset _n_B_KlZR92 = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlZR92,NULL,
           "KLBASE1:KLZR92.DT",ix_B_KlZR92,"���������� ������������� ��������� �� ����� 01.01.1","B_KlZR92",};
pStayDataset B_KlZR92 = &_n_B_KlZR92;

static pStayFD tcm_B_KlZach[] =
{
 (StayFD *)&_n_KlZach_Code,
 (StayFD *)&_n_KlZach_CodeZ,
 (StayFD *)&_n_KlZach_Name,
 (StayFD *)&_n_KlZach_Prizn,
 (StayFD *)&_n_KlZach_DBeg,
 (StayFD *)&_n_KlZach_DEnd,
 NULL
};
static BYTE ix_B_KlZach[] = {1,1,66,0,1};
StayDataset _n_B_KlZach = {NULL,TAG_DATASET,0,0,DS_QBASE,0,1,0,NULL,tcm_B_KlZach,NULL,
           "KLBASE1:KLZACH.DT",ix_B_KlZach,"���������� �������� �������","B_KlZach",16};
pStayDataset B_KlZach = &_n_B_KlZach;

static pStayFD tcm_B_KlZem[] =
{
 (StayFD *)&_n_KlZem_Code,
 (StayFD *)&_n_KlZem_Name,
 NULL
};
static BYTE ix_B_KlZem[] = {1,1,1,0};
StayDataset _n_B_KlZem = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlZem,NULL,
           "KLBASE1:KLZEM.DT",ix_B_KlZem,"���� ������������ �����. ��������","B_KlZem",};
pStayDataset B_KlZem = &_n_B_KlZem;

static pStayFD tcm_B_KlZon[] =
{
 (StayFD *)&_n_KlZon_Code,
 (StayFD *)&_n_KlZon_Name,
 NULL
};
static BYTE ix_B_KlZon[] = {1,1,1,0};
StayDataset _n_B_KlZon = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlZon,NULL,
           "KLBASE1:KLZON.DT",ix_B_KlZon,"���������� ��������� ��� �/� �����������","B_KlZon",};
pStayDataset B_KlZon = &_n_B_KlZon;

static pStayFD tcm_B_PravPom[] =
{
 (StayFD *)&_n_Prav_DBeg,
 (StayFD *)&_n_Prav_DEnd,
 (StayFD *)&_n_Prav_MesNaz,
 (StayFD *)&_n_Prav_MesReas,
 (StayFD *)&_n_Prav_MesRet,
 NULL
};
static BYTE ix_B_PravPom[] = {1,1,2,0,1};
StayDataset _n_B_PravPom = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_PravPom,NULL,
           "KLBASE1:PRAVPOM.DT",ix_B_PravPom,"������ �������� ������ �� ���. ������","B_PravPom",};
pStayDataset B_PravPom = &_n_B_PravPom;

static pStayFD tcm_B_SysP[] =
{
 (StayFD *)&_n_SysP_Data,
 (StayFD *)&_n_SysP_PrMPer,
 (StayFD *)&_n_SysP_CodeInsp,
 (StayFD *)&_n_SysP_MinPen,
 (StayFD *)&_n_SysP_MinPenSc,
 (StayFD *)&_n_SysP_MinPenVz,
 (StayFD *)&_n_SysP_MinPenCh,
 (StayFD *)&_n_SysP_MinPenVn,
 (StayFD *)&_n_SysP_MinPenNb,
 (StayFD *)&_n_SysP_MinPenNS,
 (StayFD *)&_n_SysP_MinZp,
 (StayFD *)&_n_SysP_CMPer,
 (StayFD *)&_n_SysP_CMinZp,
 (StayFD *)&_n_SysP_CMinZpCh,
 (StayFD *)&_n_SysP_CPen,
 (StayFD *)&_n_SysP_CPenSc,
 (StayFD *)&_n_SysP_CPenVz,
 (StayFD *)&_n_SysP_CPenCh,
 (StayFD *)&_n_SysP_CPenVn,
 (StayFD *)&_n_SysP_CNadb,
 (StayFD *)&_n_SysP_CNS,
 (StayFD *)&_n_SysP_PrOgr,
 (StayFD *)&_n_SysP_OgrPKoef,
 (StayFD *)&_n_SysP_OgrRez,
 NULL
};
static BYTE ix_B_SysP[] = {1,1,2,0,1};
StayDataset _n_B_SysP = {NULL,TAG_DATASET,0,0,DS_QBASE,0,1,0,NULL,tcm_B_SysP,NULL,
           "KLBASE1:SYSP.DT",ix_B_SysP,"���������� ��������� ����������","B_SysP",16};
pStayDataset B_SysP = &_n_B_SysP;

static pStayFD tcm_KDMinDox[] =
{
 (StayFD *)&_n_Kmd_Date,
 (StayFD *)&_n_Kmd_Razm,
 NULL
};
static BYTE ix_KDMinDox[] = {1,1,1,0};
StayDataset _n_KDMinDox = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_KDMinDox,NULL,
           "KLBASE1:KDMINDOX.DT",ix_KDMinDox,"���� ������.���.����.���.������ �/���.�� ����������","KDMinDox",};
pStayDataset KDMinDox = &_n_KDMinDox;

static pStayFD tcm_KMinDox[] =
{
 (StayFD *)&_n_Km_Date,
 (StayFD *)&_n_Km_Razm,
 NULL
};
static BYTE ix_KMinDox[] = {1,1,1,0};
StayDataset _n_KMinDox = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_KMinDox,NULL,
           "KLBASE1:BKMINDOX.DT",ix_KMinDox,"���� �������� ���. ����. �����. �������","KMinDox",};
pStayDataset KMinDox = &_n_KMinDox;

static pStayFD tcm_B_KlCheKfn[] =
{
 (StayFD *)&_n_KlCheKfn_Cd1,
 (StayFD *)&_n_KlCheKfn_Cd2,
 NULL
};
static BYTE ix_B_KlCheKfn[] = {1,1,1,0};
StayDataset _n_B_KlCheKfn = {NULL,TAG_DATASET,0,0,DS_QBASE,0,1,0,NULL,tcm_B_KlCheKfn,NULL,
           "KLBASE1:KLCHEKFN.DT",ix_B_KlCheKfn,"���� ����� ������, ������. ������������","B_KlCheKfn",16};
pStayDataset B_KlCheKfn = &_n_B_KlCheKfn;

static pStayFD tcm_B_KlCngKfn[] =
{
 (StayFD *)&_n_KlCng_NewKfn,
 (StayFD *)&_n_KlCng_OldKfn,
 NULL
};
static BYTE ix_B_KlCngKfn[] = {2,1,2,0,1,2,66,1,0};
StayDataset _n_B_KlCngKfn = {NULL,TAG_DATASET,0,0,DS_QBASE,0,1,0,NULL,tcm_B_KlCngKfn,NULL,
           "KLBASE1:KLCNGKFN.DT",ix_B_KlCngKfn,"���� ���������� �����. �������� ����� ����.","B_KlCngKfn",16};
pStayDataset B_KlCngKfn = &_n_B_KlCngKfn;

static pStayFD tcm_B_KlTerm[] =
{
 (StayFD *)&_n_KlTerm_Code,
 (StayFD *)&_n_KlTerm_Name,
 NULL
};
static BYTE ix_B_KlTerm[] = {1,1,1,0};
StayDataset _n_B_KlTerm = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlTerm,NULL,
           "KLBASE1:KLTERM.DT",ix_B_KlTerm,"���������� ��������","B_KlTerm",};
pStayDataset B_KlTerm = &_n_B_KlTerm;

static pStayFD tcm_B_KlProMin[] =
{
 (StayFD *)&_n_KlProMin_Code,
 (StayFD *)&_n_KlProMin_DataB,
 (StayFD *)&_n_KlProMin_DataE,
 (StayFD *)&_n_KlProMin_Name,
 (StayFD *)&_n_KlProMin_Sum,
 NULL
};
static BYTE ix_B_KlProMin[] = {1,1,67,0,1,2};
StayDataset _n_B_KlProMin = {NULL,TAG_DATASET,0,0,DS_QBASE,0,1,0,NULL,tcm_B_KlProMin,NULL,
           "KLBASE1:KLPROMIN.DT",ix_B_KlProMin,"���������� �������� ������.��������","B_KlProMin",10};
pStayDataset B_KlProMin = &_n_B_KlProMin;

static pStayFD tcm_B_Kltpl[] =
{
 (StayFD *)&_n_Kltpl_Tip,
 (StayFD *)&_n_Kltpl_Name,
 (StayFD *)&_n_Kltpl_Ob,
 NULL
};
static BYTE ix_B_Kltpl[] = {1,1,65,0};
StayDataset _n_B_Kltpl = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_Kltpl,NULL,
           "KLBASE1:KLTPL.DT",ix_B_Kltpl,"���������� ��������� ��������","B_Kltpl",};
pStayDataset B_Kltpl = &_n_B_Kltpl;

static pStayFD tcm_B_KlOrgR[] =
{
 (StayFD *)&_n_KlOrgR_Code,
 (StayFD *)&_n_KlOrgR_DBeg,
 (StayFD *)&_n_KlOrgR_DEnd,
 (StayFD *)&_n_KlOrgR_ProcB,
 (StayFD *)&_n_KlOrgR_Name,
 (StayFD *)&_n_KlOrgR_NRSO,
 (StayFD *)&_n_KlOrgR_DopNr,
 (StayFD *)&_n_KlOrgR_PrivO,
 (StayFD *)&_n_KlOrgR_IndPO,
 (StayFD *)&_n_KlOrgR_Adr,
 (StayFD *)&_n_KlOrgR_MFO,
 (StayFD *)&_n_KlOrgR_NameB,
 (StayFD *)&_n_KlOrgR_Prim,
 NULL
};
static BYTE ix_B_KlOrgR[] = {3,1,65,0,2,3,0,1,2,3,65,132,10};
StayDataset _n_B_KlOrgR = {NULL,TAG_DATASET,0,0,DS_QBASE,0,1,0,NULL,tcm_B_KlOrgR,NULL,
           "KLBASE3:KLORGRAZ.DT",ix_B_KlOrgR,"���������� �������.���������.�����������","B_KlOrgR",10};
pStayDataset B_KlOrgR = &_n_B_KlOrgR;

static pStayFD tcm_B_KlDiapPS[] =
{
 (StayFD *)&_n_DiapPS_Code,
 (StayFD *)&_n_DiapPS_Min,
 (StayFD *)&_n_DiapPS_Max,
 (StayFD *)&_n_DiapPS_PrEd,
 (StayFD *)&_n_DiapPS_Prc,
 NULL
};
static BYTE ix_B_KlDiapPS[] = {1,1,2,0,1};
StayDataset _n_B_KlDiapPS = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlDiapPS,NULL,
           "KLBASE3:KLDIAPPS.DT",ix_B_KlDiapPS,"���������� ���.����.��.�� ������.����","B_KlDiapPS",};
pStayDataset B_KlDiapPS = &_n_B_KlDiapPS;

static pStayFD tcm_B_KlAtQ[] =
{
 (StayFD *)&_n_KlAtQ_Code,
 (StayFD *)&_n_KlAtQ_Name,
 NULL
};
static BYTE ix_B_KlAtQ[] = {1,1,1,0};
StayDataset _n_B_KlAtQ = {NULL,TAG_DATASET,0,0,DS_QBASE,0,1,0,NULL,tcm_B_KlAtQ,NULL,
           "KLBASE1:KLATBOX.DT",ix_B_KlAtQ,"������� ���-��� ��������","B_KlAtQ",};
pStayDataset B_KlAtQ = &_n_B_KlAtQ;

static pStayFD tcm_B_KlVidZar[] =
{
 (StayFD *)&_n_KlVidZar_Code,
 (StayFD *)&_n_KlVidZar_Name,
 NULL
};
static BYTE ix_B_KlVidZar[] = {1,1,1,0};
StayDataset _n_B_KlVidZar = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlVidZar,NULL,
           "KLBASE1:KLVIDZAR.DT",ix_B_KlVidZar,"������� ���� ��������","B_KlVidZar",};
pStayDataset B_KlVidZar = &_n_B_KlVidZar;

static pStayFD tcm_B_KlDohNal[] =
{
 (StayFD *)&_n_KlDohNal_DataB,
 (StayFD *)&_n_KlDohNal_DataE,
 (StayFD *)&_n_KlDohNal_Razm,
 NULL
};
static BYTE ix_B_KlDohNal[] = {1,1,1,0};
StayDataset _n_B_KlDohNal = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlDohNal,NULL,
           "KLBASE1:KLDOHNAL.DT",ix_B_KlDohNal,"������� ����.������, � ���� ������.������","B_KlDohNal",};
pStayDataset B_KlDohNal = &_n_B_KlDohNal;

static pStayFD tcm_B_KlSrNx[] =
{
 (StayFD *)&_n_KlSrNx_DataB,
 (StayFD *)&_n_KlSrNx_DataE,
 (StayFD *)&_n_KlSrNx_Razm,
 (StayFD *)&_n_KlSrNx_DataNad,
 NULL
};
static BYTE ix_B_KlSrNx[] = {1,1,1,0};
StayDataset _n_B_KlSrNx = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlSrNx,NULL,
           "KLBASE1:KLSRNX.DT",ix_B_KlSrNx,"������� ����.�����.�����.�� �/�(�����/������ 65 ��)","B_KlSrNx",};
pStayDataset B_KlSrNx = &_n_B_KlSrNx;

static pStayFD tcm_B_KlSr0124[] =
{
 (StayFD *)&_n_KlSrNx_DataB,
 (StayFD *)&_n_KlSrNx_DataE,
 (StayFD *)&_n_KlSrNx_Razm,
 (StayFD *)&_n_KlSrNx_DataNad,
 NULL
};
static BYTE ix_B_KlSr0124[] = {1,1,1,0};
StayDataset _n_B_KlSr0124 = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlSr0124,NULL,
           "KLBASE1:KLSR0124.DT",ix_B_KlSr0124,"������� ����.�����.�����.�� �/�(��������� N 1783)","B_KlSr0124",};
pStayDataset B_KlSr0124 = &_n_B_KlSr0124;

static pStayFD tcm_B_KlSr4024[] =
{
 (StayFD *)&_n_KlSrNx_DataB,
 (StayFD *)&_n_KlSrNx_DataE,
 (StayFD *)&_n_KlSrNx_Razm,
 (StayFD *)&_n_KlSrNx_DataNad,
 NULL
};
static BYTE ix_B_KlSr4024[] = {1,1,1,0};
StayDataset _n_B_KlSr4024 = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlSr4024,NULL,
           "KLBASE1:KLSR4024.DT",ix_B_KlSr4024,"������� ����.�����.�����.�� �/� ����� �  ���������","B_KlSr4024",};
pStayDataset B_KlSr4024 = &_n_B_KlSr4024;

static pStayFD tcm_B_KlSr424Y[] =
{
 (StayFD *)&_n_KlSrNx_DataB,
 (StayFD *)&_n_KlSrNx_DataE,
 (StayFD *)&_n_KlSrNx_Razm,
 (StayFD *)&_n_KlSrNx_DataNad,
 NULL
};
static BYTE ix_B_KlSr424Y[] = {1,1,1,0};
StayDataset _n_B_KlSr424Y = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlSr424Y,NULL,
           "KLBASE1:KLSR424Y.DT",ix_B_KlSr424Y,"������� ����.���.�����.�� �/�(���)(����� �  ��������� )","B_KlSr424Y",};
pStayDataset B_KlSr424Y = &_n_B_KlSr424Y;

static pStayFD tcm_B_KlSrNxY[] =
{
 (StayFD *)&_n_KlSrNx_DataB,
 (StayFD *)&_n_KlSrNx_DataE,
 (StayFD *)&_n_KlSrNx_Razm,
 (StayFD *)&_n_KlSrNx_DataNad,
 NULL
};
static BYTE ix_B_KlSrNxY[] = {1,1,1,0};
StayDataset _n_B_KlSrNxY = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlSrNxY,NULL,
           "KLBASE1:KLSRNXY.DT",ix_B_KlSrNxY,"������� ����.���.�����.�� �/�(���)(����� �� ��.����.����)","B_KlSrNxY",};
pStayDataset B_KlSrNxY = &_n_B_KlSrNxY;

static pStayFD tcm_B_KlOsVidz[] =
{
 (StayFD *)&_n_KlOsVidz_Code,
 (StayFD *)&_n_KlOsVidz_Name,
 NULL
};
static BYTE ix_B_KlOsVidz[] = {1,1,1,0};
StayDataset _n_B_KlOsVidz = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlOsVidz,NULL,
           "KLBASE1:KLOSVIDZ.DT",ix_B_KlOsVidz,"������� ��������� ������","B_KlOsVidz",};
pStayDataset B_KlOsVidz = &_n_B_KlOsVidz;

static pStayFD tcm_B_KlStran[] =
{
 (StayFD *)&_n_KlStran_Code,
 (StayFD *)&_n_KlStran_Name,
 NULL
};
static BYTE ix_B_KlStran[] = {1,1,1,0};
StayDataset _n_B_KlStran = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlStran,NULL,
           "KLBASE1:KLSTRAN.DT",ix_B_KlStran,"������� ���� ��� �����.�����.�����","B_KlStran",};
pStayDataset B_KlStran = &_n_B_KlStran;

static pStayFD tcm_B_KlIndex[] =
{
 (StayFD *)&_n_KlIndex_GodNar,
 (StayFD *)&_n_KlIndex_MecNar,
 (StayFD *)&_n_KlIndex_GodBaz,
 (StayFD *)&_n_KlIndex_MecBaz,
 (StayFD *)&_n_KlIndex_Koef,
 NULL
};
static BYTE ix_B_KlIndex[] = {1,1,4,0,1,2,3};
StayDataset _n_B_KlIndex = {NULL,TAG_DATASET,0,0,DS_QBASE,0,1,0,NULL,tcm_B_KlIndex,NULL,
           "KLBASE1:KLINDEX.DT",ix_B_KlIndex,"������� ������.������.������.�����","B_KlIndex",16};
pStayDataset B_KlIndex = &_n_B_KlIndex;

static pStayFD tcm_B_KlCostDpi[] =
{
 (StayFD *)&_n_Cost_CodeOrg,
 (StayFD *)&_n_Cost_CodeSum,
 (StayFD *)&_n_Cost_DtB,
 (StayFD *)&_n_Cost_DtE,
 (StayFD *)&_n_Cost_SumDpi,
 (StayFD *)&_n_Cost_DodSum,
 (StayFD *)&_n_Cost_Priznak,
 (StayFD *)&_n_Cost_Procent,
 NULL
};
static BYTE ix_B_KlCostDpi[] = {1,1,3,0,1,2};
StayDataset _n_B_KlCostDpi = {NULL,TAG_DATASET,0,0,DS_QBASE,0,1,0,NULL,tcm_B_KlCostDpi,NULL,
           "KLBASE3:KLCOSTDP.DT",ix_B_KlCostDpi,"������� ������� ��������� � ���.-������.","B_KlCostDpi",10};
pStayDataset B_KlCostDpi = &_n_B_KlCostDpi;

static pStayFD tcm_B_KlInd6PF[] =
{
 (StayFD *)&_n_KlInd6PF_Ind,
 (StayFD *)&_n_KlInd6PF_Adr,
 (StayFD *)&_n_KlInd6PF_TPS,
 (StayFD *)&_n_KlInd6PF_Kod,
 (StayFD *)&_n_KlInd6PF_Name,
 NULL
};
static BYTE ix_B_KlInd6PF[] = {2,1,1,0,2,66,3,0};
StayDataset _n_B_KlInd6PF = {NULL,TAG_DATASET,0,0,DS_QBASE,0,1,0,NULL,tcm_B_KlInd6PF,NULL,
           "KLBASE2:KLIND6PF.DT",ix_B_KlInd6PF,"������� ����� ����.�������(6��)","B_KlInd6PF",16};
pStayDataset B_KlInd6PF = &_n_B_KlInd6PF;

static pStayFD tcm_B_KlMinZar[] =
{
 (StayFD *)&_n_KlMinZar_DataB,
 (StayFD *)&_n_KlMinZar_DataE,
 (StayFD *)&_n_KlMinZar_Razm,
 (StayFD *)&_n_KlMinZar_DtSys,
 NULL
};
static BYTE ix_B_KlMinZar[] = {1,1,1,0};
StayDataset _n_B_KlMinZar = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlMinZar,NULL,
           "KLBASE1:KLMINZAR.DT",ix_B_KlMinZar,"������� MIN ������ �����.����","B_KlMinZar",0};
pStayDataset B_KlMinZar = &_n_B_KlMinZar;

static pStayFD tcm_B_KlKEKV[] =
{
 (StayFD *)&_n_KlKEKV_KFN,
 (StayFD *)&_n_KlKEKV_KEKV,
 (StayFD *)&_n_KlKEKV_NameRR,
 (StayFD *)&_n_KlKEKV_CdKlas,
 NULL
};
static BYTE ix_B_KlKEKV[] = {2,1,1,0,2,66,1,0};
StayDataset _n_B_KlKEKV = {NULL,TAG_DATASET,0,0,DS_QBASE,0,1,0,NULL,tcm_B_KlKEKV,NULL,
           "KLBASE3:KLKEKV.DT",ix_B_KlKEKV,"���������� ���������� ���","B_KlKEKV",10};
pStayDataset B_KlKEKV = &_n_B_KlKEKV;

static pStayFD tcm_B_KlPitDsh[] =
{
 (StayFD *)&_n_KlPitDsh_Code,
 (StayFD *)&_n_KlPitDsh_DataB,
 (StayFD *)&_n_KlPitDsh_DataE,
 (StayFD *)&_n_KlPitDsh_Name,
 (StayFD *)&_n_KlPitDsh_Sum,
 NULL
};
static BYTE ix_B_KlPitDsh[] = {1,1,67,0,1,2};
StayDataset _n_B_KlPitDsh = {NULL,TAG_DATASET,0,0,DS_QBASE,0,1,0,NULL,tcm_B_KlPitDsh,NULL,
           "KLBASE3:KLPITDSH.DT",ix_B_KlPitDsh,"���������� ����.��.�����.���.� �����.����.���.","B_KlPitDsh",10};
pStayDataset B_KlPitDsh = &_n_B_KlPitDsh;

static pStayFD tcm_B_PtSan[] =
{
 (StayFD *)&_n_PtSan_Code,
 (StayFD *)&_n_PtSan_Code1,
 (StayFD *)&_n_PtSan_Name,
 (StayFD *)&_n_PtSan_Kurort,
 (StayFD *)&_n_PtSan_Prvv,
 NULL
};
static BYTE ix_B_PtSan[] = {2,1,1,0,2,65,130,6};
StayDataset _n_B_PtSan = {NULL,TAG_DATASET,0,0,DS_QBASE,0,1,0,NULL,tcm_B_PtSan,NULL,
           "KLBASE3:KLPTSAN.DT",ix_B_PtSan,"���_���� �������_��","B_PtSan",16};
pStayDataset B_PtSan = &_n_B_PtSan;

static pStayFD tcm_B_KlNpVidz[] =
{
 (StayFD *)&_n_KlNpVidz_CdSt,
 (StayFD *)&_n_KlNpVidz_Code,
 (StayFD *)&_n_KlNpVidz_Name,
 (StayFD *)&_n_KlNpVidz_Razm,
 NULL
};
static BYTE ix_B_KlNpVidz[] = {1,1,2,0,1};
StayDataset _n_B_KlNpVidz = {NULL,TAG_DATASET,0,0,DS_QBASE,0,1,0,NULL,tcm_B_KlNpVidz,NULL,
           "KLBASE1:KLNPVIDZ.DT",ix_B_KlNpVidz,"���_���� ����.����.� ���.�_� �����.����.","B_KlNpVidz",10};
pStayDataset B_KlNpVidz = &_n_B_KlNpVidz;

void *KL[] =
 {NULL,
  &_nn_KL,
  &_n_PtSan_Code,
  &_n_PtSan_Code1,
  &_n_PtSan_Name,
  &_n_PtSan_Kurort,
  &_n_PtSan_Prvv,
  &_n_KlPitDsh_Code,
  &_n_KlPitDsh_DataB,
  &_n_KlPitDsh_DataE,
  &_n_KlPitDsh_Name,
  &_n_KlPitDsh_Sum,
  &_n_KlKEKV_KFN,
  &_n_KlKEKV_KEKV,
  &_n_KlKEKV_NameRR,
  &_n_KlKEKV_CdKlas,
  &_n_KlMinZar_Razm,
  &_n_KlMinZar_DataB,
  &_n_KlMinZar_DataE,
  &_n_KlMinZar_DtSys,
  &_n_Doc_Code,
  &_n_Doc_Kfn,
  &_n_Joint_Kfn1,
  &_n_Joint_Kfn2,
  &_n_Joint_Pr,
  &_n_KlAt_Code,
  &_n_KlAt_Name,
  &_n_KlCFam_Code,
  &_n_KlCFam_Name,
  &_n_KlChe_Code,
  &_n_KlChe_Name,
  &_n_KlComDsh_Code,
  &_n_KlComDsh_DtB,
  &_n_KlComDsh_DtE,
  &_n_KlComDsh_Razm,
  &_n_KlComDsh_Name,
  &_n_KlDKVp_Code,
  &_n_KlDKVp_Data,
  &_n_KlDKVp_Name,
  &_n_KlDKVp_Num,
  &_n_KlDUch_About,
  &_n_KlDUch_Code,
  &_n_KlDUch_CodeUl,
  &_n_KlDUch_Data,
  &_n_KlDUch_IndOS,
  &_n_KlDUch_Prizn,
  &_n_KlDoUd_Code,
  &_n_KlDoUd_Name,
  &_n_KlDoc_Kdoc,
  &_n_KlDoc_Ndoc,
  &_n_KlDox_Code,
  &_n_KlDox_Name,
  &_n_KlEarth_Code,
  &_n_KlEarth_DtB,
  &_n_KlEarth_DtE,
  &_n_KlEarth_Name,
  &_n_KlEarth_Razm,
  &_n_KlFN_Code,
  &_n_KlFN_CodeIF,
  &_n_KlFN_DataB,
  &_n_KlFN_DataE,
  &_n_KlFN_Name,
  &_n_KlFN_ORVp,
  &_n_KlFN_PCh,
  &_n_KlFN_PInd,
  &_n_KlFN_PUd,
  &_n_KlFN_RVp,
  &_n_KlIFUK_Code,
  &_n_KlIFUK_CodeVIF,
  &_n_KlIFUK_MFO,
  &_n_KlIFUK_NBal,
  &_n_KlIFUK_NRS,
  &_n_KlIFUK_NRSB,
  &_n_KlIFUK_Name,
  &_n_KlIFUK_NameB,
  &_n_KlIFUK_Razd,
  &_n_KlIF_Code,
  &_n_KlIF_CodeVIF,
  &_n_KlIF_MFO,
  &_n_KlIF_NBal,
  &_n_KlIF_NRS,
  &_n_KlIF_NRSB,
  &_n_KlIF_Name,
  &_n_KlIF_NameB,
  &_n_KlIF_Razd,
  &_n_KlInd_Adr,
  &_n_KlInd_Ind,
  &_n_KlInd_TPS,
  &_n_KlInf_Code,
  &_n_KlInf_Name,
  &_n_KlInv_Code,
  &_n_KlInv_Name,
  &_n_KlKRZp_DtB,
  &_n_KlKRZp_DtE,
  &_n_KlKRZp_Razm,
  &_n_KlKatUl_Code,
  &_n_KlKatUl_Name,
  &_n_KlKfp_Coeff,
  &_n_KlKfp_Coeff2,
  &_n_KlKfp_Coeff3,
  &_n_KlKfp_Data,
  &_n_KlKfp_MaxD996,
  &_n_KlKfp_MaxP996,
  &_n_KlKfp_Zregr,
  &_n_KlKor_Code,
  &_n_KlKor_Name,
  &_n_KlLRab_Code,
  &_n_KlLRab_Coef,
  &_n_KlLRab_KrNam,
  &_n_KlLRab_Name,
  &_n_KlLgk_Alg,
  &_n_KlLgk_Code,
  &_n_KlLgk_Coeff,
  &_n_KlLgk_DataB,
  &_n_KlLgk_DataE,
  &_n_KlLgk_KrName,
  &_n_KlLgk_Name,
  &_n_KlNet_Code,
  &_n_KlNet_Name,
  &_n_KlORG163_Adr,
  &_n_KlORG163_Code,
  &_n_KlORG163_DopNr,
  &_n_KlORG163_IndPO,
  &_n_KlORG163_MFO,
  &_n_KlORG163_NRSB,
  &_n_KlORG163_NRSO,
  &_n_KlORG163_Name,
  &_n_KlORG163_NameB,
  &_n_KlORG163_Prim,
  &_n_KlORG163_PrivO,
  &_n_KlOSZ_Adr,
  &_n_KlOSZ_Code,
  &_n_KlOSZ_FIOB,
  &_n_KlOSZ_FION,
  &_n_KlOSZ_IPOV,
  &_n_KlOSZ_IndPO,
  &_n_KlOSZ_MFOB,
  &_n_KlOSZ_NRSB,
  &_n_KlOSZ_NRSO,
  &_n_KlOSZ_Name,
  &_n_KlOSZ_NameB,
  &_n_KlOSZ_PrV,
  &_n_KlOSZ_TelB,
  &_n_KlOSZ_TelN,
  &_n_KlOS_CodeOS,
  &_n_KlOS_CodeRn,
  &_n_KlOS_NumOS,
  &_n_KlOVUd_Adr,
  &_n_KlOVUd_Code,
  &_n_KlOVUd_DopNr,
  &_n_KlOVUd_IndPO,
  &_n_KlOVUd_MFO,
  &_n_KlOVUd_NRSB,
  &_n_KlOVUd_NRSO,
  &_n_KlOVUd_Name,
  &_n_KlOVUd_NameB,
  &_n_KlOVUd_Prim,
  &_n_KlOVUd_PrivO,
  &_n_KlOp_Code,
  &_n_KlOp_Name,
  &_n_KlOrg_Code,
  &_n_KlOrg_Name,
  &_n_KlOsob_Code,
  &_n_KlOsob_Name,
  &_n_KlPInv_Code,
  &_n_KlPInv_Name,
  &_n_KlPNo_Code,
  &_n_KlPNo_Name,
  &_n_KlPRab_Code,
  &_n_KlPRab_Name,
  &_n_KlPSB_CodeCB,
  &_n_KlPSB_CodeRn,
  &_n_KlPSB_CodeSB,
  &_n_KlPSB_NameSB,
  &_n_KlPSUd_Code,
  &_n_KlPSUd_Name,
  &_n_KlPS_Code,
  &_n_KlPS_Name,
  &_n_KlPS_Pros,
  &_n_KlPSn_Code,
  &_n_KlPSn_Name,
  &_n_KlPost_Code,
  &_n_KlPost_Name,
  &_n_KlPov_Code,
  &_n_KlPov_GrPov,
  &_n_KlPov_NBit,
  &_n_KlPov_Name,
  &_n_KlPov_Prizn,
  &_n_KlPred_Code,
  &_n_KlPred_Name,
  &_n_KlProf_Code,
  &_n_KlProf_KrName,
  &_n_KlProf_Name,
  &_n_KlProf_Probr,
  &_n_KlRPen_ChPri,
  &_n_KlRPen_Code,
  &_n_KlRPen_DataB,
  &_n_KlRPen_DataE,
  &_n_KlRPen_Name,
  &_n_KlRPen_Proc,
  &_n_KlRPen_Tag,
  &_n_KlRod_Code,
  &_n_KlRod_Name,
  &_n_KlSPUd_Code,
  &_n_KlSPUd_Name,
  &_n_KlSVUd_Code,
  &_n_KlSVUd_Name,
  &_n_KlShPN_CodeIF,
  &_n_KlShPN_Name,
  &_n_KlShPN_ShP,
  &_n_KlShP_All,
  &_n_KlShP_CodeIF,
  &_n_KlShP_CodeVp,
  &_n_KlShP_IFN,
  &_n_KlShP_KIgd,
  &_n_KlShP_Kor,
  &_n_KlShP_Lgt,
  &_n_KlShP_Netr,
  &_n_KlShP_Nr,
  &_n_KlShP_PSKor,
  &_n_KlShP_PoCH,
  &_n_KlShP_PrCH,
  &_n_KlShP_PrInv,
  &_n_KlShP_Prof,
  &_n_KlShP_Sex,
  &_n_KlShP_ShP,
  &_n_KlShP_VInv,
  &_n_KlShP_VP,
  &_n_KlSposUd_Code,
  &_n_KlSposUd_Name,
  &_n_KlStag_Stag,
  &_n_KlStag_Vozr,
  &_n_KlSud_Adr,
  &_n_KlSud_Code,
  &_n_KlSud_IndPO,
  &_n_KlSud_Name,
  &_n_KlTPer_Code,
  &_n_KlTPer_Name,
  &_n_KlTpVzs_Code,
  &_n_KlTpVzs_Name,
  &_n_KlUS_Code,
  &_n_KlUS_MFO,
  &_n_KlUS_NRSB,
  &_n_KlUS_NRSUS,
  &_n_KlUS_Name,
  &_n_KlUS_NameB,
  &_n_KlUS_PrcPS,
  &_n_KlUd_Code,
  &_n_KlUd_Name,
  &_n_KlUd_Ogr,
  &_n_KlUd_PInd,
  &_n_KlUd_Vid,
  &_n_KlUl_CodeKUl,
  &_n_KlUl_CodeRn,
  &_n_KlUl_CodeUl,
  &_n_KlUl_Name,
  &_n_KlVPen_Code,
  &_n_KlVPen_Name,
  &_n_KlVZvan_Code,
  &_n_KlVZvan_Name,
  &_n_KlVis_ChPri,
  &_n_KlVis_Code,
  &_n_KlVis_M1,
  &_n_KlVis_M2,
  &_n_KlVis_M3,
  &_n_KlVis_M4,
  &_n_KlVis_DBeg,
  &_n_KlVis_DEnd,
  &_n_KlVis_Sex,
  &_n_KlVozvr_Code,
  &_n_KlVozvr_Name,
  &_n_KlVsr_CL,
  &_n_KlVsr_CSG1,
  &_n_KlVsr_CSG2,
  &_n_KlVsr_CSP,
  &_n_KlVsr_CST,
  &_n_KlVsr_CV,
  &_n_KlVsr_ChPri,
  &_n_KlVsr_Code,
  &_n_KlVsr_Sex,
  &_n_KlZR92_Coeff,
  &_n_KlZR92_Data,
  &_n_KlZR_Coeff,
  &_n_KlZR_Data,
  &_n_KlZach_Code,
  &_n_KlZach_CodeZ,
  &_n_KlZach_Name,
  &_n_KlZach_Prizn,
  &_n_KlZach_DBeg,
  &_n_KlZach_DEnd,
  &_n_KlZem_Code,
  &_n_KlZem_Name,
  &_n_KlZon_Code,
  &_n_KlZon_Name,
  &_n_Klhl_Date,
  &_n_Klhl_Name,
  &_n_Km_Date,
  &_n_Km_Razm,
  &_n_Kmd_Date,
  &_n_Kmd_Razm,
  &_n_NWork_Code,
  &_n_NWork_Name,
  &_n_Par_Code,
  &_n_Par_Name,
  &_n_Prav_DBeg,
  &_n_Prav_DEnd,
  &_n_Prav_MesNaz,
  &_n_Prav_MesReas,
  &_n_Prav_MesRet,
  &_n_SysP_CMPer,
  &_n_SysP_CMinZp,
  &_n_SysP_CMinZpCh,
  &_n_SysP_CNS,
  &_n_SysP_CNadb,
  &_n_SysP_CPen,
  &_n_SysP_CPenCh,
  &_n_SysP_CPenSc,
  &_n_SysP_CPenVn,
  &_n_SysP_CPenVz,
  &_n_SysP_CodeInsp,
  &_n_SysP_Data,
  &_n_SysP_MinPen,
  &_n_SysP_MinPenCh,
  &_n_SysP_MinPenNS,
  &_n_SysP_MinPenNb,
  &_n_SysP_MinPenSc,
  &_n_SysP_MinPenVn,
  &_n_SysP_MinPenVz,
  &_n_SysP_MinZp,
  &_n_SysP_OgrPKoef,
  &_n_SysP_OgrRez,
  &_n_SysP_PrMPer,
  &_n_SysP_PrOgr,
  &_n_TarPS_Data,
  &_n_TarPS_Kod,
  &_n_TarPS_DataE,
  &_n_TarPS_Name,
  &_n_TarPS_Prc,
  &_n_KlCheKfn_Cd1,
  &_n_KlCheKfn_Cd2,
  &_n_KlCng_NewKfn,
  &_n_KlCng_OldKfn,
  &_n_KlTerm_Code,
  &_n_KlTerm_Name,
  &_n_KlProMin_Code,
  &_n_KlProMin_DataB,
  &_n_KlProMin_DataE,
  &_n_KlProMin_Name,
  &_n_KlProMin_Sum,
  &_n_Kltpl_Name,
  &_n_Kltpl_Ob,
  &_n_Kltpl_Tip,
  &_n_KlOrgR_Adr,
  &_n_KlOrgR_Code,
  &_n_KlOrgR_DBeg,
  &_n_KlOrgR_DEnd,
  &_n_KlOrgR_IndPO,
  &_n_KlOrgR_MFO,
  &_n_KlOrgR_NRSO,
  &_n_KlOrgR_Name,
  &_n_KlOrgR_NameB,
  &_n_KlOrgR_DopNr,
  &_n_KlOrgR_PrivO,
  &_n_KlOrgR_Prim,
  &_n_KlOrgR_ProcB,
  &_n_DiapPS_Code,
  &_n_DiapPS_Min,
  &_n_DiapPS_Max,
  &_n_DiapPS_PrEd,
  &_n_DiapPS_Prc,
  &_n_KlAtQ_Code,
  &_n_KlAtQ_Name,
  &_n_KlDohNal_Razm,
  &_n_KlDohNal_DataB,
  &_n_KlDohNal_DataE,
  &_n_KlVidZar_Code,
  &_n_KlVidZar_Name,
  &_n_KlSrNx_Razm,
  &_n_KlSrNx_DataB,
  &_n_KlSrNx_DataE,
  &_n_KlSrNx_DataNad,
  &_n_KlOsVidz_Name,
  &_n_KlOsVidz_Code,
  &_n_KlStran_Code,
  &_n_KlStran_Name,
  &_n_KlIndex_GodNar,
  &_n_KlIndex_MecNar,
  &_n_KlIndex_GodBaz,
  &_n_KlIndex_MecBaz,
  &_n_KlIndex_Koef,
  &_n_Cost_CodeOrg,
  &_n_Cost_CodeSum,
  &_n_Cost_DtB,
  &_n_Cost_DtE,
  &_n_Cost_SumDpi,
  &_n_Cost_DodSum,
  &_n_Cost_Priznak,
  &_n_Cost_Procent,
  &_n_KlInd6PF_Adr,
  &_n_KlInd6PF_Ind,
  &_n_KlInd6PF_TPS,
  &_n_KlInd6PF_Kod,
  &_n_KlInd6PF_Name,
  &_n_KlNpVidz_Name,
  &_n_KlNpVidz_Code,
  &_n_KlNpVidz_CdSt,
  &_n_KlNpVidz_Razm,
  (StayFD *)B_Joint,
  (StayFD *)B_KlAt,
  (StayFD *)B_KlCFam,
  (StayFD *)B_KlChe,
  (StayFD *)B_KlComDsh,
  (StayFD *)B_KlDKVp,
  (StayFD *)B_KlDUch,
  (StayFD *)B_KlDUch_D,
  (StayFD *)B_KlDUch_A,
  (StayFD *)B_KlDoUd,
  (StayFD *)B_KlDoc,
  (StayFD *)B_KlDocNz,
  (StayFD *)Doc_Reg1,
  (StayFD *)Doc_Reg2,
  (StayFD *)B_KlDox,
  (StayFD *)B_KlEarth,
  (StayFD *)B_KlFN,
  (StayFD *)B_KlHl,
  (StayFD *)B_KlIF,
  (StayFD *)B_KlIFUKR,
  (StayFD *)B_KlInd,
  (StayFD *)B_KlInf,
  (StayFD *)B_KlInv,
  (StayFD *)B_KlKRZp,
  (StayFD *)B_KlKatUl,
  (StayFD *)B_KlKfp,
  (StayFD *)B_KlKor,
  (StayFD *)B_KlLRab,
  (StayFD *)B_KlLgk,
  (StayFD *)B_KlNWork,
  (StayFD *)B_KlNet,
  (StayFD *)B_KlORG163,
  (StayFD *)B_KlOS,
  (StayFD *)B_KlOSZ,
  (StayFD *)B_KlOVUd,
  (StayFD *)B_KlOp,
  (StayFD *)B_KlOrg,
  (StayFD *)B_KlOsob,
  (StayFD *)B_KlPInv,
  (StayFD *)B_KlPNo,
  (StayFD *)B_KlPRab,
  (StayFD *)B_KlPS,
  (StayFD *)B_KlPSB,
  (StayFD *)B_KlPSUd,
  (StayFD *)B_KlPSn,
  (StayFD *)B_KlPar,
  (StayFD *)B_KlPost,
  (StayFD *)B_KlPov,
  (StayFD *)B_KlPred,
  (StayFD *)B_KlProf,
  (StayFD *)B_KlRPen,
  (StayFD *)B_KlRod,
  (StayFD *)B_KlSPUd,
  (StayFD *)B_KlSVUd,
  (StayFD *)B_KlShP,
  (StayFD *)B_KlShPN,
  (StayFD *)B_KlSposUd,
  (StayFD *)B_KlStagInv,
  (StayFD *)B_KlSud,
  (StayFD *)B_KlTPer,
  (StayFD *)B_KlTarPS,
  (StayFD *)B_KlTpVzs,
  (StayFD *)B_KlUS,
  (StayFD *)B_KlUd,
  (StayFD *)B_KlUl,
  (StayFD *)B_KlVPen,
  (StayFD *)B_KlVZvan,
  (StayFD *)B_KlVis,
  (StayFD *)B_KlVozvr,
  (StayFD *)B_KlVsr,
  (StayFD *)B_KlZR,
  (StayFD *)B_KlZR92,
  (StayFD *)B_KlZach,
  (StayFD *)B_KlZem,
  (StayFD *)B_KlZon,
  (StayFD *)B_PravPom,
  (StayFD *)B_SysP,
  (StayFD *)KDMinDox,
  (StayFD *)KMinDox,
  (StayFD *)B_KlCheKfn,
  (StayFD *)B_KlCngKfn,
  (StayFD *)B_KlTerm,
  (StayFD *)B_KlProMin,
  (StayFD *)B_Kltpl,
  (StayFD *)B_KlOrgR,
  (StayFD *)B_KlDiapPS,
  (StayFD *)B_KlAtQ,
  (StayFD *)B_KlVidZar,
  (StayFD *)B_KlDohNal,
  (StayFD *)B_KlSrNx,
  (StayFD *)B_KlSr0124,
  (StayFD *)B_KlSr4024,
  (StayFD *)B_KlSr424Y,
  (StayFD *)B_KlSrNxY,
  (StayFD *)B_KlOsVidz,
  (StayFD *)B_KlStran,
  (StayFD *)B_KlIndex,
  (StayFD *)B_KlCostDpi,
  (StayFD *)B_KlInd6PF,
  (StayFD *)B_KlMinZar,
  (StayFD *)B_KlKEKV,
  (StayFD *)B_KlPitDsh,
  (StayFD *)B_PtSan,
  (StayFD *)B_KlNpVidz,
  NULL};

PICMODULEEND(KL)

