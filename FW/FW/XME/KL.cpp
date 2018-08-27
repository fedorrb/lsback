//-------------------------------------------------------------------------
// STAY/W      Resource file KL.XME
//-------------------------------------------------------------------------
// Created 26\10\2011 11:49
//-------------------------------------------------------------------------

#include "KL.h"

PICMODULEBEG(KL)

static StayFD _nn_KL = {NULL,TAG_PIC,0,0,0,0,"KL",NULL};
WORD  PtSan_Code;
StayFD _n_PtSan_Code = {&PtSan_Code,0,0,0,CLS_I,0,"PtSan_Code","Код санатория"};
pStayFD _PtSan_Code = &_n_PtSan_Code;

uint6 PtSan_Code1;
StayFD _n_PtSan_Code1 = {&PtSan_Code1,0,0,0,CLS_H,0,"PtSan_Code1","Код ЕДРПОУ"};
pStayFD _PtSan_Code1 = &_n_PtSan_Code1;

char PtSan_Name[31];
StayFD _n_PtSan_Name = {&PtSan_Name,0,0,0,CLS_V,30,"PtSan_Name","Наименование санатория"};
pStayFD _PtSan_Name = &_n_PtSan_Name;

char PtSan_Kurort[21];
StayFD _n_PtSan_Kurort = {&PtSan_Kurort,0,0,0,CLS_V,20,"PtSan_Kurort","Наименование курорта"};
pStayFD _PtSan_Kurort = &_n_PtSan_Kurort;

BYTE  PtSan_Prvv;
StayFD _n_PtSan_Prvv = {&PtSan_Prvv,0,0,0,CLS_S,0,"PtSan_Prvv","Признак ввода"};
pStayFD _PtSan_Prvv = &_n_PtSan_Prvv;

WORD  KlPitDsh_Code;
StayFD _n_KlPitDsh_Code = {&KlPitDsh_Code,0,0,0,CLS_I,0,"KlPitDsh_Code","Код разм.ср.стоим.пит."};
pStayFD _KlPitDsh_Code = &_n_KlPitDsh_Code;

StayDate KlPitDsh_DataB;
StayFD _n_KlPitDsh_DataB = {&KlPitDsh_DataB,0,0,0,CLS_Date,0,"KlPitDsh_DataB","Дата нач.действия кода"};
pStayFD _KlPitDsh_DataB = &_n_KlPitDsh_DataB;

StayDate KlPitDsh_DataE;
StayFD _n_KlPitDsh_DataE = {&KlPitDsh_DataE,0,0,0,CLS_Date,0,"KlPitDsh_DataE","Дата кон. действ.кода"};
pStayFD _KlPitDsh_DataE = &_n_KlPitDsh_DataE;

char KlPitDsh_Name[26];
StayFD _n_KlPitDsh_Name = {&KlPitDsh_Name,0,0,0,CLS_V,25,"KlPitDsh_Name","Наименование"};
pStayFD _KlPitDsh_Name = &_n_KlPitDsh_Name;

int6 KlPitDsh_Sum;
StayFD _n_KlPitDsh_Sum = {&KlPitDsh_Sum,0,0,0,CLS_Hs,2,"KlPitDsh_Sum","Разм.ср.стоим.пит."};
pStayFD _KlPitDsh_Sum = &_n_KlPitDsh_Sum;

WORD  KlKEKV_KFN;
StayFD _n_KlKEKV_KFN = {&KlKEKV_KFN,0,0,0,CLS_I,0,"KlKEKV_KFN","Код вида выплаты"};
pStayFD _KlKEKV_KFN = &_n_KlKEKV_KFN;

WORD  KlKEKV_KEKV;
StayFD _n_KlKEKV_KEKV = {&KlKEKV_KEKV,0,0,0,CLS_I,0,"KlKEKV_KEKV","Код КЕКВ"};
pStayFD _KlKEKV_KEKV = &_n_KlKEKV_KEKV;

char KlKEKV_NameRR[11];
StayFD _n_KlKEKV_NameRR = {&KlKEKV_NameRR,0,0,0,CLS_V,10,"KlKEKV_NameRR","Наим. Р/Р (КДК или КФК ...)"};
pStayFD _KlKEKV_NameRR = &_n_KlKEKV_NameRR;

char KlKEKV_CdKlas[15];
StayFD _n_KlKEKV_CdKlas = {&KlKEKV_CdKlas,0,0,0,CLS_V,14,"KlKEKV_CdKlas","Код классификации"};
pStayFD _KlKEKV_CdKlas = &_n_KlKEKV_CdKlas;

uint6 KlMinZar_Razm;
StayFD _n_KlMinZar_Razm = {&KlMinZar_Razm,0,0,0,CLS_H,5,"KlMinZar_Razm","Розмір MIN зар.плати"};
pStayFD _KlMinZar_Razm = &_n_KlMinZar_Razm;

StayDate KlMinZar_DataB;
StayFD _n_KlMinZar_DataB = {&KlMinZar_DataB,0,0,0,CLS_Date,0,"KlMinZar_DataB","Дата встановл.MIN зар.плати  - початок"};
pStayFD _KlMinZar_DataB = &_n_KlMinZar_DataB;

StayDate KlMinZar_DataE;
StayFD _n_KlMinZar_DataE = {&KlMinZar_DataE,0,0,0,CLS_Date,0,"KlMinZar_DataE","Дата встановл.MIN зар.плати  - кінцева"};
pStayFD _KlMinZar_DataE = &_n_KlMinZar_DataE;

StayDate KlMinZar_DtSys;
StayFD _n_KlMinZar_DtSys = {&KlMinZar_DtSys,0,0,0,CLS_Date,0,"KlMinZar_DtSys","Дата внес.інформ.про розм.зар.плати"};
pStayFD _KlMinZar_DtSys = &_n_KlMinZar_DtSys;

BYTE  Doc_Code;
StayFD _n_Doc_Code = {&Doc_Code,0,0,0,CLS_S,0,"Doc_Code","Код документа"};
pStayFD _Doc_Code = &_n_Doc_Code;

WORD  Doc_Kfn;
StayFD _n_Doc_Kfn = {&Doc_Kfn,0,0,0,CLS_I,0,"Doc_Kfn","Код надбавки"};
pStayFD _Doc_Kfn = &_n_Doc_Kfn;

WORD  Joint_Kfn1;
StayFD _n_Joint_Kfn1 = {&Joint_Kfn1,0,0,0,CLS_I,0,"Joint_Kfn1","Код пособия 1"};
pStayFD _Joint_Kfn1 = &_n_Joint_Kfn1;

WORD  Joint_Kfn2;
StayFD _n_Joint_Kfn2 = {&Joint_Kfn2,0,0,0,CLS_I,0,"Joint_Kfn2","Код пособия 2"};
pStayFD _Joint_Kfn2 = &_n_Joint_Kfn2;

BYTE  Joint_Pr;
StayFD _n_Joint_Pr = {&Joint_Pr,0,0,0,CLS_S,0,"Joint_Pr","Признак преоритета"};
pStayFD _Joint_Pr = &_n_Joint_Pr;

WORD  KlAt_Code;
StayFD _n_KlAt_Code = {&KlAt_Code,0,0,0,CLS_I,0,"KlAt_Code","Код тер-ного образования"};
pStayFD _KlAt_Code = &_n_KlAt_Code;

char KlAt_Name[41];
StayFD _n_KlAt_Name = {&KlAt_Name,0,0,0,CLS_V,40,"KlAt_Name","Наимен. тер-ного образов."};
pStayFD _KlAt_Name = &_n_KlAt_Name;

BYTE  KlCFam_Code;
StayFD _n_KlCFam_Code = {&KlCFam_Code,0,0,0,CLS_S,0,"KlCFam_Code","Код члена семьи"};
pStayFD _KlCFam_Code = &_n_KlCFam_Code;

char KlCFam_Name[31];
StayFD _n_KlCFam_Name = {&KlCFam_Name,0,0,0,CLS_V,30,"KlCFam_Name","Наименование члена семьи"};
pStayFD _KlCFam_Name = &_n_KlCFam_Name;

BYTE  KlChe_Code;
StayFD _n_KlChe_Code = {&KlChe_Code,0,0,0,CLS_S,0,"KlChe_Code","Код катег-и пострадавшего"};
pStayFD _KlChe_Code = &_n_KlChe_Code;

char KlChe_Name[24];
StayFD _n_KlChe_Name = {&KlChe_Name,0,0,0,CLS_V,23,"KlChe_Name","Наим. катег-и пострадавш."};
pStayFD _KlChe_Name = &_n_KlChe_Name;

WORD  KlComDsh_Code;
StayFD _n_KlComDsh_Code = {&KlComDsh_Code,0,0,0,CLS_I,0,"KlComDsh_Code","Код группи"};
pStayFD _KlComDsh_Code = &_n_KlComDsh_Code;

StayDate KlComDsh_DtB;
StayFD _n_KlComDsh_DtB = {&KlComDsh_DtB,0,0,0,CLS_Date,0,"KlComDsh_DtB","Дата начала периода"};
pStayFD _KlComDsh_DtB = &_n_KlComDsh_DtB;

StayDate KlComDsh_DtE;
StayFD _n_KlComDsh_DtE = {&KlComDsh_DtE,0,0,0,CLS_Date,0,"KlComDsh_DtE","Дата конца периода"};
pStayFD _KlComDsh_DtE = &_n_KlComDsh_DtE;

int6 KlComDsh_Razm;
StayFD _n_KlComDsh_Razm = {&KlComDsh_Razm,0,0,0,CLS_Hs,5,"KlComDsh_Razm","Размер компенсации"};
pStayFD _KlComDsh_Razm = &_n_KlComDsh_Razm;

char KlComDsh_Name[26];
StayFD _n_KlComDsh_Name = {&KlComDsh_Name,0,0,0,CLS_V,25,"KlComDsh_Name","Наименование группи"};
pStayFD _KlComDsh_Name = &_n_KlComDsh_Name;

WORD  KlDKVp_Code;
StayFD _n_KlDKVp_Code = {&KlDKVp_Code,0,0,0,CLS_I,0,"KlDKVp_Code","Код документа-основания"};
pStayFD _KlDKVp_Code = &_n_KlDKVp_Code;

StayDate KlDKVp_Data;
StayFD _n_KlDKVp_Data = {&KlDKVp_Data,0,0,0,CLS_Date,0,"KlDKVp_Data","Дата документа-основания"};
pStayFD _KlDKVp_Data = &_n_KlDKVp_Data;

char KlDKVp_Name[41];
StayFD _n_KlDKVp_Name = {&KlDKVp_Name,0,0,0,CLS_V,40,"KlDKVp_Name","Наим. документа-основания"};
pStayFD _KlDKVp_Name = &_n_KlDKVp_Name;

BYTE  KlDKVp_Num;
StayFD _n_KlDKVp_Num = {&KlDKVp_Num,0,0,0,CLS_S,0,"KlDKVp_Num","Номер документа-основания"};
pStayFD _KlDKVp_Num = &_n_KlDKVp_Num;

char KlDUch_About[101];
StayFD _n_KlDUch_About = {&KlDUch_About,0,0,0,CLS_V,100,"KlDUch_About","Опис-е доставочного уч-ка"};
pStayFD _KlDUch_About = &_n_KlDUch_About;

BYTE  KlDUch_Code;
StayFD _n_KlDUch_Code = {&KlDUch_Code,0,0,0,CLS_S,0,"KlDUch_Code","Код доставочного уч-ка"};
pStayFD _KlDUch_Code = &_n_KlDUch_Code;

WORD  KlDUch_CodeUl;
StayFD _n_KlDUch_CodeUl = {&KlDUch_CodeUl,0,0,0,CLS_I,0,"KlDUch_CodeUl","Код улицы(KlUl_)"};
pStayFD _KlDUch_CodeUl = &_n_KlDUch_CodeUl;

BYTE  KlDUch_Data;
StayFD _n_KlDUch_Data = {&KlDUch_Data,0,0,0,CLS_S,0,"KlDUch_Data","День обслуживания Д.У."};
pStayFD _KlDUch_Data = &_n_KlDUch_Data;

DWORD KlDUch_IndOS;
StayFD _n_KlDUch_IndOS = {&KlDUch_IndOS,0,0,0,CLS_L,0,"KlDUch_IndOS","Индекс отдел.связи(KlInd)"};
pStayFD _KlDUch_IndOS = &_n_KlDUch_IndOS;

BYTE  KlDUch_Prizn;
StayFD _n_KlDUch_Prizn = {&KlDUch_Prizn,0,0,0,CLS_S,0,"KlDUch_Prizn","Призн.выделен.дос-го уч-ка=1"};
pStayFD _KlDUch_Prizn = &_n_KlDUch_Prizn;

BYTE  KlDoUd_Code;
StayFD _n_KlDoUd_Code = {&KlDoUd_Code,0,0,0,CLS_S,0,"KlDoUd_Code","Код документа-основания"};
pStayFD _KlDoUd_Code = &_n_KlDoUd_Code;

char KlDoUd_Name[26];
StayFD _n_KlDoUd_Name = {&KlDoUd_Name,0,0,0,CLS_V,25,"KlDoUd_Name","Наим. документа-основания"};
pStayFD _KlDoUd_Name = &_n_KlDoUd_Name;

BYTE  KlDoc_Kdoc;
StayFD _n_KlDoc_Kdoc = {&KlDoc_Kdoc,0,0,0,CLS_S,0,"KlDoc_Kdoc","Код документа"};
pStayFD _KlDoc_Kdoc = &_n_KlDoc_Kdoc;

char KlDoc_Ndoc[43];
StayFD _n_KlDoc_Ndoc = {&KlDoc_Ndoc,0,0,0,CLS_V,42,"KlDoc_Ndoc","Наименование документа"};
pStayFD _KlDoc_Ndoc = &_n_KlDoc_Ndoc;

BYTE  KlDox_Code;
StayFD _n_KlDox_Code = {&KlDox_Code,0,0,0,CLS_S,0,"KlDox_Code","Код дохода"};
pStayFD _KlDox_Code = &_n_KlDox_Code;

char KlDox_Name[41];
StayFD _n_KlDox_Name = {&KlDox_Name,0,0,0,CLS_V,40,"KlDox_Name","Наименование дохода"};
pStayFD _KlDox_Name = &_n_KlDox_Name;

BYTE  KlEarth_Code;
StayFD _n_KlEarth_Code = {&KlEarth_Code,0,0,0,CLS_S,0,"KlEarth_Code","Код земельного участка"};
pStayFD _KlEarth_Code = &_n_KlEarth_Code;

StayDate KlEarth_DtB;
StayFD _n_KlEarth_DtB = {&KlEarth_DtB,0,0,0,CLS_Date,0,"KlEarth_DtB","Дата начала"};
pStayFD _KlEarth_DtB = &_n_KlEarth_DtB;

StayDate KlEarth_DtE;
StayFD _n_KlEarth_DtE = {&KlEarth_DtE,0,0,0,CLS_Date,0,"KlEarth_DtE","Дата конца"};
pStayFD _KlEarth_DtE = &_n_KlEarth_DtE;

char KlEarth_Name[51];
StayFD _n_KlEarth_Name = {&KlEarth_Name,0,0,0,CLS_V,50,"KlEarth_Name","Наименование земел. участка"};
pStayFD _KlEarth_Name = &_n_KlEarth_Name;

int6 KlEarth_Razm;
StayFD _n_KlEarth_Razm = {&KlEarth_Razm,0,0,0,CLS_Hs,3,"KlEarth_Razm","Стоимость одной сотки"};
pStayFD _KlEarth_Razm = &_n_KlEarth_Razm;

WORD  KlFN_Code;
StayFD _n_KlFN_Code = {&KlFN_Code,0,0,0,CLS_I,0,"KlFN_Code","Код надбавки(пособ.пенс.)"};
pStayFD _KlFN_Code = &_n_KlFN_Code;

BYTE  KlFN_CodeIF;
StayFD _n_KlFN_CodeIF = {&KlFN_CodeIF,0,0,0,CLS_S,0,"KlFN_CodeIF","Код источ. финанс-я(KlIF)"};
pStayFD _KlFN_CodeIF = &_n_KlFN_CodeIF;

StayDate KlFN_DataB;
StayFD _n_KlFN_DataB = {&KlFN_DataB,0,0,0,CLS_Date,0,"KlFN_DataB","Дата начала действия"};
pStayFD _KlFN_DataB = &_n_KlFN_DataB;

StayDate KlFN_DataE;
StayFD _n_KlFN_DataE = {&KlFN_DataE,0,0,0,CLS_Date,0,"KlFN_DataE","Дата конца действия"};
pStayFD _KlFN_DataE = &_n_KlFN_DataE;

char KlFN_Name[51];
StayFD _n_KlFN_Name = {&KlFN_Name,0,0,0,CLS_V,50,"KlFN_Name","Наименование"};
pStayFD _KlFN_Name = &_n_KlFN_Name;

BYTE  KlFN_ORVp;
StayFD _n_KlFN_ORVp = {&KlFN_ORVp,0,0,0,CLS_S,0,"KlFN_ORVp","Основание размера выплат"};
pStayFD _KlFN_ORVp = &_n_KlFN_ORVp;

BYTE  KlFN_PCh;
StayFD _n_KlFN_PCh = {&KlFN_PCh,0,0,0,CLS_S,0,"KlFN_PCh","Признак связи с ЧК"};
pStayFD _KlFN_PCh = &_n_KlFN_PCh;

BYTE  KlFN_PInd;
StayFD _n_KlFN_PInd = {&KlFN_PInd,0,0,0,CLS_S,0,"KlFN_PInd","Признак индексации"};
pStayFD _KlFN_PInd = &_n_KlFN_PInd;

BYTE  KlFN_PUd;
StayFD _n_KlFN_PUd = {&KlFN_PUd,0,0,0,CLS_S,0,"KlFN_PUd","Признак удержания"};
pStayFD _KlFN_PUd = &_n_KlFN_PUd;

uint6 KlFN_RVp;
StayFD _n_KlFN_RVp = {&KlFN_RVp,0,0,0,CLS_H,2,"KlFN_RVp","Разм.выпл.(в % или абсол)"};
pStayFD _KlFN_RVp = &_n_KlFN_RVp;

BYTE  KlIFUK_Code;
StayFD _n_KlIFUK_Code = {&KlIFUK_Code,0,0,0,CLS_S,0,"KlIFUK_Code","Код источника финанс-я"};
pStayFD _KlIFUK_Code = &_n_KlIFUK_Code;

BYTE  KlIFUK_CodeVIF;
StayFD _n_KlIFUK_CodeVIF = {&KlIFUK_CodeVIF,0,0,0,CLS_S,0,"KlIFUK_CodeVIF","Код вида ист.фин."};
pStayFD _KlIFUK_CodeVIF = &_n_KlIFUK_CodeVIF;

DWORD KlIFUK_MFO;
StayFD _n_KlIFUK_MFO = {&KlIFUK_MFO,0,0,0,CLS_L,0,"KlIFUK_MFO","МФО банка"};
pStayFD _KlIFUK_MFO = &_n_KlIFUK_MFO;

DWORD KlIFUK_NBal;
StayFD _n_KlIFUK_NBal = {&KlIFUK_NBal,0,0,0,CLS_L,0,"KlIFUK_NBal","Номер бал.счета в бухгал."};
pStayFD _KlIFUK_NBal = &_n_KlIFUK_NBal;

uint6 KlIFUK_NRS;
StayFD _n_KlIFUK_NRS = {&KlIFUK_NRS,0,0,0,CLS_H,0,"KlIFUK_NRS","Номер расч..счета ист.фин-я"};
pStayFD _KlIFUK_NRS = &_n_KlIFUK_NRS;

char KlIFUK_NRSB[15];
StayFD _n_KlIFUK_NRSB = {&KlIFUK_NRSB,0,0,0,CLS_V,14,"KlIFUK_NRSB","Номер расчет. счета банке"};
pStayFD _KlIFUK_NRSB = &_n_KlIFUK_NRSB;

char KlIFUK_Name[21];
StayFD _n_KlIFUK_Name = {&KlIFUK_Name,0,0,0,CLS_V,20,"KlIFUK_Name","Наим. вида источ. финас-я"};
pStayFD _KlIFUK_Name = &_n_KlIFUK_Name;

char KlIFUK_NameB[41];
StayFD _n_KlIFUK_NameB = {&KlIFUK_NameB,0,0,0,CLS_V,40,"KlIFUK_NameB","Наименование банка"};
pStayFD _KlIFUK_NameB = &_n_KlIFUK_NameB;

char KlIFUK_Razd[11];
StayFD _n_KlIFUK_Razd = {&KlIFUK_Razd,0,0,0,CLS_V,10,"KlIFUK_Razd","Раздел бюджет. клас-ции"};
pStayFD _KlIFUK_Razd = &_n_KlIFUK_Razd;

BYTE  KlIF_Code;
StayFD _n_KlIF_Code = {&KlIF_Code,0,0,0,CLS_S,0,"KlIF_Code","Код источника финанс-я"};
pStayFD _KlIF_Code = &_n_KlIF_Code;

BYTE  KlIF_CodeVIF;
StayFD _n_KlIF_CodeVIF = {&KlIF_CodeVIF,0,0,0,CLS_S,0,"KlIF_CodeVIF","Код вида ист.фин."};
pStayFD _KlIF_CodeVIF = &_n_KlIF_CodeVIF;

DWORD KlIF_MFO;
StayFD _n_KlIF_MFO = {&KlIF_MFO,0,0,0,CLS_L,0,"KlIF_MFO","МФО банка"};
pStayFD _KlIF_MFO = &_n_KlIF_MFO;

DWORD KlIF_NBal;
StayFD _n_KlIF_NBal = {&KlIF_NBal,0,0,0,CLS_L,0,"KlIF_NBal","Номер бал.счета в бухгал."};
pStayFD _KlIF_NBal = &_n_KlIF_NBal;

uint6 KlIF_NRS;
StayFD _n_KlIF_NRS = {&KlIF_NRS,0,0,0,CLS_H,0,"KlIF_NRS","Номер расч..счета ист.фин-я"};
pStayFD _KlIF_NRS = &_n_KlIF_NRS;

char KlIF_NRSB[15];
StayFD _n_KlIF_NRSB = {&KlIF_NRSB,0,0,0,CLS_V,14,"KlIF_NRSB","Номер расчет. счета банке"};
pStayFD _KlIF_NRSB = &_n_KlIF_NRSB;

char KlIF_Name[21];
StayFD _n_KlIF_Name = {&KlIF_Name,0,0,0,CLS_V,20,"KlIF_Name","Наим. вида источ. финас-я"};
pStayFD _KlIF_Name = &_n_KlIF_Name;

char KlIF_NameB[41];
StayFD _n_KlIF_NameB = {&KlIF_NameB,0,0,0,CLS_V,40,"KlIF_NameB","Наименование банка"};
pStayFD _KlIF_NameB = &_n_KlIF_NameB;

char KlIF_Razd[11];
StayFD _n_KlIF_Razd = {&KlIF_Razd,0,0,0,CLS_V,10,"KlIF_Razd","Раздел бюджет. клас-ции"};
pStayFD _KlIF_Razd = &_n_KlIF_Razd;

char KlInd_Adr[51];
StayFD _n_KlInd_Adr = {&KlInd_Adr,0,0,0,CLS_V,50,"KlInd_Adr","Почтовый адрес индекса"};
pStayFD _KlInd_Adr = &_n_KlInd_Adr;

DWORD KlInd_Ind;
StayFD _n_KlInd_Ind = {&KlInd_Ind,0,0,0,CLS_L,0,"KlInd_Ind","Индекс"};
pStayFD _KlInd_Ind = &_n_KlInd_Ind;

BYTE  KlInd_TPS;
StayFD _n_KlInd_TPS = {&KlInd_TPS,0,0,0,CLS_S,0,"KlInd_TPS","Тариф почтовых сборов"};
pStayFD _KlInd_TPS = &_n_KlInd_TPS;

BYTE  KlInf_Code;
StayFD _n_KlInf_Code = {&KlInf_Code,0,0,0,CLS_S,0,"KlInf_Code","Код справки"};
pStayFD _KlInf_Code = &_n_KlInf_Code;

char KlInf_Name[201];
StayFD _n_KlInf_Name = {&KlInf_Name,0,0,0,CLS_V,200,"KlInf_Name","Наименование справки"};
pStayFD _KlInf_Name = &_n_KlInf_Name;

BYTE  KlInv_Code;
StayFD _n_KlInv_Code = {&KlInv_Code,0,0,0,CLS_S,0,"KlInv_Code","Код вида инвалидности"};
pStayFD _KlInv_Code = &_n_KlInv_Code;

char KlInv_Name[19];
StayFD _n_KlInv_Name = {&KlInv_Name,0,0,0,CLS_V,18,"KlInv_Name","Наименование вида инв-ти"};
pStayFD _KlInv_Name = &_n_KlInv_Name;

StayDate KlKRZp_DtB;
StayFD _n_KlKRZp_DtB = {&KlKRZp_DtB,0,0,0,CLS_Date,0,"KlKRZp_DtB","Дата начала"};
pStayFD _KlKRZp_DtB = &_n_KlKRZp_DtB;

StayDate KlKRZp_DtE;
StayFD _n_KlKRZp_DtE = {&KlKRZp_DtE,0,0,0,CLS_Date,0,"KlKRZp_DtE","Дата конца"};
pStayFD _KlKRZp_DtE = &_n_KlKRZp_DtE;

DWORD KlKRZp_Razm;
StayFD _n_KlKRZp_Razm = {&KlKRZp_Razm,0,0,0,CLS_L,3,"KlKRZp_Razm","Размер коэффициента роста"};
pStayFD _KlKRZp_Razm = &_n_KlKRZp_Razm;

BYTE  KlKatUl_Code;
StayFD _n_KlKatUl_Code = {&KlKatUl_Code,0,0,0,CLS_S,0,"KlKatUl_Code","Код категории улиц"};
pStayFD _KlKatUl_Code = &_n_KlKatUl_Code;

char KlKatUl_Name[8];
StayFD _n_KlKatUl_Name = {&KlKatUl_Name,0,0,0,CLS_V,7,"KlKatUl_Name","Наименование категории"};
pStayFD _KlKatUl_Name = &_n_KlKatUl_Name;

WORD  KlKfp_Coeff;
StayFD _n_KlKfp_Coeff = {&KlKfp_Coeff,0,0,0,CLS_I,2,"KlKfp_Coeff","Коэф. повыш. пенсии"};
pStayFD _KlKfp_Coeff = &_n_KlKfp_Coeff;

WORD  KlKfp_Coeff2;
StayFD _n_KlKfp_Coeff2 = {&KlKfp_Coeff2,0,0,0,CLS_I,3,"KlKfp_Coeff2","Поправочный коэф"};
pStayFD _KlKfp_Coeff2 = &_n_KlKfp_Coeff2;

uint6 KlKfp_Coeff3;
StayFD _n_KlKfp_Coeff3 = {&KlKfp_Coeff3,0,0,0,CLS_H,5,"KlKfp_Coeff3","Поправочный коэф"};
pStayFD _KlKfp_Coeff3 = &_n_KlKfp_Coeff3;

StayDate KlKfp_Data;
StayFD _n_KlKfp_Data = {&KlKfp_Data,0,0,0,CLS_Date,0,"KlKfp_Data","Дата установл. коэф."};
pStayFD _KlKfp_Data = &_n_KlKfp_Data;

uint6 KlKfp_MaxD996;
StayFD _n_KlKfp_MaxD996 = {&KlKfp_MaxD996,0,0,0,CLS_H,5,"KlKfp_MaxD996","Максимальный заработок до 09.9"};
pStayFD _KlKfp_MaxD996 = &_n_KlKfp_MaxD996;

uint6 KlKfp_MaxP996;
StayFD _n_KlKfp_MaxP996 = {&KlKfp_MaxP996,0,0,0,CLS_H,5,"KlKfp_MaxP996","Максимальный заработок после 0"};
pStayFD _KlKfp_MaxP996 = &_n_KlKfp_MaxP996;

uint6 KlKfp_Zregr;
StayFD _n_KlKfp_Zregr = {&KlKfp_Zregr,0,0,0,CLS_H,5,"KlKfp_Zregr","Заработок для регреса"};
pStayFD _KlKfp_Zregr = &_n_KlKfp_Zregr;

BYTE  KlKor_Code;
StayFD _n_KlKor_Code = {&KlKor_Code,0,0,0,CLS_S,0,"KlKor_Code","Код категории кормильца"};
pStayFD _KlKor_Code = &_n_KlKor_Code;

char KlKor_Name[31];
StayFD _n_KlKor_Name = {&KlKor_Name,0,0,0,CLS_V,30,"KlKor_Name","Наименов. кат-и кормильца"};
pStayFD _KlKor_Name = &_n_KlKor_Name;

WORD  KlLRab_Code;
StayFD _n_KlLRab_Code = {&KlLRab_Code,0,0,0,CLS_I,0,"KlLRab_Code","Код льотной работы"};
pStayFD _KlLRab_Code = &_n_KlLRab_Code;

short KlLRab_Coef;
StayFD _n_KlLRab_Coef = {&KlLRab_Coef,0,0,0,CLS_Is,2,"KlLRab_Coef","Коэффициент кратности"};
pStayFD _KlLRab_Coef = &_n_KlLRab_Coef;

char KlLRab_KrNam[12];
StayFD _n_KlLRab_KrNam = {&KlLRab_KrNam,0,0,0,CLS_V,11,"KlLRab_KrNam","Краткое наименование"};
pStayFD _KlLRab_KrNam = &_n_KlLRab_KrNam;

char KlLRab_Name[36];
StayFD _n_KlLRab_Name = {&KlLRab_Name,0,0,0,CLS_V,35,"KlLRab_Name","Наим-е льотной работы"};
pStayFD _KlLRab_Name = &_n_KlLRab_Name;

BYTE  KlLgk_Alg;
StayFD _n_KlLgk_Alg = {&KlLgk_Alg,0,0,0,CLS_S,0,"KlLgk_Alg","Номер алгоритма расчета"};
pStayFD _KlLgk_Alg = &_n_KlLgk_Alg;

BYTE  KlLgk_Code;
StayFD _n_KlLgk_Code = {&KlLgk_Code,0,0,0,CLS_S,0,"KlLgk_Code","Код вида деятельности"};
pStayFD _KlLgk_Code = &_n_KlLgk_Code;

WORD  KlLgk_Coeff;
StayFD _n_KlLgk_Coeff = {&KlLgk_Coeff,0,0,0,CLS_I,2,"KlLgk_Coeff","Коэф.кратного исчисления"};
pStayFD _KlLgk_Coeff = &_n_KlLgk_Coeff;

StayDate KlLgk_DataB;
StayFD _n_KlLgk_DataB = {&KlLgk_DataB,0,0,0,CLS_Date,0,"KlLgk_DataB","Дата  с"};
pStayFD _KlLgk_DataB = &_n_KlLgk_DataB;

StayDate KlLgk_DataE;
StayFD _n_KlLgk_DataE = {&KlLgk_DataE,0,0,0,CLS_Date,0,"KlLgk_DataE","Дата  по"};
pStayFD _KlLgk_DataE = &_n_KlLgk_DataE;

char KlLgk_KrName[12];
StayFD _n_KlLgk_KrName = {&KlLgk_KrName,0,0,0,CLS_V,11,"KlLgk_KrName","Кратк. наименов.деятельн."};
pStayFD _KlLgk_KrName = &_n_KlLgk_KrName;

char KlLgk_Name[31];
StayFD _n_KlLgk_Name = {&KlLgk_Name,0,0,0,CLS_V,30,"KlLgk_Name","Наимен. вида деятел."};
pStayFD _KlLgk_Name = &_n_KlLgk_Name;

BYTE  KlNet_Code;
StayFD _n_KlNet_Code = {&KlNet_Code,0,0,0,CLS_S,0,"KlNet_Code","Код кат. нетрудоспособн."};
pStayFD _KlNet_Code = &_n_KlNet_Code;

char KlNet_Name[41];
StayFD _n_KlNet_Name = {&KlNet_Name,0,0,0,CLS_V,40,"KlNet_Name","Наим.кат.нетрудоспособн."};
pStayFD _KlNet_Name = &_n_KlNet_Name;

char KlORG163_Adr[51];
StayFD _n_KlORG163_Adr = {&KlORG163_Adr,0,0,0,CLS_V,50,"KlORG163_Adr","Адрес орг."};
pStayFD _KlORG163_Adr = &_n_KlORG163_Adr;

BYTE  KlORG163_Code;
StayFD _n_KlORG163_Code = {&KlORG163_Code,0,0,0,CLS_S,0,"KlORG163_Code","Код орг."};
pStayFD _KlORG163_Code = &_n_KlORG163_Code;

char KlORG163_DopNr[15];
StayFD _n_KlORG163_DopNr = {&KlORG163_DopNr,0,0,0,CLS_V,14,"KlORG163_DopNr","Доп.к ном.Р/С организации"};
pStayFD _KlORG163_DopNr = &_n_KlORG163_DopNr;

DWORD KlORG163_IndPO;
StayFD _n_KlORG163_IndPO = {&KlORG163_IndPO,0,0,0,CLS_L,0,"KlORG163_IndPO","Индекс ПО (KlInd_)"};
pStayFD _KlORG163_IndPO = &_n_KlORG163_IndPO;

DWORD KlORG163_MFO;
StayFD _n_KlORG163_MFO = {&KlORG163_MFO,0,0,0,CLS_L,0,"KlORG163_MFO","МФО"};
pStayFD _KlORG163_MFO = &_n_KlORG163_MFO;

char KlORG163_NRSB[15];
StayFD _n_KlORG163_NRSB = {&KlORG163_NRSB,0,0,0,CLS_V,14,"KlORG163_NRSB","Номер Р/с банка"};
pStayFD _KlORG163_NRSB = &_n_KlORG163_NRSB;

char KlORG163_NRSO[15];
StayFD _n_KlORG163_NRSO = {&KlORG163_NRSO,0,0,0,CLS_V,14,"KlORG163_NRSO","Номер Р/с орг."};
pStayFD _KlORG163_NRSO = &_n_KlORG163_NRSO;

char KlORG163_Name[41];
StayFD _n_KlORG163_Name = {&KlORG163_Name,0,0,0,CLS_V,40,"KlORG163_Name","Наим. организации"};
pStayFD _KlORG163_Name = &_n_KlORG163_Name;

char KlORG163_NameB[41];
StayFD _n_KlORG163_NameB = {&KlORG163_NameB,0,0,0,CLS_V,40,"KlORG163_NameB","Наименование банка"};
pStayFD _KlORG163_NameB = &_n_KlORG163_NameB;

char KlORG163_Prim[51];
StayFD _n_KlORG163_Prim = {&KlORG163_Prim,0,0,0,CLS_V,50,"KlORG163_Prim","Примечания"};
pStayFD _KlORG163_Prim = &_n_KlORG163_Prim;

char KlORG163_PrivO[15];
StayFD _n_KlORG163_PrivO = {&KlORG163_PrivO,0,0,0,CLS_V,14,"KlORG163_PrivO","Личн.Р/С организации"};
pStayFD _KlORG163_PrivO = &_n_KlORG163_PrivO;

char KlOSZ_Adr[51];
StayFD _n_KlOSZ_Adr = {&KlOSZ_Adr,0,0,0,CLS_V,50,"KlOSZ_Adr","Адрес (ул., дом)"};
pStayFD _KlOSZ_Adr = &_n_KlOSZ_Adr;

WORD  KlOSZ_Code;
StayFD _n_KlOSZ_Code = {&KlOSZ_Code,0,0,0,CLS_I,0,"KlOSZ_Code","Код"};
pStayFD _KlOSZ_Code = &_n_KlOSZ_Code;

char KlOSZ_FIOB[41];
StayFD _n_KlOSZ_FIOB = {&KlOSZ_FIOB,0,0,0,CLS_V,40,"KlOSZ_FIOB","ФИО бухгалтера"};
pStayFD _KlOSZ_FIOB = &_n_KlOSZ_FIOB;

char KlOSZ_FION[41];
StayFD _n_KlOSZ_FION = {&KlOSZ_FION,0,0,0,CLS_V,40,"KlOSZ_FION","ФИО начальника"};
pStayFD _KlOSZ_FION = &_n_KlOSZ_FION;

DWORD KlOSZ_IPOV;
StayFD _n_KlOSZ_IPOV = {&KlOSZ_IPOV,0,0,0,CLS_L,0,"KlOSZ_IPOV","Инд.ПО для выпл.пох.пособ."};
pStayFD _KlOSZ_IPOV = &_n_KlOSZ_IPOV;

DWORD KlOSZ_IndPO;
StayFD _n_KlOSZ_IndPO = {&KlOSZ_IndPO,0,0,0,CLS_L,0,"KlOSZ_IndPO","Индекс ПО ( KlInd_ )"};
pStayFD _KlOSZ_IndPO = &_n_KlOSZ_IndPO;

DWORD KlOSZ_MFOB;
StayFD _n_KlOSZ_MFOB = {&KlOSZ_MFOB,0,0,0,CLS_L,0,"KlOSZ_MFOB","МФО банка"};
pStayFD _KlOSZ_MFOB = &_n_KlOSZ_MFOB;

char KlOSZ_NRSB[15];
StayFD _n_KlOSZ_NRSB = {&KlOSZ_NRSB,0,0,0,CLS_V,14,"KlOSZ_NRSB","Р/С банка"};
pStayFD _KlOSZ_NRSB = &_n_KlOSZ_NRSB;

char KlOSZ_NRSO[15];
StayFD _n_KlOSZ_NRSO = {&KlOSZ_NRSO,0,0,0,CLS_V,14,"KlOSZ_NRSO","Р/С организации"};
pStayFD _KlOSZ_NRSO = &_n_KlOSZ_NRSO;

char KlOSZ_Name[41];
StayFD _n_KlOSZ_Name = {&KlOSZ_Name,0,0,0,CLS_V,40,"KlOSZ_Name","Наименование"};
pStayFD _KlOSZ_Name = &_n_KlOSZ_Name;

char KlOSZ_NameB[41];
StayFD _n_KlOSZ_NameB = {&KlOSZ_NameB,0,0,0,CLS_V,40,"KlOSZ_NameB","Наименование банка"};
pStayFD _KlOSZ_NameB = &_n_KlOSZ_NameB;

BYTE  KlOSZ_PrV;
StayFD _n_KlOSZ_PrV = {&KlOSZ_PrV,0,0,0,CLS_S,0,"KlOSZ_PrV","Признак выплаты"};
pStayFD _KlOSZ_PrV = &_n_KlOSZ_PrV;

DWORD KlOSZ_TelB;
StayFD _n_KlOSZ_TelB = {&KlOSZ_TelB,0,0,0,CLS_L,0,"KlOSZ_TelB","Телефон бухгалтера"};
pStayFD _KlOSZ_TelB = &_n_KlOSZ_TelB;

DWORD KlOSZ_TelN;
StayFD _n_KlOSZ_TelN = {&KlOSZ_TelN,0,0,0,CLS_L,0,"KlOSZ_TelN","Телефон начальника"};
pStayFD _KlOSZ_TelN = &_n_KlOSZ_TelN;

WORD  KlOS_CodeOS;
StayFD _n_KlOS_CodeOS = {&KlOS_CodeOS,0,0,0,CLS_I,0,"KlOS_CodeOS","Код узла связи ( KlUS_ )"};
pStayFD _KlOS_CodeOS = &_n_KlOS_CodeOS;

WORD  KlOS_CodeRn;
StayFD _n_KlOS_CodeRn = {&KlOS_CodeRn,0,0,0,CLS_I,0,"KlOS_CodeRn","Код района ( KlAt_ )"};
pStayFD _KlOS_CodeRn = &_n_KlOS_CodeRn;

DWORD KlOS_NumOS;
StayFD _n_KlOS_NumOS = {&KlOS_NumOS,0,0,0,CLS_L,0,"KlOS_NumOS","Номер отд.связи (KlInd_)"};
pStayFD _KlOS_NumOS = &_n_KlOS_NumOS;

char KlOVUd_Adr[51];
StayFD _n_KlOVUd_Adr = {&KlOVUd_Adr,0,0,0,CLS_V,50,"KlOVUd_Adr","Адрес орг.-взыск.(внутри инд."};
pStayFD _KlOVUd_Adr = &_n_KlOVUd_Adr;

BYTE  KlOVUd_Code;
StayFD _n_KlOVUd_Code = {&KlOVUd_Code,0,0,0,CLS_S,0,"KlOVUd_Code","Код орг.-взыскателя"};
pStayFD _KlOVUd_Code = &_n_KlOVUd_Code;

char KlOVUd_DopNr[15];
StayFD _n_KlOVUd_DopNr = {&KlOVUd_DopNr,0,0,0,CLS_V,14,"KlOVUd_DopNr","Доп.к ном.Р/С организации"};
pStayFD _KlOVUd_DopNr = &_n_KlOVUd_DopNr;

DWORD KlOVUd_IndPO;
StayFD _n_KlOVUd_IndPO = {&KlOVUd_IndPO,0,0,0,CLS_L,0,"KlOVUd_IndPO","Индыкс ПО (KlInd_)"};
pStayFD _KlOVUd_IndPO = &_n_KlOVUd_IndPO;

DWORD KlOVUd_MFO;
StayFD _n_KlOVUd_MFO = {&KlOVUd_MFO,0,0,0,CLS_L,0,"KlOVUd_MFO","МФО"};
pStayFD _KlOVUd_MFO = &_n_KlOVUd_MFO;

char KlOVUd_NRSB[15];
StayFD _n_KlOVUd_NRSB = {&KlOVUd_NRSB,0,0,0,CLS_V,14,"KlOVUd_NRSB","Номер Р/с банка"};
pStayFD _KlOVUd_NRSB = &_n_KlOVUd_NRSB;

char KlOVUd_NRSO[15];
StayFD _n_KlOVUd_NRSO = {&KlOVUd_NRSO,0,0,0,CLS_V,14,"KlOVUd_NRSO","Номер Р/с орг."};
pStayFD _KlOVUd_NRSO = &_n_KlOVUd_NRSO;

char KlOVUd_Name[41];
StayFD _n_KlOVUd_Name = {&KlOVUd_Name,0,0,0,CLS_V,40,"KlOVUd_Name","Наим. организации-взыск."};
pStayFD _KlOVUd_Name = &_n_KlOVUd_Name;

char KlOVUd_NameB[41];
StayFD _n_KlOVUd_NameB = {&KlOVUd_NameB,0,0,0,CLS_V,40,"KlOVUd_NameB","Наименование банка"};
pStayFD _KlOVUd_NameB = &_n_KlOVUd_NameB;

char KlOVUd_Prim[51];
StayFD _n_KlOVUd_Prim = {&KlOVUd_Prim,0,0,0,CLS_V,50,"KlOVUd_Prim","Примечания"};
pStayFD _KlOVUd_Prim = &_n_KlOVUd_Prim;

char KlOVUd_PrivO[15];
StayFD _n_KlOVUd_PrivO = {&KlOVUd_PrivO,0,0,0,CLS_V,14,"KlOVUd_PrivO","Личн.Р/С организации"};
pStayFD _KlOVUd_PrivO = &_n_KlOVUd_PrivO;

WORD  KlOp_Code;
StayFD _n_KlOp_Code = {&KlOp_Code,0,0,0,CLS_I,0,"KlOp_Code","код операции"};
pStayFD _KlOp_Code = &_n_KlOp_Code;

char KlOp_Name[51];
StayFD _n_KlOp_Name = {&KlOp_Name,0,0,0,CLS_V,50,"KlOp_Name","наименование операции"};
pStayFD _KlOp_Name = &_n_KlOp_Name;

BYTE  KlOrg_Code;
StayFD _n_KlOrg_Code = {&KlOrg_Code,0,0,0,CLS_S,0,"KlOrg_Code","Код органзации"};
pStayFD _KlOrg_Code = &_n_KlOrg_Code;

char KlOrg_Name[41];
StayFD _n_KlOrg_Name = {&KlOrg_Name,0,0,0,CLS_V,40,"KlOrg_Name","Наименование организации"};
pStayFD _KlOrg_Name = &_n_KlOrg_Name;

WORD  KlOsob_Code;
StayFD _n_KlOsob_Code = {&KlOsob_Code,0,0,0,CLS_I,0,"KlOsob_Code","Кодособенности"};
pStayFD _KlOsob_Code = &_n_KlOsob_Code;

char KlOsob_Name[51];
StayFD _n_KlOsob_Name = {&KlOsob_Name,0,0,0,CLS_V,50,"KlOsob_Name","Наименование особенности"};
pStayFD _KlOsob_Name = &_n_KlOsob_Name;

BYTE  KlPInv_Code;
StayFD _n_KlPInv_Code = {&KlPInv_Code,0,0,0,CLS_S,0,"KlPInv_Code","Код причин инвалидности"};
pStayFD _KlPInv_Code = &_n_KlPInv_Code;

char KlPInv_Name[33];
StayFD _n_KlPInv_Name = {&KlPInv_Name,0,0,0,CLS_V,32,"KlPInv_Name","Наим. причин инвалидности"};
pStayFD _KlPInv_Name = &_n_KlPInv_Name;

BYTE  KlPNo_Code;
StayFD _n_KlPNo_Code = {&KlPNo_Code,0,0,0,CLS_S,0,"KlPNo_Code","Код причины неоплаты"};
pStayFD _KlPNo_Code = &_n_KlPNo_Code;

char KlPNo_Name[19];
StayFD _n_KlPNo_Name = {&KlPNo_Name,0,0,0,CLS_V,18,"KlPNo_Name","Наименование причины"};
pStayFD _KlPNo_Name = &_n_KlPNo_Name;

BYTE  KlPRab_Code;
StayFD _n_KlPRab_Code = {&KlPRab_Code,0,0,0,CLS_S,0,"KlPRab_Code","Код характеристики раб.п."};
pStayFD _KlPRab_Code = &_n_KlPRab_Code;

char KlPRab_Name[41];
StayFD _n_KlPRab_Name = {&KlPRab_Name,0,0,0,CLS_V,40,"KlPRab_Name","Наим. х-ки раб. пенс."};
pStayFD _KlPRab_Name = &_n_KlPRab_Name;

WORD  KlPSB_CodeCB;
StayFD _n_KlPSB_CodeCB = {&KlPSB_CodeCB,0,0,0,CLS_I,0,"KlPSB_CodeCB","Код центр-го СБ (KlUS_)"};
pStayFD _KlPSB_CodeCB = &_n_KlPSB_CodeCB;

WORD  KlPSB_CodeRn;
StayFD _n_KlPSB_CodeRn = {&KlPSB_CodeRn,0,0,0,CLS_I,0,"KlPSB_CodeRn","Код района ( KlAt_)"};
pStayFD _KlPSB_CodeRn = &_n_KlPSB_CodeRn;

WORD  KlPSB_CodeSB;
StayFD _n_KlPSB_CodeSB = {&KlPSB_CodeSB,0,0,0,CLS_I,0,"KlPSB_CodeSB","Код СБ(локальный код ИВЦ)"};
pStayFD _KlPSB_CodeSB = &_n_KlPSB_CodeSB;

char KlPSB_NameSB[41];
StayFD _n_KlPSB_NameSB = {&KlPSB_NameSB,0,0,0,CLS_V,40,"KlPSB_NameSB","Наименование СБ"};
pStayFD _KlPSB_NameSB = &_n_KlPSB_NameSB;

BYTE  KlPSUd_Code;
StayFD _n_KlPSUd_Code = {&KlPSUd_Code,0,0,0,CLS_S,0,"KlPSUd_Code","Код причин снятия удержан."};
pStayFD _KlPSUd_Code = &_n_KlPSUd_Code;

char KlPSUd_Name[31];
StayFD _n_KlPSUd_Name = {&KlPSUd_Name,0,0,0,CLS_V,30,"KlPSUd_Name","Наим.причин снят.удержан."};
pStayFD _KlPSUd_Name = &_n_KlPSUd_Name;

BYTE  KlPS_Code;
StayFD _n_KlPS_Code = {&KlPS_Code,0,0,0,CLS_S,0,"KlPS_Code","Код категории смерти"};
pStayFD _KlPS_Code = &_n_KlPS_Code;

char KlPS_Name[41];
StayFD _n_KlPS_Name = {&KlPS_Name,0,0,0,CLS_V,40,"KlPS_Name","Наименование катег.смерти"};
pStayFD _KlPS_Name = &_n_KlPS_Name;

WORD  KlPS_Pros;
StayFD _n_KlPS_Pros = {&KlPS_Pros,0,0,0,CLS_I,0,"KlPS_Pros","% выпл. пенсии по потере кор."};
pStayFD _KlPS_Pros = &_n_KlPS_Pros;

BYTE  KlPSn_Code;
StayFD _n_KlPSn_Code = {&KlPSn_Code,0,0,0,CLS_S,0,"KlPSn_Code","Код причин снятия  оплаты"};
pStayFD _KlPSn_Code = &_n_KlPSn_Code;

char KlPSn_Name[36];
StayFD _n_KlPSn_Name = {&KlPSn_Name,0,0,0,CLS_V,35,"KlPSn_Name","Наим. снятия с оплаты"};
pStayFD _KlPSn_Name = &_n_KlPSn_Name;

BYTE  KlPost_Code;
StayFD _n_KlPost_Code = {&KlPost_Code,0,0,0,CLS_S,0,"KlPost_Code","Код типа пострадавшего"};
pStayFD _KlPost_Code = &_n_KlPost_Code;

char KlPost_Name[36];
StayFD _n_KlPost_Name = {&KlPost_Name,0,0,0,CLS_V,35,"KlPost_Name","Наименование типа постр."};
pStayFD _KlPost_Name = &_n_KlPost_Name;

WORD  KlPov_Code;
StayFD _n_KlPov_Code = {&KlPov_Code,0,0,0,CLS_I,0,"KlPov_Code","Код повышения"};
pStayFD _KlPov_Code = &_n_KlPov_Code;

BYTE  KlPov_GrPov;
StayFD _n_KlPov_GrPov = {&KlPov_GrPov,0,0,0,CLS_S,0,"KlPov_GrPov","Группа повышения"};
pStayFD _KlPov_GrPov = &_n_KlPov_GrPov;

BYTE  KlPov_NBit;
StayFD _n_KlPov_NBit = {&KlPov_NBit,0,0,0,CLS_S,0,"KlPov_NBit","N бита в маске"};
pStayFD _KlPov_NBit = &_n_KlPov_NBit;

char KlPov_Name[55];
StayFD _n_KlPov_Name = {&KlPov_Name,0,0,0,CLS_V,54,"KlPov_Name","Наимен. повышения"};
pStayFD _KlPov_Name = &_n_KlPov_Name;

WORD  KlPov_Prizn;
StayFD _n_KlPov_Prizn = {&KlPov_Prizn,0,0,0,CLS_I,0,"KlPov_Prizn","Признак"};
pStayFD _KlPov_Prizn = &_n_KlPov_Prizn;

DWORD KlPred_Code;
StayFD _n_KlPred_Code = {&KlPred_Code,0,0,0,CLS_L,0,"KlPred_Code","Код предприятия"};
pStayFD _KlPred_Code = &_n_KlPred_Code;

char KlPred_Name[51];
StayFD _n_KlPred_Name = {&KlPred_Name,0,0,0,CLS_V,50,"KlPred_Name","Наименование предприятия"};
pStayFD _KlPred_Name = &_n_KlPred_Name;

BYTE  KlProf_Code;
StayFD _n_KlProf_Code = {&KlProf_Code,0,0,0,CLS_S,0,"KlProf_Code","Код профессии"};
pStayFD _KlProf_Code = &_n_KlProf_Code;

char KlProf_KrName[12];
StayFD _n_KlProf_KrName = {&KlProf_KrName,0,0,0,CLS_V,11,"KlProf_KrName","Кратк. наимен. профессии"};
pStayFD _KlProf_KrName = &_n_KlProf_KrName;

char KlProf_Name[27];
StayFD _n_KlProf_Name = {&KlProf_Name,0,0,0,CLS_V,26,"KlProf_Name","Наимен. профессии"};
pStayFD _KlProf_Name = &_n_KlProf_Name;

BYTE  KlProf_Probr;
StayFD _n_KlProf_Probr = {&KlProf_Probr,0,0,0,CLS_S,0,"KlProf_Probr","реквизит"};
pStayFD _KlProf_Probr = &_n_KlProf_Probr;

BYTE  KlRPen_ChPri;
StayFD _n_KlRPen_ChPri = {&KlRPen_ChPri,0,0,0,CLS_S,0,"KlRPen_ChPri","Признак связи с ЧК"};
pStayFD _KlRPen_ChPri = &_n_KlRPen_ChPri;

WORD  KlRPen_Code;
StayFD _n_KlRPen_Code = {&KlRPen_Code,0,0,0,CLS_I,0,"KlRPen_Code","Код размера выплаты"};
pStayFD _KlRPen_Code = &_n_KlRPen_Code;

StayDate KlRPen_DataB;
StayFD _n_KlRPen_DataB = {&KlRPen_DataB,0,0,0,CLS_Date,0,"KlRPen_DataB","Дата нач.действия кода"};
pStayFD _KlRPen_DataB = &_n_KlRPen_DataB;

StayDate KlRPen_DataE;
StayFD _n_KlRPen_DataE = {&KlRPen_DataE,0,0,0,CLS_Date,0,"KlRPen_DataE","Дата кон. действ.кода"};
pStayFD _KlRPen_DataE = &_n_KlRPen_DataE;

char KlRPen_Name[45];
StayFD _n_KlRPen_Name = {&KlRPen_Name,0,0,0,CLS_V,44,"KlRPen_Name","Наименование"};
pStayFD _KlRPen_Name = &_n_KlRPen_Name;

DWORD KlRPen_Proc;
StayFD _n_KlRPen_Proc = {&KlRPen_Proc,0,0,0,CLS_L,2,"KlRPen_Proc","Проценты"};
pStayFD _KlRPen_Proc = &_n_KlRPen_Proc;

BYTE  KlRPen_Tag;
StayFD _n_KlRPen_Tag = {&KlRPen_Tag,0,0,0,CLS_S,0,"KlRPen_Tag","Осн.устан.знач.соот.KlFN"};
pStayFD _KlRPen_Tag = &_n_KlRPen_Tag;

BYTE  KlRod_Code;
StayFD _n_KlRod_Code = {&KlRod_Code,0,0,0,CLS_S,0,"KlRod_Code","Код категории родства"};
pStayFD _KlRod_Code = &_n_KlRod_Code;

char KlRod_Name[21];
StayFD _n_KlRod_Name = {&KlRod_Name,0,0,0,CLS_V,20,"KlRod_Name","Наим. категории родства"};
pStayFD _KlRod_Name = &_n_KlRod_Name;

BYTE  KlSPUd_Code;
StayFD _n_KlSPUd_Code = {&KlSPUd_Code,0,0,0,CLS_S,0,"KlSPUd_Code","Код сост. перевода удерж."};
pStayFD _KlSPUd_Code = &_n_KlSPUd_Code;

char KlSPUd_Name[41];
StayFD _n_KlSPUd_Name = {&KlSPUd_Name,0,0,0,CLS_V,40,"KlSPUd_Name","Наим. сост. перевода удерж."};
pStayFD _KlSPUd_Name = &_n_KlSPUd_Name;

BYTE  KlSVUd_Code;
StayFD _n_KlSVUd_Code = {&KlSVUd_Code,0,0,0,CLS_S,0,"KlSVUd_Code","Код способ. выпл. удерж."};
pStayFD _KlSVUd_Code = &_n_KlSVUd_Code;

char KlSVUd_Name[26];
StayFD _n_KlSVUd_Name = {&KlSVUd_Name,0,0,0,CLS_V,25,"KlSVUd_Name","Наим. спос. выпл. удерж."};
pStayFD _KlSVUd_Name = &_n_KlSVUd_Name;

BYTE  KlShPN_CodeIF;
StayFD _n_KlShPN_CodeIF = {&KlShPN_CodeIF,0,0,0,CLS_S,0,"KlShPN_CodeIF","Код источника финанс-я"};
pStayFD _KlShPN_CodeIF = &_n_KlShPN_CodeIF;

char KlShPN_Name[251];
StayFD _n_KlShPN_Name = {&KlShPN_Name,0,0,0,CLS_V,250,"KlShPN_Name","Наименование выплаты"};
pStayFD _KlShPN_Name = &_n_KlShPN_Name;

WORD  KlShPN_ShP;
StayFD _n_KlShPN_ShP = {&KlShPN_ShP,0,0,0,CLS_I,0,"KlShPN_ShP","Шифр пенсии(пособия)"};
pStayFD _KlShPN_ShP = &_n_KlShPN_ShP;

BYTE  KlShP_All;
StayFD _n_KlShP_All = {&KlShP_All,0,0,0,CLS_S,0,"KlShP_All","Общий стаж(1-неполный)"};
pStayFD _KlShP_All = &_n_KlShP_All;

BYTE  KlShP_CodeIF;
StayFD _n_KlShP_CodeIF = {&KlShP_CodeIF,0,0,0,CLS_S,0,"KlShP_CodeIF","Код источника финанс-я"};
pStayFD _KlShP_CodeIF = &_n_KlShP_CodeIF;

WORD  KlShP_CodeVp;
StayFD _n_KlShP_CodeVp = {&KlShP_CodeVp,0,0,0,CLS_I,0,"KlShP_CodeVp","Код выплаты (KlFN_)"};
pStayFD _KlShP_CodeVp = &_n_KlShP_CodeVp;

BYTE  KlShP_IFN;
StayFD _n_KlShP_IFN = {&KlShP_IFN,0,0,0,CLS_S,0,"KlShP_IFN","связь ShP c KFN"};
pStayFD _KlShP_IFN = &_n_KlShP_IFN;

BYTE  KlShP_KIgd;
StayFD _n_KlShP_KIgd = {&KlShP_KIgd,0,0,0,CLS_S,0,"KlShP_KIgd","Количество иждивенцев"};
pStayFD _KlShP_KIgd = &_n_KlShP_KIgd;

BYTE  KlShP_Kor;
StayFD _n_KlShP_Kor = {&KlShP_Kor,0,0,0,CLS_S,0,"KlShP_Kor","Категория кормил.(KlKor_)"};
pStayFD _KlShP_Kor = &_n_KlShP_Kor;

BYTE  KlShP_Lgt;
StayFD _n_KlShP_Lgt = {&KlShP_Lgt,0,0,0,CLS_S,0,"KlShP_Lgt","Льготный стаж(1-неполный)"};
pStayFD _KlShP_Lgt = &_n_KlShP_Lgt;

BYTE  KlShP_Netr;
StayFD _n_KlShP_Netr = {&KlShP_Netr,0,0,0,CLS_S,0,"KlShP_Netr","Категор. нетруд.(KlNet_)"};
pStayFD _KlShP_Netr = &_n_KlShP_Netr;

BYTE  KlShP_Nr;
StayFD _n_KlShP_Nr = {&KlShP_Nr,0,0,0,CLS_S,0,"KlShP_Nr","Номер расчета(1,2,3)"};
pStayFD _KlShP_Nr = &_n_KlShP_Nr;

BYTE  KlShP_PSKor;
StayFD _n_KlShP_PSKor = {&KlShP_PSKor,0,0,0,CLS_S,0,"KlShP_PSKor","Прич. смерти корм.(KlPS_)"};
pStayFD _KlShP_PSKor = &_n_KlShP_PSKor;

BYTE  KlShP_PoCH;
StayFD _n_KlShP_PoCH = {&KlShP_PoCH,0,0,0,CLS_S,0,"KlShP_PoCH","Тип пострадав. ЧАЭС(KlPost)"};
pStayFD _KlShP_PoCH = &_n_KlShP_PoCH;

BYTE  KlShP_PrCH;
StayFD _n_KlShP_PrCH = {&KlShP_PrCH,0,0,0,CLS_S,0,"KlShP_PrCH","Причастность ЧАЭС(KlChe_)"};
pStayFD _KlShP_PrCH = &_n_KlShP_PrCH;

BYTE  KlShP_PrInv;
StayFD _n_KlShP_PrInv = {&KlShP_PrInv,0,0,0,CLS_S,0,"KlShP_PrInv","Причина инв-ти (KlPInv_)"};
pStayFD _KlShP_PrInv = &_n_KlShP_PrInv;

BYTE  KlShP_Prof;
StayFD _n_KlShP_Prof = {&KlShP_Prof,0,0,0,CLS_S,0,"KlShP_Prof","Код профессии"};
pStayFD _KlShP_Prof = &_n_KlShP_Prof;

BYTE  KlShP_Sex;
StayFD _n_KlShP_Sex = {&KlShP_Sex,0,0,0,CLS_S,0,"KlShP_Sex","Пол"};
pStayFD _KlShP_Sex = &_n_KlShP_Sex;

WORD  KlShP_ShP;
StayFD _n_KlShP_ShP = {&KlShP_ShP,0,0,0,CLS_I,0,"KlShP_ShP","Шифр пенсии(пособия)"};
pStayFD _KlShP_ShP = &_n_KlShP_ShP;

BYTE  KlShP_VInv;
StayFD _n_KlShP_VInv = {&KlShP_VInv,0,0,0,CLS_S,0,"KlShP_VInv","Вид инвалидности (KlInv_)"};
pStayFD _KlShP_VInv = &_n_KlShP_VInv;

BYTE  KlShP_VP;
StayFD _n_KlShP_VP = {&KlShP_VP,0,0,0,CLS_S,0,"KlShP_VP","Вид пенсии(KlVPen_)"};
pStayFD _KlShP_VP = &_n_KlShP_VP;

BYTE  KlSposUd_Code;
StayFD _n_KlSposUd_Code = {&KlSposUd_Code,0,0,0,CLS_S,0,"KlSposUd_Code","Код способа удержаний"};
pStayFD _KlSposUd_Code = &_n_KlSposUd_Code;

char KlSposUd_Name[13];
StayFD _n_KlSposUd_Name = {&KlSposUd_Name,0,0,0,CLS_V,12,"KlSposUd_Name","Наимен. способа"};
pStayFD _KlSposUd_Name = &_n_KlSposUd_Name;

BYTE  KlStag_Stag;
StayFD _n_KlStag_Stag = {&KlStag_Stag,0,0,0,CLS_S,0,"KlStag_Stag","Необх.миним.стаж"};
pStayFD _KlStag_Stag = &_n_KlStag_Stag;

BYTE  KlStag_Vozr;
StayFD _n_KlStag_Vozr = {&KlStag_Vozr,0,0,0,CLS_S,0,"KlStag_Vozr","Возраст инвалида (лет)"};
pStayFD _KlStag_Vozr = &_n_KlStag_Vozr;

char KlSud_Adr[51];
StayFD _n_KlSud_Adr = {&KlSud_Adr,0,0,0,CLS_V,50,"KlSud_Adr","Адрес суда(ул.,дом)"};
pStayFD _KlSud_Adr = &_n_KlSud_Adr;

BYTE  KlSud_Code;
StayFD _n_KlSud_Code = {&KlSud_Code,0,0,0,CLS_S,0,"KlSud_Code","Код суда"};
pStayFD _KlSud_Code = &_n_KlSud_Code;

DWORD KlSud_IndPO;
StayFD _n_KlSud_IndPO = {&KlSud_IndPO,0,0,0,CLS_L,0,"KlSud_IndPO","Индекс поч-го отд(KlInd_)"};
pStayFD _KlSud_IndPO = &_n_KlSud_IndPO;

char KlSud_Name[41];
StayFD _n_KlSud_Name = {&KlSud_Name,0,0,0,CLS_V,40,"KlSud_Name","Наименование суда"};
pStayFD _KlSud_Name = &_n_KlSud_Name;

BYTE  KlTPer_Code;
StayFD _n_KlTPer_Code = {&KlTPer_Code,0,0,0,CLS_S,0,"KlTPer_Code","Код типа периода"};
pStayFD _KlTPer_Code = &_n_KlTPer_Code;

char KlTPer_Name[31];
StayFD _n_KlTPer_Name = {&KlTPer_Name,0,0,0,CLS_V,30,"KlTPer_Name","Наименование типа периода"};
pStayFD _KlTPer_Name = &_n_KlTPer_Name;

BYTE  KlTpVzs_Code;
StayFD _n_KlTpVzs_Code = {&KlTpVzs_Code,0,0,0,CLS_S,0,"KlTpVzs_Code","Код повышения"};
pStayFD _KlTpVzs_Code = &_n_KlTpVzs_Code;

char KlTpVzs_Name[18];
StayFD _n_KlTpVzs_Name = {&KlTpVzs_Name,0,0,0,CLS_V,17,"KlTpVzs_Name","Наимен. повышения"};
pStayFD _KlTpVzs_Name = &_n_KlTpVzs_Name;

WORD  KlUS_Code;
StayFD _n_KlUS_Code = {&KlUS_Code,0,0,0,CLS_I,0,"KlUS_Code","Код узла связи"};
pStayFD _KlUS_Code = &_n_KlUS_Code;

DWORD KlUS_MFO;
StayFD _n_KlUS_MFO = {&KlUS_MFO,0,0,0,CLS_L,0,"KlUS_MFO","МФО банка"};
pStayFD _KlUS_MFO = &_n_KlUS_MFO;

char KlUS_NRSB[15];
StayFD _n_KlUS_NRSB = {&KlUS_NRSB,0,0,0,CLS_V,14,"KlUS_NRSB","Номер р/с банка Нац.Банк Укр."};
pStayFD _KlUS_NRSB = &_n_KlUS_NRSB;

char KlUS_NRSUS[15];
StayFD _n_KlUS_NRSUS = {&KlUS_NRSUS,0,0,0,CLS_V,14,"KlUS_NRSUS","Номер р/с узла связи банка"};
pStayFD _KlUS_NRSUS = &_n_KlUS_NRSUS;

char KlUS_Name[21];
StayFD _n_KlUS_Name = {&KlUS_Name,0,0,0,CLS_V,20,"KlUS_Name","Наименов. узла связи ЦСБ"};
pStayFD _KlUS_Name = &_n_KlUS_Name;

char KlUS_NameB[41];
StayFD _n_KlUS_NameB = {&KlUS_NameB,0,0,0,CLS_V,40,"KlUS_NameB","Наим.банка,где нах-ся р/с УС"};
pStayFD _KlUS_NameB = &_n_KlUS_NameB;

uint6 KlUS_PrcPS;
StayFD _n_KlUS_PrcPS = {&KlUS_PrcPS,0,0,0,CLS_H,2,"KlUS_PrcPS","% почтовых сборов(для УС)"};
pStayFD _KlUS_PrcPS = &_n_KlUS_PrcPS;

BYTE  KlUd_Code;
StayFD _n_KlUd_Code = {&KlUd_Code,0,0,0,CLS_S,0,"KlUd_Code","Код удержания"};
pStayFD _KlUd_Code = &_n_KlUd_Code;

char KlUd_Name[26];
StayFD _n_KlUd_Name = {&KlUd_Name,0,0,0,CLS_V,25,"KlUd_Name","Наименование удержания"};
pStayFD _KlUd_Name = &_n_KlUd_Name;

uint6 KlUd_Ogr;
StayFD _n_KlUd_Ogr = {&KlUd_Ogr,0,0,0,CLS_H,2,"KlUd_Ogr","Огр. размера (в % от сумм)"};
pStayFD _KlUd_Ogr = &_n_KlUd_Ogr;

BYTE  KlUd_PInd;
StayFD _n_KlUd_PInd = {&KlUd_PInd,0,0,0,CLS_S,0,"KlUd_PInd","Признак индексир. удерж."};
pStayFD _KlUd_PInd = &_n_KlUd_PInd;

BYTE  KlUd_Vid;
StayFD _n_KlUd_Vid = {&KlUd_Vid,0,0,0,CLS_S,0,"KlUd_Vid","Вид удержания (группа)"};
pStayFD _KlUd_Vid = &_n_KlUd_Vid;

BYTE  KlUl_CodeKUl;
StayFD _n_KlUl_CodeKUl = {&KlUl_CodeKUl,0,0,0,CLS_S,0,"KlUl_CodeKUl","Код категории улицы"};
pStayFD _KlUl_CodeKUl = &_n_KlUl_CodeKUl;

WORD  KlUl_CodeRn;
StayFD _n_KlUl_CodeRn = {&KlUl_CodeRn,0,0,0,CLS_I,0,"KlUl_CodeRn","Код района (KlAt_)"};
pStayFD _KlUl_CodeRn = &_n_KlUl_CodeRn;

WORD  KlUl_CodeUl;
StayFD _n_KlUl_CodeUl = {&KlUl_CodeUl,0,0,0,CLS_I,0,"KlUl_CodeUl","Код улицы"};
pStayFD _KlUl_CodeUl = &_n_KlUl_CodeUl;

char KlUl_Name[51];
StayFD _n_KlUl_Name = {&KlUl_Name,0,0,0,CLS_V,50,"KlUl_Name","Наименование улицы"};
pStayFD _KlUl_Name = &_n_KlUl_Name;

BYTE  KlVPen_Code;
StayFD _n_KlVPen_Code = {&KlVPen_Code,0,0,0,CLS_S,0,"KlVPen_Code","Код вида выплат"};
pStayFD _KlVPen_Code = &_n_KlVPen_Code;

char KlVPen_Name[26];
StayFD _n_KlVPen_Name = {&KlVPen_Name,0,0,0,CLS_V,25,"KlVPen_Name","Наименование вида выплат"};
pStayFD _KlVPen_Name = &_n_KlVPen_Name;

BYTE  KlVZvan_Code;
StayFD _n_KlVZvan_Code = {&KlVZvan_Code,0,0,0,CLS_S,0,"KlVZvan_Code","Код звания"};
pStayFD _KlVZvan_Code = &_n_KlVZvan_Code;

char KlVZvan_Name[11];
StayFD _n_KlVZvan_Name = {&KlVZvan_Name,0,0,0,CLS_V,10,"KlVZvan_Name","Наименование звания"};
pStayFD _KlVZvan_Name = &_n_KlVZvan_Name;

BYTE  KlVis_ChPri;
StayFD _n_KlVis_ChPri = {&KlVis_ChPri,0,0,0,CLS_S,0,"KlVis_ChPri","Признак связи с ЧАЭС"};
pStayFD _KlVis_ChPri = &_n_KlVis_ChPri;

WORD  KlVis_Code;
StayFD _n_KlVis_Code = {&KlVis_Code,0,0,0,CLS_I,0,"KlVis_Code","Код профессии"};
pStayFD _KlVis_Code = &_n_KlVis_Code;

WORD  KlVis_M1;
StayFD _n_KlVis_M1 = {&KlVis_M1,0,0,0,CLS_I,0,"KlVis_M1","Возраст в месяцах"};
pStayFD _KlVis_M1 = &_n_KlVis_M1;

WORD  KlVis_M2;
StayFD _n_KlVis_M2 = {&KlVis_M2,0,0,0,CLS_I,0,"KlVis_M2","Общий стаж"};
pStayFD _KlVis_M2 = &_n_KlVis_M2;

WORD  KlVis_M3;
StayFD _n_KlVis_M3 = {&KlVis_M3,0,0,0,CLS_I,0,"KlVis_M3","Льготный стаж"};
pStayFD _KlVis_M3 = &_n_KlVis_M3;

WORD  KlVis_M4;
StayFD _n_KlVis_M4 = {&KlVis_M4,0,0,0,CLS_I,0,"KlVis_M4","Льготный стаж - СПЕЦИАЛЬНЫЙ"};
pStayFD _KlVis_M4 = &_n_KlVis_M4;

StayDate KlVis_DBeg;
StayFD _n_KlVis_DBeg = {&KlVis_DBeg,0,0,0,CLS_Date,0,"KlVis_DBeg","Дата начала права"};
pStayFD _KlVis_DBeg = &_n_KlVis_DBeg;

StayDate KlVis_DEnd;
StayFD _n_KlVis_DEnd = {&KlVis_DEnd,0,0,0,CLS_Date,0,"KlVis_DEnd","Дата конца  права"};
pStayFD _KlVis_DEnd = &_n_KlVis_DEnd;

BYTE  KlVis_Sex;
StayFD _n_KlVis_Sex = {&KlVis_Sex,0,0,0,CLS_S,0,"KlVis_Sex","Пол"};
pStayFD _KlVis_Sex = &_n_KlVis_Sex;

BYTE  KlVozvr_Code;
StayFD _n_KlVozvr_Code = {&KlVozvr_Code,0,0,0,CLS_S,0,"KlVozvr_Code","Код причины неоплаты"};
pStayFD _KlVozvr_Code = &_n_KlVozvr_Code;

char KlVozvr_Name[20];
StayFD _n_KlVozvr_Name = {&KlVozvr_Name,0,0,0,CLS_V,19,"KlVozvr_Name","Наименование причины"};
pStayFD _KlVozvr_Name = &_n_KlVozvr_Name;

WORD  KlVsr_CL;
StayFD _n_KlVsr_CL = {&KlVsr_CL,0,0,0,CLS_I,0,"KlVsr_CL","Льготный стаж"};
pStayFD _KlVsr_CL = &_n_KlVsr_CL;

WORD  KlVsr_CSG1;
StayFD _n_KlVsr_CSG1 = {&KlVsr_CSG1,0,0,0,CLS_I,0,"KlVsr_CSG1","Сниж. пенс. возр. за год"};
pStayFD _KlVsr_CSG1 = &_n_KlVsr_CSG1;

WORD  KlVsr_CSG2;
StayFD _n_KlVsr_CSG2 = {&KlVsr_CSG2,0,0,0,CLS_I,0,"KlVsr_CSG2","Сниж. пенс. возр."};
pStayFD _KlVsr_CSG2 = &_n_KlVsr_CSG2;

WORD  KlVsr_CSP;
StayFD _n_KlVsr_CSP = {&KlVsr_CSP,0,0,0,CLS_I,0,"KlVsr_CSP","Сниж.пенс.возр.за год"};
pStayFD _KlVsr_CSP = &_n_KlVsr_CSP;

WORD  KlVsr_CST;
StayFD _n_KlVsr_CST = {&KlVsr_CST,0,0,0,CLS_I,0,"KlVsr_CST","Общий стаж"};
pStayFD _KlVsr_CST = &_n_KlVsr_CST;

WORD  KlVsr_CV;
StayFD _n_KlVsr_CV = {&KlVsr_CV,0,0,0,CLS_I,0,"KlVsr_CV","Возраст в месяцах"};
pStayFD _KlVsr_CV = &_n_KlVsr_CV;

BYTE  KlVsr_ChPri;
StayFD _n_KlVsr_ChPri = {&KlVsr_ChPri,0,0,0,CLS_S,0,"KlVsr_ChPri","Признак связи с ЧАЭС"};
pStayFD _KlVsr_ChPri = &_n_KlVsr_ChPri;

BYTE  KlVsr_Code;
StayFD _n_KlVsr_Code = {&KlVsr_Code,0,0,0,CLS_S,0,"KlVsr_Code","Код профессии"};
pStayFD _KlVsr_Code = &_n_KlVsr_Code;

BYTE  KlVsr_Sex;
StayFD _n_KlVsr_Sex = {&KlVsr_Sex,0,0,0,CLS_S,0,"KlVsr_Sex","Пол"};
pStayFD _KlVsr_Sex = &_n_KlVsr_Sex;

DWORD KlZR92_Coeff;
StayFD _n_KlZR92_Coeff = {&KlZR92_Coeff,0,0,0,CLS_L,2,"KlZR92_Coeff","Коэффициент"};
pStayFD _KlZR92_Coeff = &_n_KlZR92_Coeff;

StayDate KlZR92_Data;
StayFD _n_KlZR92_Data = {&KlZR92_Data,0,0,0,CLS_Date,0,"KlZR92_Data","Дата установл. коэф."};
pStayFD _KlZR92_Data = &_n_KlZR92_Data;

DWORD KlZR_Coeff;
StayFD _n_KlZR_Coeff = {&KlZR_Coeff,0,0,0,CLS_L,2,"KlZR_Coeff","Коэффициент"};
pStayFD _KlZR_Coeff = &_n_KlZR_Coeff;

StayDate KlZR_Data;
StayFD _n_KlZR_Data = {&KlZR_Data,0,0,0,CLS_Date,0,"KlZR_Data","Дата усьановл. коэф."};
pStayFD _KlZR_Data = &_n_KlZR_Data;

BYTE  KlZach_Code;
StayFD _n_KlZach_Code = {&KlZach_Code,0,0,0,CLS_S,0,"KlZach_Code","Код профессии"};
pStayFD _KlZach_Code = &_n_KlZach_Code;

BYTE  KlZach_CodeZ;
StayFD _n_KlZach_CodeZ = {&KlZach_CodeZ,0,0,0,CLS_S,0,"KlZach_CodeZ","Код профес. по зачету"};
pStayFD _KlZach_CodeZ = &_n_KlZach_CodeZ;

char KlZach_Name[43];
StayFD _n_KlZach_Name = {&KlZach_Name,0,0,0,CLS_V,42,"KlZach_Name","Наимен. профессии"};
pStayFD _KlZach_Name = &_n_KlZach_Name;

BYTE  KlZach_Prizn;
StayFD _n_KlZach_Prizn = {&KlZach_Prizn,0,0,0,CLS_S,0,"KlZach_Prizn","Признак основних профессий"};
pStayFD _KlZach_Prizn = &_n_KlZach_Prizn;

StayDate KlZach_DBeg;
StayFD _n_KlZach_DBeg = {&KlZach_DBeg,0,0,0,CLS_Date,0,"KlZach_DBeg","Дата начала права"};
pStayFD _KlZach_DBeg = &_n_KlZach_DBeg;

StayDate KlZach_DEnd;
StayFD _n_KlZach_DEnd = {&KlZach_DEnd,0,0,0,CLS_Date,0,"KlZach_DEnd","Дата конца  права"};
pStayFD _KlZach_DEnd = &_n_KlZach_DEnd;

BYTE  KlZem_Code;
StayFD _n_KlZem_Code = {&KlZem_Code,0,0,0,CLS_S,0,"KlZem_Code","Код земельного участка"};
pStayFD _KlZem_Code = &_n_KlZem_Code;

char KlZem_Name[51];
StayFD _n_KlZem_Name = {&KlZem_Name,0,0,0,CLS_V,50,"KlZem_Name","Наименование земел. участка"};
pStayFD _KlZem_Name = &_n_KlZem_Name;

BYTE  KlZon_Code;
StayFD _n_KlZon_Code = {&KlZon_Code,0,0,0,CLS_S,0,"KlZon_Code","Кода категории зоны"};
pStayFD _KlZon_Code = &_n_KlZon_Code;

char KlZon_Name[51];
StayFD _n_KlZon_Name = {&KlZon_Name,0,0,0,CLS_V,50,"KlZon_Name","Наименование категор.зоны"};
pStayFD _KlZon_Name = &_n_KlZon_Name;

StayDate Klhl_Date;
StayFD _n_Klhl_Date = {&Klhl_Date,0,0,0,CLS_Date,0,"Klhl_Date","Дата праздника"};
pStayFD _Klhl_Date = &_n_Klhl_Date;

char Klhl_Name[51];
StayFD _n_Klhl_Name = {&Klhl_Name,0,0,0,CLS_V,50,"Klhl_Name","Наименование праздника"};
pStayFD _Klhl_Name = &_n_Klhl_Name;

StayDate Km_Date;
StayFD _n_Km_Date = {&Km_Date,0,0,0,CLS_Date,0,"Km_Date","Дата установ. размера мин. дох"};
pStayFD _Km_Date = &_n_Km_Date;

int6 Km_Razm;
StayFD _n_Km_Razm = {&Km_Razm,0,0,0,CLS_Hs,2,"Km_Razm","Размер мин. сред. сов. дохода"};
pStayFD _Km_Razm = &_n_Km_Razm;

StayDate Kmd_Date;
StayFD _n_Kmd_Date = {&Kmd_Date,0,0,0,CLS_Date,0,"Kmd_Date","Дата установки размера"};
pStayFD _Kmd_Date = &_n_Kmd_Date;

int6 Kmd_Razm;
StayFD _n_Kmd_Razm = {&Kmd_Razm,0,0,0,CLS_Hs,2,"Kmd_Razm","Размер мин.сред.сов.дохода д/пос.на погребение"};
pStayFD _Kmd_Razm = &_n_Kmd_Razm;

BYTE  NWork_Code;
StayFD _n_NWork_Code = {&NWork_Code,0,0,0,CLS_S,0,"NWork_Code","Код причины, по кот. не раб."};
pStayFD _NWork_Code = &_n_NWork_Code;

char NWork_Name[51];
StayFD _n_NWork_Name = {&NWork_Name,0,0,0,CLS_V,50,"NWork_Name","Наименование пр., по кот. не"};
pStayFD _NWork_Name = &_n_NWork_Name;

BYTE  Par_Code;
StayFD _n_Par_Code = {&Par_Code,0,0,0,CLS_S,0,"Par_Code","Код категории родителя"};
pStayFD _Par_Code = &_n_Par_Code;

char Par_Name[21];
StayFD _n_Par_Name = {&Par_Name,0,0,0,CLS_V,20,"Par_Name","Наименование категории родител"};
pStayFD _Par_Name = &_n_Par_Name;

StayDate Prav_DBeg;
StayFD _n_Prav_DBeg = {&Prav_DBeg,0,0,0,CLS_Date,0,"Prav_DBeg","Дата начала для правовых норм"};
pStayFD _Prav_DBeg = &_n_Prav_DBeg;

StayDate Prav_DEnd;
StayFD _n_Prav_DEnd = {&Prav_DEnd,0,0,0,CLS_Date,0,"Prav_DEnd","Дата конца для правовых норм"};
pStayFD _Prav_DEnd = &_n_Prav_DEnd;

BYTE  Prav_MesNaz;
StayFD _n_Prav_MesNaz = {&Prav_MesNaz,0,0,0,CLS_S,0,"Prav_MesNaz","Кол-во месяцев для назначения"};
pStayFD _Prav_MesNaz = &_n_Prav_MesNaz;

BYTE  Prav_MesReas;
StayFD _n_Prav_MesReas = {&Prav_MesReas,0,0,0,CLS_S,0,"Prav_MesReas","Кол-во месяцев для опред.права"};
pStayFD _Prav_MesReas = &_n_Prav_MesReas;

BYTE  Prav_MesRet;
StayFD _n_Prav_MesRet = {&Prav_MesRet,0,0,0,CLS_S,0,"Prav_MesRet","Мах. кол-во месяцев для возв."};
pStayFD _Prav_MesRet = &_n_Prav_MesRet;

DWORD SysP_CMPer;
StayFD _n_SysP_CMPer = {&SysP_CMPer,0,0,0,CLS_L,5,"SysP_CMPer","коэф.массовых перарасчетов"};
pStayFD _SysP_CMPer = &_n_SysP_CMPer;

uint6 SysP_CMinZp;
StayFD _n_SysP_CMinZp = {&SysP_CMinZp,0,0,0,CLS_H,5,"SysP_CMinZp","попр.коэф.мин.ЗП"};
pStayFD _SysP_CMinZp = &_n_SysP_CMinZp;

uint6 SysP_CMinZpCh;
StayFD _n_SysP_CMinZpCh = {&SysP_CMinZpCh,0,0,0,CLS_H,5,"SysP_CMinZpCh","попр.коэф. ЗП для ЧАЭС"};
pStayFD _SysP_CMinZpCh = &_n_SysP_CMinZpCh;

uint6 SysP_CNS;
StayFD _n_SysP_CNS = {&SysP_CNS,0,0,0,CLS_H,5,"SysP_CNS","попр.коэф надбавок - статус"};
pStayFD _SysP_CNS = &_n_SysP_CNS;

uint6 SysP_CNadb;
StayFD _n_SysP_CNadb = {&SysP_CNadb,0,0,0,CLS_H,5,"SysP_CNadb","попр.коэф надбавок"};
pStayFD _SysP_CNadb = &_n_SysP_CNadb;

uint6 SysP_CPen;
StayFD _n_SysP_CPen = {&SysP_CPen,0,0,0,CLS_H,5,"SysP_CPen","попр. коэф пенс."};
pStayFD _SysP_CPen = &_n_SysP_CPen;

uint6 SysP_CPenCh;
StayFD _n_SysP_CPenCh = {&SysP_CPenCh,0,0,0,CLS_H,5,"SysP_CPenCh","попр. коэф пенс. - Чернобиль"};
pStayFD _SysP_CPenCh = &_n_SysP_CPenCh;

uint6 SysP_CPenSc;
StayFD _n_SysP_CPenSc = {&SysP_CPenSc,0,0,0,CLS_H,5,"SysP_CPenSc","попр. коэф пенс. - социальные"};
pStayFD _SysP_CPenSc = &_n_SysP_CPenSc;

uint6 SysP_CPenVn;
StayFD _n_SysP_CPenVn = {&SysP_CPenVn,0,0,0,CLS_H,5,"SysP_CPenVn","попр. коэф пенс. - военные"};
pStayFD _SysP_CPenVn = &_n_SysP_CPenVn;

uint6 SysP_CPenVz;
StayFD _n_SysP_CPenVz = {&SysP_CPenVz,0,0,0,CLS_H,5,"SysP_CPenVz","попр. коэф пенс. - социальные"};
pStayFD _SysP_CPenVz = &_n_SysP_CPenVz;

WORD  SysP_CodeInsp;
StayFD _n_SysP_CodeInsp = {&SysP_CodeInsp,0,0,0,CLS_I,0,"SysP_CodeInsp","Код инспектора"};
pStayFD _SysP_CodeInsp = &_n_SysP_CodeInsp;

StayDate SysP_Data;
StayFD _n_SysP_Data = {&SysP_Data,0,0,0,CLS_Date,0,"SysP_Data","Дата ввода мин. размеры"};
pStayFD _SysP_Data = &_n_SysP_Data;

DWORD SysP_MinPen;
StayFD _n_SysP_MinPen = {&SysP_MinPen,0,0,0,CLS_L,2,"SysP_MinPen","Разм. мин. пенс."};
pStayFD _SysP_MinPen = &_n_SysP_MinPen;

DWORD SysP_MinPenCh;
StayFD _n_SysP_MinPenCh = {&SysP_MinPenCh,0,0,0,CLS_L,2,"SysP_MinPenCh","Разм. мин. пенс. - Чернобиль"};
pStayFD _SysP_MinPenCh = &_n_SysP_MinPenCh;

DWORD SysP_MinPenNS;
StayFD _n_SysP_MinPenNS = {&SysP_MinPenNS,0,0,0,CLS_L,2,"SysP_MinPenNS","Разм. мин. пенс. - для надбавок - Статус по ОЗ"};
pStayFD _SysP_MinPenNS = &_n_SysP_MinPenNS;

DWORD SysP_MinPenNb;
StayFD _n_SysP_MinPenNb = {&SysP_MinPenNb,0,0,0,CLS_L,2,"SysP_MinPenNb","Разм. мин. пенс. - для надбавок"};
pStayFD _SysP_MinPenNb = &_n_SysP_MinPenNb;

DWORD SysP_MinPenSc;
StayFD _n_SysP_MinPenSc = {&SysP_MinPenSc,0,0,0,CLS_L,2,"SysP_MinPenSc","Разм. мин. пенс. - социальные"};
pStayFD _SysP_MinPenSc = &_n_SysP_MinPenSc;

DWORD SysP_MinPenVn;
StayFD _n_SysP_MinPenVn = {&SysP_MinPenVn,0,0,0,CLS_L,2,"SysP_MinPenVn","Разм. мин. пенс. - военные"};
pStayFD _SysP_MinPenVn = &_n_SysP_MinPenVn;

DWORD SysP_MinPenVz;
StayFD _n_SysP_MinPenVz = {&SysP_MinPenVz,0,0,0,CLS_L,2,"SysP_MinPenVz","Разм. мин. пенс. - социальные"};
pStayFD _SysP_MinPenVz = &_n_SysP_MinPenVz;

DWORD SysP_MinZp;
StayFD _n_SysP_MinZp = {&SysP_MinZp,0,0,0,CLS_L,2,"SysP_MinZp","Разм. мин. ЗП"};
pStayFD _SysP_MinZp = &_n_SysP_MinZp;

uint6 SysP_OgrPKoef;
StayFD _n_SysP_OgrPKoef = {&SysP_OgrPKoef,0,0,0,CLS_H,0,"SysP_OgrPKoef","Ограничение применения коэф"};
pStayFD _SysP_OgrPKoef = &_n_SysP_OgrPKoef;

uint6 SysP_OgrRez;
StayFD _n_SysP_OgrRez = {&SysP_OgrRez,0,0,0,CLS_H,0,"SysP_OgrRez","Ограничение результата перерас"};
pStayFD _SysP_OgrRez = &_n_SysP_OgrRez;

BYTE  SysP_PrMPer;
StayFD _n_SysP_PrMPer = {&SysP_PrMPer,0,0,0,CLS_S,0,"SysP_PrMPer","Признак массового перерасчета"};
pStayFD _SysP_PrMPer = &_n_SysP_PrMPer;

BYTE  SysP_PrOgr;
StayFD _n_SysP_PrOgr = {&SysP_PrOgr,0,0,0,CLS_S,0,"SysP_PrOgr","Признак ограничения"};
pStayFD _SysP_PrOgr = &_n_SysP_PrOgr;

StayDate TarPS_Data;
StayFD _n_TarPS_Data = {&TarPS_Data,0,0,0,CLS_Date,0,"TarPS_Data","Дата початку д_ї:\tSI\tIC\tа"};
pStayFD _TarPS_Data = &_n_TarPS_Data;

BYTE  TarPS_Kod;
StayFD _n_TarPS_Kod = {&TarPS_Kod,0,0,0,CLS_S,0,"TarPS_Kod","Код тарифа"};
pStayFD _TarPS_Kod = &_n_TarPS_Kod;

StayDate TarPS_DataE;
StayFD _n_TarPS_DataE = {&TarPS_DataE,0,0,0,CLS_Date,0,"TarPS_DataE","Дата закинч.д_є"};
pStayFD _TarPS_DataE = &_n_TarPS_DataE;

char TarPS_Name[51];
StayFD _n_TarPS_Name = {&TarPS_Name,0,0,0,CLS_V,50,"TarPS_Name","Вид тарифа"};
pStayFD _TarPS_Name = &_n_TarPS_Name;

uint6 TarPS_Prc;
StayFD _n_TarPS_Prc = {&TarPS_Prc,0,0,0,CLS_H,2,"TarPS_Prc","Процент почтовых сборов"};
pStayFD _TarPS_Prc = &_n_TarPS_Prc;

WORD  KlCheKfn_Cd1;
StayFD _n_KlCheKfn_Cd1 = {&KlCheKfn_Cd1,0,0,0,CLS_I,0,"KlCheKfn_Cd1","Не чернобыльский код"};
pStayFD _KlCheKfn_Cd1 = &_n_KlCheKfn_Cd1;

WORD  KlCheKfn_Cd2;
StayFD _n_KlCheKfn_Cd2 = {&KlCheKfn_Cd2,0,0,0,CLS_I,0,"KlCheKfn_Cd2","Соотв. чернобыльский код"};
pStayFD _KlCheKfn_Cd2 = &_n_KlCheKfn_Cd2;

WORD  KlCng_NewKfn;
StayFD _n_KlCng_NewKfn = {&KlCng_NewKfn,0,0,0,CLS_I,0,"KlCng_NewKfn","Новый основной код выплаты"};
pStayFD _KlCng_NewKfn = &_n_KlCng_NewKfn;

WORD  KlCng_OldKfn;
StayFD _n_KlCng_OldKfn = {&KlCng_OldKfn,0,0,0,CLS_I,0,"KlCng_OldKfn","Старый основной код выплаты"};
pStayFD _KlCng_OldKfn = &_n_KlCng_OldKfn;

BYTE  KlTerm_Code;
StayFD _n_KlTerm_Code = {&KlTerm_Code,0,0,0,CLS_S,0,"KlTerm_Code","Код периода"};
pStayFD _KlTerm_Code = &_n_KlTerm_Code;

char KlTerm_Name[51];
StayFD _n_KlTerm_Name = {&KlTerm_Name,0,0,0,CLS_V,50,"KlTerm_Name","Наименование периода"};
pStayFD _KlTerm_Name = &_n_KlTerm_Name;

WORD  KlProMin_Code;
StayFD _n_KlProMin_Code = {&KlProMin_Code,0,0,0,CLS_I,0,"KlProMin_Code","Код размера прож.мин."};
pStayFD _KlProMin_Code = &_n_KlProMin_Code;

StayDate KlProMin_DataB;
StayFD _n_KlProMin_DataB = {&KlProMin_DataB,0,0,0,CLS_Date,0,"KlProMin_DataB","Дата нач.действия кода"};
pStayFD _KlProMin_DataB = &_n_KlProMin_DataB;

StayDate KlProMin_DataE;
StayFD _n_KlProMin_DataE = {&KlProMin_DataE,0,0,0,CLS_Date,0,"KlProMin_DataE","Дата кон. действ.кода"};
pStayFD _KlProMin_DataE = &_n_KlProMin_DataE;

char KlProMin_Name[26];
StayFD _n_KlProMin_Name = {&KlProMin_Name,0,0,0,CLS_V,25,"KlProMin_Name","Наименование"};
pStayFD _KlProMin_Name = &_n_KlProMin_Name;

int6 KlProMin_Sum;
StayFD _n_KlProMin_Sum = {&KlProMin_Sum,0,0,0,CLS_Hs,2,"KlProMin_Sum","Размер прож.мин."};
pStayFD _KlProMin_Sum = &_n_KlProMin_Sum;

char Kltpl_Name[51];
StayFD _n_Kltpl_Name = {&Kltpl_Name,0,0,0,CLS_V,50,"Kltpl_Name","Название переплаты"};
pStayFD _Kltpl_Name = &_n_Kltpl_Name;

char Kltpl_Ob[11];
StayFD _n_Kltpl_Ob = {&Kltpl_Ob,0,0,0,CLS_V,10,"Kltpl_Ob","метка обработанности"};
pStayFD _Kltpl_Ob = &_n_Kltpl_Ob;

BYTE  Kltpl_Tip;
StayFD _n_Kltpl_Tip = {&Kltpl_Tip,0,0,0,CLS_S,0,"Kltpl_Tip","Номер переплаты"};
pStayFD _Kltpl_Tip = &_n_Kltpl_Tip;

char KlOrgR_Adr[51];
StayFD _n_KlOrgR_Adr = {&KlOrgR_Adr,0,0,0,CLS_V,50,"KlOrgR_Adr","Адрес организации"};
pStayFD _KlOrgR_Adr = &_n_KlOrgR_Adr;

uint6 KlOrgR_Code;
StayFD _n_KlOrgR_Code = {&KlOrgR_Code,0,0,0,CLS_H,0,"KlOrgR_Code","Код организации по ЭКПО"};
pStayFD _KlOrgR_Code = &_n_KlOrgR_Code;

StayDate KlOrgR_DBeg;
StayFD _n_KlOrgR_DBeg = {&KlOrgR_DBeg,0,0,0,CLS_Date,0,"KlOrgR_DBeg","Дата начала действия данных"};
pStayFD _KlOrgR_DBeg = &_n_KlOrgR_DBeg;

StayDate KlOrgR_DEnd;
StayFD _n_KlOrgR_DEnd = {&KlOrgR_DEnd,0,0,0,CLS_Date,0,"KlOrgR_DEnd","Дата конца  действия данных"};
pStayFD _KlOrgR_DEnd = &_n_KlOrgR_DEnd;

DWORD KlOrgR_IndPO;
StayFD _n_KlOrgR_IndPO = {&KlOrgR_IndPO,0,0,0,CLS_L,0,"KlOrgR_IndPO","Индекс ПО (KlInd_)"};
pStayFD _KlOrgR_IndPO = &_n_KlOrgR_IndPO;

DWORD KlOrgR_MFO;
StayFD _n_KlOrgR_MFO = {&KlOrgR_MFO,0,0,0,CLS_L,0,"KlOrgR_MFO","МФО"};
pStayFD _KlOrgR_MFO = &_n_KlOrgR_MFO;

char KlOrgR_NRSO[15];
StayFD _n_KlOrgR_NRSO = {&KlOrgR_NRSO,0,0,0,CLS_V,14,"KlOrgR_NRSO","Номер Р/с организации"};
pStayFD _KlOrgR_NRSO = &_n_KlOrgR_NRSO;

char KlOrgR_Name[51];
StayFD _n_KlOrgR_Name = {&KlOrgR_Name,0,0,0,CLS_V,50,"KlOrgR_Name","Наименование организации"};
pStayFD _KlOrgR_Name = &_n_KlOrgR_Name;

char KlOrgR_NameB[41];
StayFD _n_KlOrgR_NameB = {&KlOrgR_NameB,0,0,0,CLS_V,40,"KlOrgR_NameB","Наименование банка"};
pStayFD _KlOrgR_NameB = &_n_KlOrgR_NameB;

char KlOrgR_DopNr[15];
StayFD _n_KlOrgR_DopNr = {&KlOrgR_DopNr,0,0,0,CLS_V,14,"KlOrgR_DopNr","Доп.к ном.Р/С организации"};
pStayFD _KlOrgR_DopNr = &_n_KlOrgR_DopNr;

char KlOrgR_PrivO[15];
StayFD _n_KlOrgR_PrivO = {&KlOrgR_PrivO,0,0,0,CLS_V,14,"KlOrgR_PrivO","Личн.Р/С организации"};
pStayFD _KlOrgR_PrivO = &_n_KlOrgR_PrivO;

char KlOrgR_Prim[51];
StayFD _n_KlOrgR_Prim = {&KlOrgR_Prim,0,0,0,CLS_V,50,"KlOrgR_Prim","Примечания"};
pStayFD _KlOrgR_Prim = &_n_KlOrgR_Prim;

WORD  KlOrgR_ProcB;
StayFD _n_KlOrgR_ProcB = {&KlOrgR_ProcB,0,0,0,CLS_I,2,"KlOrgR_ProcB","Процент бюджета организации"};
pStayFD _KlOrgR_ProcB = &_n_KlOrgR_ProcB;

BYTE  DiapPS_Code;
StayFD _n_DiapPS_Code = {&DiapPS_Code,0,0,0,CLS_S,0,"DiapPS_Code","Код тарифа по диапазону сумм"};
pStayFD _DiapPS_Code = &_n_DiapPS_Code;

uint6 DiapPS_Min;
StayFD _n_DiapPS_Min = {&DiapPS_Min,0,0,0,CLS_H,2,"DiapPS_Min","Мин.  сумма диапазона"};
pStayFD _DiapPS_Min = &_n_DiapPS_Min;

uint6 DiapPS_Max;
StayFD _n_DiapPS_Max = {&DiapPS_Max,0,0,0,CLS_H,2,"DiapPS_Max","Макс. сумма диапазона"};
pStayFD _DiapPS_Max = &_n_DiapPS_Max;

BYTE  DiapPS_PrEd;
StayFD _n_DiapPS_PrEd = {&DiapPS_PrEd,0,0,0,CLS_S,0,"DiapPS_PrEd","Призн.,в каких ЕД.наход.П/С(0 - в %,1 - в грн.)"};
pStayFD _DiapPS_PrEd = &_n_DiapPS_PrEd;

uint6 DiapPS_Prc;
StayFD _n_DiapPS_Prc = {&DiapPS_Prc,0,0,0,CLS_H,2,"DiapPS_Prc","Почтовый сбор ( в % либо в грн.)"};
pStayFD _DiapPS_Prc = &_n_DiapPS_Prc;

WORD  KlAtQ_Code;
StayFD _n_KlAtQ_Code = {&KlAtQ_Code,0,0,0,CLS_I,0,"KlAtQ_Code","Код тер-ного образования"};
pStayFD _KlAtQ_Code = &_n_KlAtQ_Code;

char KlAtQ_Name[101];
StayFD _n_KlAtQ_Name = {&KlAtQ_Name,0,0,0,CLS_V,100,"KlAtQ_Name","Назва тер-ного утворення"};
pStayFD _KlAtQ_Name = &_n_KlAtQ_Name;

uint6 KlDohNal_Razm;
StayFD _n_KlDohNal_Razm = {&KlDohNal_Razm,0,0,0,CLS_H,2,"KlDohNal_Razm","Сума MAX доходу"};
pStayFD _KlDohNal_Razm = &_n_KlDohNal_Razm;

StayDate KlDohNal_DataB;
StayFD _n_KlDohNal_DataB = {&KlDohNal_DataB,0,0,0,CLS_Date,0,"KlDohNal_DataB","Дата встановл.MAX доходу  - початок"};
pStayFD _KlDohNal_DataB = &_n_KlDohNal_DataB;

StayDate KlDohNal_DataE;
StayFD _n_KlDohNal_DataE = {&KlDohNal_DataE,0,0,0,CLS_Date,0,"KlDohNal_DataE","Дата встановл.MAX доходу  - кінцева"};
pStayFD _KlDohNal_DataE = &_n_KlDohNal_DataE;

BYTE  KlVidZar_Code;
StayFD _n_KlVidZar_Code = {&KlVidZar_Code,0,0,0,CLS_S,0,"KlVidZar_Code","Код заробітку"};
pStayFD _KlVidZar_Code = &_n_KlVidZar_Code;

char KlVidZar_Name[41];
StayFD _n_KlVidZar_Name = {&KlVidZar_Name,0,0,0,CLS_V,40,"KlVidZar_Name","Назва виду заробітку"};
pStayFD _KlVidZar_Name = &_n_KlVidZar_Name;

uint6 KlSrNx_Razm;
StayFD _n_KlSrNx_Razm = {&KlSrNx_Razm,0,0,0,CLS_H,5,"KlSrNx_Razm","Сума середн.зарпл.по н/г"};
pStayFD _KlSrNx_Razm = &_n_KlSrNx_Razm;

StayDate KlSrNx_DataB;
StayFD _n_KlSrNx_DataB = {&KlSrNx_DataB,0,0,0,CLS_Date,0,"KlSrNx_DataB","Дата встановл.середн.зарпл.по н/г- початок"};
pStayFD _KlSrNx_DataB = &_n_KlSrNx_DataB;

StayDate KlSrNx_DataE;
StayFD _n_KlSrNx_DataE = {&KlSrNx_DataE,0,0,0,CLS_Date,0,"KlSrNx_DataE","Дата встановл.середн.зарпл.по н/г- кінець"};
pStayFD _KlSrNx_DataE = &_n_KlSrNx_DataE;

StayDate KlSrNx_DataNad;
StayFD _n_KlSrNx_DataNad = {&KlSrNx_DataNad,0,0,0,CLS_Date,0,"KlSrNx_DataNad","Дата надання інформ.про сер.зарпл.по н/г"};
pStayFD _KlSrNx_DataNad = &_n_KlSrNx_DataNad;

char KlOsVidz_Name[151];
StayFD _n_KlOsVidz_Name = {&KlOsVidz_Name,0,0,0,CLS_V,150,"KlOsVidz_Name","Назва особл.відзнаки"};
pStayFD _KlOsVidz_Name = &_n_KlOsVidz_Name;

WORD  KlOsVidz_Code;
StayFD _n_KlOsVidz_Code = {&KlOsVidz_Code,0,0,0,CLS_I,0,"KlOsVidz_Code","Код особл.відзнаки"};
pStayFD _KlOsVidz_Code = &_n_KlOsVidz_Code;

WORD  KlStran_Code;
StayFD _n_KlStran_Code = {&KlStran_Code,0,0,0,CLS_I,0,"KlStran_Code","Код страни"};
pStayFD _KlStran_Code = &_n_KlStran_Code;

char KlStran_Name[41];
StayFD _n_KlStran_Name = {&KlStran_Name,0,0,0,CLS_V,40,"KlStran_Name","Наимен.страни"};
pStayFD _KlStran_Name = &_n_KlStran_Name;

WORD  KlIndex_GodNar;
StayFD _n_KlIndex_GodNar = {&KlIndex_GodNar,0,0,0,CLS_I,0,"KlIndex_GodNar","Рік нарахування"};
pStayFD _KlIndex_GodNar = &_n_KlIndex_GodNar;

BYTE  KlIndex_MecNar;
StayFD _n_KlIndex_MecNar = {&KlIndex_MecNar,0,0,0,CLS_S,0,"KlIndex_MecNar","Місяць нарахування"};
pStayFD _KlIndex_MecNar = &_n_KlIndex_MecNar;

WORD  KlIndex_GodBaz;
StayFD _n_KlIndex_GodBaz = {&KlIndex_GodBaz,0,0,0,CLS_I,0,"KlIndex_GodBaz","Базовий рік"};
pStayFD _KlIndex_GodBaz = &_n_KlIndex_GodBaz;

BYTE  KlIndex_MecBaz;
StayFD _n_KlIndex_MecBaz = {&KlIndex_MecBaz,0,0,0,CLS_S,0,"KlIndex_MecBaz","Базовий місяць"};
pStayFD _KlIndex_MecBaz = &_n_KlIndex_MecBaz;

uint6 KlIndex_Koef;
StayFD _n_KlIndex_Koef = {&KlIndex_Koef,0,0,0,CLS_H,5,"KlIndex_Koef","Коефіцієнт індексації"};
pStayFD _KlIndex_Koef = &_n_KlIndex_Koef;

WORD  Cost_CodeOrg;
StayFD _n_Cost_CodeOrg = {&Cost_CodeOrg,0,0,0,CLS_I,0,"Cost_CodeOrg","Код організац.із B_KlOVUd"};
pStayFD _Cost_CodeOrg = &_n_Cost_CodeOrg;

WORD  Cost_CodeSum;
StayFD _n_Cost_CodeSum = {&Cost_CodeSum,0,0,0,CLS_I,0,"Cost_CodeSum","Код вартості утримання"};
pStayFD _Cost_CodeSum = &_n_Cost_CodeSum;

StayDate Cost_DtB;
StayFD _n_Cost_DtB = {&Cost_DtB,0,0,0,CLS_Date,0,"Cost_DtB","Дата вартості  з"};
pStayFD _Cost_DtB = &_n_Cost_DtB;

StayDate Cost_DtE;
StayFD _n_Cost_DtE = {&Cost_DtE,0,0,0,CLS_Date,0,"Cost_DtE","Дата вартості  по"};
pStayFD _Cost_DtE = &_n_Cost_DtE;

uint6 Cost_SumDpi;
StayFD _n_Cost_SumDpi = {&Cost_SumDpi,0,0,0,CLS_H,2,"Cost_SumDpi","Розмір вартості утримання"};
pStayFD _Cost_SumDpi = &_n_Cost_SumDpi;

uint6 Cost_DodSum;
StayFD _n_Cost_DodSum = {&Cost_DodSum,0,0,0,CLS_H,2,"Cost_DodSum","додаткова сума"};
pStayFD _Cost_DodSum = &_n_Cost_DodSum;

WORD  Cost_Priznak;
StayFD _n_Cost_Priznak = {&Cost_Priznak,0,0,0,CLS_I,0,"Cost_Priznak","ознака"};
pStayFD _Cost_Priznak = &_n_Cost_Priznak;

uint6 Cost_Procent;
StayFD _n_Cost_Procent = {&Cost_Procent,0,0,0,CLS_H,2,"Cost_Procent","відсоток"};
pStayFD _Cost_Procent = &_n_Cost_Procent;

char KlInd6PF_Adr[51];
StayFD _n_KlInd6PF_Adr = {&KlInd6PF_Adr,0,0,0,CLS_V,50,"KlInd6PF_Adr","Поштов.адреса індексу"};
pStayFD _KlInd6PF_Adr = &_n_KlInd6PF_Adr;

DWORD KlInd6PF_Ind;
StayFD _n_KlInd6PF_Ind = {&KlInd6PF_Ind,0,0,0,CLS_L,0,"KlInd6PF_Ind","Індекс"};
pStayFD _KlInd6PF_Ind = &_n_KlInd6PF_Ind;

BYTE  KlInd6PF_TPS;
StayFD _n_KlInd6PF_TPS = {&KlInd6PF_TPS,0,0,0,CLS_S,0,"KlInd6PF_TPS","Тариф поштових сборів"};
pStayFD _KlInd6PF_TPS = &_n_KlInd6PF_TPS;

WORD  KlInd6PF_Kod;
StayFD _n_KlInd6PF_Kod = {&KlInd6PF_Kod,0,0,0,CLS_I,0,"KlInd6PF_Kod","Код насел.пункту"};
pStayFD _KlInd6PF_Kod = &_n_KlInd6PF_Kod;

char KlInd6PF_Name[31];
StayFD _n_KlInd6PF_Name = {&KlInd6PF_Name,0,0,0,CLS_V,30,"KlInd6PF_Name","Назва коду насел.пункту"};
pStayFD _KlInd6PF_Name = &_n_KlInd6PF_Name;

char KlNpVidz_Name[251];
StayFD _n_KlNpVidz_Name = {&KlNpVidz_Name,0,0,0,CLS_V,250,"KlNpVidz_Name","Назва заслуги"};
pStayFD _KlNpVidz_Name = &_n_KlNpVidz_Name;

WORD  KlNpVidz_Code;
StayFD _n_KlNpVidz_Code = {&KlNpVidz_Code,0,0,0,CLS_I,0,"KlNpVidz_Code","Код заслуги"};
pStayFD _KlNpVidz_Code = &_n_KlNpVidz_Code;

WORD  KlNpVidz_CdSt;
StayFD _n_KlNpVidz_CdSt = {&KlNpVidz_CdSt,0,0,0,CLS_I,0,"KlNpVidz_CdSt","Код пункту статті"};
pStayFD _KlNpVidz_CdSt = &_n_KlNpVidz_CdSt;

WORD  KlNpVidz_Razm;
StayFD _n_KlNpVidz_Razm = {&KlNpVidz_Razm,0,0,0,CLS_I,0,"KlNpVidz_Razm","Розмір надбавки(в %)"};
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
           "KLBASE1:JOINT.DT",ix_B_Joint,"База несовместимых пособий","B_Joint",16};
pStayDataset B_Joint = &_n_B_Joint;

static pStayFD tcm_B_KlAt[] =
{
 (StayFD *)&_n_KlAt_Code,
 (StayFD *)&_n_KlAt_Name,
 NULL
};
static BYTE ix_B_KlAt[] = {1,1,1,0};
StayDataset _n_B_KlAt = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlAt,NULL,
           "KLBASE1:KLAT.DT",ix_B_KlAt,"Справочник территориальных образований","B_KlAt",};
pStayDataset B_KlAt = &_n_B_KlAt;

static pStayFD tcm_B_KlCFam[] =
{
 (StayFD *)&_n_KlCFam_Code,
 (StayFD *)&_n_KlCFam_Name,
 NULL
};
static BYTE ix_B_KlCFam[] = {1,1,65,0};
StayDataset _n_B_KlCFam = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlCFam,NULL,
           "KLBASE1:KLCFAM.DT",ix_B_KlCFam,"Классификатор категорий членов семьи","B_KlCFam",};
pStayDataset B_KlCFam = &_n_B_KlCFam;

static pStayFD tcm_B_KlChe[] =
{
 (StayFD *)&_n_KlChe_Code,
 (StayFD *)&_n_KlChe_Name,
 NULL
};
static BYTE ix_B_KlChe[] = {1,1,1,0};
StayDataset _n_B_KlChe = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlChe,NULL,
           "KLBASE1:KLCHE.DT",ix_B_KlChe,"Справочник категорий пострадавших на ЧАЭС","B_KlChe",};
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
           "KLBASE3:KLCOMDSH.DT",ix_B_KlComDsh,"Справочник размеров компенсаций дошкольникам","B_KlComDsh",0};
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
           "KLBASE1:KLDKVP.DT",ix_B_KlDKVp,"Справочник документов-оснований для компенсационных","B_KlDKVp",};
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
           "KLBASE3:KLDUCH.DT",ix_B_KlDUch,"Справочник доставочных участков","B_KlDUch",10};
pStayDataset B_KlDUch = &_n_B_KlDUch;

static pStayFD tcm_B_KlDUch_D[] =
{
 (StayFD *)&_n_KlDUch_Data,
 (StayFD *)&_n_B_KlDUch_A,
 NULL
};
static BYTE ix_B_KlDUch_D[] = {1,1,1,0};
StayDataset _n_B_KlDUch_D = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlDUch_D,NULL,
           NULL,ix_B_KlDUch_D,"Дата доставочных участков","B_KlDUch_D",};
pStayDataset B_KlDUch_D = &_n_B_KlDUch_D;

static pStayFD tcm_B_KlDUch_A[] =
{
 (StayFD *)&_n_KlDUch_CodeUl,
 (StayFD *)&_n_KlDUch_About,
 NULL
};
static BYTE ix_B_KlDUch_A[] = {1,1,65,0};
StayDataset _n_B_KlDUch_A = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlDUch_A,NULL,
           NULL,ix_B_KlDUch_A,"Справочник описания Д.У.","B_KlDUch_A",};
pStayDataset B_KlDUch_A = &_n_B_KlDUch_A;

static pStayFD tcm_B_KlDoUd[] =
{
 (StayFD *)&_n_KlDoUd_Code,
 (StayFD *)&_n_KlDoUd_Name,
 NULL
};
static BYTE ix_B_KlDoUd[] = {1,1,1,0};
StayDataset _n_B_KlDoUd = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlDoUd,NULL,
           "KLBASE1:KLDOUD.DT",ix_B_KlDoUd,"Справочник документов-оснований для удержания","B_KlDoUd",};
pStayDataset B_KlDoUd = &_n_B_KlDoUd;

static pStayFD tcm_B_KlDoc[] =
{
 (StayFD *)&_n_KlDoc_Kdoc,
 (StayFD *)&_n_KlDoc_Ndoc,
 NULL
};
static BYTE ix_B_KlDoc[] = {1,1,1,0};
StayDataset _n_B_KlDoc = {NULL,TAG_DATASET,0,0,DS_QBASE,0,1,0,NULL,tcm_B_KlDoc,NULL,
           "KLBASE4:KLDOC.DT",ix_B_KlDoc,"Справочник документов ведения ЛС","B_KlDoc",16};
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
           "KLBASE1:KLDOCNZ.DT",ix_B_KlDocNz,"Список необходимых документов","B_KlDocNz",16};
pStayDataset B_KlDocNz = &_n_B_KlDocNz;

static pStayFD tcm_Doc_Reg1[] =
{
 (StayFD *)&_n_Doc_Code,
 NULL
};
static BYTE ix_Doc_Reg1[] = {1,1,1,0};
StayDataset _n_Doc_Reg1 = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_Doc_Reg1,NULL,
           NULL,ix_Doc_Reg1,"Список документов для назначения","Doc_Reg1",};
pStayDataset Doc_Reg1 = &_n_Doc_Reg1;

static pStayFD tcm_Doc_Reg2[] =
{
 (StayFD *)&_n_Doc_Code,
 NULL
};
static BYTE ix_Doc_Reg2[] = {1,1,65,0};
StayDataset _n_Doc_Reg2 = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_Doc_Reg2,NULL,
           NULL,ix_Doc_Reg2,"Список документов для перерасчет","Doc_Reg2",};
pStayDataset Doc_Reg2 = &_n_Doc_Reg2;

static pStayFD tcm_B_KlDox[] =
{
 (StayFD *)&_n_KlDox_Code,
 (StayFD *)&_n_KlDox_Name,
 NULL
};
static BYTE ix_B_KlDox[] = {1,1,1,0};
StayDataset _n_B_KlDox = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlDox,NULL,
           "KLBASE1:KLDOX.DT",ix_B_KlDox,"Массив категорий доходов","B_KlDox",};
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
           "KLBASE3:KLEARTH.DT",ix_B_KlEarth,"База размеров стоимости сотки","B_KlEarth",};
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
           "KLBASE1:KLFN.DT",ix_B_KlFN,"Справочник видов выплат","B_KlFN",10};
pStayDataset B_KlFN = &_n_B_KlFN;

static pStayFD tcm_B_KlHl[] =
{
 (StayFD *)&_n_Klhl_Date,
 (StayFD *)&_n_Klhl_Name,
 NULL
};
static BYTE ix_B_KlHl[] = {1,1,1,0};
StayDataset _n_B_KlHl = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlHl,NULL,
           "KLBASE1:KLHL.DT",ix_B_KlHl,"Справочник праздников текущего и предыдущего года","B_KlHl",};
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
           "KLBASE3:KLIF.DT",ix_B_KlIF,"Справ. Р/С ист.финанс.","B_KlIF",};
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
           "KLBASE1:KLIFUKR.DT",ix_B_KlIFUKR,"Справочник источников финансирования","B_KlIFUKR",};
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
           "KLBASE2:KLIND.DT",ix_B_KlInd,"Справочник адресов почтовых индексов","B_KlInd",16};
pStayDataset B_KlInd = &_n_B_KlInd;

static pStayFD tcm_B_KlInf[] =
{
 (StayFD *)&_n_KlInf_Code,
 (StayFD *)&_n_KlInf_Name,
 NULL
};
static BYTE ix_B_KlInf[] = {1,1,1,0};
StayDataset _n_B_KlInf = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlInf,NULL,
           "KLBASE1:KLINF.DT",ix_B_KlInf,"Справочник справок для назначения пособия","B_KlInf",};
pStayDataset B_KlInf = &_n_B_KlInf;

static pStayFD tcm_B_KlInv[] =
{
 (StayFD *)&_n_KlInv_Code,
 (StayFD *)&_n_KlInv_Name,
 NULL
};
static BYTE ix_B_KlInv[] = {1,1,1,0};
StayDataset _n_B_KlInv = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlInv,NULL,
           "KLBASE1:KLINV.DT",ix_B_KlInv,"Справочник видов инвалидности (групп)","B_KlInv",};
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
           "KLBASE1:KLKRZP.DT",ix_B_KlKRZp,"База коэффициентов роста заработной платы","B_KlKRZp",};
pStayDataset B_KlKRZp = &_n_B_KlKRZp;

static pStayFD tcm_B_KlKatUl[] =
{
 (StayFD *)&_n_KlKatUl_Code,
 (StayFD *)&_n_KlKatUl_Name,
 NULL
};
static BYTE ix_B_KlKatUl[] = {1,1,1,0};
StayDataset _n_B_KlKatUl = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlKatUl,NULL,
           "KLBASE1:KLKATUL.DT",ix_B_KlKatUl,"Справочник категорий улиц","B_KlKatUl",};
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
           "KLBASE1:KLKFP.DT",ix_B_KlKfp,"Справочник коэффициентов повышения пенсий","B_KlKfp",};
pStayDataset B_KlKfp = &_n_B_KlKfp;

static pStayFD tcm_B_KlKor[] =
{
 (StayFD *)&_n_KlKor_Code,
 (StayFD *)&_n_KlKor_Name,
 NULL
};
static BYTE ix_B_KlKor[] = {1,1,1,0};
StayDataset _n_B_KlKor = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlKor,NULL,
           "KLBASE1:KLKOR.DT",ix_B_KlKor,"Справочник категорий кормильцев","B_KlKor",};
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
           "KLBASE1:KLLRAB.DT",ix_B_KlLRab,"Справочник работ льотного состава","B_KlLRab",};
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
           "KLBASE1:KLLGK.DT",ix_B_KlLgk,"Справочник льготных коэффициентов","B_KlLgk",};
pStayDataset B_KlLgk = &_n_B_KlLgk;

static pStayFD tcm_B_KlNWork[] =
{
 (StayFD *)&_n_NWork_Code,
 (StayFD *)&_n_NWork_Name,
 NULL
};
static BYTE ix_B_KlNWork[] = {1,1,65,0};
StayDataset _n_B_KlNWork = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlNWork,NULL,
           "KLBASE1:KLNWORK.DT",ix_B_KlNWork,"База причин, по кот. не раб.","B_KlNWork",};
pStayDataset B_KlNWork = &_n_B_KlNWork;

static pStayFD tcm_B_KlNet[] =
{
 (StayFD *)&_n_KlNet_Code,
 (StayFD *)&_n_KlNet_Name,
 NULL
};
static BYTE ix_B_KlNet[] = {1,1,1,0};
StayDataset _n_B_KlNet = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlNet,NULL,
           "KLBASE1:KLNET.DT",ix_B_KlNet,"Справочник категорий нетрудоспособности","B_KlNet",};
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
           "KLBASE3:KLORG163.DT",ix_B_KlORG163,"Справочник орг,финансир.доп.код выпл.","B_KlORG163",};
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
           "KLBASE2:KLOS.DT",ix_B_KlOS,"Справочник отделений связи","B_KlOS",};
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
           "KLBASE2:KLOSZ.DT",ix_B_KlOSZ,"Справочник органов социальной защиты","B_KlOSZ",};
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
           "KLBASE4:KLOVUD.DT",ix_B_KlOVUd,"Справочник организаций-взыскателей удержаний","B_KlOVUd",};
pStayDataset B_KlOVUd = &_n_B_KlOVUd;

static pStayFD tcm_B_KlOp[] =
{
 (StayFD *)&_n_KlOp_Code,
 (StayFD *)&_n_KlOp_Name,
 NULL
};
static BYTE ix_B_KlOp[] = {1,1,1,0};
StayDataset _n_B_KlOp = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlOp,NULL,
           "KLBASE1:KLOP.DT",ix_B_KlOp,"Справочник кодов операций","B_KlOp",};
pStayDataset B_KlOp = &_n_B_KlOp;

static pStayFD tcm_B_KlOrg[] =
{
 (StayFD *)&_n_KlOrg_Code,
 (StayFD *)&_n_KlOrg_Name,
 NULL
};
static BYTE ix_B_KlOrg[] = {1,1,1,0};
StayDataset _n_B_KlOrg = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlOrg,NULL,
           "KLBASE4:KLORG.DT",ix_B_KlOrg,"Справочник организаций, издающих распоряжения","B_KlOrg",};
pStayDataset B_KlOrg = &_n_B_KlOrg;

static pStayFD tcm_B_KlOsob[] =
{
 (StayFD *)&_n_KlOsob_Code,
 (StayFD *)&_n_KlOsob_Name,
 NULL
};
static BYTE ix_B_KlOsob[] = {1,1,1,0};
StayDataset _n_B_KlOsob = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlOsob,NULL,
           "KLBASE1:BKLOSOB.DT",ix_B_KlOsob,"Справочник особенностей","B_KlOsob",};
pStayDataset B_KlOsob = &_n_B_KlOsob;

static pStayFD tcm_B_KlPInv[] =
{
 (StayFD *)&_n_KlPInv_Code,
 (StayFD *)&_n_KlPInv_Name,
 NULL
};
static BYTE ix_B_KlPInv[] = {1,1,1,0};
StayDataset _n_B_KlPInv = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlPInv,NULL,
           "KLBASE1:KLPINV.DT",ix_B_KlPInv,"Справочник причин инвалидности","B_KlPInv",};
pStayDataset B_KlPInv = &_n_B_KlPInv;

static pStayFD tcm_B_KlPNo[] =
{
 (StayFD *)&_n_KlPNo_Code,
 (StayFD *)&_n_KlPNo_Name,
 NULL
};
static BYTE ix_B_KlPNo[] = {1,1,1,0};
StayDataset _n_B_KlPNo = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlPNo,NULL,
           "KLBASE1:KLPNO.DT",ix_B_KlPNo,"Справочник причин неоплаты","B_KlPNo",};
pStayDataset B_KlPNo = &_n_B_KlPNo;

static pStayFD tcm_B_KlPRab[] =
{
 (StayFD *)&_n_KlPRab_Code,
 (StayFD *)&_n_KlPRab_Name,
 NULL
};
static BYTE ix_B_KlPRab[] = {1,1,1,0};
StayDataset _n_B_KlPRab = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlPRab,NULL,
           "KLBASE1:KLPRAB.DT",ix_B_KlPRab,"Справочник характеристик работы пенсионеров","B_KlPRab",};
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
           "KLBASE1:KLPS.DT",ix_B_KlPS,"Справочник причин смерти кормильца","B_KlPS",};
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
           "KLBASE2:KLPSB.DT",ix_B_KlPSB,"Справочник БАНКОВ","B_KlPSB",10};
pStayDataset B_KlPSB = &_n_B_KlPSB;

static pStayFD tcm_B_KlPSUd[] =
{
 (StayFD *)&_n_KlPSUd_Code,
 (StayFD *)&_n_KlPSUd_Name,
 NULL
};
static BYTE ix_B_KlPSUd[] = {1,1,1,0};
StayDataset _n_B_KlPSUd = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlPSUd,NULL,
           "KLBASE1:KLPSUD.DT",ix_B_KlPSUd,"Справочник причин снятия удержания","B_KlPSUd",};
pStayDataset B_KlPSUd = &_n_B_KlPSUd;

static pStayFD tcm_B_KlPSn[] =
{
 (StayFD *)&_n_KlPSn_Code,
 (StayFD *)&_n_KlPSn_Name,
 NULL
};
static BYTE ix_B_KlPSn[] = {1,1,1,0};
StayDataset _n_B_KlPSn = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlPSn,NULL,
           "KLBASE1:KLPSN.DT",ix_B_KlPSn,"Справочник причин снятия с оплаты","B_KlPSn",};
pStayDataset B_KlPSn = &_n_B_KlPSn;

static pStayFD tcm_B_KlPar[] =
{
 (StayFD *)&_n_Par_Code,
 (StayFD *)&_n_Par_Name,
 NULL
};
static BYTE ix_B_KlPar[] = {1,1,65,0};
StayDataset _n_B_KlPar = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlPar,NULL,
           "KLBASE1:KLPAR.DT",ix_B_KlPar,"Справочник категорий родителей","B_KlPar",};
pStayDataset B_KlPar = &_n_B_KlPar;

static pStayFD tcm_B_KlPost[] =
{
 (StayFD *)&_n_KlPost_Code,
 (StayFD *)&_n_KlPost_Name,
 NULL
};
static BYTE ix_B_KlPost[] = {1,1,1,0};
StayDataset _n_B_KlPost = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlPost,NULL,
           "KLBASE1:KLPOST.DT",ix_B_KlPost,"Справочник типов пострадавших на ЧАЭС","B_KlPost",};
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
           "KLBASE1:KLPOV.DT",ix_B_KlPov,"Справочник повышений","B_KlPov",};
pStayDataset B_KlPov = &_n_B_KlPov;

static pStayFD tcm_B_KlPred[] =
{
 (StayFD *)&_n_KlPred_Code,
 (StayFD *)&_n_KlPred_Name,
 NULL
};
static BYTE ix_B_KlPred[] = {1,1,1,0};
StayDataset _n_B_KlPred = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlPred,NULL,
           "KLBASE3:KLPRED.DT",ix_B_KlPred,"Справочник организаций-плательщиков","B_KlPred",};
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
           "KLBASE1:KLPROF.DT",ix_B_KlProf,"Справочник профессий","B_KlProf",};
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
           "KLBASE1:KLRPEN.DT",ix_B_KlRPen,"Справочник размеров платежей","B_KlRPen",16};
pStayDataset B_KlRPen = &_n_B_KlRPen;

static pStayFD tcm_B_KlRod[] =
{
 (StayFD *)&_n_KlRod_Code,
 (StayFD *)&_n_KlRod_Name,
 NULL
};
static BYTE ix_B_KlRod[] = {1,1,1,0};
StayDataset _n_B_KlRod = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlRod,NULL,
           "KLBASE1:KLROD.DT",ix_B_KlRod,"Классификатор категорий родства иждивенца","B_KlRod",};
pStayDataset B_KlRod = &_n_B_KlRod;

static pStayFD tcm_B_KlSPUd[] =
{
 (StayFD *)&_n_KlSPUd_Code,
 (StayFD *)&_n_KlSPUd_Name,
 NULL
};
static BYTE ix_B_KlSPUd[] = {1,1,1,0};
StayDataset _n_B_KlSPUd = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlSPUd,NULL,
           "KLBASE1:KLSPUD.DT",ix_B_KlSPUd,"Справочник состояний переводов удержаний","B_KlSPUd",};
pStayDataset B_KlSPUd = &_n_B_KlSPUd;

static pStayFD tcm_B_KlSVUd[] =
{
 (StayFD *)&_n_KlSVUd_Code,
 (StayFD *)&_n_KlSVUd_Name,
 NULL
};
static BYTE ix_B_KlSVUd[] = {1,1,1,0};
StayDataset _n_B_KlSVUd = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlSVUd,NULL,
           "KLBASE1:KLSVUD.DT",ix_B_KlSVUd,"Справочник способов выплаты удержаний","B_KlSVUd",};
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
           "KLBASE1:KLSHP.DT",ix_B_KlShP,"Справочник шифров пенсий","B_KlShP",16};
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
           "KLBASE1:KLSHPN.DT",ix_B_KlShPN,"Справочник наименований шифров","B_KlShPN",16};
pStayDataset B_KlShPN = &_n_B_KlShPN;

static pStayFD tcm_B_KlSposUd[] =
{
 (StayFD *)&_n_KlSposUd_Code,
 (StayFD *)&_n_KlSposUd_Name,
 NULL
};
static BYTE ix_B_KlSposUd[] = {1,1,1,0};
StayDataset _n_B_KlSposUd = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlSposUd,NULL,
           "KLBASE1:KLSPOSUD.DT",ix_B_KlSposUd,"Справочник способов удержаний","B_KlSposUd",};
pStayDataset B_KlSposUd = &_n_B_KlSposUd;

static pStayFD tcm_B_KlStagInv[] =
{
 (StayFD *)&_n_KlStag_Vozr,
 (StayFD *)&_n_KlStag_Stag,
 NULL
};
static BYTE ix_B_KlStagInv[] = {1,1,1,0};
StayDataset _n_B_KlStagInv = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlStagInv,NULL,
           "KLBASE1:KLSTAGIN.DT",ix_B_KlStagInv,"Справочник стажей","B_KlStagInv",};
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
           "KLBASE4:KLSUD.DT",ix_B_KlSud,"Справочник судов","B_KlSud",};
pStayDataset B_KlSud = &_n_B_KlSud;

static pStayFD tcm_B_KlTPer[] =
{
 (StayFD *)&_n_KlTPer_Code,
 (StayFD *)&_n_KlTPer_Name,
 NULL
};
static BYTE ix_B_KlTPer[] = {1,1,1,0};
StayDataset _n_B_KlTPer = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlTPer,NULL,
           "KLBASE1:KLTPER.DT",ix_B_KlTPer,"Справочник типов периодов","B_KlTPer",};
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
           "KLBASE3:KLTARPS.DT",ix_B_KlTarPS,"Дов_дник тариф_в поштових збор_в","B_KlTarPS",0};
pStayDataset B_KlTarPS = &_n_B_KlTarPS;

static pStayFD tcm_B_KlTpVzs[] =
{
 (StayFD *)&_n_KlTpVzs_Code,
 (StayFD *)&_n_KlTpVzs_Name,
 NULL
};
static BYTE ix_B_KlTpVzs[] = {1,1,1,0};
StayDataset _n_B_KlTpVzs = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlTpVzs,NULL,
           "KLBASE1:KLTPVZS.DT",ix_B_KlTpVzs,"Справочник типов взыскателей","B_KlTpVzs",};
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
           "KLBASE2:KLUS.DT",ix_B_KlUS,"Справочник узлов связи и ЦЕНТР.БАНКОВ","B_KlUS",};
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
           "KLBASE1:KLUD.DT",ix_B_KlUd,"Справочник удержаний","B_KlUd",};
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
           "KLBASE2:KLUL.DT",ix_B_KlUl,"Справочник кодов улиц","B_KlUl",10};
pStayDataset B_KlUl = &_n_B_KlUl;

static pStayFD tcm_B_KlVPen[] =
{
 (StayFD *)&_n_KlVPen_Code,
 (StayFD *)&_n_KlVPen_Name,
 NULL
};
static BYTE ix_B_KlVPen[] = {1,1,1,0};
StayDataset _n_B_KlVPen = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlVPen,NULL,
           "KLBASE1:KLVPEN.DT",ix_B_KlVPen,"Справочник видов пенсий","B_KlVPen",};
pStayDataset B_KlVPen = &_n_B_KlVPen;

static pStayFD tcm_B_KlVZvan[] =
{
 (StayFD *)&_n_KlVZvan_Code,
 (StayFD *)&_n_KlVZvan_Name,
 NULL
};
static BYTE ix_B_KlVZvan[] = {1,1,1,0};
StayDataset _n_B_KlVZvan = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlVZvan,NULL,
           "KLBASE1:KLVZVAN.DT",ix_B_KlVZvan,"Справочник воинских званий","B_KlVZvan",};
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
           "KLBASE1:KLVIS.DT",ix_B_KlVis,"Справочник специальностей по выс","B_KlVis",};
pStayDataset B_KlVis = &_n_B_KlVis;

static pStayFD tcm_B_KlVozvr[] =
{
 (StayFD *)&_n_KlVozvr_Code,
 (StayFD *)&_n_KlVozvr_Name,
 NULL
};
static BYTE ix_B_KlVozvr[] = {1,1,1,0};
StayDataset _n_B_KlVozvr = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlVozvr,NULL,
           "KLBASE1:KLVOZVR.DT",ix_B_KlVozvr,"Справочник направлений возврата","B_KlVozvr",};
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
           "KLBASE1:KLVSR.DT",ix_B_KlVsr,"Справочник проводок по выслуге","B_KlVsr",};
pStayDataset B_KlVsr = &_n_B_KlVsr;

static pStayFD tcm_B_KlZR[] =
{
 (StayFD *)&_n_KlZR_Data,
 (StayFD *)&_n_KlZR_Coeff,
 NULL
};
static BYTE ix_B_KlZR[] = {1,1,1,0};
StayDataset _n_B_KlZR = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlZR,NULL,
           "KLBASE1:KLZR.DT",ix_B_KlZR,"Справочник коэффициентов повышения ЗП до 01.01.1992","B_KlZR",};
pStayDataset B_KlZR = &_n_B_KlZR;

static pStayFD tcm_B_KlZR92[] =
{
 (StayFD *)&_n_KlZR92_Data,
 (StayFD *)&_n_KlZR92_Coeff,
 NULL
};
static BYTE ix_B_KlZR92[] = {1,1,1,0};
StayDataset _n_B_KlZR92 = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlZR92,NULL,
           "KLBASE1:KLZR92.DT",ix_B_KlZR92,"Справочник коэффициентов повышения ЗП после 01.01.1","B_KlZR92",};
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
           "KLBASE1:KLZACH.DT",ix_B_KlZach,"Справочник взаимных зачетов","B_KlZach",16};
pStayDataset B_KlZach = &_n_B_KlZach;

static pStayFD tcm_B_KlZem[] =
{
 (StayFD *)&_n_KlZem_Code,
 (StayFD *)&_n_KlZem_Name,
 NULL
};
static BYTE ix_B_KlZem[] = {1,1,1,0};
StayDataset _n_B_KlZem = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlZem,NULL,
           "KLBASE1:KLZEM.DT",ix_B_KlZem,"База наименований земел. участков","B_KlZem",};
pStayDataset B_KlZem = &_n_B_KlZem;

static pStayFD tcm_B_KlZon[] =
{
 (StayFD *)&_n_KlZon_Code,
 (StayFD *)&_n_KlZon_Name,
 NULL
};
static BYTE ix_B_KlZon[] = {1,1,1,0};
StayDataset _n_B_KlZon = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlZon,NULL,
           "KLBASE1:KLZON.DT",ix_B_KlZon,"Справочник категорий зон Р/А загрязнения","B_KlZon",};
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
           "KLBASE1:PRAVPOM.DT",ix_B_PravPom,"Массив правовых данных по ден. помощи","B_PravPom",};
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
           "KLBASE1:SYSP.DT",ix_B_SysP,"Справочник системных параметров","B_SysP",16};
pStayDataset B_SysP = &_n_B_SysP;

static pStayFD tcm_KDMinDox[] =
{
 (StayFD *)&_n_Kmd_Date,
 (StayFD *)&_n_Kmd_Razm,
 NULL
};
static BYTE ix_KDMinDox[] = {1,1,1,0};
StayDataset _n_KDMinDox = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_KDMinDox,NULL,
           "KLBASE1:KDMINDOX.DT",ix_KDMinDox,"База размер.мин.сред.сов.дохода д/пос.на погребение","KDMinDox",};
pStayDataset KDMinDox = &_n_KDMinDox;

static pStayFD tcm_KMinDox[] =
{
 (StayFD *)&_n_Km_Date,
 (StayFD *)&_n_Km_Razm,
 NULL
};
static BYTE ix_KMinDox[] = {1,1,1,0};
StayDataset _n_KMinDox = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_KMinDox,NULL,
           "KLBASE1:BKMINDOX.DT",ix_KMinDox,"База размеров мин. сред. совок. доходов","KMinDox",};
pStayDataset KMinDox = &_n_KMinDox;

static pStayFD tcm_B_KlCheKfn[] =
{
 (StayFD *)&_n_KlCheKfn_Cd1,
 (StayFD *)&_n_KlCheKfn_Cd2,
 NULL
};
static BYTE ix_B_KlCheKfn[] = {1,1,1,0};
StayDataset _n_B_KlCheKfn = {NULL,TAG_DATASET,0,0,DS_QBASE,0,1,0,NULL,tcm_B_KlCheKfn,NULL,
           "KLBASE1:KLCHEKFN.DT",ix_B_KlCheKfn,"База кодов выплат, выплач. одновременно","B_KlCheKfn",16};
pStayDataset B_KlCheKfn = &_n_B_KlCheKfn;

static pStayFD tcm_B_KlCngKfn[] =
{
 (StayFD *)&_n_KlCng_NewKfn,
 (StayFD *)&_n_KlCng_OldKfn,
 NULL
};
static BYTE ix_B_KlCngKfn[] = {2,1,2,0,1,2,66,1,0};
StayDataset _n_B_KlCngKfn = {NULL,TAG_DATASET,0,0,DS_QBASE,0,1,0,NULL,tcm_B_KlCngKfn,NULL,
           "KLBASE1:KLCNGKFN.DT",ix_B_KlCngKfn,"База допустимых измен. основных кодов выпл.","B_KlCngKfn",16};
pStayDataset B_KlCngKfn = &_n_B_KlCngKfn;

static pStayFD tcm_B_KlTerm[] =
{
 (StayFD *)&_n_KlTerm_Code,
 (StayFD *)&_n_KlTerm_Name,
 NULL
};
static BYTE ix_B_KlTerm[] = {1,1,1,0};
StayDataset _n_B_KlTerm = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlTerm,NULL,
           "KLBASE1:KLTERM.DT",ix_B_KlTerm,"Справочник периодов","B_KlTerm",};
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
           "KLBASE1:KLPROMIN.DT",ix_B_KlProMin,"Справочник размеров прожит.минимума","B_KlProMin",10};
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
           "KLBASE1:KLTPL.DT",ix_B_Kltpl,"Справочник признаков переплат","B_Kltpl",};
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
           "KLBASE3:KLORGRAZ.DT",ix_B_KlOrgR,"Справочник бюджетн.финасиров.организаций","B_KlOrgR",10};
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
           "KLBASE3:KLDIAPPS.DT",ix_B_KlDiapPS,"Справочник тар.почт.сб.по диапаз.сумм","B_KlDiapPS",};
pStayDataset B_KlDiapPS = &_n_B_KlDiapPS;

static pStayFD tcm_B_KlAtQ[] =
{
 (StayFD *)&_n_KlAtQ_Code,
 (StayFD *)&_n_KlAtQ_Name,
 NULL
};
static BYTE ix_B_KlAtQ[] = {1,1,1,0};
StayDataset _n_B_KlAtQ = {NULL,TAG_DATASET,0,0,DS_QBASE,0,1,0,NULL,tcm_B_KlAtQ,NULL,
           "KLBASE1:KLATBOX.DT",ix_B_KlAtQ,"Довідник тер-них утворень","B_KlAtQ",};
pStayDataset B_KlAtQ = &_n_B_KlAtQ;

static pStayFD tcm_B_KlVidZar[] =
{
 (StayFD *)&_n_KlVidZar_Code,
 (StayFD *)&_n_KlVidZar_Name,
 NULL
};
static BYTE ix_B_KlVidZar[] = {1,1,1,0};
StayDataset _n_B_KlVidZar = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlVidZar,NULL,
           "KLBASE1:KLVIDZAR.DT",ix_B_KlVidZar,"Довідник видів заробітків","B_KlVidZar",};
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
           "KLBASE1:KLDOHNAL.DT",ix_B_KlDohNal,"Довідник макс.доходів, з яких справл.внески","B_KlDohNal",};
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
           "KLBASE1:KLSRNX.DT",ix_B_KlSrNx,"Довідник розм.серед.зарпл.по н/г(НАУКА/стаття 65 ПЗ)","B_KlSrNx",};
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
           "KLBASE1:KLSR0124.DT",ix_B_KlSr0124,"Довідник розм.серед.зарпл.по н/г(ПОСТАНОВА N 1783)","B_KlSr0124",};
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
           "KLBASE1:KLSR4024.DT",ix_B_KlSr4024,"Довідник розм.серед.зарпл.по н/г згідно з  методикою","B_KlSr4024",};
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
           "KLBASE1:KLSR424Y.DT",ix_B_KlSr424Y,"Довідник розм.сер.зарпл.по н/г(річні)(згідно з  методикою )","B_KlSr424Y",};
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
           "KLBASE1:KLSRNXY.DT",ix_B_KlSrNxY,"Довідник розм.сер.зарпл.по н/г(річні)(НАУКА та мін.розм.пенс)","B_KlSrNxY",};
pStayDataset B_KlSrNxY = &_n_B_KlSrNxY;

static pStayFD tcm_B_KlOsVidz[] =
{
 (StayFD *)&_n_KlOsVidz_Code,
 (StayFD *)&_n_KlOsVidz_Name,
 NULL
};
static BYTE ix_B_KlOsVidz[] = {1,1,1,0};
StayDataset _n_B_KlOsVidz = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlOsVidz,NULL,
           "KLBASE1:KLOSVIDZ.DT",ix_B_KlOsVidz,"Довідник особливих відзнак","B_KlOsVidz",};
pStayDataset B_KlOsVidz = &_n_B_KlOsVidz;

static pStayFD tcm_B_KlStran[] =
{
 (StayFD *)&_n_KlStran_Code,
 (StayFD *)&_n_KlStran_Name,
 NULL
};
static BYTE ix_B_KlStran[] = {1,1,1,0};
StayDataset _n_B_KlStran = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KlStran,NULL,
           "KLBASE1:KLSTRAN.DT",ix_B_KlStran,"Довідник країн для призн.міжнар.пенсій","B_KlStran",};
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
           "KLBASE1:KLINDEX.DT",ix_B_KlIndex,"Довідник коефіц.індивід.індекс.пенсій","B_KlIndex",16};
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
           "KLBASE3:KLCOSTDP.DT",ix_B_KlCostDpi,"Довідник вартості утримання в буд.-інтерн.","B_KlCostDpi",10};
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
           "KLBASE2:KLIND6PF.DT",ix_B_KlInd6PF,"Довідник адрес пошт.індексів(6ПФ)","B_KlInd6PF",16};
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
           "KLBASE1:KLMINZAR.DT",ix_B_KlMinZar,"Довідник MIN розмірів зароб.плат","B_KlMinZar",0};
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
           "KLBASE3:KLKEKV.DT",ix_B_KlKEKV,"Справочник реквизитов УДК","B_KlKEKV",10};
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
           "KLBASE3:KLPITDSH.DT",ix_B_KlPitDsh,"Справочник разм.ср.стоим.пит.в детск.дошк.учр.","B_KlPitDsh",10};
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
           "KLBASE3:KLPTSAN.DT",ix_B_PtSan,"дов_дник санатор_їв","B_PtSan",16};
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
           "KLBASE1:KLNPVIDZ.DT",ix_B_KlNpVidz,"Дов_дник розм.надб.в зал.в_д наявн.засл.","B_KlNpVidz",10};
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

