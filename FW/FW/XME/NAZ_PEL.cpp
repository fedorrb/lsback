/* Begin FCbegin */
//-------------------------------------------------------------------------
// STAY / W      Resource file NAZ_PEL.XME
//-------------------------------------------------------------------------
// Created 12\08\2016 09:01
//-------------------------------------------------------------------------

#include "NAZ_PEL.h"

/* End FCbegin */
/* Begin FCinclude */
#include "LS.h"
/* End FCinclude */
/* Begin FChead */
PICMODULEBEG(NAZ_PEL)

static StayFD _nn_NAZ_PEL = {NULL,TAG_PIC,0,0,0,0,"NAZ_PEL",NULL};
/* End FChead */
/* Begin FCtypedef */
/* End FCtypedef */
/* Begin FCfield */
BYTE  CheZP_Code;
StayFD _n_CheZP_Code = {&CheZP_Code,0,0,0,CLS_S,0,"CheZP_Code","Код зоны пребывания"};
StayFD *_CheZP_Code = &_n_CheZP_Code;

StayDate CheZP_DateBeg;
StayFD _n_CheZP_DateBeg = {&CheZP_DateBeg,0,0,0,CLS_Date,0,"CheZP_DateBeg","С  периода в зоне"};
StayFD *_CheZP_DateBeg = &_n_CheZP_DateBeg;

StayDate CheZP_DateEnd;
StayFD _n_CheZP_DateEnd = {&CheZP_DateEnd,0,0,0,CLS_Date,0,"CheZP_DateEnd","По  периода в зоне"};
StayFD *_CheZP_DateEnd = &_n_CheZP_DateEnd;

BYTE  CheZP_Nomig;
StayFD _n_CheZP_Nomig = {&CheZP_Nomig,0,0,0,CLS_S,0,"CheZP_Nomig","Номер иждивенца"};
StayFD *_CheZP_Nomig = &_n_CheZP_Nomig;

BYTE  CheZP_Time;
StayFD _n_CheZP_Time = {&CheZP_Time,0,0,0,CLS_S,0,"CheZP_Time","Временное/постоянное пребывани"};
StayFD *_CheZP_Time = &_n_CheZP_Time;

BYTE  CheZPS_Code;
StayFD _n_CheZPS_Code = {&CheZPS_Code,0,0,0,CLS_S,0,"CheZPS_Code",""};
StayFD *_CheZPS_Code = &_n_CheZPS_Code;

StayDate CheZPS_DateBeg;
StayFD _n_CheZPS_DateBeg = {&CheZPS_DateBeg,0,0,0,CLS_Date,0,"CheZPS_DateBeg",""};
StayFD *_CheZPS_DateBeg = &_n_CheZPS_DateBeg;

StayDate CheZPS_DateEnd;
StayFD _n_CheZPS_DateEnd = {&CheZPS_DateEnd,0,0,0,CLS_Date,0,"CheZPS_DateEnd",""};
StayFD *_CheZPS_DateEnd = &_n_CheZPS_DateEnd;

BYTE  CheZPS_Nomig;
StayFD _n_CheZPS_Nomig = {&CheZPS_Nomig,0,0,0,CLS_S,0,"CheZPS_Nomig",""};
StayFD *_CheZPS_Nomig = &_n_CheZPS_Nomig;

STAYI6 CheZPS_Sum;
StayFD _n_CheZPS_Sum = {&CheZPS_Sum,0,0,0,CLS_Hs,2,"CheZPS_Sum",""};
StayFD *_CheZPS_Sum = &_n_CheZPS_Sum;

BYTE  Che_AgeDop;
StayFD _n_Che_AgeDop = {&Che_AgeDop,0,0,0,CLS_S,0,"Che_AgeDop","Доп сниж для Черн по сп1"};
StayFD *_Che_AgeDop = &_n_Che_AgeDop;

BYTE  Che_AgeDown;
StayFD _n_Che_AgeDown = {&Che_AgeDown,0,0,0,CLS_S,0,"Che_AgeDown","Снижение пенс.возраста"};
StayFD *_Che_AgeDown = &_n_Che_AgeDown;

StayDate Che_Date86;
StayFD _n_Che_Date86 = {&Che_Date86,0,0,0,CLS_Date,0,"Che_Date86","Дата аварии на ЧАЭС"};
StayFD *_Che_Date86 = &_n_Che_Date86;

StayDate Che_DateOts;
StayFD _n_Che_DateOts = {&Che_DateOts,0,0,0,CLS_Date,0,"Che_DateOts","Дата постановления об отселени"};
StayFD *_Che_DateOts = &_n_Che_DateOts;

BYTE  Che_Kateg;
StayFD _n_Che_Kateg = {&Che_Kateg,0,0,0,CLS_S,0,"Che_Kateg","Категория пострадавшего"};
StayFD *_Che_Kateg = &_n_Che_Kateg;

WORD  Che_Mask;
StayFD _n_Che_Mask = {&Che_Mask,0,0,0,CLS_I,0,"Che_Mask","Маска других сведений"};
StayFD *_Che_Mask = &_n_Che_Mask;

WORD  Che_Proc;
StayFD _n_Che_Proc = {&Che_Proc,0,0,0,CLS_I,0,"Che_Proc","% повышения за загрязненность"};
StayFD *_Che_Proc = &_n_Che_Proc;

BYTE  Che_Produ;
StayFD _n_Che_Produ = {&Che_Produ,0,0,0,CLS_S,0,"Che_Produ","Признак надбавки на продукты"};
StayFD *_Che_Produ = &_n_Che_Produ;

WORD  Che_TrudLost;
StayFD _n_Che_TrudLost = {&Che_TrudLost,0,0,0,CLS_I,0,"Che_TrudLost","% потери трудоспособности"};
StayFD *_Che_TrudLost = &_n_Che_TrudLost;

BYTE  Che_Type;
StayFD _n_Che_Type = {&Che_Type,0,0,0,CLS_S,0,"Che_Type","Тип пострадавшего"};
StayFD *_Che_Type = &_n_Che_Type;

BYTE  Che_TypeKl;
StayFD _n_Che_TypeKl = {&Che_TypeKl,0,0,0,CLS_S,0,"Che_TypeKl","Тип пострадавшего по KLPOST"};
StayFD *_Che_TypeKl = &_n_Che_TypeKl;

char Che_TypeName[42];
StayFD _n_Che_TypeName = {&Che_TypeName,0,0,0,CLS_V,41,"Che_TypeName","Наименование типа пострадавшег"};
StayFD *_Che_TypeName = &_n_Che_TypeName;

BYTE  Che_ZonePr;
StayFD _n_Che_ZonePr = {&Che_ZonePr,0,0,0,CLS_S,0,"Che_ZonePr","Код зоны проживания"};
StayFD *_Che_ZonePr = &_n_Che_ZonePr;

char Che_ZonePrName[25];
StayFD _n_Che_ZonePrName = {&Che_ZonePrName,0,0,0,CLS_V,24,"Che_ZonePrName","Наимен-е зоны проживания"};
StayFD *_Che_ZonePrName = &_n_Che_ZonePrName;

BYTE  Che_ZoneRb;
StayFD _n_Che_ZoneRb = {&Che_ZoneRb,0,0,0,CLS_S,0,"Che_ZoneRb","Код зоны работы"};
StayFD *_Che_ZoneRb = &_n_Che_ZoneRb;

char Che_ZoneRbName[25];
StayFD _n_Che_ZoneRbName = {&Che_ZoneRbName,0,0,0,CLS_V,24,"Che_ZoneRbName","Наимен-е зоны работы"};
StayFD *_Che_ZoneRbName = &_n_Che_ZoneRbName;

BYTE  Che_PrNpDodP;
StayFD _n_Che_PrNpDodP = {&Che_PrNpDodP,0,0,0,CLS_S,0,"Che_PrNpDodP","Признак додоткової пенс?ї"};
StayFD *_Che_PrNpDodP = &_n_Che_PrNpDodP;

BYTE  Che_PrNpProj;
StayFD _n_Che_PrNpProj = {&Che_PrNpProj,0,0,0,CLS_S,0,"Che_PrNpProj","Признак доплати за проживання в зон?"};
StayFD *_Che_PrNpProj = &_n_Che_PrNpProj;

BYTE  Che_PrNpKomp;
StayFD _n_Che_PrNpKomp = {&Che_PrNpKomp,0,0,0,CLS_S,0,"Che_PrNpKomp","Признак назначения компенсации за умершего"};
StayFD *_Che_PrNpKomp = &_n_Che_PrNpKomp;

StayDate Igds_Drog;
StayFD _n_Igds_Drog = {&Igds_Drog,0,0,0,CLS_Date,0,"Igds_Drog","Дата рождения"};
StayFD *_Igds_Drog = &_n_Igds_Drog;

StayDate Igds_Dso;
StayFD _n_Igds_Dso = {&Igds_Dso,0,0,0,CLS_Date,0,"Igds_Dso","Дата смерти (отъезда)"};
StayFD *_Igds_Dso = &_n_Igds_Dso;

StayDate Igds_Dusn;
StayFD _n_Igds_Dusn = {&Igds_Dusn,0,0,0,CLS_Date,0,"Igds_Dusn","Дата усыновления"};
StayFD *_Igds_Dusn = &_n_Igds_Dusn;

BYTE  Igds_Katnetr;
StayFD _n_Igds_Katnetr = {&Igds_Katnetr,0,0,0,CLS_S,0,"Igds_Katnetr","Категория нетрудоспособности"};
StayFD *_Igds_Katnetr = &_n_Igds_Katnetr;

BYTE  Igds_Katrod;
StayFD _n_Igds_Katrod = {&Igds_Katrod,0,0,0,CLS_S,0,"Igds_Katrod","Категория родства (KLROD)"};
StayFD *_Igds_Katrod = &_n_Igds_Katrod;

BYTE  Igds_Nomig;
StayFD _n_Igds_Nomig = {&Igds_Nomig,0,0,0,CLS_S,0,"Igds_Nomig","Номер иждивенца (Igd)"};
StayFD *_Igds_Nomig = &_n_Igds_Nomig;

BYTE  Igds_Pol;
StayFD _n_Igds_Pol = {&Igds_Pol,0,0,0,CLS_S,0,"Igds_Pol","Пол (1 - М, 2 - Ж)"};
StayFD *_Igds_Pol = &_n_Igds_Pol;

BYTE  Igds_Prab;
StayFD _n_Igds_Prab = {&Igds_Prab,0,0,0,CLS_S,0,"Igds_Prab","Признак работы"};
StayFD *_Igds_Prab = &_n_Igds_Prab;

BYTE  Igds_Prdel;
StayFD _n_Igds_Prdel = {&Igds_Prdel,0,0,0,CLS_S,0,"Igds_Prdel","Признак удаления"};
StayFD *_Igds_Prdel = &_n_Igds_Prdel;

BYTE  Igds_Psn;
StayFD _n_Igds_Psn = {&Igds_Psn,0,0,0,CLS_S,0,"Igds_Psn","Код причины снятия с оплаты"};
StayFD *_Igds_Psn = &_n_Igds_Psn;

BYTE  Igds_Sir;
StayFD _n_Igds_Sir = {&Igds_Sir,0,0,0,CLS_S,0,"Igds_Sir","Признак   сироты"};
StayFD *_Igds_Sir = &_n_Igds_Sir;

BYTE  Igds_Dolj_NumP;
StayFD _n_Igds_Dolj_NumP = {&Igds_Dolj_NumP,0,0,0,CLS_S,0,"Igds_Dolj_NumP","Номер долевой пенсии"};
StayFD *_Igds_Dolj_NumP = &_n_Igds_Dolj_NumP;

StayDate Ind_DateBeg;
StayFD _n_Ind_DateBeg = {&Ind_DateBeg,0,0,0,CLS_Date,0,"Ind_DateBeg","Начало периода"};
StayFD *_Ind_DateBeg = &_n_Ind_DateBeg;

STAYI6 Ind_FG708;
StayFD _n_Ind_FG708 = {&Ind_FG708,0,0,0,CLS_Hs,2,"Ind_FG708","Размер 708 100% факт при гособ-ии"};
StayFD *_Ind_FG708 = &_n_Ind_FG708;

STAYI6 Ind_FP708;
StayFD _n_Ind_FP708 = {&Ind_FP708,0,0,0,CLS_Hs,2,"Ind_FP708","Размер 708 факт"};
StayFD *_Ind_FP708 = &_n_Ind_FP708;

STAYI6 Ind_GIND;
StayFD _n_Ind_GIND = {&Ind_GIND,0,0,0,CLS_Hs,5,"Ind_GIND","Размер проиндексированной пенсии"};
StayFD *_Ind_GIND = &_n_Ind_GIND;

STAYI6 Ind_Koef;
StayFD _n_Ind_Koef = {&Ind_Koef,0,0,0,CLS_Hs,5,"Ind_Koef","Размер коэф-та"};
StayFD *_Ind_Koef = &_n_Ind_Koef;

BYTE  Ind_NMDolja;
StayFD _n_Ind_NMDolja = {&Ind_NMDolja,0,0,0,CLS_S,0,"Ind_NMDolja","Номер доли"};
StayFD *_Ind_NMDolja = &_n_Ind_NMDolja;

BYTE  Ind_Nomig;
StayFD _n_Ind_Nomig = {&Ind_Nomig,0,0,0,CLS_S,0,"Ind_Nomig","Номер иждивенца"};
StayFD *_Ind_Nomig = &_n_Ind_Nomig;

STAYI6 Ind_P100;
StayFD _n_Ind_P100 = {&Ind_P100,0,0,0,CLS_Hs,2,"Ind_P100","Размер пенсии"};
StayFD *_Ind_P100 = &_n_Ind_P100;

STAYI6 Ind_PG708;
StayFD _n_Ind_PG708 = {&Ind_PG708,0,0,0,CLS_Hs,2,"Ind_PG708","Размер 708 100% пригособ-ии"};
StayFD *_Ind_PG708 = &_n_Ind_PG708;

STAYI6 Ind_PI100;
StayFD _n_Ind_PI100 = {&Ind_PI100,0,0,0,CLS_Hs,5,"Ind_PI100","Размер проиндексированной пенсии"};
StayFD *_Ind_PI100 = &_n_Ind_PI100;

STAYI6 Ind_PIND;
StayFD _n_Ind_PIND = {&Ind_PIND,0,0,0,CLS_Hs,5,"Ind_PIND","Размер проиндексированной пенсии"};
StayFD *_Ind_PIND = &_n_Ind_PIND;

STAYI6 Ind_PP708;
StayFD _n_Ind_PP708 = {&Ind_PP708,0,0,0,CLS_Hs,2,"Ind_PP708","Размер 708 плановая"};
StayFD *_Ind_PP708 = &_n_Ind_PP708;

StayDate Inv_DateBeg;
StayFD _n_Inv_DateBeg = {&Inv_DateBeg,0,0,0,CLS_Date,0,"Inv_DateBeg","Начало периода инв-ти"};
StayFD *_Inv_DateBeg = &_n_Inv_DateBeg;

StayDate Inv_DateEnd;
StayFD _n_Inv_DateEnd = {&Inv_DateEnd,0,0,0,CLS_Date,0,"Inv_DateEnd","Конец периода инв-ти"};
StayFD *_Inv_DateEnd = &_n_Inv_DateEnd;

StayDate Inv_DateEnd1;
StayFD _n_Inv_DateEnd1 = {&Inv_DateEnd1,0,0,0,CLS_Date,0,"Inv_DateEnd1","Конец периода рабочая"};
StayFD *_Inv_DateEnd1 = &_n_Inv_DateEnd1;

StayDate Inv_DateEndR;
StayFD _n_Inv_DateEndR = {&Inv_DateEndR,0,0,0,CLS_Date,0,"Inv_DateEndR","Конец периода рабочая"};
StayFD *_Inv_DateEndR = &_n_Inv_DateEndR;

char Inv_DateKon[12];
StayFD _n_Inv_DateKon = {&Inv_DateKon,0,0,0,CLS_V,11,"Inv_DateKon","Наимен-е - пожизненно"};
StayFD *_Inv_DateKon = &_n_Inv_DateKon;

StayDate Inv_DateNast;
StayFD _n_Inv_DateNast = {&Inv_DateNast,0,0,0,CLS_Date,0,"Inv_DateNast","Дата наступления инв-ти"};
StayFD *_Inv_DateNast = &_n_Inv_DateNast;

BYTE  Inv_Group;
StayFD _n_Inv_Group = {&Inv_Group,0,0,0,CLS_S,0,"Inv_Group","Группа инвалидности"};
StayFD *_Inv_Group = &_n_Inv_Group;

BYTE  Inv_MaskOsb;
StayFD _n_Inv_MaskOsb = {&Inv_MaskOsb,0,0,0,CLS_S,0,"Inv_MaskOsb",""};
StayFD *_Inv_MaskOsb = &_n_Inv_MaskOsb;

char Inv_GroupName[4];
StayFD _n_Inv_GroupName = {&Inv_GroupName,0,0,0,CLS_V,3,"Inv_GroupName","Наимен-е группы инв-ти"};
StayFD *_Inv_GroupName = &_n_Inv_GroupName;

WORD  Inv_Prich;
StayFD _n_Inv_Prich = {&Inv_Prich,0,0,0,CLS_I,0,"Inv_Prich","Причина инвалидности"};
StayFD *_Inv_Prich = &_n_Inv_Prich;

char Inv_PrichName[41];
StayFD _n_Inv_PrichName = {&Inv_PrichName,0,0,0,CLS_V,40,"Inv_PrichName","Наим-е причины инв-ти"};
StayFD *_Inv_PrichName = &_n_Inv_PrichName;

StayDate Np181_DateBeg;
StayFD _n_Np181_DateBeg = {&Np181_DateBeg,0,0,0,CLS_Date,0,"Np181_DateBeg","Дата начала выплаты (с)"};
StayFD *_Np181_DateBeg = &_n_Np181_DateBeg;

StayDate Np181_DateEnd;
StayFD _n_Np181_DateEnd = {&Np181_DateEnd,0,0,0,CLS_Date,0,"Np181_DateEnd","Дата конца  выплаты (до)"};
StayFD *_Np181_DateEnd = &_n_Np181_DateEnd;

BYTE  Np181_Kodbl;
StayFD _n_Np181_Kodbl = {&Np181_Kodbl,0,0,0,CLS_S,0,"Np181_Kodbl","Код блокировки"};
StayFD *_Np181_Kodbl = &_n_Np181_Kodbl;

WORD  Np181_Nomig;
StayFD _n_Np181_Nomig = {&Np181_Nomig,0,0,0,CLS_I,0,"Np181_Nomig","Номер иждивенца"};
StayFD *_Np181_Nomig = &_n_Np181_Nomig;

STAYI6 Np181_Snadp;
StayFD _n_Np181_Snadp = {&Np181_Snadp,0,0,0,CLS_Hs,2,"Np181_Snadp","Ежемесячная сумма для кода вып"};
StayFD *_Np181_Snadp = &_n_Np181_Snadp;

DWORD NpOsn_Code;
StayFD _n_NpOsn_Code = {&NpOsn_Code,0,0,0,CLS_L,0,"NpOsn_Code","Код надбавки, повышения"};
StayFD *_NpOsn_Code = &_n_NpOsn_Code;

StayDate NpOsn_DateBeg;
StayFD _n_NpOsn_DateBeg = {&NpOsn_DateBeg,0,0,0,CLS_Date,0,"NpOsn_DateBeg","Дата начала надбавки"};
StayFD *_NpOsn_DateBeg = &_n_NpOsn_DateBeg;

StayDate NpOsn_DateEnd;
StayFD _n_NpOsn_DateEnd = {&NpOsn_DateEnd,0,0,0,CLS_Date,0,"NpOsn_DateEnd","Дата окончания надбавки"};
StayFD *_NpOsn_DateEnd = &_n_NpOsn_DateEnd;

BYTE  NpOsn_Kodbl;
StayFD _n_NpOsn_Kodbl = {&NpOsn_Kodbl,0,0,0,CLS_S,0,"NpOsn_Kodbl","Код блокировки"};
StayFD *_NpOsn_Kodbl = &_n_NpOsn_Kodbl;

BYTE  NpOsn_NomIgd;
StayFD _n_NpOsn_NomIgd = {&NpOsn_NomIgd,0,0,0,CLS_S,0,"NpOsn_NomIgd","Номер иждивенца"};
StayFD *_NpOsn_NomIgd = &_n_NpOsn_NomIgd;

WORD  NpOsn_Proc;
StayFD _n_NpOsn_Proc = {&NpOsn_Proc,0,0,0,CLS_I,0,"NpOsn_Proc","Процент"};
StayFD *_NpOsn_Proc = &_n_NpOsn_Proc;

STAYI6 NpOsn_Razm;
StayFD _n_NpOsn_Razm = {&NpOsn_Razm,0,0,0,CLS_Hs,2,"NpOsn_Razm","Сумма надбавки"};
StayFD *_NpOsn_Razm = &_n_NpOsn_Razm;

STAYI6 NpOsn_Razm992;
StayFD _n_NpOsn_Razm992 = {&NpOsn_Razm992,0,0,0,CLS_Hs,2,"NpOsn_Razm992","Сумма надбавки 992"};
StayFD *_NpOsn_Razm992 = &_n_NpOsn_Razm992;

DWORD NpSud_Code;
StayFD _n_NpSud_Code = {&NpSud_Code,0,0,0,CLS_L,0,"NpSud_Code","Код надбавки, повышения"};
StayFD *_NpSud_Code = &_n_NpSud_Code;

StayDate NpSud_DateBeg;
StayFD _n_NpSud_DateBeg = {&NpSud_DateBeg,0,0,0,CLS_Date,0,"NpSud_DateBeg","Дата начала надбавки"};
StayFD *_NpSud_DateBeg = &_n_NpSud_DateBeg;

StayDate NpSud_DateEnd;
StayFD _n_NpSud_DateEnd = {&NpSud_DateEnd,0,0,0,CLS_Date,0,"NpSud_DateEnd","Дата окончания надбавки"};
StayFD *_NpSud_DateEnd = &_n_NpSud_DateEnd;

BYTE  NpSud_Kodbl;
StayFD _n_NpSud_Kodbl = {&NpSud_Kodbl,0,0,0,CLS_S,0,"NpSud_Kodbl","Код блокировки"};
StayFD *_NpSud_Kodbl = &_n_NpSud_Kodbl;

BYTE  NpSud_NomIgd;
StayFD _n_NpSud_NomIgd = {&NpSud_NomIgd,0,0,0,CLS_S,0,"NpSud_NomIgd","Номер иждивенца"};
StayFD *_NpSud_NomIgd = &_n_NpSud_NomIgd;

WORD  NpSud_Proc;
StayFD _n_NpSud_Proc = {&NpSud_Proc,0,0,0,CLS_I,0,"NpSud_Proc","Процент"};
StayFD *_NpSud_Proc = &_n_NpSud_Proc;

STAYI6 NpSud_Razm;
StayFD _n_NpSud_Razm = {&NpSud_Razm,0,0,0,CLS_Hs,2,"NpSud_Razm","Сумма надбавки"};
StayFD *_NpSud_Razm = &_n_NpSud_Razm;

DWORD NpChe_Code;
StayFD _n_NpChe_Code = {&NpChe_Code,0,0,0,CLS_L,0,"NpChe_Code","Код надбавки, повышения"};
StayFD *_NpChe_Code = &_n_NpChe_Code;

StayDate NpChe_DateBeg;
StayFD _n_NpChe_DateBeg = {&NpChe_DateBeg,0,0,0,CLS_Date,0,"NpChe_DateBeg","Дата начала надбавки"};
StayFD *_NpChe_DateBeg = &_n_NpChe_DateBeg;

StayDate NpChe_DateEnd;
StayFD _n_NpChe_DateEnd = {&NpChe_DateEnd,0,0,0,CLS_Date,0,"NpChe_DateEnd","Дата окончания надбавки"};
StayFD *_NpChe_DateEnd = &_n_NpChe_DateEnd;

BYTE  NpChe_Kodbl;
StayFD _n_NpChe_Kodbl = {&NpChe_Kodbl,0,0,0,CLS_S,0,"NpChe_Kodbl","Код блокировки"};
StayFD *_NpChe_Kodbl = &_n_NpChe_Kodbl;

BYTE  NpChe_NomIgd;
StayFD _n_NpChe_NomIgd = {&NpChe_NomIgd,0,0,0,CLS_S,0,"NpChe_NomIgd","Номер иждивенца"};
StayFD *_NpChe_NomIgd = &_n_NpChe_NomIgd;

WORD  NpChe_Proc;
StayFD _n_NpChe_Proc = {&NpChe_Proc,0,0,0,CLS_I,0,"NpChe_Proc","Процент"};
StayFD *_NpChe_Proc = &_n_NpChe_Proc;

STAYI6 NpChe_Razm;
StayFD _n_NpChe_Razm = {&NpChe_Razm,0,0,0,CLS_Hs,2,"NpChe_Razm","Сумма надбавки"};
StayFD *_NpChe_Razm = &_n_NpChe_Razm;

DWORD Np_Code;
StayFD _n_Np_Code = {&Np_Code,0,0,0,CLS_L,0,"Np_Code","Код надбавки, повышения"};
StayFD *_Np_Code = &_n_Np_Code;

StayDate Np_DateBeg;
StayFD _n_Np_DateBeg = {&Np_DateBeg,0,0,0,CLS_Date,0,"Np_DateBeg","Дата начала надбавки"};
StayFD *_Np_DateBeg = &_n_Np_DateBeg;

StayDate Np_DateEnd;
StayFD _n_Np_DateEnd = {&Np_DateEnd,0,0,0,CLS_Date,0,"Np_DateEnd","Дата окончания надбавки"};
StayFD *_Np_DateEnd = &_n_Np_DateEnd;

BYTE  Np_Kodbl;
StayFD _n_Np_Kodbl = {&Np_Kodbl,0,0,0,CLS_S,0,"Np_Kodbl","Код блокировки"};
StayFD *_Np_Kodbl = &_n_Np_Kodbl;

BYTE  Np_NomIgd;
StayFD _n_Np_NomIgd = {&Np_NomIgd,0,0,0,CLS_S,0,"Np_NomIgd","Номер иждивенца"};
StayFD *_Np_NomIgd = &_n_Np_NomIgd;

BYTE  Np_Proc;
StayFD _n_Np_Proc = {&Np_Proc,0,0,0,CLS_S,0,"Np_Proc","Процент"};
StayFD *_Np_Proc = &_n_Np_Proc;

STAYI6 Np_Razm;
StayFD _n_Np_Razm = {&Np_Razm,0,0,0,CLS_Hs,2,"Np_Razm","Сумма надбавки"};
StayFD *_Np_Razm = &_n_Np_Razm;

DWORD Dp_Code;
StayFD _n_Dp_Code = {&Dp_Code,0,0,0,CLS_L,0,"Dp_Code","Код надбавки, повышения"};
StayFD *_Dp_Code = &_n_Dp_Code;

StayDate Dp_DateBeg;
StayFD _n_Dp_DateBeg = {&Dp_DateBeg,0,0,0,CLS_Date,0,"Dp_DateBeg","Дата начала надбавки"};
StayFD *_Dp_DateBeg = &_n_Dp_DateBeg;

StayDate Dp_DateEnd;
StayFD _n_Dp_DateEnd = {&Dp_DateEnd,0,0,0,CLS_Date,0,"Dp_DateEnd","Дата окончания надбавки"};
StayFD *_Dp_DateEnd = &_n_Dp_DateEnd;

BYTE  Dp_Kodbl;
StayFD _n_Dp_Kodbl = {&Dp_Kodbl,0,0,0,CLS_S,0,"Dp_Kodbl","Код блокировки"};
StayFD *_Dp_Kodbl = &_n_Dp_Kodbl;

BYTE  Dp_NomIgd;
StayFD _n_Dp_NomIgd = {&Dp_NomIgd,0,0,0,CLS_S,0,"Dp_NomIgd","Номер иждивенца"};
StayFD *_Dp_NomIgd = &_n_Dp_NomIgd;

BYTE  Dp_Proc;
StayFD _n_Dp_Proc = {&Dp_Proc,0,0,0,CLS_S,0,"Dp_Proc","Процент"};
StayFD *_Dp_Proc = &_n_Dp_Proc;

STAYI6 Dp_Razm;
StayFD _n_Dp_Razm = {&Dp_Razm,0,0,0,CLS_Hs,2,"Dp_Razm","Сумма надбавки"};
StayFD *_Dp_Razm = &_n_Dp_Razm;

STAYI6 Dp_Razm850;
StayFD _n_Dp_Razm850 = {&Dp_Razm850,0,0,0,CLS_Hs,2,"Dp_Razm850","Сумма надбавки"};
StayFD *_Dp_Razm850 = &_n_Dp_Razm850;

STAYI6 Dp_Razm851;
StayFD _n_Dp_Razm851 = {&Dp_Razm851,0,0,0,CLS_Hs,2,"Dp_Razm851","Сумма надбавки"};
StayFD *_Dp_Razm851 = &_n_Dp_Razm851;

STAYI6 Dp_Razm709;
StayFD _n_Dp_Razm709 = {&Dp_Razm709,0,0,0,CLS_Hs,2,"Dp_Razm709","Сумма надбавки"};
StayFD *_Dp_Razm709 = &_n_Dp_Razm709;

DWORD Npr_Code;
StayFD _n_Npr_Code = {&Npr_Code,0,0,0,CLS_L,0,"Npr_Code","Код надбавки, повышения"};
StayFD *_Npr_Code = &_n_Npr_Code;

StayDate Npr_DateBeg;
StayFD _n_Npr_DateBeg = {&Npr_DateBeg,0,0,0,CLS_Date,0,"Npr_DateBeg","Дата начала надбавки"};
StayFD *_Npr_DateBeg = &_n_Npr_DateBeg;

StayDate Npr_DateEnd;
StayFD _n_Npr_DateEnd = {&Npr_DateEnd,0,0,0,CLS_Date,0,"Npr_DateEnd","Дата окончания надбавки"};
StayFD *_Npr_DateEnd = &_n_Npr_DateEnd;

BYTE  Npr_Nomig;
StayFD _n_Npr_Nomig = {&Npr_Nomig,0,0,0,CLS_S,0,"Npr_Nomig","Номер иждивенца"};
StayFD *_Npr_Nomig = &_n_Npr_Nomig;

BYTE  Npr_Proc;
StayFD _n_Npr_Proc = {&Npr_Proc,0,0,0,CLS_S,0,"Npr_Proc","Процент"};
StayFD *_Npr_Proc = &_n_Npr_Proc;

StayDate Osob_DateEndR;
StayFD _n_Osob_DateEndR = {&Osob_DateEndR,0,0,0,CLS_Date,0,"Osob_DateEndR","рабочая"};
StayFD *_Osob_DateEndR = &_n_Osob_DateEndR;

char Osob_DateKon[12];
StayFD _n_Osob_DateKon = {&Osob_DateKon,0,0,0,CLS_V,11,"Osob_DateKon","рабочая"};
StayFD *_Osob_DateKon = &_n_Osob_DateKon;

StayDate PIgd_DateBeg;
StayFD _n_PIgd_DateBeg = {&PIgd_DateBeg,0,0,0,CLS_Date,0,"PIgd_DateBeg","Начало периода инв-ти"};
StayFD *_PIgd_DateBeg = &_n_PIgd_DateBeg;

StayDate PIgd_DateEnd;
StayFD _n_PIgd_DateEnd = {&PIgd_DateEnd,0,0,0,CLS_Date,0,"PIgd_DateEnd","Конец периода инв-ти"};
StayFD *_PIgd_DateEnd = &_n_PIgd_DateEnd;

BYTE  PIgd_Nomig;
StayFD _n_PIgd_Nomig = {&PIgd_Nomig,0,0,0,CLS_S,0,"PIgd_Nomig","Номер иждивенца (Igd)"};
StayFD *_PIgd_Nomig = &_n_PIgd_Nomig;

WORD  Pens_FaktSt;
StayFD _n_Pens_FaktSt = {&Pens_FaktSt,0,0,0,CLS_I,0,"Pens_FaktSt","Стаж - факт"};
StayFD *_Pens_FaktSt = &_n_Pens_FaktSt;

DWORD Pens_IKf;
StayFD _n_Pens_IKf = {&Pens_IKf,0,0,0,CLS_L,2,"Pens_IKf","Коеффициент индивидуальный"};
StayFD *_Pens_IKf = &_n_Pens_IKf;

char Pens_Koef[151];
StayFD _n_Pens_Koef = {&Pens_Koef,0,0,0,CLS_V,150,"Pens_Koef","Текст коэф-та повышения пенсии"};
StayFD *_Pens_Koef = &_n_Pens_Koef;

WORD  Pens_PlanSt;
StayFD _n_Pens_PlanSt = {&Pens_PlanSt,0,0,0,CLS_I,0,"Pens_PlanSt","Стаж - план"};
StayFD *_Pens_PlanSt = &_n_Pens_PlanSt;

WORD  Pens_ProcVar;
StayFD _n_Pens_ProcVar = {&Pens_ProcVar,0,0,0,CLS_I,0,"Pens_ProcVar","Вспомог.перем.для расчетов"};
StayFD *_Pens_ProcVar = &_n_Pens_ProcVar;

WORD  Pens_Procent;
StayFD _n_Pens_Procent = {&Pens_Procent,0,0,0,CLS_I,0,"Pens_Procent","% от заработка"};
StayFD *_Pens_Procent = &_n_Pens_Procent;

DWORD Pens_ProcKrat;
StayFD _n_Pens_ProcKrat = {&Pens_ProcKrat,0,0,0,CLS_L,2,"Pens_ProcKrat","% от заработка"};
StayFD *_Pens_ProcKrat = &_n_Pens_ProcKrat;

DWORD Pens_ProcNUKR;
StayFD _n_Pens_ProcNUKR = {&Pens_ProcNUKR,0,0,0,CLS_L,2,"Pens_ProcNUKR","% от заработка"};
StayFD *_Pens_ProcNUKR = &_n_Pens_ProcNUKR;

DWORD Pens_ProcDay;
StayFD _n_Pens_ProcDay = {&Pens_ProcDay,0,0,0,CLS_L,0,"Pens_ProcDay","% от заработка"};
StayFD *_Pens_ProcDay = &_n_Pens_ProcDay;

DWORD Pens_ProcMes;
StayFD _n_Pens_ProcMes = {&Pens_ProcMes,0,0,0,CLS_L,2,"Pens_ProcMes","% от заработка"};
StayFD *_Pens_ProcMes = &_n_Pens_ProcMes;

DWORD Pens_Proc0128;
StayFD _n_Pens_Proc0128 = {&Pens_Proc0128,0,0,0,CLS_L,2,"Pens_Proc0128","% от заработка"};
StayFD *_Pens_Proc0128 = &_n_Pens_Proc0128;

WORD  Pens_Proc27;
StayFD _n_Pens_Proc27 = {&Pens_Proc27,0,0,0,CLS_I,0,"Pens_Proc27","% от заработка "};
StayFD *_Pens_Proc27 = &_n_Pens_Proc27;

WORD  Pens_Proc100;
StayFD _n_Pens_Proc100 = {&Pens_Proc100,0,0,0,CLS_I,0,"Pens_Proc100","% от заработка "};
StayFD *_Pens_Proc100 = &_n_Pens_Proc100;

DWORD Pens_Proc120;
StayFD _n_Pens_Proc120 = {&Pens_Proc120,0,0,0,CLS_L,2,"Pens_Proc120","% от заработка "};
StayFD *_Pens_Proc120 = &_n_Pens_Proc120;

DWORD Pens_Proc135;
StayFD _n_Pens_Proc135 = {&Pens_Proc135,0,0,0,CLS_L,2,"Pens_Proc135","% от заработка "};
StayFD *_Pens_Proc135 = &_n_Pens_Proc135;

WORD  Pens_ProcPNST;
StayFD _n_Pens_ProcPNST = {&Pens_ProcPNST,0,0,0,CLS_I,0,"Pens_ProcPNST","зверхнормативний стаж "};
StayFD *_Pens_ProcPNST = &_n_Pens_ProcPNST;

STAYI6 Pens_Rab708;
StayFD _n_Pens_Rab708 = {&Pens_Rab708,0,0,0,CLS_Hs,2,"Pens_Rab708","рабочая"};
StayFD *_Pens_Rab708 = &_n_Pens_Rab708;

STAYI6 Pens_RazG808;
StayFD _n_Pens_RazG808 = {&Pens_RazG808,0,0,0,CLS_Hs,2,"Pens_RazG808","Сумма дотяжек - 808-гособ-е"};
StayFD *_Pens_RazG808 = &_n_Pens_RazG808;

STAYI6 Pens_RazG908;
StayFD _n_Pens_RazG908 = {&Pens_RazG908,0,0,0,CLS_Hs,2,"Pens_RazG908","Сумма дотяжек - 908-гособ-е"};
StayFD *_Pens_RazG908 = &_n_Pens_RazG908;

STAYI6 Pens_Razm991;
StayFD _n_Pens_Razm991 = {&Pens_Razm991,0,0,0,CLS_Hs,2,"Pens_Razm991","Сумма дотяжек - 991"};
StayFD *_Pens_Razm991 = &_n_Pens_Razm991;

STAYI6 Pens_RazG991;
StayFD _n_Pens_RazG991 = {&Pens_RazG991,0,0,0,CLS_Hs,2,"Pens_RazG991","Сумма дотяжек - 991-гособ-е"};
StayFD *_Pens_RazG991 = &_n_Pens_RazG991;

STAYI6 Pens_Razm992;
StayFD _n_Pens_Razm992 = {&Pens_Razm992,0,0,0,CLS_Hs,2,"Pens_Razm992","Сумма дотяжек - 992"};
StayFD *_Pens_Razm992 = &_n_Pens_Razm992;

STAYI6 Pens_Razm992I;
StayFD _n_Pens_Razm992I = {&Pens_Razm992I,0,0,0,CLS_Hs,2,"Pens_Razm992I","Сумма дотяжек - 992 на 1 утр"};
StayFD *_Pens_Razm992I = &_n_Pens_Razm992I;

STAYI6 Pens_RazG992;
StayFD _n_Pens_RazG992 = {&Pens_RazG992,0,0,0,CLS_Hs,2,"Pens_RazG992","Сумма дотяжек - 992-гособ-е"};
StayFD *_Pens_RazG992 = &_n_Pens_RazG992;

STAYI6 Pens_Razm993;
StayFD _n_Pens_Razm993 = {&Pens_Razm993,0,0,0,CLS_Hs,2,"Pens_Razm993","Сумма дотяжек - 993"};
StayFD *_Pens_Razm993 = &_n_Pens_Razm993;

STAYI6 Pens_Razm993I;
StayFD _n_Pens_Razm993I = {&Pens_Razm993I,0,0,0,CLS_Hs,2,"Pens_Razm993I","Сумма дотяжек - 993 на 1 утр"};
StayFD *_Pens_Razm993I = &_n_Pens_Razm993I;

STAYI6 Pens_RazG993;
StayFD _n_Pens_RazG993 = {&Pens_RazG993,0,0,0,CLS_Hs,2,"Pens_RazG993","Сумма дотяжек - 993-гособ-е"};
StayFD *_Pens_RazG993 = &_n_Pens_RazG993;

STAYI6 Pens_Razm996;
StayFD _n_Pens_Razm996 = {&Pens_Razm996,0,0,0,CLS_Hs,2,"Pens_Razm996","Сумма дотяжек - 996"};
StayFD *_Pens_Razm996 = &_n_Pens_Razm996;

STAYI6 Pens_Razm996I;
StayFD _n_Pens_Razm996I = {&Pens_Razm996I,0,0,0,CLS_Hs,2,"Pens_Razm996I","Сумма дотяжек - 996 на 1 утр"};
StayFD *_Pens_Razm996I = &_n_Pens_Razm996I;

STAYI6 Pens_RazG996;
StayFD _n_Pens_RazG996 = {&Pens_RazG996,0,0,0,CLS_Hs,2,"Pens_RazG996","Сумма дотяжек - 996-гособ-е"};
StayFD *_Pens_RazG996 = &_n_Pens_RazG996;

STAYI6 Pens_Razm997;
StayFD _n_Pens_Razm997 = {&Pens_Razm997,0,0,0,CLS_Hs,2,"Pens_Razm997","Сумма дотяжек - 997"};
StayFD *_Pens_Razm997 = &_n_Pens_Razm997;

STAYI6 Pens_Razm997I;
StayFD _n_Pens_Razm997I = {&Pens_Razm997I,0,0,0,CLS_Hs,2,"Pens_Razm997I","Сумма дотяжек - 997 на 1 утр"};
StayFD *_Pens_Razm997I = &_n_Pens_Razm997I;

STAYI6 Pens_RazG997;
StayFD _n_Pens_RazG997 = {&Pens_RazG997,0,0,0,CLS_Hs,2,"Pens_RazG997","Сумма дотяжек - 997-гособ-е"};
StayFD *_Pens_RazG997 = &_n_Pens_RazG997;

STAYI6 Pens_Razm1MN;
StayFD _n_Pens_Razm1MN = {&Pens_Razm1MN,0,0,0,CLS_Hs,9,"Pens_Razm1MN","Вспомогат.перем.для расчетов"};
StayFD *_Pens_Razm1MN = &_n_Pens_Razm1MN;

STAYI6 Pens_Razm1ZR;
StayFD _n_Pens_Razm1ZR = {&Pens_Razm1ZR,0,0,0,CLS_Hs,9,"Pens_Razm1ZR","Вспомогат.перем.для расчетов"};
StayFD *_Pens_Razm1ZR = &_n_Pens_Razm1ZR;

STAYI6 Pens_Razm808;
StayFD _n_Pens_Razm808 = {&Pens_Razm808,0,0,0,CLS_Hs,2,"Pens_Razm808","Сумма дотяжек - 808"};
StayFD *_Pens_Razm808 = &_n_Pens_Razm808;

STAYI6 Pens_Razm908;
StayFD _n_Pens_Razm908 = {&Pens_Razm908,0,0,0,CLS_Hs,2,"Pens_Razm908","Сумма дотяжек - 908"};
StayFD *_Pens_Razm908 = &_n_Pens_Razm908;

STAYI6 Pens_RazmDot;
StayFD _n_Pens_RazmDot = {&Pens_RazmDot,0,0,0,CLS_Hs,2,"Pens_RazmDot","дотяжка пенсии до границы"};
StayFD *_Pens_RazmDot = &_n_Pens_RazmDot;

STAYI6 Perp_Razm709;
StayFD _n_Perp_Razm709 = {&Perp_Razm709,0,0,0,CLS_Hs,2,"Perp_Razm709","Сумма дотяжек - 808"};
StayFD *_Perp_Razm709 = &_n_Perp_Razm709;

STAYI6 Perp_RazG709;
StayFD _n_Perp_RazG709 = {&Perp_RazG709,0,0,0,CLS_Hs,2,"Perp_RazG709","Сумма дотяжек - 808"};
StayFD *_Perp_RazG709 = &_n_Perp_RazG709;

STAYI6 Perp_Razm850;
StayFD _n_Perp_Razm850 = {&Perp_Razm850,0,0,0,CLS_Hs,2,"Perp_Razm850","Сумма дотяжек - 850"};
StayFD *_Perp_Razm850 = &_n_Perp_Razm850;

STAYI6 Perp_RazG850;
StayFD _n_Perp_RazG850 = {&Perp_RazG850,0,0,0,CLS_Hs,2,"Perp_RazG850","Сумма дотяжек - 850-гособ-е"};
StayFD *_Perp_RazG850 = &_n_Perp_RazG850;

STAYI6 Perp_Razm851;
StayFD _n_Perp_Razm851 = {&Perp_Razm851,0,0,0,CLS_Hs,2,"Perp_Razm851","Сумма дотяжек - 851"};
StayFD *_Perp_Razm851 = &_n_Perp_Razm851;

STAYI6 Perp_RazG851;
StayFD _n_Perp_RazG851 = {&Perp_RazG851,0,0,0,CLS_Hs,2,"Perp_RazG851","Сумма дотяжек - 851"};
StayFD *_Perp_RazG851 = &_n_Perp_RazG851;

STAYI6 Perp_Razm852;
StayFD _n_Perp_Razm852 = {&Perp_Razm852,0,0,0,CLS_Hs,2,"Perp_Razm852","Сумма дотяжек - 851"};
StayFD *_Perp_Razm852 = &_n_Perp_Razm852;

STAYI6 Perp_Razm991;
StayFD _n_Perp_Razm991 = {&Perp_Razm991,0,0,0,CLS_Hs,2,"Perp_Razm991","Сумма дотяжек - 911"};
StayFD *_Perp_Razm991 = &_n_Perp_Razm991;

STAYI6 Perp_RazG991;
StayFD _n_Perp_RazG991 = {&Perp_RazG991,0,0,0,CLS_Hs,2,"Perp_RazG991","Сумма дотяжек - 911-гособ-е"};
StayFD *_Perp_RazG991 = &_n_Perp_RazG991;

STAYI6 Perp_Razm992;
StayFD _n_Perp_Razm992 = {&Perp_Razm992,0,0,0,CLS_Hs,2,"Perp_Razm992","Сумма дотяжек - 912"};
StayFD *_Perp_Razm992 = &_n_Perp_Razm992;

STAYI6 Perp_RazG992;
StayFD _n_Perp_RazG992 = {&Perp_RazG992,0,0,0,CLS_Hs,2,"Perp_RazG992","Сумма дотяжек - 912-гособ-е"};
StayFD *_Perp_RazG992 = &_n_Perp_RazG992;

STAYI6 Perp_Razm993;
StayFD _n_Perp_Razm993 = {&Perp_Razm993,0,0,0,CLS_Hs,2,"Perp_Razm993","Сумма дотяжек - 913"};
StayFD *_Perp_Razm993 = &_n_Perp_Razm993;

STAYI6 Perp_RazG993;
StayFD _n_Perp_RazG993 = {&Perp_RazG993,0,0,0,CLS_Hs,2,"Perp_RazG993","Сумма дотяжек - 913-гособ-е"};
StayFD *_Perp_RazG993 = &_n_Perp_RazG993;

STAYI6 Perp_Razm994;
StayFD _n_Perp_Razm994 = {&Perp_Razm994,0,0,0,CLS_Hs,2,"Perp_Razm994","Сумма дотяжек - 994"};
StayFD *_Perp_Razm994 = &_n_Perp_Razm994;

STAYI6 Perp_RazG994;
StayFD _n_Perp_RazG994 = {&Perp_RazG994,0,0,0,CLS_Hs,2,"Perp_RazG994","Сумма дотяжек - 994-гособ-е"};
StayFD *_Perp_RazG994 = &_n_Perp_RazG994;

STAYI6 Perp_Razm995;
StayFD _n_Perp_Razm995 = {&Perp_Razm995,0,0,0,CLS_Hs,2,"Perp_Razm995","Сумма дотяжек - 995"};
StayFD *_Perp_Razm995 = &_n_Perp_Razm995;

STAYI6 Perp_RazG995;
StayFD _n_Perp_RazG995 = {&Perp_RazG995,0,0,0,CLS_Hs,2,"Perp_RazG995","Сумма дотяжек - 995-гособ-е"};
StayFD *_Perp_RazG995 = &_n_Perp_RazG995;

STAYI6 Perp_Ra995PF;
StayFD _n_Perp_Ra995PF = {&Perp_Ra995PF,0,0,0,CLS_Hs,2,"Perp_Ra995PF","Сумма дотяжек - 995 ПФ"};
StayFD *_Perp_Ra995PF = &_n_Perp_Ra995PF;

STAYI6 Perp_RG995PF;
StayFD _n_Perp_RG995PF = {&Perp_RG995PF,0,0,0,CLS_Hs,2,"Perp_RG995PF","Сумма дотяжек - 995-гособ-е ПФ"};
StayFD *_Perp_RG995PF = &_n_Perp_RG995PF;

STAYI6 Perp_Razm996;
StayFD _n_Perp_Razm996 = {&Perp_Razm996,0,0,0,CLS_Hs,2,"Perp_Razm996","Сумма дотяжек - 996"};
StayFD *_Perp_Razm996 = &_n_Perp_Razm996;

STAYI6 Perp_RazG996;
StayFD _n_Perp_RazG996 = {&Perp_RazG996,0,0,0,CLS_Hs,2,"Perp_RazG996","Сумма дотяжек - 996-гособ-е"};
StayFD *_Perp_RazG996 = &_n_Perp_RazG996;

STAYI6 Perp_Razm997;
StayFD _n_Perp_Razm997 = {&Perp_Razm997,0,0,0,CLS_Hs,2,"Perp_Razm997","Сумма дотяжек - 997"};
StayFD *_Perp_Razm997 = &_n_Perp_Razm997;

STAYI6 Perp_RazG997;
StayFD _n_Perp_RazG997 = {&Perp_RazG997,0,0,0,CLS_Hs,2,"Perp_RazG997","Сумма дотяжек - 997-гособ-е"};
StayFD *_Perp_RazG997 = &_n_Perp_RazG997;

STAYI6 Perp_Razm816;
StayFD _n_Perp_Razm816 = {&Perp_Razm816,0,0,0,CLS_Hs,2,"Perp_Razm816","Сумма дотяжек - 816"};
StayFD *_Perp_Razm816 = &_n_Perp_Razm816;

STAYI6 Perp_RazG816;
StayFD _n_Perp_RazG816 = {&Perp_RazG816,0,0,0,CLS_Hs,2,"Perp_RazG816","Сумма дотяжек - 816-гособ-е"};
StayFD *_Perp_RazG816 = &_n_Perp_RazG816;

STAYI6 Perp_Razm817;
StayFD _n_Perp_Razm817 = {&Perp_Razm817,0,0,0,CLS_Hs,2,"Perp_Razm817","Сумма дотяжек - 817"};
StayFD *_Perp_Razm817 = &_n_Perp_Razm817;

STAYI6 Perp_RazG817;
StayFD _n_Perp_RazG817 = {&Perp_RazG817,0,0,0,CLS_Hs,2,"Perp_RazG817","Сумма дотяжек - 817-гособ-е"};
StayFD *_Perp_RazG817 = &_n_Perp_RazG817;

STAYI6 Perp_Razm818;
StayFD _n_Perp_Razm818 = {&Perp_Razm818,0,0,0,CLS_Hs,2,"Perp_Razm818","Сумма дотяжек - 818"};
StayFD *_Perp_Razm818 = &_n_Perp_Razm818;

STAYI6 Perp_RazG818;
StayFD _n_Perp_RazG818 = {&Perp_RazG818,0,0,0,CLS_Hs,2,"Perp_RazG818","Сумма дотяжек - 818-гособ-е"};
StayFD *_Perp_RazG818 = &_n_Perp_RazG818;

STAYI6 Perp_Razm819;
StayFD _n_Perp_Razm819 = {&Perp_Razm819,0,0,0,CLS_Hs,2,"Perp_Razm819","Сумма дотяжек - 819"};
StayFD *_Perp_Razm819 = &_n_Perp_Razm819;

STAYI6 Perp_RazG819;
StayFD _n_Perp_RazG819 = {&Perp_RazG819,0,0,0,CLS_Hs,2,"Perp_RazG819","Сумма дотяжек - 819-гособ-е"};
StayFD *_Perp_RazG819 = &_n_Perp_RazG819;

STAYI6 Perp_Razm820;
StayFD _n_Perp_Razm820 = {&Perp_Razm820,0,0,0,CLS_Hs,2,"Perp_Razm820","Сумма дотяжек - 820"};
StayFD *_Perp_Razm820 = &_n_Perp_Razm820;

STAYI6 Perp_RazG820;
StayFD _n_Perp_RazG820 = {&Perp_RazG820,0,0,0,CLS_Hs,2,"Perp_RazG820","Сумма дотяжек - 820-гособ-е"};
StayFD *_Perp_RazG820 = &_n_Perp_RazG820;

STAYI6 Perp_Razm821;
StayFD _n_Perp_Razm821 = {&Perp_Razm821,0,0,0,CLS_Hs,2,"Perp_Razm821","Сумма дотяжек - 821"};
StayFD *_Perp_Razm821 = &_n_Perp_Razm821;

STAYI6 Perp_RazG821;
StayFD _n_Perp_RazG821 = {&Perp_RazG821,0,0,0,CLS_Hs,2,"Perp_RazG821","Сумма дотяжек - 821-гособ-е"};
StayFD *_Perp_RazG821 = &_n_Perp_RazG821;

STAYI6 Perp_Razm822;
StayFD _n_Perp_Razm822 = {&Perp_Razm822,0,0,0,CLS_Hs,2,"Perp_Razm822","Сумма дотяжек - 822"};
StayFD *_Perp_Razm822 = &_n_Perp_Razm822;

STAYI6 Perp_RazG822;
StayFD _n_Perp_RazG822 = {&Perp_RazG822,0,0,0,CLS_Hs,2,"Perp_RazG822","Сумма дотяжек - 822-гособ-е"};
StayFD *_Perp_RazG822 = &_n_Perp_RazG822;

STAYI6 Perp_Razm823;
StayFD _n_Perp_Razm823 = {&Perp_Razm823,0,0,0,CLS_Hs,2,"Perp_Razm823","Сумма дотяжек - 823"};
StayFD *_Perp_Razm823 = &_n_Perp_Razm823;

STAYI6 Perp_RazG823;
StayFD _n_Perp_RazG823 = {&Perp_RazG823,0,0,0,CLS_Hs,2,"Perp_RazG823","Сумма дотяжек - 823-гособ-е"};
StayFD *_Perp_RazG823 = &_n_Perp_RazG823;

STAYI6 Perp_Razm824;
StayFD _n_Perp_Razm824 = {&Perp_Razm824,0,0,0,CLS_Hs,2,"Perp_Razm824","Сумма дотяжек - 824"};
StayFD *_Perp_Razm824 = &_n_Perp_Razm824;

STAYI6 Perp_RazG824;
StayFD _n_Perp_RazG824 = {&Perp_RazG824,0,0,0,CLS_Hs,2,"Perp_RazG824","Сумма дотяжек - 824-гособ-е"};
StayFD *_Perp_RazG824 = &_n_Perp_RazG824;

STAYI6 Perp_Razm825;
StayFD _n_Perp_Razm825 = {&Perp_Razm825,0,0,0,CLS_Hs,2,"Perp_Razm825","Сумма дотяжек - 825"};
StayFD *_Perp_Razm825 = &_n_Perp_Razm825;

STAYI6 Perp_RazG825;
StayFD _n_Perp_RazG825 = {&Perp_RazG825,0,0,0,CLS_Hs,2,"Perp_RazG825","Сумма дотяжек - 825-гособ-е"};
StayFD *_Perp_RazG825 = &_n_Perp_RazG825;

STAYI6 Perp_Razm829;
StayFD _n_Perp_Razm829 = {&Perp_Razm829,0,0,0,CLS_Hs,2,"Perp_Razm829","Сумма дотяжек - 829"};
StayFD *_Perp_Razm829 = &_n_Perp_Razm829;

STAYI6 Perp_RazG829;
StayFD _n_Perp_RazG829 = {&Perp_RazG829,0,0,0,CLS_Hs,2,"Perp_RazG829","Сумма дотяжек - 829-гособ-е"};
StayFD *_Perp_RazG829 = &_n_Perp_RazG829;

STAYI6 Perp_Razm853;
StayFD _n_Perp_Razm853 = {&Perp_Razm853,0,0,0,CLS_Hs,2,"Perp_Razm853",""};
StayFD *_Perp_Razm853 = &_n_Perp_Razm853;

STAYI6 Perp_RazG853;
StayFD _n_Perp_RazG853 = {&Perp_RazG853,0,0,0,CLS_Hs,2,"Perp_RazG853",""};
StayFD *_Perp_RazG853 = &_n_Perp_RazG853;

STAYI6 Perp_Razm854;
StayFD _n_Perp_Razm854 = {&Perp_Razm854,0,0,0,CLS_Hs,2,"Perp_Razm854",""};
StayFD *_Perp_Razm854 = &_n_Perp_Razm854;

STAYI6 Perp_RazG854;
StayFD _n_Perp_RazG854 = {&Perp_RazG854,0,0,0,CLS_Hs,2,"Perp_RazG854",""};
StayFD *_Perp_RazG854 = &_n_Perp_RazG854;

STAYI6 Perp_Razm854D;
StayFD _n_Perp_Razm854D = {&Perp_Razm854D,0,0,0,CLS_Hs,2,"Perp_Razm854D",""};
StayFD *_Perp_Razm854D = &_n_Perp_Razm854D;

STAYI6 Perp_RazG854D;
StayFD _n_Perp_RazG854D = {&Perp_RazG854D,0,0,0,CLS_Hs,2,"Perp_RazG854D",""};
StayFD *_Perp_RazG854D = &_n_Perp_RazG854D;

STAYI6 Perp_Razm855;
StayFD _n_Perp_Razm855 = {&Perp_Razm855,0,0,0,CLS_Hs,2,"Perp_Razm855",""};
StayFD *_Perp_Razm855 = &_n_Perp_Razm855;

STAYI6 Perp_RazG855;
StayFD _n_Perp_RazG855 = {&Perp_RazG855,0,0,0,CLS_Hs,2,"Perp_RazG855",""};
StayFD *_Perp_RazG855 = &_n_Perp_RazG855;

STAYI6 Perp_Razm856;
StayFD _n_Perp_Razm856 = {&Perp_Razm856,0,0,0,CLS_Hs,2,"Perp_Razm856",""};
StayFD *_Perp_Razm856 = &_n_Perp_Razm856;

STAYI6 Perp_RazG856;
StayFD _n_Perp_RazG856 = {&Perp_RazG856,0,0,0,CLS_Hs,2,"Perp_RazG856",""};
StayFD *_Perp_RazG856 = &_n_Perp_RazG856;

STAYI6 Perp_Razm857;
StayFD _n_Perp_Razm857 = {&Perp_Razm857,0,0,0,CLS_Hs,2,"Perp_Razm857",""};
StayFD *_Perp_Razm857 = &_n_Perp_Razm857;

STAYI6 Perp_RazG857;
StayFD _n_Perp_RazG857 = {&Perp_RazG857,0,0,0,CLS_Hs,2,"Perp_RazG857",""};
StayFD *_Perp_RazG857 = &_n_Perp_RazG857;

STAYI6 Perp_Razm858;
StayFD _n_Perp_Razm858 = {&Perp_Razm858,0,0,0,CLS_Hs,2,"Perp_Razm858",""};
StayFD *_Perp_Razm858 = &_n_Perp_Razm858;

STAYI6 Perp_RazG858;
StayFD _n_Perp_RazG858 = {&Perp_RazG858,0,0,0,CLS_Hs,2,"Perp_RazG858",""};
StayFD *_Perp_RazG858 = &_n_Perp_RazG858;

STAYI6 Perp_RazD858;
StayFD _n_Perp_RazD858 = {&Perp_RazD858,0,0,0,CLS_Hs,2,"Perp_RazD858",""};
StayFD *_Perp_RazD858 = &_n_Perp_RazD858;

STAYI6 Perp_Razm826;
StayFD _n_Perp_Razm826 = {&Perp_Razm826,0,0,0,CLS_Hs,2,"Perp_Razm826",""};
StayFD *_Perp_Razm826 = &_n_Perp_Razm826;

STAYI6 Perp_RazG826;
StayFD _n_Perp_RazG826 = {&Perp_RazG826,0,0,0,CLS_Hs,2,"Perp_RazG826",""};
StayFD *_Perp_RazG826 = &_n_Perp_RazG826;

STAYI6 Perp_Razm827;
StayFD _n_Perp_Razm827 = {&Perp_Razm827,0,0,0,CLS_Hs,2,"Perp_Razm827",""};
StayFD *_Perp_Razm827 = &_n_Perp_Razm827;

STAYI6 Perp_RazG827;
StayFD _n_Perp_RazG827 = {&Perp_RazG827,0,0,0,CLS_Hs,2,"Perp_RazG827",""};
StayFD *_Perp_RazG827 = &_n_Perp_RazG827;

STAYI6 Perp_Razm830;
StayFD _n_Perp_Razm830 = {&Perp_Razm830,0,0,0,CLS_Hs,2,"Perp_Razm830",""};
StayFD *_Perp_Razm830 = &_n_Perp_Razm830;

STAYI6 Perp_RazG830;
StayFD _n_Perp_RazG830 = {&Perp_RazG830,0,0,0,CLS_Hs,2,"Perp_RazG830",""};
StayFD *_Perp_RazG830 = &_n_Perp_RazG830;

STAYI6 Perp_Razm828;
StayFD _n_Perp_Razm828 = {&Perp_Razm828,0,0,0,CLS_Hs,2,"Perp_Razm828",""};
StayFD *_Perp_Razm828 = &_n_Perp_Razm828;

STAYI6 Perp_RazG828;
StayFD _n_Perp_RazG828 = {&Perp_RazG828,0,0,0,CLS_Hs,2,"Perp_RazG828",""};
StayFD *_Perp_RazG828 = &_n_Perp_RazG828;

STAYI6 Perp_Razm890;
StayFD _n_Perp_Razm890 = {&Perp_Razm890,0,0,0,CLS_Hs,2,"Perp_Razm890",""};
StayFD *_Perp_Razm890 = &_n_Perp_Razm890;

STAYI6 Perp_RazG890;
StayFD _n_Perp_RazG890 = {&Perp_RazG890,0,0,0,CLS_Hs,2,"Perp_RazG890",""};
StayFD *_Perp_RazG890 = &_n_Perp_RazG890;

STAYI6 Perp_Razm814;
StayFD _n_Perp_Razm814 = {&Perp_Razm814,0,0,0,CLS_Hs,2,"Perp_Razm814",""};
StayFD *_Perp_Razm814 = &_n_Perp_Razm814;

STAYI6 Perp_RazG814;
StayFD _n_Perp_RazG814 = {&Perp_RazG814,0,0,0,CLS_Hs,2,"Perp_RazG814",""};
StayFD *_Perp_RazG814 = &_n_Perp_RazG814;

STAYI6 Perp_Razm815;
StayFD _n_Perp_Razm815 = {&Perp_Razm815,0,0,0,CLS_Hs,2,"Perp_Razm815",""};
StayFD *_Perp_Razm815 = &_n_Perp_Razm815;

STAYI6 Perp_RazG815;
StayFD _n_Perp_RazG815 = {&Perp_RazG815,0,0,0,CLS_Hs,2,"Perp_RazG815",""};
StayFD *_Perp_RazG815 = &_n_Perp_RazG815;

STAYI6 Pens_RazmGDot;
StayFD _n_Pens_RazmGDot = {&Pens_RazmGDot,0,0,0,CLS_Hs,2,"Pens_RazmGDot","дотяжка пенсии до границы"};
StayFD *_Pens_RazmGDot = &_n_Pens_RazmGDot;

STAYI6 Pens_RazmGIND;
StayFD _n_Pens_RazmGIND = {&Pens_RazmGIND,0,0,0,CLS_Hs,5,"Pens_RazmGIND","Размер суммы с индексом"};
StayFD *_Pens_RazmGIND = &_n_Pens_RazmGIND;

STAYI6 Pens_RazmGos;
StayFD _n_Pens_RazmGos = {&Pens_RazmGos,0,0,0,CLS_Hs,2,"Pens_RazmGos","пенсия в случае гособесп"};
StayFD *_Pens_RazmGos = &_n_Pens_RazmGos;

STAYI6 Pens_RazmIND;
StayFD _n_Pens_RazmIND = {&Pens_RazmIND,0,0,0,CLS_Hs,2,"Pens_RazmIND","Размер индекса"};
StayFD *_Pens_RazmIND = &_n_Pens_RazmIND;

STAYI6 Pens_RazmOtct;
StayFD _n_Pens_RazmOtct = {&Pens_RazmOtct,0,0,0,CLS_Hs,5,"Pens_RazmOtct","Размер пенсии с коэф-том"};
StayFD *_Pens_RazmOtct = &_n_Pens_RazmOtct;

STAYI6 Pens_RazmDosr;
StayFD _n_Pens_RazmDosr = {&Pens_RazmDosr,0,0,0,CLS_Hs,5,"Pens_RazmDosr","Размер пенсии с коэф-том"};
StayFD *_Pens_RazmDosr = &_n_Pens_RazmDosr;

STAYI6 Pens_RazmM136;
StayFD _n_Pens_RazmM136 = {&Pens_RazmM136,0,0,0,CLS_Hs,5,"Pens_RazmM136","Размер пенсии с коэф-том"};
StayFD *_Pens_RazmM136 = &_n_Pens_RazmM136;

STAYI6 Pens_RazmM137;
StayFD _n_Pens_RazmM137 = {&Pens_RazmM137,0,0,0,CLS_Hs,5,"Pens_RazmM137","Размер пенсии с коэф-том"};
StayFD *_Pens_RazmM137 = &_n_Pens_RazmM137;

STAYI6 Pens_RazmS291;
StayFD _n_Pens_RazmS291 = {&Pens_RazmS291,0,0,0,CLS_Hs,5,"Pens_RazmS291","Размер пенсии с коэф-том"};
StayFD *_Pens_RazmS291 = &_n_Pens_RazmS291;

STAYI6 Pens_RazmS293;
StayFD _n_Pens_RazmS293 = {&Pens_RazmS293,0,0,0,CLS_Hs,5,"Pens_RazmS293","Размер пенсии с коэф-том"};
StayFD *_Pens_RazmS293 = &_n_Pens_RazmS293;

STAYI6 Pens_RazmS297;
StayFD _n_Pens_RazmS297 = {&Pens_RazmS297,0,0,0,CLS_Hs,5,"Pens_RazmS297","Размер пенсии с коэф-том"};
StayFD *_Pens_RazmS297 = &_n_Pens_RazmS297;

STAYI6 Pens_RazmS298;
StayFD _n_Pens_RazmS298 = {&Pens_RazmS298,0,0,0,CLS_Hs,5,"Pens_RazmS298","Размер пенсии с коэф-том"};
StayFD *_Pens_RazmS298 = &_n_Pens_RazmS298;

STAYI6 Pens_RazmKoef;
StayFD _n_Pens_RazmKoef = {&Pens_RazmKoef,0,0,0,CLS_Hs,5,"Pens_RazmKoef","Размер пенсии с коэф-том"};
StayFD *_Pens_RazmKoef = &_n_Pens_RazmKoef;

STAYI6 Pens_RazmZKf;
StayFD _n_Pens_RazmZKf = {&Pens_RazmZKf,0,0,0,CLS_Hs,5,"Pens_RazmZKf",""};
StayFD *_Pens_RazmZKf = &_n_Pens_RazmZKf;

STAYI6 Pens_RazmIgd1;
StayFD _n_Pens_RazmIgd1 = {&Pens_RazmIgd1,0,0,0,CLS_Hs,5,"Pens_RazmIgd1",""};
StayFD *_Pens_RazmIgd1 = &_n_Pens_RazmIgd1;

STAYI6 Pens_RazmIgdM;
StayFD _n_Pens_RazmIgdM = {&Pens_RazmIgdM,0,0,0,CLS_Hs,5,"Pens_RazmIgdM",""};
StayFD *_Pens_RazmIgdM = &_n_Pens_RazmIgdM;

STAYUI6 Pens_RazmKoef4;
StayFD _n_Pens_RazmKoef4 = {&Pens_RazmKoef4,0,0,0,CLS_H,9,"Pens_RazmKoef4","рабочая с 4-мя знаками после з"};
StayFD *_Pens_RazmKoef4 = &_n_Pens_RazmKoef4;

STAYUI6 Pens_RazmKoef6;
StayFD _n_Pens_RazmKoef6 = {&Pens_RazmKoef6,0,0,0,CLS_H,9,"Pens_RazmKoef6","рабочая с 6-ю знаками после за"};
StayFD *_Pens_RazmKoef6 = &_n_Pens_RazmKoef6;

STAYI6 Pens_RazmMALOB;
StayFD _n_Pens_RazmMALOB = {&Pens_RazmMALOB,0,0,0,CLS_Hs,2,"Pens_RazmMALOB","Сумма границы малообеспеченности"};
StayFD *_Pens_RazmMALOB = &_n_Pens_RazmMALOB;

STAYI6 Pens_RazmNP;
StayFD _n_Pens_RazmNP = {&Pens_RazmNP,0,0,0,CLS_Hs,2,"Pens_RazmNP","Размер надбавок ми повышений"};
StayFD *_Pens_RazmNP = &_n_Pens_RazmNP;

STAYI6 Pens_RazmNPU;
StayFD _n_Pens_RazmNPU = {&Pens_RazmNPU,0,0,0,CLS_Hs,2,"Pens_RazmNPU","Размер надбавок за особые заслуги"};
StayFD *_Pens_RazmNPU = &_n_Pens_RazmNPU;

STAYI6 Pens_RazmOgr;
StayFD _n_Pens_RazmOgr = {&Pens_RazmOgr,0,0,0,CLS_Hs,5,"Pens_RazmOgr","Размер с учетом ограничений"};
StayFD *_Pens_RazmOgr = &_n_Pens_RazmOgr;

STAYI6 Pens_RazmOS;
StayFD _n_Pens_RazmOS = {&Pens_RazmOS,0,0,0,CLS_Hs,5,"Pens_RazmOS","Размер с учетом ограничений"};
StayFD *_Pens_RazmOS = &_n_Pens_RazmOS;

STAYI6 Pens_RazmGS;
StayFD _n_Pens_RazmGS = {&Pens_RazmGS,0,0,0,CLS_Hs,5,"Pens_RazmGS","Размер с учетом ограничений"};
StayFD *_Pens_RazmGS = &_n_Pens_RazmGS;

STAYI6 Pens_RazmOVsr;
StayFD _n_Pens_RazmOVsr = {&Pens_RazmOVsr,0,0,0,CLS_Hs,5,"Pens_RazmOVsr","Размер с учетом ограничений"};
StayFD *_Pens_RazmOVsr = &_n_Pens_RazmOVsr;

STAYI6 Pens_Sum3233;
StayFD _n_Pens_Sum3233 = {&Pens_Sum3233,0,0,0,CLS_Hs,5,"Pens_Sum3233","Размер с учетом ограничений"};
StayFD *_Pens_Sum3233 = &_n_Pens_Sum3233;

WORD  Pens_NNNP;
StayFD _n_Pens_NNNP = {&Pens_NNNP,0,0,0,CLS_I,0,"Pens_NNNP",""};
StayFD *_Pens_NNNP = &_n_Pens_NNNP;

WORD  Pens_ProcOIP;
StayFD _n_Pens_ProcOIP = {&Pens_ProcOIP,0,0,0,CLS_I,0,"Pens_ProcOIP","% отзаработка"};
StayFD *_Pens_ProcOIP = &_n_Pens_ProcOIP;

BYTE  Pens_NIgdOIP;
StayFD _n_Pens_NIgdOIP = {&Pens_NIgdOIP,0,0,0,CLS_S,0,"Pens_NIgdOIP",""};
StayFD *_Pens_NIgdOIP = &_n_Pens_NIgdOIP;

STAYI6 Pens_RazmOIP;
StayFD _n_Pens_RazmOIP = {&Pens_RazmOIP,0,0,0,CLS_Hs,5,"Pens_RazmOIP","Размер с учетом ограничений"};
StayFD *_Pens_RazmOIP = &_n_Pens_RazmOIP;

STAYI6 Pens_RazmOIP2;
StayFD _n_Pens_RazmOIP2 = {&Pens_RazmOIP2,0,0,0,CLS_Hs,5,"Pens_RazmOIP2","Размер с учетом ограничений"};
StayFD *_Pens_RazmOIP2 = &_n_Pens_RazmOIP2;

STAYI6 Pens_RazmOIPNS;
StayFD _n_Pens_RazmOIPNS = {&Pens_RazmOIPNS,0,0,0,CLS_Hs,5,"Pens_RazmOIPNS","Размер с учетом ограничений"};
StayFD *_Pens_RazmOIPNS = &_n_Pens_RazmOIPNS;

STAYI6 Pens_RazmOIPS;
StayFD _n_Pens_RazmOIPS = {&Pens_RazmOIPS,0,0,0,CLS_Hs,5,"Pens_RazmOIPS","Размер с учетом ограничений"};
StayFD *_Pens_RazmOIPS = &_n_Pens_RazmOIPS;

STAYI6 Pens_RabOgr2;
StayFD _n_Pens_RabOgr2 = {&Pens_RabOgr2,0,0,0,CLS_Hs,5,"Pens_RabOgr2","Размер с учетом ограничений"};
StayFD *_Pens_RabOgr2 = &_n_Pens_RabOgr2;

STAYI6 Pens_RabGor2;
StayFD _n_Pens_RabGor2 = {&Pens_RabGor2,0,0,0,CLS_Hs,5,"Pens_RabGor2","Размер с учетом ограничений"};
StayFD *_Pens_RabGor2 = &_n_Pens_RabGor2;

STAYI6 Pens_RabO0128;
StayFD _n_Pens_RabO0128 = {&Pens_RabO0128,0,0,0,CLS_Hs,5,"Pens_RabO0128","Размер с учетом ограничений"};
StayFD *_Pens_RabO0128 = &_n_Pens_RabO0128;

STAYI6 Pens_ROsn0128;
StayFD _n_Pens_ROsn0128 = {&Pens_ROsn0128,0,0,0,CLS_Hs,5,"Pens_ROsn0128","Размер с учетом ограничений"};
StayFD *_Pens_ROsn0128 = &_n_Pens_ROsn0128;

STAYI6 Pens_RazmOgr2;
StayFD _n_Pens_RazmOgr2 = {&Pens_RazmOgr2,0,0,0,CLS_Hs,5,"Pens_RazmOgr2","Размер с учетом ограничений"};
StayFD *_Pens_RazmOgr2 = &_n_Pens_RazmOgr2;

STAYI6 Pens_RabO282;
StayFD _n_Pens_RabO282 = {&Pens_RabO282,0,0,0,CLS_Hs,5,"Pens_RabO282","Размер с учетом ограничений"};
StayFD *_Pens_RabO282 = &_n_Pens_RabO282;

STAYI6 Pens_RabDKfI;
StayFD _n_Pens_RabDKfI = {&Pens_RabDKfI,0,0,0,CLS_Hs,5,"Pens_RabDKfI","Размер с учетом ограничений"};
StayFD *_Pens_RabDKfI = &_n_Pens_RabDKfI;

STAYI6 Pens_RazmOgrNS;
StayFD _n_Pens_RazmOgrNS = {&Pens_RazmOgrNS,0,0,0,CLS_Hs,5,"Pens_RazmOgrNS","Размер пенсии при неп стаже"};
StayFD *_Pens_RazmOgrNS = &_n_Pens_RazmOgrNS;

STAYI6 Pens_RazmOgNS2;
StayFD _n_Pens_RazmOgNS2 = {&Pens_RazmOgNS2,0,0,0,CLS_Hs,5,"Pens_RazmOgNS2","Размер пенсии при неп стаже"};
StayFD *_Pens_RazmOgNS2 = &_n_Pens_RazmOgNS2;

STAYI6 Pens_RazmOgrS;
StayFD _n_Pens_RazmOgrS = {&Pens_RazmOgrS,0,0,0,CLS_Hs,5,"Pens_RazmOgrS","Размер пенсии для сироты"};
StayFD *_Pens_RazmOgrS = &_n_Pens_RazmOgrS;

STAYI6 Pens_RazmO28;
StayFD _n_Pens_RazmO28 = {&Pens_RazmO28,0,0,0,CLS_Hs,5,"Pens_RazmO28","Размер с учетом ограничений"};
StayFD *_Pens_RazmO28 = &_n_Pens_RazmO28;

STAYI6 Pens_RazGO28;
StayFD _n_Pens_RazGO28 = {&Pens_RazGO28,0,0,0,CLS_Hs,2,"Pens_RazGO28",""};
StayFD *_Pens_RazGO28 = &_n_Pens_RazGO28;

STAYI6 Pens_RazmO282;
StayFD _n_Pens_RazmO282 = {&Pens_RazmO282,0,0,0,CLS_Hs,5,"Pens_RazmO282","Размер с учетом ограничений"};
StayFD *_Pens_RazmO282 = &_n_Pens_RazmO282;

STAYI6 Pens_RazmO28NS;
StayFD _n_Pens_RazmO28NS = {&Pens_RazmO28NS,0,0,0,CLS_Hs,5,"Pens_RazmO28NS","Размер пенсии при неп стаже"};
StayFD *_Pens_RazmO28NS = &_n_Pens_RazmO28NS;

STAYI6 Pens_RazmO8NS2;
StayFD _n_Pens_RazmO8NS2 = {&Pens_RazmO8NS2,0,0,0,CLS_Hs,5,"Pens_RazmO8NS2","Размер пенсии при неп стаже"};
StayFD *_Pens_RazmO8NS2 = &_n_Pens_RazmO8NS2;

STAYI6 Pens_RazmO28S;
StayFD _n_Pens_RazmO28S = {&Pens_RazmO28S,0,0,0,CLS_Hs,5,"Pens_RazmO28S","Размер пенсии для сироты"};
StayFD *_Pens_RazmO28S = &_n_Pens_RazmO28S;

STAYI6 Pens_RazmOsn;
StayFD _n_Pens_RazmOsn = {&Pens_RazmOsn,0,0,0,CLS_Hs,5,"Pens_RazmOsn","Основной размер пенсии"};
StayFD *_Pens_RazmOsn = &_n_Pens_RazmOsn;

STAYI6 Pens_RazmPMin;
StayFD _n_Pens_RazmPMin = {&Pens_RazmPMin,0,0,0,CLS_Hs,2,"Pens_RazmPMin","Основной размер пенсии"};
StayFD *_Pens_RazmPMin = &_n_Pens_RazmPMin;

STAYI6 Pens_RazmPNSt;
StayFD _n_Pens_RazmPNSt = {&Pens_RazmPNSt,0,0,0,CLS_Hs,2,"Pens_RazmPNSt","Основной размер пенсии"};
StayFD *_Pens_RazmPNSt = &_n_Pens_RazmPNSt;

STAYI6 Pens_RazmDPLM;
StayFD _n_Pens_RazmDPLM = {&Pens_RazmDPLM,0,0,0,CLS_Hs,2,"Pens_RazmDPLM","Основной размер пенсии"};
StayFD *_Pens_RazmDPLM = &_n_Pens_RazmDPLM;

STAYI6 Pens_RazGDPLM;
StayFD _n_Pens_RazGDPLM = {&Pens_RazGDPLM,0,0,0,CLS_Hs,2,"Pens_RazGDPLM","Основной размер пенсии"};
StayFD *_Pens_RazGDPLM = &_n_Pens_RazGDPLM;

STAYI6 Pens_RazmDPLP;
StayFD _n_Pens_RazmDPLP = {&Pens_RazmDPLP,0,0,0,CLS_Hs,2,"Pens_RazmDPLP","Основной размер пенсии"};
StayFD *_Pens_RazmDPLP = &_n_Pens_RazmDPLP;

STAYI6 Pens_RazGDPLP;
StayFD _n_Pens_RazGDPLP = {&Pens_RazGDPLP,0,0,0,CLS_Hs,2,"Pens_RazGDPLP","Основной размер пенсии"};
StayFD *_Pens_RazGDPLP = &_n_Pens_RazGDPLP;

STAYI6 Pens_RazmDKf;
StayFD _n_Pens_RazmDKf = {&Pens_RazmDKf,0,0,0,CLS_Hs,2,"Pens_RazmDKf","Основной размер пенсии"};
StayFD *_Pens_RazmDKf = &_n_Pens_RazmDKf;

STAYI6 Pens_RazmDKfI;
StayFD _n_Pens_RazmDKfI = {&Pens_RazmDKfI,0,0,0,CLS_Hs,2,"Pens_RazmDKfI","Основной размер пенсии"};
StayFD *_Pens_RazmDKfI = &_n_Pens_RazmDKfI;

WORD  Pens_RazmProc;
StayFD _n_Pens_RazmProc = {&Pens_RazmProc,0,0,0,CLS_I,0,"Pens_RazmProc","Вспомогат.перем.для расчетов"};
StayFD *_Pens_RazmProc = &_n_Pens_RazmProc;

WORD  Pens_RazmProcR;
StayFD _n_Pens_RazmProcR = {&Pens_RazmProcR,0,0,0,CLS_I,0,"Pens_RazmProcR","Вспомогат.перем.для расчетов"};
StayFD *_Pens_RazmProcR = &_n_Pens_RazmProcR;

STAYI6 Pens_RazmSIND;
StayFD _n_Pens_RazmSIND = {&Pens_RazmSIND,0,0,0,CLS_Hs,5,"Pens_RazmSIND","Размер суммы с индексом"};
StayFD *_Pens_RazmSIND = &_n_Pens_RazmSIND;

STAYI6 Pens_RazmVar;
StayFD _n_Pens_RazmVar = {&Pens_RazmVar,0,0,0,CLS_Hs,2,"Pens_RazmVar","Вспомогат.перем.для расчетов"};
StayFD *_Pens_RazmVar = &_n_Pens_RazmVar;

STAYI6 Pens_RazmVar5;
StayFD _n_Pens_RazmVar5 = {&Pens_RazmVar5,0,0,0,CLS_Hs,5,"Pens_RazmVar5","рабочая"};
StayFD *_Pens_RazmVar5 = &_n_Pens_RazmVar5;

STAYI6 Pens_RazmVarP;
StayFD _n_Pens_RazmVarP = {&Pens_RazmVarP,0,0,0,CLS_Hs,5,"Pens_RazmVarP","рабочая"};
StayFD *_Pens_RazmVarP = &_n_Pens_RazmVarP;

STAYI6 Pens_RazmVipl;
StayFD _n_Pens_RazmVipl = {&Pens_RazmVipl,0,0,0,CLS_Hs,2,"Pens_RazmVipl","Размер пенсии к выплате"};
StayFD *_Pens_RazmVipl = &_n_Pens_RazmVipl;

STAYI6 Pens_RazmVipl5;
StayFD _n_Pens_RazmVipl5 = {&Pens_RazmVipl5,0,0,0,CLS_Hs,5,"Pens_RazmVipl5","Размер пенсии к выплате"};
StayFD *_Pens_RazmVipl5 = &_n_Pens_RazmVipl5;

STAYI6 Pens_Sir908;
StayFD _n_Pens_Sir908 = {&Pens_Sir908,0,0,0,CLS_Hs,2,"Pens_Sir908","Сумма дотяжек - 908"};
StayFD *_Pens_Sir908 = &_n_Pens_Sir908;

STAYI6 Pens_SirG908;
StayFD _n_Pens_SirG908 = {&Pens_SirG908,0,0,0,CLS_Hs,2,"Pens_SirG908","Сумма дотяжек - 908-гособ-е"};
StayFD *_Pens_SirG908 = &_n_Pens_SirG908;

STAYI6 Pens_Razm850;
StayFD _n_Pens_Razm850 = {&Pens_Razm850,0,0,0,CLS_Hs,2,"Pens_Razm850","Сумма дотяжек - 850"};
StayFD *_Pens_Razm850 = &_n_Pens_Razm850;

STAYI6 Pens_Razm851;
StayFD _n_Pens_Razm851 = {&Pens_Razm851,0,0,0,CLS_Hs,2,"Pens_Razm851","Сумма дотяжек - 851"};
StayFD *_Pens_Razm851 = &_n_Pens_Razm851;

STAYI6 Pens_RazG851;
StayFD _n_Pens_RazG851 = {&Pens_RazG851,0,0,0,CLS_Hs,2,"Pens_RazG851","Сумма дотяжек - 851"};
StayFD *_Pens_RazG851 = &_n_Pens_RazG851;

STAYI6 Pens_Razm853;
StayFD _n_Pens_Razm853 = {&Pens_Razm853,0,0,0,CLS_Hs,2,"Pens_Razm853",""};
StayFD *_Pens_Razm853 = &_n_Pens_Razm853;

STAYI6 Pens_RazG853;
StayFD _n_Pens_RazG853 = {&Pens_RazG853,0,0,0,CLS_Hs,2,"Pens_RazG853",""};
StayFD *_Pens_RazG853 = &_n_Pens_RazG853;

STAYI6 Pens_Razm814;
StayFD _n_Pens_Razm814 = {&Pens_Razm814,0,0,0,CLS_Hs,2,"Pens_Razm814",""};
StayFD *_Pens_Razm814 = &_n_Pens_Razm814;

STAYI6 Pens_RazG814;
StayFD _n_Pens_RazG814 = {&Pens_RazG814,0,0,0,CLS_Hs,2,"Pens_RazG814",""};
StayFD *_Pens_RazG814 = &_n_Pens_RazG814;

STAYI6 Pens_Razm815;
StayFD _n_Pens_Razm815 = {&Pens_Razm815,0,0,0,CLS_Hs,2,"Pens_Razm815",""};
StayFD *_Pens_Razm815 = &_n_Pens_Razm815;

STAYI6 Pens_RazG815;
StayFD _n_Pens_RazG815 = {&Pens_RazG815,0,0,0,CLS_Hs,2,"Pens_RazG815",""};
StayFD *_Pens_RazG815 = &_n_Pens_RazG815;

STAYI6 Pens_Razm816;
StayFD _n_Pens_Razm816 = {&Pens_Razm816,0,0,0,CLS_Hs,2,"Pens_Razm816",""};
StayFD *_Pens_Razm816 = &_n_Pens_Razm816;

STAYI6 Pens_RazG816;
StayFD _n_Pens_RazG816 = {&Pens_RazG816,0,0,0,CLS_Hs,2,"Pens_RazG816",""};
StayFD *_Pens_RazG816 = &_n_Pens_RazG816;

STAYI6 Pens_Razm822;
StayFD _n_Pens_Razm822 = {&Pens_Razm822,0,0,0,CLS_Hs,2,"Pens_Razm822",""};
StayFD *_Pens_Razm822 = &_n_Pens_Razm822;

STAYI6 Pens_RazG822;
StayFD _n_Pens_RazG822 = {&Pens_RazG822,0,0,0,CLS_Hs,2,"Pens_RazG822",""};
StayFD *_Pens_RazG822 = &_n_Pens_RazG822;

STAYI6 Pens_Razm823;
StayFD _n_Pens_Razm823 = {&Pens_Razm823,0,0,0,CLS_Hs,2,"Pens_Razm823",""};
StayFD *_Pens_Razm823 = &_n_Pens_Razm823;

STAYI6 Pens_RazG823;
StayFD _n_Pens_RazG823 = {&Pens_RazG823,0,0,0,CLS_Hs,2,"Pens_RazG823",""};
StayFD *_Pens_RazG823 = &_n_Pens_RazG823;

STAYI6 Pens_Razm854;
StayFD _n_Pens_Razm854 = {&Pens_Razm854,0,0,0,CLS_Hs,2,"Pens_Razm854",""};
StayFD *_Pens_Razm854 = &_n_Pens_Razm854;

STAYI6 Pens_RazG854;
StayFD _n_Pens_RazG854 = {&Pens_RazG854,0,0,0,CLS_Hs,2,"Pens_RazG854",""};
StayFD *_Pens_RazG854 = &_n_Pens_RazG854;

STAYI6 Pens_Razm854D;
StayFD _n_Pens_Razm854D = {&Pens_Razm854D,0,0,0,CLS_Hs,2,"Pens_Razm854D",""};
StayFD *_Pens_Razm854D = &_n_Pens_Razm854D;

STAYI6 Pens_RazG854D;
StayFD _n_Pens_RazG854D = {&Pens_RazG854D,0,0,0,CLS_Hs,2,"Pens_RazG854D",""};
StayFD *_Pens_RazG854D = &_n_Pens_RazG854D;

STAYI6 Pens_Razm709;
StayFD _n_Pens_Razm709 = {&Pens_Razm709,0,0,0,CLS_Hs,2,"Pens_Razm709","Сумма дотяжек - 709"};
StayFD *_Pens_Razm709 = &_n_Pens_Razm709;

STAYI6 Pens_KoefGs;
StayFD _n_Pens_KoefGs = {&Pens_KoefGs,0,0,0,CLS_Hs,5,"Pens_KoefGs","Љ®Ґд-­в Ј®б®ЎҐбЇҐзҐ­Ёп"};
StayFD *_Pens_KoefGs = &_n_Pens_KoefGs;

BYTE  Pens_VarRas;
StayFD _n_Pens_VarRas = {&Pens_VarRas,0,0,0,CLS_S,0,"Pens_VarRas","Вариант расч 1-ЗП 2-СМЕШ 3-МП"};
StayFD *_Pens_VarRas = &_n_Pens_VarRas;

StayDate Per_DateBeg;
StayFD _n_Per_DateBeg = {&Per_DateBeg,0,0,0,CLS_Date,0,"Per_DateBeg","Дата начала периода выплаты"};
StayFD *_Per_DateBeg = &_n_Per_DateBeg;

StayDate Per_DateEnd;
StayFD _n_Per_DateEnd = {&Per_DateEnd,0,0,0,CLS_Date,0,"Per_DateEnd","Дата оконачния периода выплаты"};
StayFD *_Per_DateEnd = &_n_Per_DateEnd;

StayDate Per_DopBeg;
StayFD _n_Per_DopBeg = {&Per_DopBeg,0,0,0,CLS_Date,0,"Per_DopBeg","Дата наступления права - дополнительная"};
StayFD *_Per_DopBeg = &_n_Per_DopBeg;

BYTE  Per_IgdGs;
StayFD _n_Per_IgdGs = {&Per_IgdGs,0,0,0,CLS_S,0,"Per_IgdGs","Количество иждивенцев на гос"};
StayFD *_Per_IgdGs = &_n_Per_IgdGs;

STAYI6 Per_KoefGs;
StayFD _n_Per_KoefGs = {&Per_KoefGs,0,0,0,CLS_Hs,5,"Per_KoefGs","Љ®Ґд-­в Ј®б®ЎҐбЇҐзҐ­Ёп"};
StayFD *_Per_KoefGs = &_n_Per_KoefGs;

BYTE  Per_IgdVs;
StayFD _n_Per_IgdVs = {&Per_IgdVs,0,0,0,CLS_S,0,"Per_IgdVs","Количество иждивенцев"};
StayFD *_Per_IgdVs = &_n_Per_IgdVs;

BYTE  Per_NMDolja;
StayFD _n_Per_NMDolja = {&Per_NMDolja,0,0,0,CLS_S,0,"Per_NMDolja","Номер доли"};
StayFD *_Per_NMDolja = &_n_Per_NMDolja;

WORD  Per_NNNP;
StayFD _n_Per_NNNP = {&Per_NNNP,0,0,0,CLS_I,0,"Per_NNNP","Номер доли"};
StayFD *_Per_NNNP = &_n_Per_NNNP;

WORD  Per_PShifr;
StayFD _n_Per_PShifr = {&Per_PShifr,0,0,0,CLS_I,0,"Per_PShifr","Признак шифра пенсии"};
StayFD *_Per_PShifr = &_n_Per_PShifr;

WORD  Per_Procent;
StayFD _n_Per_Procent = {&Per_Procent,0,0,0,CLS_I,0,"Per_Procent","% отзаработка"};
StayFD *_Per_Procent = &_n_Per_Procent;

DWORD Per_ProcKrat;
StayFD _n_Per_ProcKrat = {&Per_ProcKrat,0,0,0,CLS_L,2,"Per_ProcKrat","% отзаработка"};
StayFD *_Per_ProcKrat = &_n_Per_ProcKrat;

WORD  Per_PlanSt;
StayFD _n_Per_PlanSt = {&Per_PlanSt,0,0,0,CLS_I,0,"Per_PlanSt","Стаж - план"};
StayFD *_Per_PlanSt = &_n_Per_PlanSt;

WORD  Per_FaktSt;
StayFD _n_Per_FaktSt = {&Per_FaktSt,0,0,0,CLS_I,0,"Per_FaktSt","Стаж - план"};
StayFD *_Per_FaktSt = &_n_Per_FaktSt;

STAYI6 Per_RazG808;
StayFD _n_Per_RazG808 = {&Per_RazG808,0,0,0,CLS_Hs,2,"Per_RazG808","Сумма дотяжек - 808-гособ-е"};
StayFD *_Per_RazG808 = &_n_Per_RazG808;

STAYI6 Per_RazG908;
StayFD _n_Per_RazG908 = {&Per_RazG908,0,0,0,CLS_Hs,2,"Per_RazG908","Сумма дотяжек - 908-гособ-е"};
StayFD *_Per_RazG908 = &_n_Per_RazG908;

STAYI6 Per_Razm808;
StayFD _n_Per_Razm808 = {&Per_Razm808,0,0,0,CLS_Hs,2,"Per_Razm808","Сумма дотяжек - 808"};
StayFD *_Per_Razm808 = &_n_Per_Razm808;

STAYI6 Per_Razm908;
StayFD _n_Per_Razm908 = {&Per_Razm908,0,0,0,CLS_Hs,2,"Per_Razm908","Сумма дотяжек - 908"};
StayFD *_Per_Razm908 = &_n_Per_Razm908;

STAYI6 Per_Razm991;
StayFD _n_Per_Razm991 = {&Per_Razm991,0,0,0,CLS_Hs,2,"Per_Razm991","Сумма дотяжек - 991"};
StayFD *_Per_Razm991 = &_n_Per_Razm991;

STAYI6 Per_RazG991;
StayFD _n_Per_RazG991 = {&Per_RazG991,0,0,0,CLS_Hs,2,"Per_RazG991","Сумма дотяжек - 991-гособ-е"};
StayFD *_Per_RazG991 = &_n_Per_RazG991;

STAYI6 Per_Razm992;
StayFD _n_Per_Razm992 = {&Per_Razm992,0,0,0,CLS_Hs,2,"Per_Razm992","Сумма дотяжек - 992"};
StayFD *_Per_Razm992 = &_n_Per_Razm992;

STAYI6 Per_Razm992I;
StayFD _n_Per_Razm992I = {&Per_Razm992I,0,0,0,CLS_Hs,2,"Per_Razm992I","Сумма дотяжек - 992 на 1 утр"};
StayFD *_Per_Razm992I = &_n_Per_Razm992I;

STAYI6 Per_RazG992;
StayFD _n_Per_RazG992 = {&Per_RazG992,0,0,0,CLS_Hs,2,"Per_RazG992","Сумма дотяжек - 992-гособ-е"};
StayFD *_Per_RazG992 = &_n_Per_RazG992;

STAYI6 Per_Razm993;
StayFD _n_Per_Razm993 = {&Per_Razm993,0,0,0,CLS_Hs,2,"Per_Razm993","Сумма дотяжек - 993"};
StayFD *_Per_Razm993 = &_n_Per_Razm993;

STAYI6 Per_Razm993I;
StayFD _n_Per_Razm993I = {&Per_Razm993I,0,0,0,CLS_Hs,2,"Per_Razm993I","Сумма дотяжек - 993 на 1 утр"};
StayFD *_Per_Razm993I = &_n_Per_Razm993I;

STAYI6 Per_RazG993;
StayFD _n_Per_RazG993 = {&Per_RazG993,0,0,0,CLS_Hs,2,"Per_RazG993","Сумма дотяжек - 993-гособ-е"};
StayFD *_Per_RazG993 = &_n_Per_RazG993;

STAYI6 Per_Razm996;
StayFD _n_Per_Razm996 = {&Per_Razm996,0,0,0,CLS_Hs,2,"Per_Razm996","Сумма дотяжек - 996"};
StayFD *_Per_Razm996 = &_n_Per_Razm996;

STAYI6 Per_Razm996I;
StayFD _n_Per_Razm996I = {&Per_Razm996I,0,0,0,CLS_Hs,2,"Per_Razm996I","Сумма дотяжек - 996 на 1 утр"};
StayFD *_Per_Razm996I = &_n_Per_Razm996I;

STAYI6 Per_RazG996;
StayFD _n_Per_RazG996 = {&Per_RazG996,0,0,0,CLS_Hs,2,"Per_RazG996","Сумма дотяжек - 996-гособ-е"};
StayFD *_Per_RazG996 = &_n_Per_RazG996;

STAYI6 Per_Razm997;
StayFD _n_Per_Razm997 = {&Per_Razm997,0,0,0,CLS_Hs,2,"Per_Razm997","Сумма дотяжек - 997"};
StayFD *_Per_Razm997 = &_n_Per_Razm997;

STAYI6 Per_Razm997I;
StayFD _n_Per_Razm997I = {&Per_Razm997I,0,0,0,CLS_Hs,2,"Per_Razm997I","Сумма дотяжек - 997 на 1 утр"};
StayFD *_Per_Razm997I = &_n_Per_Razm997I;

STAYI6 Per_RazG997;
StayFD _n_Per_RazG997 = {&Per_RazG997,0,0,0,CLS_Hs,2,"Per_RazG997","Сумма дотяжек - 997-гособ-е"};
StayFD *_Per_RazG997 = &_n_Per_RazG997;

STAYI6 Per_Razm851;
StayFD _n_Per_Razm851 = {&Per_Razm851,0,0,0,CLS_Hs,2,"Per_Razm851","Сумма дотяжек - 851"};
StayFD *_Per_Razm851 = &_n_Per_Razm851;

STAYI6 Per_RazG851;
StayFD _n_Per_RazG851 = {&Per_RazG851,0,0,0,CLS_Hs,2,"Per_RazG851","Сумма дотяжек - 851"};
StayFD *_Per_RazG851 = &_n_Per_RazG851;

STAYI6 Per_Razm853;
StayFD _n_Per_Razm853 = {&Per_Razm853,0,0,0,CLS_Hs,2,"Per_Razm853","Сумма дотяжек - 853"};
StayFD *_Per_Razm853 = &_n_Per_Razm853;

STAYI6 Per_RazG853;
StayFD _n_Per_RazG853 = {&Per_RazG853,0,0,0,CLS_Hs,2,"Per_RazG853","Сумма дотяжек - 853"};
StayFD *_Per_RazG853 = &_n_Per_RazG853;

STAYI6 Per_Razm814;
StayFD _n_Per_Razm814 = {&Per_Razm814,0,0,0,CLS_Hs,2,"Per_Razm814","Сумма дотяжек - 814"};
StayFD *_Per_Razm814 = &_n_Per_Razm814;

STAYI6 Per_RazG814;
StayFD _n_Per_RazG814 = {&Per_RazG814,0,0,0,CLS_Hs,2,"Per_RazG814","Сумма дотяжек - 814"};
StayFD *_Per_RazG814 = &_n_Per_RazG814;

STAYI6 Per_Razm815;
StayFD _n_Per_Razm815 = {&Per_Razm815,0,0,0,CLS_Hs,2,"Per_Razm815","Сумма дотяжек - 815"};
StayFD *_Per_Razm815 = &_n_Per_Razm815;

STAYI6 Per_RazG815;
StayFD _n_Per_RazG815 = {&Per_RazG815,0,0,0,CLS_Hs,2,"Per_RazG815","Сумма дотяжек - 815"};
StayFD *_Per_RazG815 = &_n_Per_RazG815;

STAYI6 Per_Razm816;
StayFD _n_Per_Razm816 = {&Per_Razm816,0,0,0,CLS_Hs,2,"Per_Razm816","Сумма дотяжек - 816"};
StayFD *_Per_Razm816 = &_n_Per_Razm816;

STAYI6 Per_RazG816;
StayFD _n_Per_RazG816 = {&Per_RazG816,0,0,0,CLS_Hs,2,"Per_RazG816","Сумма дотяжек - 816"};
StayFD *_Per_RazG816 = &_n_Per_RazG816;

STAYI6 Per_Razm822;
StayFD _n_Per_Razm822 = {&Per_Razm822,0,0,0,CLS_Hs,2,"Per_Razm822","Сумма дотяжек - 822"};
StayFD *_Per_Razm822 = &_n_Per_Razm822;

STAYI6 Per_RazG822;
StayFD _n_Per_RazG822 = {&Per_RazG822,0,0,0,CLS_Hs,2,"Per_RazG822","Сумма дотяжек - 822"};
StayFD *_Per_RazG822 = &_n_Per_RazG822;

STAYI6 Per_Razm823;
StayFD _n_Per_Razm823 = {&Per_Razm823,0,0,0,CLS_Hs,2,"Per_Razm823","Сумма дотяжек - 823"};
StayFD *_Per_Razm823 = &_n_Per_Razm823;

STAYI6 Per_RazG823;
StayFD _n_Per_RazG823 = {&Per_RazG823,0,0,0,CLS_Hs,2,"Per_RazG823","Сумма дотяжек - 823"};
StayFD *_Per_RazG823 = &_n_Per_RazG823;

STAYI6 Per_Razm829;
StayFD _n_Per_Razm829 = {&Per_Razm829,0,0,0,CLS_Hs,2,"Per_Razm829","Сумма дотяжек - 829"};
StayFD *_Per_Razm829 = &_n_Per_Razm829;

STAYI6 Per_RazG829;
StayFD _n_Per_RazG829 = {&Per_RazG829,0,0,0,CLS_Hs,2,"Per_RazG829","Сумма дотяжек - 829"};
StayFD *_Per_RazG829 = &_n_Per_RazG829;

STAYI6 Per_Razm854;
StayFD _n_Per_Razm854 = {&Per_Razm854,0,0,0,CLS_Hs,2,"Per_Razm854","Сумма дотяжек - 854"};
StayFD *_Per_Razm854 = &_n_Per_Razm854;

STAYI6 Per_RazG854;
StayFD _n_Per_RazG854 = {&Per_RazG854,0,0,0,CLS_Hs,2,"Per_RazG854","Сумма дотяжек - 854"};
StayFD *_Per_RazG854 = &_n_Per_RazG854;

STAYI6 Per_Razm854D;
StayFD _n_Per_Razm854D = {&Per_Razm854D,0,0,0,CLS_Hs,2,"Per_Razm854D","Сумма дотяжек - 854D"};
StayFD *_Per_Razm854D = &_n_Per_Razm854D;

STAYI6 Per_RazG854D;
StayFD _n_Per_RazG854D = {&Per_RazG854D,0,0,0,CLS_Hs,2,"Per_RazG854D","Сумма дотяжек - 854D"};
StayFD *_Per_RazG854D = &_n_Per_RazG854D;

STAYI6 Per_RazmDot;
StayFD _n_Per_RazmDot = {&Per_RazmDot,0,0,0,CLS_Hs,2,"Per_RazmDot","дотяжка пенсии до границы"};
StayFD *_Per_RazmDot = &_n_Per_RazmDot;

STAYI6 Per_RazmGDot;
StayFD _n_Per_RazmGDot = {&Per_RazmGDot,0,0,0,CLS_Hs,2,"Per_RazmGDot","дотяжка пенсии до границы"};
StayFD *_Per_RazmGDot = &_n_Per_RazmGDot;

STAYI6 Per_RazmGIND;
StayFD _n_Per_RazmGIND = {&Per_RazmGIND,0,0,0,CLS_Hs,5,"Per_RazmGIND","Размер суммы с индексом"};
StayFD *_Per_RazmGIND = &_n_Per_RazmGIND;

STAYI6 Per_RazmGos;
StayFD _n_Per_RazmGos = {&Per_RazmGos,0,0,0,CLS_Hs,2,"Per_RazmGos","для случая гособеспечения"};
StayFD *_Per_RazmGos = &_n_Per_RazmGos;

STAYI6 Per_RazmNP;
StayFD _n_Per_RazmNP = {&Per_RazmNP,0,0,0,CLS_Hs,2,"Per_RazmNP",""};
StayFD *_Per_RazmNP = &_n_Per_RazmNP;

STAYI6 Per_RazmIND;
StayFD _n_Per_RazmIND = {&Per_RazmIND,0,0,0,CLS_Hs,2,"Per_RazmIND","Размер индекса"};
StayFD *_Per_RazmIND = &_n_Per_RazmIND;

STAYI6 Per_RazmOtct;
StayFD _n_Per_RazmOtct = {&Per_RazmOtct,0,0,0,CLS_Hs,5,"Per_RazmOtct","Размер пенсии с коэф-том"};
StayFD *_Per_RazmOtct = &_n_Per_RazmOtct;

STAYI6 Per_RazmDosr;
StayFD _n_Per_RazmDosr = {&Per_RazmDosr,0,0,0,CLS_Hs,5,"Per_RazmDosr","Размер пенсии с коэф-том"};
StayFD *_Per_RazmDosr = &_n_Per_RazmDosr;

STAYI6 Per_RazmM136;
StayFD _n_Per_RazmM136 = {&Per_RazmM136,0,0,0,CLS_Hs,5,"Per_RazmM136","Размер пенсии с коэф-том"};
StayFD *_Per_RazmM136 = &_n_Per_RazmM136;

STAYI6 Per_RazmM137;
StayFD _n_Per_RazmM137 = {&Per_RazmM137,0,0,0,CLS_Hs,5,"Per_RazmM137","Размер пенсии с коэф-том"};
StayFD *_Per_RazmM137 = &_n_Per_RazmM137;

STAYI6 Per_RazmS291;
StayFD _n_Per_RazmS291 = {&Per_RazmS291,0,0,0,CLS_Hs,5,"Per_RazmS291","Размер пенсии с коэф-том"};
StayFD *_Per_RazmS291 = &_n_Per_RazmS291;

STAYI6 Per_RazmS293;
StayFD _n_Per_RazmS293 = {&Per_RazmS293,0,0,0,CLS_Hs,5,"Per_RazmS293","Размер пенсии с коэф-том"};
StayFD *_Per_RazmS293 = &_n_Per_RazmS293;

STAYI6 Per_RazmS297;
StayFD _n_Per_RazmS297 = {&Per_RazmS297,0,0,0,CLS_Hs,5,"Per_RazmS297","Размер пенсии с коэф-том"};
StayFD *_Per_RazmS297 = &_n_Per_RazmS297;

STAYI6 Per_RazmS298;
StayFD _n_Per_RazmS298 = {&Per_RazmS298,0,0,0,CLS_Hs,5,"Per_RazmS298","Размер пенсии с коэф-том"};
StayFD *_Per_RazmS298 = &_n_Per_RazmS298;

STAYI6 Per_RazmKoef;
StayFD _n_Per_RazmKoef = {&Per_RazmKoef,0,0,0,CLS_Hs,5,"Per_RazmKoef","Размер пенсии с уч коэф"};
StayFD *_Per_RazmKoef = &_n_Per_RazmKoef;

STAYI6 Per_RazmZKf;
StayFD _n_Per_RazmZKf = {&Per_RazmZKf,0,0,0,CLS_Hs,5,"Per_RazmZKf",""};
StayFD *_Per_RazmZKf = &_n_Per_RazmZKf;

STAYI6 Per_RazmIgd1;
StayFD _n_Per_RazmIgd1 = {&Per_RazmIgd1,0,0,0,CLS_Hs,5,"Per_RazmIgd1",""};
StayFD *_Per_RazmIgd1 = &_n_Per_RazmIgd1;

STAYI6 Per_RazmIgdM;
StayFD _n_Per_RazmIgdM = {&Per_RazmIgdM,0,0,0,CLS_Hs,5,"Per_RazmIgdM",""};
StayFD *_Per_RazmIgdM = &_n_Per_RazmIgdM;

STAYI6 Per_RazmMALOB;
StayFD _n_Per_RazmMALOB = {&Per_RazmMALOB,0,0,0,CLS_Hs,2,"Per_RazmMALOB","Сумма границы малообеспеченности"};
StayFD *_Per_RazmMALOB = &_n_Per_RazmMALOB;

STAYI6 Per_RazmOgr;
StayFD _n_Per_RazmOgr = {&Per_RazmOgr,0,0,0,CLS_Hs,5,"Per_RazmOgr","Размер пенсии с огранич"};
StayFD *_Per_RazmOgr = &_n_Per_RazmOgr;

STAYI6 Per_RazmOS;
StayFD _n_Per_RazmOS = {&Per_RazmOS,0,0,0,CLS_Hs,5,"Per_RazmOS","Размер пенсии с огранич"};
StayFD *_Per_RazmOS = &_n_Per_RazmOS;

STAYI6 Per_RazmGS;
StayFD _n_Per_RazmGS = {&Per_RazmGS,0,0,0,CLS_Hs,5,"Per_RazmGS","Размер пенсии с огранич"};
StayFD *_Per_RazmGS = &_n_Per_RazmGS;

STAYI6 Per_RazmOVsr;
StayFD _n_Per_RazmOVsr = {&Per_RazmOVsr,0,0,0,CLS_Hs,5,"Per_RazmOVsr","Размер пенсии с огранич"};
StayFD *_Per_RazmOVsr = &_n_Per_RazmOVsr;

STAYI6 Per_RazmOgr2;
StayFD _n_Per_RazmOgr2 = {&Per_RazmOgr2,0,0,0,CLS_Hs,5,"Per_RazmOgr2","Размер пенсии с огранич"};
StayFD *_Per_RazmOgr2 = &_n_Per_RazmOgr2;

STAYI6 Per_RazmOgrNS;
StayFD _n_Per_RazmOgrNS = {&Per_RazmOgrNS,0,0,0,CLS_Hs,5,"Per_RazmOgrNS","Размер при неполном стаже"};
StayFD *_Per_RazmOgrNS = &_n_Per_RazmOgrNS;

STAYI6 Per_RazmOgrS;
StayFD _n_Per_RazmOgrS = {&Per_RazmOgrS,0,0,0,CLS_Hs,5,"Per_RazmOgrS","Размер пенсии для сироты"};
StayFD *_Per_RazmOgrS = &_n_Per_RazmOgrS;

STAYI6 Per_RazmO28;
StayFD _n_Per_RazmO28 = {&Per_RazmO28,0,0,0,CLS_Hs,5,"Per_RazmO28","Размер пенсии с огранич"};
StayFD *_Per_RazmO28 = &_n_Per_RazmO28;

STAYI6 Per_RazGO28;
StayFD _n_Per_RazGO28 = {&Per_RazGO28,0,0,0,CLS_Hs,2,"Per_RazGO28",""};
StayFD *_Per_RazGO28 = &_n_Per_RazGO28;

STAYI6 Per_RazmO282;
StayFD _n_Per_RazmO282 = {&Per_RazmO282,0,0,0,CLS_Hs,5,"Per_RazmO282","Размер пенсии с огранич"};
StayFD *_Per_RazmO282 = &_n_Per_RazmO282;

STAYI6 Per_RazmO28NS;
StayFD _n_Per_RazmO28NS = {&Per_RazmO28NS,0,0,0,CLS_Hs,5,"Per_RazmO28NS","Размер при неполном стаже"};
StayFD *_Per_RazmO28NS = &_n_Per_RazmO28NS;

STAYI6 Per_RazmO28S;
StayFD _n_Per_RazmO28S = {&Per_RazmO28S,0,0,0,CLS_Hs,5,"Per_RazmO28S","Размер пенсии для сироты"};
StayFD *_Per_RazmO28S = &_n_Per_RazmO28S;

WORD  Per_ProcOIP;
StayFD _n_Per_ProcOIP = {&Per_ProcOIP,0,0,0,CLS_I,0,"Per_ProcOIP","% отзаработка"};
StayFD *_Per_ProcOIP = &_n_Per_ProcOIP;

BYTE  Per_NIgdOIP;
StayFD _n_Per_NIgdOIP = {&Per_NIgdOIP,0,0,0,CLS_S,0,"Per_NIgdOIP","% отзаработка"};
StayFD *_Per_NIgdOIP = &_n_Per_NIgdOIP;

STAYI6 Per_RazmOIP;
StayFD _n_Per_RazmOIP = {&Per_RazmOIP,0,0,0,CLS_Hs,5,"Per_RazmOIP","Размер с учетом ограничений"};
StayFD *_Per_RazmOIP = &_n_Per_RazmOIP;

STAYI6 Per_RazmOIP2;
StayFD _n_Per_RazmOIP2 = {&Per_RazmOIP2,0,0,0,CLS_Hs,5,"Per_RazmOIP2","Размер с учетом ограничений"};
StayFD *_Per_RazmOIP2 = &_n_Per_RazmOIP2;

STAYI6 Per_RazmOIPNS;
StayFD _n_Per_RazmOIPNS = {&Per_RazmOIPNS,0,0,0,CLS_Hs,5,"Per_RazmOIPNS","Размер с учетом ограничений"};
StayFD *_Per_RazmOIPNS = &_n_Per_RazmOIPNS;

STAYI6 Per_RazmOIPS;
StayFD _n_Per_RazmOIPS = {&Per_RazmOIPS,0,0,0,CLS_Hs,5,"Per_RazmOIPS","Размер с учетом ограничений"};
StayFD *_Per_RazmOIPS = &_n_Per_RazmOIPS;

STAYI6 Per_Sum3233;
StayFD _n_Per_Sum3233 = {&Per_Sum3233,0,0,0,CLS_Hs,5,"Per_Sum3233","Размер с учетом ограничений"};
StayFD *_Per_Sum3233 = &_n_Per_Sum3233;

STAYI6 Per_RazmOsn;
StayFD _n_Per_RazmOsn = {&Per_RazmOsn,0,0,0,CLS_Hs,5,"Per_RazmOsn","Основной размер пенсии"};
StayFD *_Per_RazmOsn = &_n_Per_RazmOsn;

STAYI6 Per_RazmPMin;
StayFD _n_Per_RazmPMin = {&Per_RazmPMin,0,0,0,CLS_Hs,2,"Per_RazmPMin","Основной размер пенсии"};
StayFD *_Per_RazmPMin = &_n_Per_RazmPMin;

STAYI6 Per_RazmPNSt;
StayFD _n_Per_RazmPNSt = {&Per_RazmPNSt,0,0,0,CLS_Hs,2,"Per_RazmPNSt","Основной размер пенсии"};
StayFD *_Per_RazmPNSt = &_n_Per_RazmPNSt;

STAYI6 Per_RazmDPLM;
StayFD _n_Per_RazmDPLM = {&Per_RazmDPLM,0,0,0,CLS_Hs,2,"Per_RazmDPLM","Основной размер пенсии"};
StayFD *_Per_RazmDPLM = &_n_Per_RazmDPLM;

STAYI6 Per_RazGDPLM;
StayFD _n_Per_RazGDPLM = {&Per_RazGDPLM,0,0,0,CLS_Hs,2,"Per_RazGDPLM","Основной размер пенсии"};
StayFD *_Per_RazGDPLM = &_n_Per_RazGDPLM;

STAYI6 Per_RazmDPLP;
StayFD _n_Per_RazmDPLP = {&Per_RazmDPLP,0,0,0,CLS_Hs,2,"Per_RazmDPLP","Основной размер пенсии"};
StayFD *_Per_RazmDPLP = &_n_Per_RazmDPLP;

STAYI6 Per_RazGDPLP;
StayFD _n_Per_RazGDPLP = {&Per_RazGDPLP,0,0,0,CLS_Hs,2,"Per_RazGDPLP","Основной размер пенсии"};
StayFD *_Per_RazGDPLP = &_n_Per_RazGDPLP;

STAYI6 Per_RazmDKf;
StayFD _n_Per_RazmDKf = {&Per_RazmDKf,0,0,0,CLS_Hs,2,"Per_RazmDKf","Основной размер пенсии"};
StayFD *_Per_RazmDKf = &_n_Per_RazmDKf;

STAYI6 Per_RazmDKfI;
StayFD _n_Per_RazmDKfI = {&Per_RazmDKfI,0,0,0,CLS_Hs,2,"Per_RazmDKfI","Основной размер пенсии"};
StayFD *_Per_RazmDKfI = &_n_Per_RazmDKfI;

STAYI6 Per_RazmSIND;
StayFD _n_Per_RazmSIND = {&Per_RazmSIND,0,0,0,CLS_Hs,5,"Per_RazmSIND","Размер суммы с индексом"};
StayFD *_Per_RazmSIND = &_n_Per_RazmSIND;

STAYI6 Per_RazmVipl;
StayFD _n_Per_RazmVipl = {&Per_RazmVipl,0,0,0,CLS_Hs,2,"Per_RazmVipl","Размер пенсии с надбавками"};
StayFD *_Per_RazmVipl = &_n_Per_RazmVipl;

WORD  Per_Shifr;
StayFD _n_Per_Shifr = {&Per_Shifr,0,0,0,CLS_I,0,"Per_Shifr","Код шифра пенсии"};
StayFD *_Per_Shifr = &_n_Per_Shifr;

STAYI6 Per_Sir908;
StayFD _n_Per_Sir908 = {&Per_Sir908,0,0,0,CLS_Hs,2,"Per_Sir908","Сумма дотяжек - 908"};
StayFD *_Per_Sir908 = &_n_Per_Sir908;

STAYI6 Per_SirG908;
StayFD _n_Per_SirG908 = {&Per_SirG908,0,0,0,CLS_Hs,2,"Per_SirG908","Сумма дотяжек - 908-гособ-е"};
StayFD *_Per_SirG908 = &_n_Per_SirG908;

BYTE  Per_VarRas;
StayFD _n_Per_VarRas = {&Per_VarRas,0,0,0,CLS_S,0,"Per_VarRas","Вариант расчета 1,2,3"};
StayFD *_Per_VarRas = &_n_Per_VarRas;

WORD  Pern_Kfn;
StayFD _n_Pern_Kfn = {&Pern_Kfn,0,0,0,CLS_I,0,"Pern_Kfn","Код выплаты"};
StayFD *_Pern_Kfn = &_n_Pern_Kfn;

BYTE  Perp_Zak;
StayFD _n_Perp_Zak = {&Perp_Zak,0,0,0,CLS_S,0,"Perp_Zak","Закон"};
StayFD *_Perp_Zak = &_n_Perp_Zak;

char Per_Koef[151];
StayFD _n_Per_Koef = {&Per_Koef,0,0,0,CLS_V,150,"Per_Koef","Текст коэфициента вповышения пенсий"};
StayFD *_Per_Koef = &_n_Per_Koef;

StayDate Perp_DateBeg;
StayFD _n_Perp_DateBeg = {&Perp_DateBeg,0,0,0,CLS_Date,0,"Perp_DateBeg","Дата начала права"};
StayFD *_Perp_DateBeg = &_n_Perp_DateBeg;

StayDate Perp_DateEnd;
StayFD _n_Perp_DateEnd = {&Perp_DateEnd,0,0,0,CLS_Date,0,"Perp_DateEnd","Дата конца права"};
StayFD *_Perp_DateEnd = &_n_Perp_DateEnd;

StayDate Perp_DopBeg;
StayFD _n_Perp_DopBeg = {&Perp_DopBeg,0,0,0,CLS_Date,0,"Perp_DopBeg","Дата наступления права - дополнительная"};
StayFD *_Perp_DopBeg = &_n_Perp_DopBeg;

BYTE  Perp_IgdGs;
StayFD _n_Perp_IgdGs = {&Perp_IgdGs,0,0,0,CLS_S,0,"Perp_IgdGs","Количество иждивенцев на гос"};
StayFD *_Perp_IgdGs = &_n_Perp_IgdGs;

BYTE  Perp_IgdVs;
StayFD _n_Perp_IgdVs = {&Perp_IgdVs,0,0,0,CLS_S,0,"Perp_IgdVs","Количество иждивенцев"};
StayFD *_Perp_IgdVs = &_n_Perp_IgdVs;

WORD  Perp_Kfn;
StayFD _n_Perp_Kfn = {&Perp_Kfn,0,0,0,CLS_I,0,"Perp_Kfn","Код выплаты"};
StayFD *_Perp_Kfn = &_n_Perp_Kfn;

BYTE  Perp_NMDolja;
StayFD _n_Perp_NMDolja = {&Perp_NMDolja,0,0,0,CLS_S,0,"Perp_NMDolja","Номер доли"};
StayFD *_Perp_NMDolja = &_n_Perp_NMDolja;

WORD  Perp_Op;
StayFD _n_Perp_Op = {&Perp_Op,0,0,0,CLS_I,0,"Perp_Op","Операция"};
StayFD *_Perp_Op = &_n_Perp_Op;

BYTE  Perp_Pr;
StayFD _n_Perp_Pr = {&Perp_Pr,0,0,0,CLS_S,0,"Perp_Pr","Признак"};
StayFD *_Perp_Pr = &_n_Perp_Pr;

STAYI6 Perp_RazmO28;
StayFD _n_Perp_RazmO28 = {&Perp_RazmO28,0,0,0,CLS_Hs,2,"Perp_RazmO28",""};
StayFD *_Perp_RazmO28 = &_n_Perp_RazmO28;

STAYI6 Perp_RazGO28;
StayFD _n_Perp_RazGO28 = {&Perp_RazGO28,0,0,0,CLS_Hs,2,"Perp_RazGO28",""};
StayFD *_Perp_RazGO28 = &_n_Perp_RazGO28;

STAYI6 Perp_RazmOS;
StayFD _n_Perp_RazmOS = {&Perp_RazmOS,0,0,0,CLS_Hs,2,"Perp_RazmOS",""};
StayFD *_Perp_RazmOS = &_n_Perp_RazmOS;

STAYI6 Perp_RazmGS;
StayFD _n_Perp_RazmGS = {&Perp_RazmGS,0,0,0,CLS_Hs,2,"Perp_RazmGS",""};
StayFD *_Perp_RazmGS = &_n_Perp_RazmGS;

STAYI6 Perp_RazmNP;
StayFD _n_Perp_RazmNP = {&Perp_RazmNP,0,0,0,CLS_Hs,2,"Perp_RazmNP",""};
StayFD *_Perp_RazmNP = &_n_Perp_RazmNP;

STAYI6 Perp_RazG808;
StayFD _n_Perp_RazG808 = {&Perp_RazG808,0,0,0,CLS_Hs,2,"Perp_RazG808","Сумма дотяжек - 808-гособ-е"};
StayFD *_Perp_RazG808 = &_n_Perp_RazG808;

STAYI6 Perp_RazG908;
StayFD _n_Perp_RazG908 = {&Perp_RazG908,0,0,0,CLS_Hs,2,"Perp_RazG908","Сумма дотяжек - 908-гособ-е"};
StayFD *_Perp_RazG908 = &_n_Perp_RazG908;

STAYI6 Perp_Razm849;
StayFD _n_Perp_Razm849 = {&Perp_Razm849,0,0,0,CLS_Hs,2,"Perp_Razm849","Сумма виплати - Небесная сотня"};
StayFD *_Perp_Razm849 = &_n_Perp_Razm849;

STAYI6 Perp_RazG849;
StayFD _n_Perp_RazG849 = {&Perp_RazG849,0,0,0,CLS_Hs,2,"Perp_RazG849","Сумма виплати - Небесная сотня-гособ-е"};
StayFD *_Perp_RazG849 = &_n_Perp_RazG849;

STAYI6 Perp_Razm800;
StayFD _n_Perp_Razm800 = {&Perp_Razm800,0,0,0,CLS_Hs,2,"Perp_Razm800","Сумма дотяжек - 808"};
StayFD *_Perp_Razm800 = &_n_Perp_Razm800;

STAYI6 Perp_Razm801;
StayFD _n_Perp_Razm801 = {&Perp_Razm801,0,0,0,CLS_Hs,2,"Perp_Razm801","Сумма дотяжек - 801"};
StayFD *_Perp_Razm801 = &_n_Perp_Razm801;

STAYI6 Perp_Razm802;
StayFD _n_Perp_Razm802 = {&Perp_Razm802,0,0,0,CLS_Hs,2,"Perp_Razm802","Сумма дотяжек - 802"};
StayFD *_Perp_Razm802 = &_n_Perp_Razm802;

STAYI6 Perp_Razm810;
StayFD _n_Perp_Razm810 = {&Perp_Razm810,0,0,0,CLS_Hs,2,"Perp_Razm810","Сумма дотяжек - 810"};
StayFD *_Perp_Razm810 = &_n_Perp_Razm810;

STAYI6 Perp_Razm812;
StayFD _n_Perp_Razm812 = {&Perp_Razm812,0,0,0,CLS_Hs,2,"Perp_Razm812","- 812"};
StayFD *_Perp_Razm812 = &_n_Perp_Razm812;

STAYI6 Perp_Razm808;
StayFD _n_Perp_Razm808 = {&Perp_Razm808,0,0,0,CLS_Hs,2,"Perp_Razm808","Сумма дотяжек - 808"};
StayFD *_Perp_Razm808 = &_n_Perp_Razm808;

STAYI6 Perp_Razm809;
StayFD _n_Perp_Razm809 = {&Perp_Razm809,0,0,0,CLS_Hs,2,"Perp_Razm809","Сумма индексации на 1-1-2001 = 809"};
StayFD *_Perp_Razm809 = &_n_Perp_Razm809;

STAYI6 Perp_Razm908;
StayFD _n_Perp_Razm908 = {&Perp_Razm908,0,0,0,CLS_Hs,2,"Perp_Razm908","Сумма дотяжек - 908"};
StayFD *_Perp_Razm908 = &_n_Perp_Razm908;

STAYI6 Perp_RazmDot;
StayFD _n_Perp_RazmDot = {&Perp_RazmDot,0,0,0,CLS_Hs,2,"Perp_RazmDot","Сумма дотяжек"};
StayFD *_Perp_RazmDot = &_n_Perp_RazmDot;

STAYI6 Perp_RazmGDot;
StayFD _n_Perp_RazmGDot = {&Perp_RazmGDot,0,0,0,CLS_Hs,2,"Perp_RazmGDot","Сумма дотяжек"};
StayFD *_Perp_RazmGDot = &_n_Perp_RazmGDot;

STAYI6 Perp_RazmGIND;
StayFD _n_Perp_RazmGIND = {&Perp_RazmGIND,0,0,0,CLS_Hs,5,"Perp_RazmGIND","Размер суммы с индексом"};
StayFD *_Perp_RazmGIND = &_n_Perp_RazmGIND;

STAYI6 Perp_RazmGos;
StayFD _n_Perp_RazmGos = {&Perp_RazmGos,0,0,0,CLS_Hs,2,"Perp_RazmGos","пенсия в случае гособесп"};
StayFD *_Perp_RazmGos = &_n_Perp_RazmGos;

STAYI6 Perp_RazmIND;
StayFD _n_Perp_RazmIND = {&Perp_RazmIND,0,0,0,CLS_Hs,2,"Perp_RazmIND","Размер индекса"};
StayFD *_Perp_RazmIND = &_n_Perp_RazmIND;

STAYI6 Perp_RabIND;
StayFD _n_Perp_RabIND = {&Perp_RabIND,0,0,0,CLS_Hs,5,"Perp_RabIND","Размер индекса"};
StayFD *_Perp_RabIND = &_n_Perp_RabIND;

STAYI6 Perp_RazmIND5;
StayFD _n_Perp_RazmIND5 = {&Perp_RazmIND5,0,0,0,CLS_Hs,5,"Perp_RazmIND5","Размер индекса"};
StayFD *_Perp_RazmIND5 = &_n_Perp_RazmIND5;

STAYI6 Perp_RazmOtct;
StayFD _n_Perp_RazmOtct = {&Perp_RazmOtct,0,0,0,CLS_Hs,5,"Perp_RazmOtct","Размер пенсии с коэф-том"};
StayFD *_Perp_RazmOtct = &_n_Perp_RazmOtct;

STAYI6 Perp_RazmDosr;
StayFD _n_Perp_RazmDosr = {&Perp_RazmDosr,0,0,0,CLS_Hs,5,"Perp_RazmDosr","Размер пенсии с коэф-том"};
StayFD *_Perp_RazmDosr = &_n_Perp_RazmDosr;

STAYI6 Perp_RazmM136;
StayFD _n_Perp_RazmM136 = {&Perp_RazmM136,0,0,0,CLS_Hs,5,"Perp_RazmM136","Размер пенсии с коэф-том"};
StayFD *_Perp_RazmM136 = &_n_Perp_RazmM136;

STAYI6 Perp_RazmM137;
StayFD _n_Perp_RazmM137 = {&Perp_RazmM137,0,0,0,CLS_Hs,5,"Perp_RazmM137","Размер пенсии с коэф-том"};
StayFD *_Perp_RazmM137 = &_n_Perp_RazmM137;

STAYI6 Perp_RazmS291;
StayFD _n_Perp_RazmS291 = {&Perp_RazmS291,0,0,0,CLS_Hs,5,"Perp_RazmS291","Размер пенсии с коэф-том"};
StayFD *_Perp_RazmS291 = &_n_Perp_RazmS291;

STAYI6 Perp_RazmS293;
StayFD _n_Perp_RazmS293 = {&Perp_RazmS293,0,0,0,CLS_Hs,5,"Perp_RazmS293","Размер пенсии с коэф-том"};
StayFD *_Perp_RazmS293 = &_n_Perp_RazmS293;

STAYI6 Perp_RazmS297;
StayFD _n_Perp_RazmS297 = {&Perp_RazmS297,0,0,0,CLS_Hs,5,"Perp_RazmS297","Размер пенсии с коэф-том"};
StayFD *_Perp_RazmS297 = &_n_Perp_RazmS297;

STAYI6 Perp_RazmS298;
StayFD _n_Perp_RazmS298 = {&Perp_RazmS298,0,0,0,CLS_Hs,5,"Perp_RazmS298","Размер пенсии с коэф-том"};
StayFD *_Perp_RazmS298 = &_n_Perp_RazmS298;

STAYI6 Perp_RazmKoef;
StayFD _n_Perp_RazmKoef = {&Perp_RazmKoef,0,0,0,CLS_Hs,5,"Perp_RazmKoef","Основной размер"};
StayFD *_Perp_RazmKoef = &_n_Perp_RazmKoef;

STAYI6 Perp_RazmMALOB;
StayFD _n_Perp_RazmMALOB = {&Perp_RazmMALOB,0,0,0,CLS_Hs,2,"Perp_RazmMALOB","Сумма границы малообеспеченности"};
StayFD *_Perp_RazmMALOB = &_n_Perp_RazmMALOB;

STAYI6 Perp_RazmSIND;
StayFD _n_Perp_RazmSIND = {&Perp_RazmSIND,0,0,0,CLS_Hs,5,"Perp_RazmSIND","Размер суммы с индексом"};
StayFD *_Perp_RazmSIND = &_n_Perp_RazmSIND;

STAYI6 Perp_RazmPF;
StayFD _n_Perp_RazmPF = {&Perp_RazmPF,0,0,0,CLS_Hs,2,"Perp_RazmPF","Размер пенсии для ПФ"};
StayFD *_Perp_RazmPF = &_n_Perp_RazmPF;

STAYI6 Perp_RazmOsPF;
StayFD _n_Perp_RazmOsPF = {&Perp_RazmOsPF,0,0,0,CLS_Hs,5,"Perp_RazmOsPF","Основной размер пенсии для ПФ"};
StayFD *_Perp_RazmOsPF = &_n_Perp_RazmOsPF;

STAYI6 Perp_RazmKfPF;
StayFD _n_Perp_RazmKfPF = {&Perp_RazmKfPF,0,0,0,CLS_Hs,5,"Perp_RazmKfPF","Размер пенсии для ПФ"};
StayFD *_Perp_RazmKfPF = &_n_Perp_RazmKfPF;

WORD  Perp_ProcPF;
StayFD _n_Perp_ProcPF = {&Perp_ProcPF,0,0,0,CLS_I,0,"Perp_ProcPF","% отзаработка ПФ"};
StayFD *_Perp_ProcPF = &_n_Perp_ProcPF;

WORD  Perp_ShifrPF;
StayFD _n_Perp_ShifrPF = {&Perp_ShifrPF,0,0,0,CLS_I,0,"Perp_ShifrPF","Код шифра пенсии ПФ"};
StayFD *_Perp_ShifrPF = &_n_Perp_ShifrPF;

WORD  Perp_KfnPF;
StayFD _n_Perp_KfnPF = {&Perp_KfnPF,0,0,0,CLS_I,0,"Perp_KfnPF","Код выплаты (KLFN)- ПФ"};
StayFD *_Perp_KfnPF = &_n_Perp_KfnPF;

WORD  Perp_Shifr;
StayFD _n_Perp_Shifr = {&Perp_Shifr,0,0,0,CLS_I,0,"Perp_Shifr","Код шифра пенсии"};
StayFD *_Perp_Shifr = &_n_Perp_Shifr;

STAYI6 Perp_Summa;
StayFD _n_Perp_Summa = {&Perp_Summa,0,0,0,CLS_Hs,2,"Perp_Summa","Сумма за период"};
StayFD *_Perp_Summa = &_n_Perp_Summa;

STAYI6 Perp_SummaZKf;
StayFD _n_Perp_SummaZKf = {&Perp_SummaZKf,0,0,0,CLS_Hs,5,"Perp_SummaZKf",""};
StayFD *_Perp_SummaZKf = &_n_Perp_SummaZKf;

STAYI6 Perp_Sum100;
StayFD _n_Perp_Sum100 = {&Perp_Sum100,0,0,0,CLS_Hs,2,"Perp_Sum100",""};
StayFD *_Perp_Sum100 = &_n_Perp_Sum100;

STAYI6 Perp_Sum3233;
StayFD _n_Perp_Sum3233 = {&Perp_Sum3233,0,0,0,CLS_Hs,5,"Perp_Sum3233","Размер с учетом ограничений"};
StayFD *_Perp_Sum3233 = &_n_Perp_Sum3233;

WORD  Perp_ProcOIP;
StayFD _n_Perp_ProcOIP = {&Perp_ProcOIP,0,0,0,CLS_I,0,"Perp_ProcOIP","% отзаработка ПФ"};
StayFD *_Perp_ProcOIP = &_n_Perp_ProcOIP;

BYTE  Perp_NIgdOIP;
StayFD _n_Perp_NIgdOIP = {&Perp_NIgdOIP,0,0,0,CLS_S,0,"Perp_NIgdOIP",""};
StayFD *_Perp_NIgdOIP = &_n_Perp_NIgdOIP;

STAYI6 Perp_RazmOIP;
StayFD _n_Perp_RazmOIP = {&Perp_RazmOIP,0,0,0,CLS_Hs,2,"Perp_RazmOIP","Размер с учетом ограничений"};
StayFD *_Perp_RazmOIP = &_n_Perp_RazmOIP;

BYTE  Perp_VarRas;
StayFD _n_Perp_VarRas = {&Perp_VarRas,0,0,0,CLS_S,0,"Perp_VarRas","Вариант расч 1-ЗП 2-СМЕШ 3-МП"};
StayFD *_Perp_VarRas = &_n_Perp_VarRas;

STAYI6 Perp_RazmPMin;
StayFD _n_Perp_RazmPMin = {&Perp_RazmPMin,0,0,0,CLS_Hs,2,"Perp_RazmPMin","Основной размер пенсии"};
StayFD *_Perp_RazmPMin = &_n_Perp_RazmPMin;

STAYI6 Perp_RazmPNSt;
StayFD _n_Perp_RazmPNSt = {&Perp_RazmPNSt,0,0,0,CLS_Hs,2,"Perp_RazmPNSt","Основной размер пенсии"};
StayFD *_Perp_RazmPNSt = &_n_Perp_RazmPNSt;

STAYI6 Perp_RazmDPLM;
StayFD _n_Perp_RazmDPLM = {&Perp_RazmDPLM,0,0,0,CLS_Hs,2,"Perp_RazmDPLM","Основной размер пенсии"};
StayFD *_Perp_RazmDPLM = &_n_Perp_RazmDPLM;

STAYI6 Perp_RazGDPLM;
StayFD _n_Perp_RazGDPLM = {&Perp_RazGDPLM,0,0,0,CLS_Hs,2,"Perp_RazGDPLM","Основной размер пенсии"};
StayFD *_Perp_RazGDPLM = &_n_Perp_RazGDPLM;

STAYI6 Perp_RazmDPLP;
StayFD _n_Perp_RazmDPLP = {&Perp_RazmDPLP,0,0,0,CLS_Hs,2,"Perp_RazmDPLP","Основной размер пенсии"};
StayFD *_Perp_RazmDPLP = &_n_Perp_RazmDPLP;

STAYI6 Perp_RazGDPLP;
StayFD _n_Perp_RazGDPLP = {&Perp_RazGDPLP,0,0,0,CLS_Hs,2,"Perp_RazGDPLP","Основной размер пенсии"};
StayFD *_Perp_RazGDPLP = &_n_Perp_RazGDPLP;

STAYI6 Perp_RazmDKf;
StayFD _n_Perp_RazmDKf = {&Perp_RazmDKf,0,0,0,CLS_Hs,2,"Perp_RazmDKf","Основной размер пенсии"};
StayFD *_Perp_RazmDKf = &_n_Perp_RazmDKf;

STAYI6 Perp_3233PMin;
StayFD _n_Perp_3233PMin = {&Perp_3233PMin,0,0,0,CLS_Hs,5,"Perp_3233PMin","Основной размер пенсии"};
StayFD *_Perp_3233PMin = &_n_Perp_3233PMin;

STAYI6 Perp_3233PNSt;
StayFD _n_Perp_3233PNSt = {&Perp_3233PNSt,0,0,0,CLS_Hs,5,"Perp_3233PNSt","Основной размер пенсии"};
StayFD *_Perp_3233PNSt = &_n_Perp_3233PNSt;

STAYI6 Perp_3233DKf;
StayFD _n_Perp_3233DKf = {&Perp_3233DKf,0,0,0,CLS_Hs,5,"Perp_3233DKf","Основной размер пенсии"};
StayFD *_Perp_3233DKf = &_n_Perp_3233DKf;

BYTE  Pers_CodeDoc;
StayFD _n_Pers_CodeDoc = {&Pers_CodeDoc,0,0,0,CLS_S,0,"Pers_CodeDoc","Код документа по измен(KlDoc)"};
StayFD *_Pers_CodeDoc = &_n_Pers_CodeDoc;

StayDate Pers_DateIz;
StayFD _n_Pers_DateIz = {&Pers_DateIz,0,0,0,CLS_Date,0,"Pers_DateIz","Дата извещения"};
StayFD *_Pers_DateIz = &_n_Pers_DateIz;

StayDate Pers_Datin;
StayFD _n_Pers_Datin = {&Pers_Datin,0,0,0,CLS_Date,0,"Pers_Datin","Дата инспектора"};
StayFD *_Pers_Datin = &_n_Pers_Datin;

StayDate Pers_Dnpen;
StayFD _n_Pers_Dnpen = {&Pers_Dnpen,0,0,0,CLS_Date,0,"Pers_Dnpen","Дата начала выплаты (с)"};
StayFD *_Pers_Dnpen = &_n_Pers_Dnpen;

WORD  Pers_Kfn;
StayFD _n_Pers_Kfn = {&Pers_Kfn,0,0,0,CLS_I,0,"Pers_Kfn","Код выплаты (KLFN)"};
StayFD *_Pers_Kfn = &_n_Pers_Kfn;

WORD  Pers_Kin;
StayFD _n_Pers_Kin = {&Pers_Kin,0,0,0,CLS_I,0,"Pers_Kin","Код инспектора"};
StayFD *_Pers_Kin = &_n_Pers_Kin;

DWORD Pers_NIz;
StayFD _n_Pers_NIz = {&Pers_NIz,0,0,0,CLS_L,0,"Pers_NIz","Номер извещения"};
StayFD *_Pers_NIz = &_n_Pers_NIz;

WORD  Pers_Op;
StayFD _n_Pers_Op = {&Pers_Op,0,0,0,CLS_I,0,"Pers_Op","Код операции"};
StayFD *_Pers_Op = &_n_Pers_Op;

BYTE  Pers_Prper;
StayFD _n_Pers_Prper = {&Pers_Prper,0,0,0,CLS_S,0,"Pers_Prper","Призн.переноса зап. в NAC"};
StayFD *_Pers_Prper = &_n_Pers_Prper;

BYTE  Pers_Psn;
StayFD _n_Pers_Psn = {&Pers_Psn,0,0,0,CLS_S,0,"Pers_Psn","Причина снятия с оплаты(KLPSN)"};
StayFD *_Pers_Psn = &_n_Pers_Psn;

STAYI6 Pers_Rnaz;
StayFD _n_Pers_Rnaz = {&Pers_Rnaz,0,0,0,CLS_Hs,2,"Pers_Rnaz","Ежемесячная сумма для кода вып"};
StayFD *_Pers_Rnaz = &_n_Pers_Rnaz;

BYTE  Pravo_Zak;
StayFD _n_Pravo_Zak = {&Pravo_Zak,0,0,0,CLS_S,0,"Pravo_Zak","Закон"};
StayFD *_Pravo_Zak = &_n_Pravo_Zak;

BYTE  Pravo_Che;
StayFD _n_Pravo_Che = {&Pravo_Che,0,0,0,CLS_S,0,"Pravo_Che","Право снижения возр по ЧАЕС"};
StayFD *_Pravo_Che = &_n_Pravo_Che;

StayDate Pravo_DateBeg;
StayFD _n_Pravo_DateBeg = {&Pravo_DateBeg,0,0,0,CLS_Date,0,"Pravo_DateBeg","Дата наступления права"};
StayFD *_Pravo_DateBeg = &_n_Pravo_DateBeg;

StayDate Pravo_DateChe;
StayFD _n_Pravo_DateChe = {&Pravo_DateChe,0,0,0,CLS_Date,0,"Pravo_DateChe","Дата права по Чернобилю"};
StayFD *_Pravo_DateChe = &_n_Pravo_DateChe;

StayDate Pravo_DateCHK;
StayFD _n_Pravo_DateCHK = {&Pravo_DateCHK,0,0,0,CLS_Date,0,"Pravo_DateCHK","Дата права по Чернобилю - работников станции 2 ГОДА"};
StayFD *_Pravo_DateCHK = &_n_Pravo_DateCHK;

StayDate Pravo_DateEnd;
StayFD _n_Pravo_DateEnd = {&Pravo_DateEnd,0,0,0,CLS_Date,0,"Pravo_DateEnd","Дата  по  права на пенсию"};
StayFD *_Pravo_DateEnd = &_n_Pravo_DateEnd;

StayDate Pravo_DateMax;
StayFD _n_Pravo_DateMax = {&Pravo_DateMax,0,0,0,CLS_Date,0,"Pravo_DateMax","Дата права на повышенный макс."};
StayFD *_Pravo_DateMax = &_n_Pravo_DateMax;

StayDate Pravo_DateVsr;
StayFD _n_Pravo_DateVsr = {&Pravo_DateVsr,0,0,0,CLS_Date,0,"Pravo_DateVsr","Дата права на возраст"};
StayFD *_Pravo_DateVsr = &_n_Pravo_DateVsr;

StayDate Pravo_DateZan;
StayFD _n_Pravo_DateZan = {&Pravo_DateZan,0,0,0,CLS_Date,0,"Pravo_DateZan","Дата права на занятості"};
StayFD *_Pravo_DateZan = &_n_Pravo_DateZan;

StayDate Pravo_DateZGs;
StayFD _n_Pravo_DateZGs = {&Pravo_DateZGs,0,0,0,CLS_Date,0,"Pravo_DateZGs","Дата права на занятості - госсл"};
StayFD *_Pravo_DateZGs = &_n_Pravo_DateZGs;

BYTE  Pravo_DopPens;
StayFD _n_Pravo_DopPens = {&Pravo_DopPens,0,0,0,CLS_S,0,"Pravo_DopPens","Право на доп.пенсию"};
StayFD *_Pravo_DopPens = &_n_Pravo_DopPens;

BYTE  Pravo_FullYes;
StayFD _n_Pravo_FullYes = {&Pravo_FullYes,0,0,0,CLS_S,0,"Pravo_FullYes","Признак полноты права по виду"};
StayFD *_Pravo_FullYes = &_n_Pravo_FullYes;

BYTE  Pravo_FullY24;
StayFD _n_Pravo_FullY24 = {&Pravo_FullY24,0,0,0,CLS_S,0,"Pravo_FullY24","Признак полноты права по виду"};
StayFD *_Pravo_FullY24 = &_n_Pravo_FullY24;

WORD  Pravo_Kfn;
StayFD _n_Pravo_Kfn = {&Pravo_Kfn,0,0,0,CLS_I,0,"Pravo_Kfn","Код выплаты"};
StayFD *_Pravo_Kfn = &_n_Pravo_Kfn;

char Pravo_Koef[151];
StayFD _n_Pravo_Koef = {&Pravo_Koef,0,0,0,CLS_V,150,"Pravo_Koef","Коеффициент по праву"};
StayFD *_Pravo_Koef = &_n_Pravo_Koef;

BYTE  Pravo_MaxPens;
StayFD _n_Pravo_MaxPens = {&Pravo_MaxPens,0,0,0,CLS_S,0,"Pravo_MaxPens","Правр на повышен.максимум пенс"};
StayFD *_Pravo_MaxPens = &_n_Pravo_MaxPens;

BYTE  Pravo_NMDolja;
StayFD _n_Pravo_NMDolja = {&Pravo_NMDolja,0,0,0,CLS_S,0,"Pravo_NMDolja","Номер доли"};
StayFD *_Pravo_NMDolja = &_n_Pravo_NMDolja;

BYTE  Pravo_Nomig;
StayFD _n_Pravo_Nomig = {&Pravo_Nomig,0,0,0,CLS_S,0,"Pravo_Nomig","Номер иждивенца"};
StayFD *_Pravo_Nomig = &_n_Pravo_Nomig;

signed char Pravo_Nr;
StayFD _n_Pravo_Nr = {&Pravo_Nr,0,0,0,CLS_Ss,0,"Pravo_Nr","Номер родителя"};
StayFD *_Pravo_Nr = &_n_Pravo_Nr;

WORD  Pravo_Op;
StayFD _n_Pravo_Op = {&Pravo_Op,0,0,0,CLS_I,0,"Pravo_Op","Код операции"};
StayFD *_Pravo_Op = &_n_Pravo_Op;

WORD  Pravo_Prof;
StayFD _n_Pravo_Prof = {&Pravo_Prof,0,0,0,CLS_I,0,"Pravo_Prof","Профессия по праву"};
StayFD *_Pravo_Prof = &_n_Pravo_Prof;

WORD  Pravo_Shifr;
StayFD _n_Pravo_Shifr = {&Pravo_Shifr,0,0,0,CLS_I,0,"Pravo_Shifr","Код шифра пенсии"};
StayFD *_Pravo_Shifr = &_n_Pravo_Shifr;

BYTE  Pravo_VPen;
StayFD _n_Pravo_VPen = {&Pravo_VPen,0,0,0,CLS_S,0,"Pravo_VPen","Вид пенсии  по праву"};
StayFD *_Pravo_VPen = &_n_Pravo_VPen;

BYTE  Pravo_Zan;
StayFD _n_Pravo_Zan = {&Pravo_Zan,0,0,0,CLS_S,0,"Pravo_Zan","Право по закону о Занятости"};
StayFD *_Pravo_Zan = &_n_Pravo_Zan;

WORD  Shifrs_Code;
StayFD _n_Shifrs_Code = {&Shifrs_Code,0,0,0,CLS_I,0,"Shifrs_Code","¦юф эютюую °шЇЁр яхэёшш"};
StayFD *_Shifrs_Code = &_n_Shifrs_Code;

StayDate Shifrs_DateC;
StayFD _n_Shifrs_DateC = {&Shifrs_DateC,0,0,0,CLS_Date,0,"Shifrs_DateC","-рЄр ё ..."};
StayFD *_Shifrs_DateC = &_n_Shifrs_DateC;

WORD  Shifrs_InsCod;
StayFD _n_Shifrs_InsCod = {&Shifrs_InsCod,0,0,0,CLS_I,0,"Shifrs_InsCod","¦юф шэёяхъЄюЁр"};
StayFD *_Shifrs_InsCod = &_n_Shifrs_InsCod;

StayDate Shifrs_InsDat;
StayFD _n_Shifrs_InsDat = {&Shifrs_InsDat,0,0,0,CLS_Date,0,"Shifrs_InsDat","-рЄр шэёяхъЄюЁр"};
StayFD *_Shifrs_InsDat = &_n_Shifrs_InsDat;

WORD  Shifrs_Kfn;
StayFD _n_Shifrs_Kfn = {&Shifrs_Kfn,0,0,0,CLS_I,0,"Shifrs_Kfn","¦юф юёэютэюую KFN(Ls_Kfn)"};
StayFD *_Shifrs_Kfn = &_n_Shifrs_Kfn;

STAYI6 RInd_PI100;
StayFD _n_RInd_PI100 = {&RInd_PI100,0,0,0,CLS_Hs,5,"RInd_PI100","Размер проиндексированной пенсии"};
StayFD *_RInd_PI100 = &_n_RInd_PI100;

BYTE  Zan_AgeDown;
StayFD _n_Zan_AgeDown = {&Zan_AgeDown,0,0,0,CLS_S,0,"Zan_AgeDown","Сниж по Зак о Занят"};
StayFD *_Zan_AgeDown = &_n_Zan_AgeDown;

STAYI6 Pens_RazmNPUG;
StayFD _n_Pens_RazmNPUG = {&Pens_RazmNPUG,0,0,0,CLS_Hs,2,"Pens_RazmNPUG",""};
StayFD *_Pens_RazmNPUG = &_n_Pens_RazmNPUG;

WORD  Ak_CodeStr;
StayFD _n_Ak_CodeStr = {&Ak_CodeStr,0,0,0,CLS_I,0,"Ak_CodeStr","Код шифра пенсии"};
StayFD *_Ak_CodeStr = &_n_Ak_CodeStr;

WORD  Ak_CodeStr1;
StayFD _n_Ak_CodeStr1 = {&Ak_CodeStr1,0,0,0,CLS_I,0,"Ak_CodeStr1","Код шифра пенсии"};
StayFD *_Ak_CodeStr1 = &_n_Ak_CodeStr1;

STAYI6 Akt_Rab1;
StayFD _n_Akt_Rab1 = {&Akt_Rab1,0,0,0,CLS_Hs,5,"Akt_Rab1",""};
StayFD *_Akt_Rab1 = &_n_Akt_Rab1;

STAYI6 Akt_Rab2;
StayFD _n_Akt_Rab2 = {&Akt_Rab2,0,0,0,CLS_Hs,5,"Akt_Rab2",""};
StayFD *_Akt_Rab2 = &_n_Akt_Rab2;

STAYI6 Akt_Rab3;
StayFD _n_Akt_Rab3 = {&Akt_Rab3,0,0,0,CLS_Hs,5,"Akt_Rab3",""};
StayFD *_Akt_Rab3 = &_n_Akt_Rab3;

STAYI6 Akt_Rab4;
StayFD _n_Akt_Rab4 = {&Akt_Rab4,0,0,0,CLS_Hs,5,"Akt_Rab4",""};
StayFD *_Akt_Rab4 = &_n_Akt_Rab4;

STAYI6 Akt_Rab5;
StayFD _n_Akt_Rab5 = {&Akt_Rab5,0,0,0,CLS_Hs,5,"Akt_Rab5",""};
StayFD *_Akt_Rab5 = &_n_Akt_Rab5;

STAYI6 Ak_Pokaz1;
StayFD _n_Ak_Pokaz1 = {&Ak_Pokaz1,0,0,0,CLS_Hs,5,"Ak_Pokaz1",""};
StayFD *_Ak_Pokaz1 = &_n_Ak_Pokaz1;

STAYI6 Ak_Pokaz2;
StayFD _n_Ak_Pokaz2 = {&Ak_Pokaz2,0,0,0,CLS_Hs,5,"Ak_Pokaz2",""};
StayFD *_Ak_Pokaz2 = &_n_Ak_Pokaz2;

STAYI6 Ak_Pokaz3;
StayFD _n_Ak_Pokaz3 = {&Ak_Pokaz3,0,0,0,CLS_Hs,5,"Ak_Pokaz3",""};
StayFD *_Ak_Pokaz3 = &_n_Ak_Pokaz3;

STAYI6 Ak_Pokaz4;
StayFD _n_Ak_Pokaz4 = {&Ak_Pokaz4,0,0,0,CLS_Hs,5,"Ak_Pokaz4",""};
StayFD *_Ak_Pokaz4 = &_n_Ak_Pokaz4;

STAYI6 Ak_Pokaz5;
StayFD _n_Ak_Pokaz5 = {&Ak_Pokaz5,0,0,0,CLS_Hs,5,"Ak_Pokaz5",""};
StayFD *_Ak_Pokaz5 = &_n_Ak_Pokaz5;

STAYI6 Ak_Pokaz6;
StayFD _n_Ak_Pokaz6 = {&Ak_Pokaz6,0,0,0,CLS_Hs,5,"Ak_Pokaz6",""};
StayFD *_Ak_Pokaz6 = &_n_Ak_Pokaz6;

STAYI6 Ak_Pokaz7;
StayFD _n_Ak_Pokaz7 = {&Ak_Pokaz7,0,0,0,CLS_Hs,5,"Ak_Pokaz7",""};
StayFD *_Ak_Pokaz7 = &_n_Ak_Pokaz7;

STAYI6 Ak_Pokaz8;
StayFD _n_Ak_Pokaz8 = {&Ak_Pokaz8,0,0,0,CLS_Hs,5,"Ak_Pokaz8",""};
StayFD *_Ak_Pokaz8 = &_n_Ak_Pokaz8;

STAYI6 Ak_Pokaz9;
StayFD _n_Ak_Pokaz9 = {&Ak_Pokaz9,0,0,0,CLS_Hs,5,"Ak_Pokaz9",""};
StayFD *_Ak_Pokaz9 = &_n_Ak_Pokaz9;

STAYI6 Ak_Pokaz10;
StayFD _n_Ak_Pokaz10 = {&Ak_Pokaz10,0,0,0,CLS_Hs,5,"Ak_Pokaz10",""};
StayFD *_Ak_Pokaz10 = &_n_Ak_Pokaz10;

STAYI6 Ak_Pokaz11;
StayFD _n_Ak_Pokaz11 = {&Ak_Pokaz11,0,0,0,CLS_Hs,5,"Ak_Pokaz11",""};
StayFD *_Ak_Pokaz11 = &_n_Ak_Pokaz11;

STAYI6 Ak_Pokaz12;
StayFD _n_Ak_Pokaz12 = {&Ak_Pokaz12,0,0,0,CLS_Hs,5,"Ak_Pokaz12",""};
StayFD *_Ak_Pokaz12 = &_n_Ak_Pokaz12;

STAYI6 Ak_Pokaz13;
StayFD _n_Ak_Pokaz13 = {&Ak_Pokaz13,0,0,0,CLS_Hs,5,"Ak_Pokaz13",""};
StayFD *_Ak_Pokaz13 = &_n_Ak_Pokaz13;

STAYI6 Ak_Pokaz14;
StayFD _n_Ak_Pokaz14 = {&Ak_Pokaz14,0,0,0,CLS_Hs,5,"Ak_Pokaz14",""};
StayFD *_Ak_Pokaz14 = &_n_Ak_Pokaz14;

STAYI6 Ak_Pokaz15;
StayFD _n_Ak_Pokaz15 = {&Ak_Pokaz15,0,0,0,CLS_Hs,5,"Ak_Pokaz15",""};
StayFD *_Ak_Pokaz15 = &_n_Ak_Pokaz15;

STAYI6 Ak_Pokaz16;
StayFD _n_Ak_Pokaz16 = {&Ak_Pokaz16,0,0,0,CLS_Hs,5,"Ak_Pokaz16",""};
StayFD *_Ak_Pokaz16 = &_n_Ak_Pokaz16;

STAYI6 Ak_Pokaz17;
StayFD _n_Ak_Pokaz17 = {&Ak_Pokaz17,0,0,0,CLS_Hs,5,"Ak_Pokaz17",""};
StayFD *_Ak_Pokaz17 = &_n_Ak_Pokaz17;

STAYI6 Ak_Pokaz18;
StayFD _n_Ak_Pokaz18 = {&Ak_Pokaz18,0,0,0,CLS_Hs,5,"Ak_Pokaz18",""};
StayFD *_Ak_Pokaz18 = &_n_Ak_Pokaz18;

STAYI6 Ak_Pokaz19;
StayFD _n_Ak_Pokaz19 = {&Ak_Pokaz19,0,0,0,CLS_Hs,5,"Ak_Pokaz19",""};
StayFD *_Ak_Pokaz19 = &_n_Ak_Pokaz19;

STAYI6 Ak_Pokaz20;
StayFD _n_Ak_Pokaz20 = {&Ak_Pokaz20,0,0,0,CLS_Hs,5,"Ak_Pokaz20",""};
StayFD *_Ak_Pokaz20 = &_n_Ak_Pokaz20;

STAYI6 Ak_Pokaz21;
StayFD _n_Ak_Pokaz21 = {&Ak_Pokaz21,0,0,0,CLS_Hs,5,"Ak_Pokaz21",""};
StayFD *_Ak_Pokaz21 = &_n_Ak_Pokaz21;

STAYI6 Ak_Pokaz22;
StayFD _n_Ak_Pokaz22 = {&Ak_Pokaz22,0,0,0,CLS_Hs,5,"Ak_Pokaz22",""};
StayFD *_Ak_Pokaz22 = &_n_Ak_Pokaz22;

STAYI6 Ak_Pokaz23;
StayFD _n_Ak_Pokaz23 = {&Ak_Pokaz23,0,0,0,CLS_Hs,5,"Ak_Pokaz23",""};
StayFD *_Ak_Pokaz23 = &_n_Ak_Pokaz23;

STAYI6 Ak_Pokaz24;
StayFD _n_Ak_Pokaz24 = {&Ak_Pokaz24,0,0,0,CLS_Hs,5,"Ak_Pokaz24",""};
StayFD *_Ak_Pokaz24 = &_n_Ak_Pokaz24;

STAYI6 Ak_Pokaz25;
StayFD _n_Ak_Pokaz25 = {&Ak_Pokaz25,0,0,0,CLS_Hs,5,"Ak_Pokaz25",""};
StayFD *_Ak_Pokaz25 = &_n_Ak_Pokaz25;

STAYI6 Ak_Pokaz26;
StayFD _n_Ak_Pokaz26 = {&Ak_Pokaz26,0,0,0,CLS_Hs,5,"Ak_Pokaz26",""};
StayFD *_Ak_Pokaz26 = &_n_Ak_Pokaz26;

STAYI6 Ak_Pokaz27;
StayFD _n_Ak_Pokaz27 = {&Ak_Pokaz27,0,0,0,CLS_Hs,5,"Ak_Pokaz27",""};
StayFD *_Ak_Pokaz27 = &_n_Ak_Pokaz27;

STAYI6 Ak_Pokaz28;
StayFD _n_Ak_Pokaz28 = {&Ak_Pokaz28,0,0,0,CLS_Hs,5,"Ak_Pokaz28",""};
StayFD *_Ak_Pokaz28 = &_n_Ak_Pokaz28;

STAYI6 Ak_Pokaz29;
StayFD _n_Ak_Pokaz29 = {&Ak_Pokaz29,0,0,0,CLS_Hs,5,"Ak_Pokaz29",""};
StayFD *_Ak_Pokaz29 = &_n_Ak_Pokaz29;

STAYI6 Ak_Pokaz30;
StayFD _n_Ak_Pokaz30 = {&Ak_Pokaz30,0,0,0,CLS_Hs,5,"Ak_Pokaz30",""};
StayFD *_Ak_Pokaz30 = &_n_Ak_Pokaz30;

WORD  Akp_CodeStr;
StayFD _n_Akp_CodeStr = {&Akp_CodeStr,0,0,0,CLS_I,0,"Akp_CodeStr","Код шифра пенсии"};
StayFD *_Akp_CodeStr = &_n_Akp_CodeStr;

WORD  Akp_CodeStr1;
StayFD _n_Akp_CodeStr1 = {&Akp_CodeStr1,0,0,0,CLS_I,0,"Akp_CodeStr1","Код шифра пенсии"};
StayFD *_Akp_CodeStr1 = &_n_Akp_CodeStr1;

STAYI6 Akp_Pokaz1;
StayFD _n_Akp_Pokaz1 = {&Akp_Pokaz1,0,0,0,CLS_Hs,5,"Akp_Pokaz1",""};
StayFD *_Akp_Pokaz1 = &_n_Akp_Pokaz1;

STAYI6 Akp_Pokaz2;
StayFD _n_Akp_Pokaz2 = {&Akp_Pokaz2,0,0,0,CLS_Hs,5,"Akp_Pokaz2",""};
StayFD *_Akp_Pokaz2 = &_n_Akp_Pokaz2;

STAYI6 Akp_Pokaz3;
StayFD _n_Akp_Pokaz3 = {&Akp_Pokaz3,0,0,0,CLS_Hs,5,"Akp_Pokaz3",""};
StayFD *_Akp_Pokaz3 = &_n_Akp_Pokaz3;

STAYI6 Akp_Pokaz4;
StayFD _n_Akp_Pokaz4 = {&Akp_Pokaz4,0,0,0,CLS_Hs,5,"Akp_Pokaz4",""};
StayFD *_Akp_Pokaz4 = &_n_Akp_Pokaz4;

STAYI6 Akp_Pokaz5;
StayFD _n_Akp_Pokaz5 = {&Akp_Pokaz5,0,0,0,CLS_Hs,5,"Akp_Pokaz5",""};
StayFD *_Akp_Pokaz5 = &_n_Akp_Pokaz5;

STAYI6 Akp_Pokaz6;
StayFD _n_Akp_Pokaz6 = {&Akp_Pokaz6,0,0,0,CLS_Hs,5,"Akp_Pokaz6",""};
StayFD *_Akp_Pokaz6 = &_n_Akp_Pokaz6;

STAYI6 Akp_Pokaz7;
StayFD _n_Akp_Pokaz7 = {&Akp_Pokaz7,0,0,0,CLS_Hs,5,"Akp_Pokaz7",""};
StayFD *_Akp_Pokaz7 = &_n_Akp_Pokaz7;

STAYI6 Akp_Pokaz8;
StayFD _n_Akp_Pokaz8 = {&Akp_Pokaz8,0,0,0,CLS_Hs,5,"Akp_Pokaz8",""};
StayFD *_Akp_Pokaz8 = &_n_Akp_Pokaz8;

STAYI6 Akp_Pokaz9;
StayFD _n_Akp_Pokaz9 = {&Akp_Pokaz9,0,0,0,CLS_Hs,5,"Akp_Pokaz9",""};
StayFD *_Akp_Pokaz9 = &_n_Akp_Pokaz9;

STAYI6 Akp_Pokaz10;
StayFD _n_Akp_Pokaz10 = {&Akp_Pokaz10,0,0,0,CLS_Hs,5,"Akp_Pokaz10",""};
StayFD *_Akp_Pokaz10 = &_n_Akp_Pokaz10;

STAYI6 Akp_Pokaz11;
StayFD _n_Akp_Pokaz11 = {&Akp_Pokaz11,0,0,0,CLS_Hs,5,"Akp_Pokaz11",""};
StayFD *_Akp_Pokaz11 = &_n_Akp_Pokaz11;

STAYI6 Akp_Pokaz12;
StayFD _n_Akp_Pokaz12 = {&Akp_Pokaz12,0,0,0,CLS_Hs,5,"Akp_Pokaz12",""};
StayFD *_Akp_Pokaz12 = &_n_Akp_Pokaz12;

STAYI6 Akp_Pokaz13;
StayFD _n_Akp_Pokaz13 = {&Akp_Pokaz13,0,0,0,CLS_Hs,5,"Akp_Pokaz13",""};
StayFD *_Akp_Pokaz13 = &_n_Akp_Pokaz13;

STAYI6 Akp_Pokaz14;
StayFD _n_Akp_Pokaz14 = {&Akp_Pokaz14,0,0,0,CLS_Hs,5,"Akp_Pokaz14",""};
StayFD *_Akp_Pokaz14 = &_n_Akp_Pokaz14;

STAYI6 Akp_Pokaz15;
StayFD _n_Akp_Pokaz15 = {&Akp_Pokaz15,0,0,0,CLS_Hs,5,"Akp_Pokaz15",""};
StayFD *_Akp_Pokaz15 = &_n_Akp_Pokaz15;

STAYI6 Akp_Pokaz16;
StayFD _n_Akp_Pokaz16 = {&Akp_Pokaz16,0,0,0,CLS_Hs,5,"Akp_Pokaz16",""};
StayFD *_Akp_Pokaz16 = &_n_Akp_Pokaz16;

STAYI6 Akp_Pokaz17;
StayFD _n_Akp_Pokaz17 = {&Akp_Pokaz17,0,0,0,CLS_Hs,5,"Akp_Pokaz17",""};
StayFD *_Akp_Pokaz17 = &_n_Akp_Pokaz17;

STAYI6 Akp_Pokaz18;
StayFD _n_Akp_Pokaz18 = {&Akp_Pokaz18,0,0,0,CLS_Hs,5,"Akp_Pokaz18",""};
StayFD *_Akp_Pokaz18 = &_n_Akp_Pokaz18;

STAYI6 Akp_Pokaz19;
StayFD _n_Akp_Pokaz19 = {&Akp_Pokaz19,0,0,0,CLS_Hs,5,"Akp_Pokaz19",""};
StayFD *_Akp_Pokaz19 = &_n_Akp_Pokaz19;

STAYI6 Akp_Pokaz20;
StayFD _n_Akp_Pokaz20 = {&Akp_Pokaz20,0,0,0,CLS_Hs,5,"Akp_Pokaz20",""};
StayFD *_Akp_Pokaz20 = &_n_Akp_Pokaz20;

STAYI6 Akp_Pokaz21;
StayFD _n_Akp_Pokaz21 = {&Akp_Pokaz21,0,0,0,CLS_Hs,5,"Akp_Pokaz21",""};
StayFD *_Akp_Pokaz21 = &_n_Akp_Pokaz21;

STAYI6 Akp_Pokaz22;
StayFD _n_Akp_Pokaz22 = {&Akp_Pokaz22,0,0,0,CLS_Hs,5,"Akp_Pokaz22",""};
StayFD *_Akp_Pokaz22 = &_n_Akp_Pokaz22;

STAYI6 Akp_Pokaz23;
StayFD _n_Akp_Pokaz23 = {&Akp_Pokaz23,0,0,0,CLS_Hs,5,"Akp_Pokaz23",""};
StayFD *_Akp_Pokaz23 = &_n_Akp_Pokaz23;

STAYI6 Akp_Pokaz24;
StayFD _n_Akp_Pokaz24 = {&Akp_Pokaz24,0,0,0,CLS_Hs,5,"Akp_Pokaz24",""};
StayFD *_Akp_Pokaz24 = &_n_Akp_Pokaz24;

STAYI6 Akp_Pokaz25;
StayFD _n_Akp_Pokaz25 = {&Akp_Pokaz25,0,0,0,CLS_Hs,5,"Akp_Pokaz25",""};
StayFD *_Akp_Pokaz25 = &_n_Akp_Pokaz25;

STAYI6 Akp_Pokaz26;
StayFD _n_Akp_Pokaz26 = {&Akp_Pokaz26,0,0,0,CLS_Hs,5,"Akp_Pokaz26",""};
StayFD *_Akp_Pokaz26 = &_n_Akp_Pokaz26;

STAYI6 Akp_Pokaz27;
StayFD _n_Akp_Pokaz27 = {&Akp_Pokaz27,0,0,0,CLS_Hs,5,"Akp_Pokaz27",""};
StayFD *_Akp_Pokaz27 = &_n_Akp_Pokaz27;

STAYI6 Akp_Pokaz28;
StayFD _n_Akp_Pokaz28 = {&Akp_Pokaz28,0,0,0,CLS_Hs,5,"Akp_Pokaz28",""};
StayFD *_Akp_Pokaz28 = &_n_Akp_Pokaz28;

STAYI6 Akp_Pokaz29;
StayFD _n_Akp_Pokaz29 = {&Akp_Pokaz29,0,0,0,CLS_Hs,5,"Akp_Pokaz29",""};
StayFD *_Akp_Pokaz29 = &_n_Akp_Pokaz29;

STAYI6 Akp_Pokaz30;
StayFD _n_Akp_Pokaz30 = {&Akp_Pokaz30,0,0,0,CLS_Hs,5,"Akp_Pokaz30",""};
StayFD *_Akp_Pokaz30 = &_n_Akp_Pokaz30;

BYTE  DCD_Nomig;
StayFD _n_DCD_Nomig = {&DCD_Nomig,0,0,0,CLS_S,0,"DCD_Nomig",""};
StayFD *_DCD_Nomig = &_n_DCD_Nomig;

StayDate DCD_DateBeg;
StayFD _n_DCD_DateBeg = {&DCD_DateBeg,0,0,0,CLS_Date,0,"DCD_DateBeg",""};
StayFD *_DCD_DateBeg = &_n_DCD_DateBeg;

STAYI6 DCD_Summa;
StayFD _n_DCD_Summa = {&DCD_Summa,0,0,0,CLS_Hs,2,"DCD_Summa",""};
StayFD *_DCD_Summa = &_n_DCD_Summa;

char DCD_Text[51];
StayFD _n_DCD_Text = {&DCD_Text,0,0,0,CLS_V,50,"DCD_Text",""};
StayFD *_DCD_Text = &_n_DCD_Text;

DWORD ArS_Code;
StayFD _n_ArS_Code = {&ArS_Code,0,0,0,CLS_L,0,"ArS_Code",""};
StayFD *_ArS_Code = &_n_ArS_Code;

WORD  ArS_Priz;
StayFD _n_ArS_Priz = {&ArS_Priz,0,0,0,CLS_I,0,"ArS_Priz","Признак"};
StayFD *_ArS_Priz = &_n_ArS_Priz;

StayDate ArS_Date;
StayFD _n_ArS_Date = {&ArS_Date,0,0,0,CLS_Date,0,"ArS_Date",""};
StayFD *_ArS_Date = &_n_ArS_Date;

StayDate ArS_Date1;
StayFD _n_ArS_Date1 = {&ArS_Date1,0,0,0,CLS_Date,0,"ArS_Date1",""};
StayFD *_ArS_Date1 = &_n_ArS_Date1;

StayDate ArS_Date2;
StayFD _n_ArS_Date2 = {&ArS_Date2,0,0,0,CLS_Date,0,"ArS_Date2",""};
StayFD *_ArS_Date2 = &_n_ArS_Date2;

long  ArS_Sum;
StayFD _n_ArS_Sum = {&ArS_Sum,0,0,0,CLS_Ls,2,"ArS_Sum","Значение"};
StayFD *_ArS_Sum = &_n_ArS_Sum;

long  ArS_Ind;
StayFD _n_ArS_Ind = {&ArS_Ind,0,0,0,CLS_Ls,5,"ArS_Ind","Значение"};
StayFD *_ArS_Ind = &_n_ArS_Ind;

DWORD ArS_PrUI4;
StayFD _n_ArS_PrUI4 = {&ArS_PrUI4,0,0,0,CLS_L,0,"ArS_PrUI4",""};
StayFD *_ArS_PrUI4 = &_n_ArS_PrUI4;

WORD  ArS_PrUI2;
StayFD _n_ArS_PrUI2 = {&ArS_PrUI2,0,0,0,CLS_I,0,"ArS_PrUI2",""};
StayFD *_ArS_PrUI2 = &_n_ArS_PrUI2;

WORD  ArS_Pr1UI2;
StayFD _n_ArS_Pr1UI2 = {&ArS_Pr1UI2,0,0,0,CLS_I,0,"ArS_Pr1UI2",""};
StayFD *_ArS_Pr1UI2 = &_n_ArS_Pr1UI2;

BYTE  Pravo_NKor;
StayFD _n_Pravo_NKor = {&Pravo_NKor,0,0,0,CLS_S,0,"Pravo_NKor","Настоящий номер кормильца из базы S_Kor"};
StayFD *_Pravo_NKor = &_n_Pravo_NKor;

/* End FCfield */
/* Begin FCextern */
extern StayDataset _n_Aktuarp;
extern StayDataset _n_BInd;
extern StayDataset _n_BIndIgd;
extern StayDataset _n_CheZP;
extern StayDataset _n_CheZPS;
extern StayDataset _n_Igds;
extern StayDataset _n_Shifrs;
extern StayDataset _n_B_Nazns;
extern StayDataset _n_ArS;
extern StayDataset _n_ItogChe;
extern StayDataset _n_ItogInv;
extern StayDataset _n_Np181;
extern StayDataset _n_Npr;
extern StayDataset _n_Nps;
extern StayDataset _n_NpGossl;
extern StayDataset _n_DCDText;
extern StayDataset _n_Np134;
extern StayDataset _n_Dp134;
extern StayDataset _n_NpCheD134;
extern StayDataset _n_NpSud134;
extern StayDataset _n_PIgd;
extern StayDataset _n_Perp;
extern StayDataset _n_Pers;
extern StayDataset _n_Pravo;
extern StayDataset _n_Aktuar;
extern StayDataset _n_Per;
extern StayDataset _n_NpCheD;
extern StayDataset _n_NpOsn;
extern StayDataset _n_NpSud;
extern StayDataset _n_Np;
extern StayDataset _n_Dp;
extern StayDataset _n_PravoD;
/* End FCextern */
/* Begin FCdataset */
static StayFD *tcm_Aktuarp[] =
{
 (StayFD *)&_n_Akp_CodeStr,
 (StayFD *)&_n_Akp_CodeStr1,
 (StayFD *)&_n_Akp_Pokaz1,
 (StayFD *)&_n_Akp_Pokaz2,
 (StayFD *)&_n_Akp_Pokaz3,
 (StayFD *)&_n_Akp_Pokaz4,
 (StayFD *)&_n_Akp_Pokaz5,
 (StayFD *)&_n_Akp_Pokaz6,
 (StayFD *)&_n_Akp_Pokaz7,
 (StayFD *)&_n_Akp_Pokaz8,
 (StayFD *)&_n_Akp_Pokaz9,
 (StayFD *)&_n_Akp_Pokaz10,
 (StayFD *)&_n_Akp_Pokaz11,
 (StayFD *)&_n_Akp_Pokaz12,
 (StayFD *)&_n_Akp_Pokaz13,
 (StayFD *)&_n_Akp_Pokaz14,
 (StayFD *)&_n_Akp_Pokaz15,
 (StayFD *)&_n_Akp_Pokaz16,
 (StayFD *)&_n_Akp_Pokaz17,
 (StayFD *)&_n_Akp_Pokaz18,
 (StayFD *)&_n_Akp_Pokaz18,
 (StayFD *)&_n_Akp_Pokaz20,
 (StayFD *)&_n_Akp_Pokaz21,
 (StayFD *)&_n_Akp_Pokaz22,
 (StayFD *)&_n_Akp_Pokaz23,
 (StayFD *)&_n_Akp_Pokaz24,
 (StayFD *)&_n_Akp_Pokaz25,
 (StayFD *)&_n_Akp_Pokaz26,
 (StayFD *)&_n_Akp_Pokaz27,
 (StayFD *)&_n_Akp_Pokaz28,
 (StayFD *)&_n_Akp_Pokaz29,
 (StayFD *)&_n_Akp_Pokaz30,
 NULL
};
static BYTE ix_Aktuarp[] = {1,1,2,0,1};
StayDataset _n_Aktuarp = {NULL,TAG_DATASET,0,0,DS_QBASE,0,1,0,NULL,tcm_Aktuarp,NULL,
"WORK:AKTUARP.DT",ix_Aktuarp,NULL,"Aktuarp",16};
StayDataset *Aktuarp = &_n_Aktuarp;

static StayFD *tcm_BInd[] =
{
 (StayFD *)&_n_Ind_NMDolja,
 (StayFD *)&_n_Ind_DateBeg,
 (StayFD *)&_n_Ind_P100,
 (StayFD *)&_n_Ind_PI100,
 (StayFD *)&_n_Ind_Koef,
 NULL
};
static BYTE ix_BInd[] = {1,1,2,0,1};
StayDataset _n_BInd = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_BInd,NULL,
"WORK:BIND.DT",ix_BInd,"База данных уточнения по индексации","BInd",0};
StayDataset *BInd = &_n_BInd;

static StayFD *tcm_BIndIgd[] =
{
 (StayFD *)&_n_Ind_DateBeg,
 (StayFD *)&_n_Ind_Nomig,
 (StayFD *)&_n_Ind_Koef,
 (StayFD *)&_n_Ind_PIND,
 (StayFD *)&_n_Ind_GIND,
 (StayFD *)&_n_Ind_PI100,
 (StayFD *)&_n_Ind_PP708,
 (StayFD *)&_n_Ind_PG708,
 (StayFD *)&_n_Ind_FP708,
 (StayFD *)&_n_Ind_FG708,
 (StayFD *)&_n_Ind_NMDolja,
 NULL
};
static BYTE ix_BIndIgd[] = {2,1,66,0,1,2,66,1,0};
StayDataset _n_BIndIgd = {NULL,TAG_DATASET,0,0,DS_QBASE,0,1,0,NULL,tcm_BIndIgd,NULL,
"WORK:BINDIGD.DT",ix_BIndIgd,"База данных уточнения по индексации","BIndIgd",16};
StayDataset *BIndIgd = &_n_BIndIgd;

static StayFD *tcm_CheZP[] =
{
 (StayFD *)&_n_CheZP_Nomig,
 (StayFD *)&_n_CheZP_Code,
 (StayFD *)&_n_CheZP_DateBeg,
 (StayFD *)&_n_CheZP_DateEnd,
 (StayFD *)&_n_CheZP_Time,
 NULL
};
static BYTE ix_CheZP[] = {1,1,4,0,1,2,4};
StayDataset _n_CheZP = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_CheZP,NULL,
NULL,ix_CheZP,"Периоды перебывания в чернобыльской зоне","CheZP",0};
StayDataset *CheZP = &_n_CheZP;

static StayFD *tcm_CheZPS[] =
{
 (StayFD *)&_n_CheZPS_Nomig,
 (StayFD *)&_n_CheZPS_Code,
 (StayFD *)&_n_CheZPS_DateBeg,
 (StayFD *)&_n_CheZPS_DateEnd,
 (StayFD *)&_n_CheZPS_Sum,
 NULL
};
static BYTE ix_CheZPS[] = {1,1,3,0,1,2};
StayDataset _n_CheZPS = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_CheZPS,NULL,
NULL,ix_CheZPS,NULL,"CheZPS",0};
StayDataset *CheZPS = &_n_CheZPS;

static StayFD *tcm_Igds[] =
{
 (StayFD *)&_n_Igds_Nomig,
 (StayFD *)&_n_Igds_Katrod,
 (StayFD *)&_n_Igds_Katnetr,
 (StayFD *)&_n_Igds_Drog,
 (StayFD *)&_n_Igds_Pol,
 (StayFD *)&_n_Igds_Psn,
 (StayFD *)&_n_Igds_Sir,
 (StayFD *)&_n_Igds_Dso,
 (StayFD *)&_n_Igds_Prab,
 (StayFD *)&_n_Igds_Prdel,
 (StayFD *)&_n_Igds_Dusn,
 (StayFD *)&_n_Igds_Dolj_NumP,
 NULL
};
static BYTE ix_Igds[] = {1,1,1,0};
StayDataset _n_Igds = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_Igds,NULL,
NULL,ix_Igds,"База старых данных о иждивенцах","Igds",0};
StayDataset *Igds = &_n_Igds;

static StayFD *tcm_Shifrs[] =
{
 (StayFD *)&_n_Shifrs_DateC,
 (StayFD *)&_n_Shifrs_Code,
 (StayFD *)&_n_Shifrs_Kfn,
 (StayFD *)&_n_Shifrs_InsCod,
 (StayFD *)&_n_Shifrs_InsDat,
 NULL
};
static BYTE ix_Shifrs[] = {1,1,1,0};
StayDataset _n_Shifrs = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_Shifrs,NULL,
"WORK:SHIFRS.DT",ix_Shifrs,"База шифров","Shifrs",0};
StayDataset *Shifrs = &_n_Shifrs;

static StayFD *tcm_B_Nazns[] =
{
 (StayFD *)&_n_Nazn_Op,
 (StayFD *)&_n_Nazn_Dnaz,
 (StayFD *)&_n_Nazn_Dobr,
 (StayFD *)&_n_Nazn_Prc,
 (StayFD *)&_n_Nazn_Pensosn,
 (StayFD *)&_n_Nazn_Pmax,
 NULL
};
StayDataset _n_B_Nazns = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_Nazns,NULL,
NULL,NULL,NULL,"B_Nazns",0};
StayDataset *B_Nazns = &_n_B_Nazns;

static StayFD *tcm_ArS[] =
{
 (StayFD *)&_n_ArS_Code,
 (StayFD *)&_n_ArS_Priz,
 (StayFD *)&_n_ArS_Date,
 (StayFD *)&_n_ArS_Date1,
 (StayFD *)&_n_ArS_Date2,
 (StayFD *)&_n_ArS_Sum,
 (StayFD *)&_n_ArS_Ind,
 (StayFD *)&_n_ArS_PrUI4,
 (StayFD *)&_n_ArS_PrUI2,
 (StayFD *)&_n_ArS_Pr1UI2,
 NULL
};
static BYTE ix_ArS[] = {1,1,2,0,1};
StayDataset _n_ArS = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_ArS,NULL,
"WORK:ARS.DT",ix_ArS,"іассив 1","ArS",0};
StayDataset *ArS = &_n_ArS;

static StayFD *tcm_ItogChe[] =
{
 (StayFD *)&_n_Che_Nomig,
 (StayFD *)&_n_Che_AgeDop,
 (StayFD *)&_n_Che_AgeDown,
 (StayFD *)&_n_Che_Chpri,
 (StayFD *)&_n_Che_Date86,
 (StayFD *)&_n_Che_DateOts,
 (StayFD *)&_n_Che_Dkprav,
 (StayFD *)&_n_Che_Dnprav,
 (StayFD *)&_n_Che_Dobr,
 (StayFD *)&_n_Che_Kateg,
 (StayFD *)&_n_Che_Kbl,
 (StayFD *)&_n_Che_Kzp,
 (StayFD *)&_n_Che_Kzr,
 (StayFD *)&_n_Che_Likvid,
 (StayFD *)&_n_Che_Luch,
 (StayFD *)&_n_Che_Mask,
 (StayFD *)&_n_Che_Proc,
 (StayFD *)&_n_Che_Produ,
 (StayFD *)&_n_Che_Proj,
 (StayFD *)&_n_Che_Ptru,
 (StayFD *)&_n_Che_Snig,
 (StayFD *)&_n_Che_Tpos,
 (StayFD *)&_n_Che_TrudLost,
 (StayFD *)&_n_Che_Type,
 (StayFD *)&_n_Che_TypeKl,
 (StayFD *)&_n_Che_TypeName,
 (StayFD *)&_n_Che_ZonePr,
 (StayFD *)&_n_Che_ZonePrName,
 (StayFD *)&_n_Che_ZoneRb,
 (StayFD *)&_n_Che_ZoneRbName,
 (StayFD *)&_n_Che_PrNpDodP,
 (StayFD *)&_n_Che_PrNpProj,
 (StayFD *)&_n_Che_PrNpKomp,
 NULL
};
StayDataset _n_ItogChe = {NULL,TAG_DATASET,0,0,DS_STRUCT,0,1,0,NULL,tcm_ItogChe,NULL,
NULL,NULL,"Массив итоговых данных","ItogChe",0};
StayDataset *ItogChe = &_n_ItogChe;

static StayFD *tcm_ItogInv[] =
{
 (StayFD *)&_n_Inv_Nomig,
 (StayFD *)&_n_Inv_DateBeg,
 (StayFD *)&_n_Inv_DateEnd,
 (StayFD *)&_n_Inv_DateNast,
 (StayFD *)&_n_Inv_Dkpi,
 (StayFD *)&_n_Inv_Dni,
 (StayFD *)&_n_Inv_Dnpi,
 (StayFD *)&_n_Inv_Grinv,
 (StayFD *)&_n_Inv_Group,
 (StayFD *)&_n_Inv_GroupName,
 (StayFD *)&_n_Inv_Kbl,
 (StayFD *)&_n_Inv_Kod,
 (StayFD *)&_n_Inv_Prich,
 (StayFD *)&_n_Inv_PrichName,
 (StayFD *)&_n_Inv_Stag,
 (StayFD *)&_n_Inv_MaskOsb,
 NULL
};
StayDataset _n_ItogInv = {NULL,TAG_DATASET,0,0,DS_STRUCT,0,1,0,NULL,tcm_ItogInv,NULL,
NULL,NULL,"Массив итоговых данных","ItogInv",0};
StayDataset *ItogInv = &_n_ItogInv;

static StayFD *tcm_Np181[] =
{
 (StayFD *)&_n_Np181_Nomig,
 (StayFD *)&_n_Np181_DateBeg,
 (StayFD *)&_n_Np181_DateEnd,
 (StayFD *)&_n_Np181_Snadp,
 (StayFD *)&_n_Np181_Kodbl,
 NULL
};
static BYTE ix_Np181[] = {1,1,2,0,1};
StayDataset _n_Np181 = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_Np181,NULL,
"WORK:NP181.DT",ix_Np181,"Рабочая база надбавок","Np181",0};
StayDataset *Np181 = &_n_Np181;

static StayFD *tcm_Npr[] =
{
 (StayFD *)&_n_Npr_Nomig,
 (StayFD *)&_n_Npr_Code,
 (StayFD *)&_n_Npr_DateBeg,
 (StayFD *)&_n_Npr_DateEnd,
 (StayFD *)&_n_Npr_Proc,
 NULL
};
static BYTE ix_Npr[] = {1,1,2,0,1};
StayDataset _n_Npr = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_Npr,NULL,
"WORK:NPR.DT",ix_Npr,"Рабочая база надбавок","Npr",0};
StayDataset *Npr = &_n_Npr;

static StayFD *tcm_Nps[] =
{
 (StayFD *)&_n_Np_Code,
 (StayFD *)&_n_Np_NomIgd,
 (StayFD *)&_n_Np_DateBeg,
 (StayFD *)&_n_Np_DateEnd,
 (StayFD *)&_n_Np_Razm,
 (StayFD *)&_n_Np_Proc,
 (StayFD *)&_n_Np_Kodbl,
 NULL
};
static BYTE ix_Nps[] = {1,1,3,0,1,2};
StayDataset _n_Nps = {NULL,TAG_DATASET,0,0,DS_QBASE,0,1,0,NULL,tcm_Nps,NULL,
"WORK:NPS.DT",ix_Nps,"База старых надбавок","Nps",16};
StayDataset *Nps = &_n_Nps;

static StayFD *tcm_NpGossl[] =
{
 (StayFD *)&_n_NpOsn_Code,
 (StayFD *)&_n_NpOsn_NomIgd,
 (StayFD *)&_n_NpOsn_DateBeg,
 (StayFD *)&_n_NpOsn_DateEnd,
 (StayFD *)&_n_NpOsn_Razm,
 (StayFD *)&_n_NpOsn_Razm992,
 (StayFD *)&_n_NpOsn_Proc,
 (StayFD *)&_n_NpOsn_Kodbl,
 NULL
};
static BYTE ix_NpGossl[] = {1,1,3,0,1,2};
StayDataset _n_NpGossl = {NULL,TAG_DATASET,0,0,DS_QBASE,0,1,0,NULL,tcm_NpGossl,NULL,
"WORK:NPGOSSL.DT",ix_NpGossl,"База старых надбавок","NpGossl",16};
StayDataset *NpGossl = &_n_NpGossl;

static StayFD *tcm_DCDText[] =
{
 (StayFD *)&_n_DCD_Nomig,
 (StayFD *)&_n_DCD_DateBeg,
 (StayFD *)&_n_DCD_Summa,
 (StayFD *)&_n_DCD_Text,
 NULL
};
static BYTE ix_DCDText[] = {1,1,3,0,1,2};
StayDataset _n_DCDText = {NULL,TAG_DATASET,0,0,DS_QBASE,0,1,0,NULL,tcm_DCDText,NULL,
"WORK:DCDTEXT.DT",ix_DCDText,"База доплат по ДСДк","DCDText",16};
StayDataset *DCDText = &_n_DCDText;

static StayFD *tcm_Np134[] =
{
 (StayFD *)&_n_Np_Code,
 (StayFD *)&_n_Np_NomIgd,
 (StayFD *)&_n_Np_DateBeg,
 (StayFD *)&_n_Np_DateEnd,
 (StayFD *)&_n_Np_Razm,
 (StayFD *)&_n_Np_Proc,
 (StayFD *)&_n_Np_Kodbl,
 NULL
};
static BYTE ix_Np134[] = {1,1,3,0,1,2};
StayDataset _n_Np134 = {NULL,TAG_DATASET,0,0,DS_QBASE,0,1,0,NULL,tcm_Np134,NULL,
"WORK:NP134.DT",ix_Np134,"База старых надбавок","Np134",16};
StayDataset *Np134 = &_n_Np134;

static StayFD *tcm_Dp134[] =
{
 (StayFD *)&_n_Np_Code,
 (StayFD *)&_n_Np_NomIgd,
 (StayFD *)&_n_Np_DateBeg,
 (StayFD *)&_n_Np_DateEnd,
 (StayFD *)&_n_Np_Razm,
 (StayFD *)&_n_Np_Proc,
 (StayFD *)&_n_Np_Kodbl,
 NULL
};
static BYTE ix_Dp134[] = {1,1,3,0,1,2};
StayDataset _n_Dp134 = {NULL,TAG_DATASET,0,0,DS_QBASE,0,1,0,NULL,tcm_Dp134,NULL,
"WORK:DP134.DT",ix_Dp134,"База старых надбавок","Dp134",16};
StayDataset *Dp134 = &_n_Dp134;

static StayFD *tcm_NpCheD134[] =
{
 (StayFD *)&_n_NpChe_Code,
 (StayFD *)&_n_NpChe_NomIgd,
 (StayFD *)&_n_NpChe_DateBeg,
 (StayFD *)&_n_NpChe_DateEnd,
 (StayFD *)&_n_NpChe_Razm,
 (StayFD *)&_n_NpChe_Proc,
 (StayFD *)&_n_NpChe_Kodbl,
 NULL
};
static BYTE ix_NpCheD134[] = {1,1,3,0,1,2};
StayDataset _n_NpCheD134 = {NULL,TAG_DATASET,0,0,DS_QBASE,0,1,0,NULL,tcm_NpCheD134,NULL,
"WORK:NPCHED134.DT",ix_NpCheD134,"База старых надбавок-ЧАЕС ст67","NpCheD134",16};
StayDataset *NpCheD134 = &_n_NpCheD134;

static StayFD *tcm_NpSud134[] =
{
 (StayFD *)&_n_NpSud_Code,
 (StayFD *)&_n_NpSud_NomIgd,
 (StayFD *)&_n_NpSud_DateBeg,
 (StayFD *)&_n_NpSud_DateEnd,
 (StayFD *)&_n_NpSud_Razm,
 (StayFD *)&_n_NpSud_Proc,
 (StayFD *)&_n_NpSud_Kodbl,
 NULL
};
static BYTE ix_NpSud134[] = {1,1,3,0,1,2};
StayDataset _n_NpSud134 = {NULL,TAG_DATASET,0,0,DS_QBASE,0,1,0,NULL,tcm_NpSud134,NULL,
"WORK:NPSUD134.DT",ix_NpSud134,"База старых надбавок-ЧАЕС ст67","NpSud134",16};
StayDataset *NpSud134 = &_n_NpSud134;

static StayFD *tcm_PIgd[] =
{
 (StayFD *)&_n_PIgd_Nomig,
 (StayFD *)&_n_PIgd_DateBeg,
 (StayFD *)&_n_PIgd_DateEnd,
 NULL
};
static BYTE ix_PIgd[] = {1,1,1,0};
StayDataset _n_PIgd = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_PIgd,NULL,
"WORK:PIGD.DT",ix_PIgd,"База данных прав о иждивенцах","PIgd",0};
StayDataset *PIgd = &_n_PIgd;

static StayFD *tcm_Perp[] =
{
 (StayFD *)&_n_Perp_Zak,
 (StayFD *)&_n_Perp_NMDolja,
 (StayFD *)&_n_Perp_DateBeg,
 (StayFD *)&_n_Perp_DopBeg,
 (StayFD *)&_n_Perp_DateEnd,
 (StayFD *)&_n_Perp_Kfn,
 (StayFD *)&_n_Perp_Op,
 (StayFD *)&_n_Perp_RazmOtct,
 (StayFD *)&_n_Perp_RazmDosr,
 (StayFD *)&_n_Perp_RazmM136,
 (StayFD *)&_n_Perp_RazmM137,
 (StayFD *)&_n_Perp_RazmS291,
 (StayFD *)&_n_Perp_RazmS293,
 (StayFD *)&_n_Perp_RazmS297,
 (StayFD *)&_n_Perp_RazmS298,
 (StayFD *)&_n_Perp_RazmKoef,
 (StayFD *)&_n_Perp_Summa,
 (StayFD *)&_n_Perp_SummaZKf,
 (StayFD *)&_n_Perp_Sum100,
 (StayFD *)&_n_Perp_RazmGos,
 (StayFD *)&_n_Perp_RazmPMin,
 (StayFD *)&_n_Perp_RazmDKf,
 (StayFD *)&_n_Perp_RazmPNSt,
 (StayFD *)&_n_Perp_RazmDPLM,
 (StayFD *)&_n_Perp_RazGDPLM,
 (StayFD *)&_n_Perp_RazmDPLP,
 (StayFD *)&_n_Perp_RazGDPLM,
 (StayFD *)&_n_Perp_RazmO28,
 (StayFD *)&_n_Perp_RazGO28,
 (StayFD *)&_n_Perp_RazmOS,
 (StayFD *)&_n_Perp_RazmGS,
 (StayFD *)&_n_Perp_RazmDot,
 (StayFD *)&_n_Perp_RazmNP,
 (StayFD *)&_n_Perp_RazmGDot,
 (StayFD *)&_n_Perp_Razm709,
 (StayFD *)&_n_Perp_RazG709,
 (StayFD *)&_n_Perp_Razm800,
 (StayFD *)&_n_Perp_Razm801,
 (StayFD *)&_n_Perp_Razm802,
 (StayFD *)&_n_Perp_Razm810,
 (StayFD *)&_n_Perp_Razm812,
 (StayFD *)&_n_Perp_Razm808,
 (StayFD *)&_n_Perp_RazG808,
 (StayFD *)&_n_Perp_Razm809,
 (StayFD *)&_n_Perp_Razm849,
 (StayFD *)&_n_Perp_RazG849,
 (StayFD *)&_n_Perp_Razm850,
 (StayFD *)&_n_Perp_RazG850,
 (StayFD *)&_n_Perp_Razm851,
 (StayFD *)&_n_Perp_RazG851,
 (StayFD *)&_n_Perp_Razm852,
 (StayFD *)&_n_Perp_Razm853,
 (StayFD *)&_n_Perp_RazG853,
 (StayFD *)&_n_Perp_Razm814,
 (StayFD *)&_n_Perp_RazG814,
 (StayFD *)&_n_Perp_Razm815,
 (StayFD *)&_n_Perp_RazG815,
 (StayFD *)&_n_Perp_Razm854,
 (StayFD *)&_n_Perp_RazG854,
 (StayFD *)&_n_Perp_Razm854D,
 (StayFD *)&_n_Perp_RazG854D,
 (StayFD *)&_n_Perp_Razm855,
 (StayFD *)&_n_Perp_RazG855,
 (StayFD *)&_n_Perp_Razm856,
 (StayFD *)&_n_Perp_RazG856,
 (StayFD *)&_n_Perp_Razm857,
 (StayFD *)&_n_Perp_RazG857,
 (StayFD *)&_n_Perp_Razm858,
 (StayFD *)&_n_Perp_RazG858,
 (StayFD *)&_n_Perp_RazD858,
 (StayFD *)&_n_Perp_Razm826,
 (StayFD *)&_n_Perp_RazG826,
 (StayFD *)&_n_Perp_Razm827,
 (StayFD *)&_n_Perp_RazG827,
 (StayFD *)&_n_Perp_Razm828,
 (StayFD *)&_n_Perp_RazG828,
 (StayFD *)&_n_Perp_Razm830,
 (StayFD *)&_n_Perp_RazG830,
 (StayFD *)&_n_Perp_Razm890,
 (StayFD *)&_n_Perp_RazG890,
 (StayFD *)&_n_Perp_Razm908,
 (StayFD *)&_n_Perp_RazG908,
 (StayFD *)&_n_Perp_Razm991,
 (StayFD *)&_n_Perp_RazG991,
 (StayFD *)&_n_Perp_Razm992,
 (StayFD *)&_n_Perp_RazG992,
 (StayFD *)&_n_Perp_Razm993,
 (StayFD *)&_n_Perp_RazG993,
 (StayFD *)&_n_Perp_Razm994,
 (StayFD *)&_n_Perp_RazG994,
 (StayFD *)&_n_Perp_Razm995,
 (StayFD *)&_n_Perp_RazG995,
 (StayFD *)&_n_Perp_Razm996,
 (StayFD *)&_n_Perp_RazG996,
 (StayFD *)&_n_Perp_Razm997,
 (StayFD *)&_n_Perp_RazG997,
 (StayFD *)&_n_Perp_Razm816,
 (StayFD *)&_n_Perp_RazG816,
 (StayFD *)&_n_Perp_Razm817,
 (StayFD *)&_n_Perp_RazG817,
 (StayFD *)&_n_Perp_Razm818,
 (StayFD *)&_n_Perp_RazG818,
 (StayFD *)&_n_Perp_Razm819,
 (StayFD *)&_n_Perp_RazG819,
 (StayFD *)&_n_Perp_Razm820,
 (StayFD *)&_n_Perp_RazG820,
 (StayFD *)&_n_Perp_Razm821,
 (StayFD *)&_n_Perp_RazG821,
 (StayFD *)&_n_Perp_Razm822,
 (StayFD *)&_n_Perp_RazG822,
 (StayFD *)&_n_Perp_Razm823,
 (StayFD *)&_n_Perp_RazG823,
 (StayFD *)&_n_Perp_Razm824,
 (StayFD *)&_n_Perp_RazG824,
 (StayFD *)&_n_Perp_Razm825,
 (StayFD *)&_n_Perp_RazG825,
 (StayFD *)&_n_Perp_Razm829,
 (StayFD *)&_n_Perp_RazG829,
 (StayFD *)&_n_Perp_Sum3233,
 (StayFD *)&_n_Perp_3233PMin,
 (StayFD *)&_n_Perp_3233DKf,
 (StayFD *)&_n_Perp_3233PNSt,
 (StayFD *)&_n_Perp_ProcOIP,
 (StayFD *)&_n_Perp_NIgdOIP,
 (StayFD *)&_n_Perp_RazmOIP,
 (StayFD *)&_n_Perp_IgdVs,
 (StayFD *)&_n_Perp_IgdGs,
 (StayFD *)&_n_Perp_Shifr,
 (StayFD *)&_n_Perp_RazmMALOB,
 (StayFD *)&_n_Perp_RazmIND,
 (StayFD *)&_n_Perp_RazmIND5,
 (StayFD *)&_n_Perp_RazmSIND,
 (StayFD *)&_n_Perp_RazmGIND,
 (StayFD *)&_n_Perp_RazmPF,
 (StayFD *)&_n_Perp_RazmOsPF,
 (StayFD *)&_n_Perp_RazmKfPF,
 (StayFD *)&_n_Perp_ProcPF,
 (StayFD *)&_n_Perp_ShifrPF,
 (StayFD *)&_n_Perp_KfnPF,
 (StayFD *)&_n_Perp_Ra995PF,
 (StayFD *)&_n_Perp_RG995PF,
 (StayFD *)&_n_Perp_Pr,
 (StayFD *)&_n_Perp_VarRas,
 NULL
};
static BYTE ix_Perp[] = {1,1,68,0,1,2,3};
StayDataset _n_Perp = {NULL,TAG_DATASET,0,0,DS_QBASE,0,1,0,NULL,tcm_Perp,NULL,
"WORK:PERP.DT",ix_Perp,"База данных для записи в базу перерасчетов","Perp",16};
StayDataset *Perp = &_n_Perp;

static StayFD *tcm_Pers[] =
{
 (StayFD *)&_n_Pers_Kfn,
 (StayFD *)&_n_Pers_Dnpen,
 (StayFD *)&_n_Pers_Op,
 (StayFD *)&_n_Pers_Datin,
 (StayFD *)&_n_Pers_Rnaz,
 (StayFD *)&_n_Pers_Prper,
 (StayFD *)&_n_Pers_Psn,
 (StayFD *)&_n_Pers_NIz,
 (StayFD *)&_n_Pers_Kin,
 (StayFD *)&_n_Pers_DateIz,
 (StayFD *)&_n_Pers_CodeDoc,
 NULL
};
static BYTE ix_Pers[] = {1,1,4,0,1,2,3};
StayDataset _n_Pers = {NULL,TAG_DATASET,0,0,DS_QBASE,0,1,0,NULL,tcm_Pers,NULL,
"WORK:PERS.DT",ix_Pers,"База данных для записи в базу перерасчетов","Pers",16};
StayDataset *Pers = &_n_Pers;

static StayFD *tcm_Pravo[] =
{
 (StayFD *)&_n_Pravo_VPen,
 (StayFD *)&_n_Pravo_Zak,
 (StayFD *)&_n_Pravo_Nomig,
 (StayFD *)&_n_Pravo_Nr,
 (StayFD *)&_n_Pravo_DateBeg,
 (StayFD *)&_n_Pravo_Prof,
 (StayFD *)&_n_Pravo_DateVsr,
 (StayFD *)&_n_Pravo_NKor,
 (StayFD *)&_n_Pravo_Kfn,
 (StayFD *)&_n_Pravo_DateEnd,
 (StayFD *)&_n_Pravo_Che,
 (StayFD *)&_n_Pravo_Op,
 (StayFD *)&_n_Pravo_DateCHK,
 (StayFD *)&_n_Pravo_DateChe,
 (StayFD *)&_n_Pravo_DateZan,
 (StayFD *)&_n_Pravo_DateZGs,
 (StayFD *)&_n_Pravo_FullYes,
 (StayFD *)&_n_Pravo_FullY24,
 (StayFD *)&_n_Pravo_DateMax,
 (StayFD *)&_n_Pravo_MaxPens,
 (StayFD *)&_n_Pravo_DopPens,
 (StayFD *)&_n_Pravo_Zan,
 (StayFD *)&_n_Pravo_Koef,
 (StayFD *)&_n_Pens_Procent,
 (StayFD *)&_n_Pens_ProcKrat,
 (StayFD *)&_n_Pens_ProcNUKR,
 (StayFD *)&_n_Pens_Koef,
 (StayFD *)&_n_Pens_IKf,
 (StayFD *)&_n_Pens_RazmKoef,
 (StayFD *)&_n_Pens_RazmZKf,
 (StayFD *)&_n_Pens_RazmIgd1,
 (StayFD *)&_n_Pens_RazmIgdM,
 (StayFD *)&_n_Pens_NNNP,
 (StayFD *)&_n_Pens_RazmNP,
 (StayFD *)&_n_Pens_RazmOgr,
 (StayFD *)&_n_Pens_RazmOS,
 (StayFD *)&_n_Pens_RazmGS,
 (StayFD *)&_n_Pens_RazmOVsr,
 (StayFD *)&_n_Pens_RazmOgrNS,
 (StayFD *)&_n_Pens_RazmOgrS,
 (StayFD *)&_n_Pens_RazmO28,
 (StayFD *)&_n_Pens_RazGO28,
 (StayFD *)&_n_Pens_RazmO28NS,
 (StayFD *)&_n_Pens_RazmO28S,
 (StayFD *)&_n_Pens_Sum3233,
 (StayFD *)&_n_Pens_ProcDay,
 (StayFD *)&_n_Pens_ProcMes,
 (StayFD *)&_n_Pens_Proc0128,
 (StayFD *)&_n_Pens_Proc100,
 (StayFD *)&_n_Pens_ProcOIP,
 (StayFD *)&_n_Pens_NIgdOIP,
 (StayFD *)&_n_Pens_RazmOIP,
 (StayFD *)&_n_Pens_RazmOIPNS,
 (StayFD *)&_n_Pens_RazmOIPS,
 (StayFD *)&_n_Pens_RazmOsn,
 (StayFD *)&_n_Pens_RazmPMin,
 (StayFD *)&_n_Pens_RazmPNSt,
 (StayFD *)&_n_Pens_RazmDPLM,
 (StayFD *)&_n_Pens_RazGDPLM,
 (StayFD *)&_n_Pens_RazmDPLP,
 (StayFD *)&_n_Pens_RazGDPLM,
 (StayFD *)&_n_Pens_RazmDKf,
 (StayFD *)&_n_Pens_RazmDKfI,
 (StayFD *)&_n_Pens_RazmVipl,
 (StayFD *)&_n_Pens_RazmGos,
 (StayFD *)&_n_Pens_RazmDot,
 (StayFD *)&_n_Pens_RazmGDot,
 (StayFD *)&_n_Pens_RazG908,
 (StayFD *)&_n_Pens_Razm908,
 (StayFD *)&_n_Pens_Razm992,
 (StayFD *)&_n_Pens_Razm992I,
 (StayFD *)&_n_Pens_RazG992,
 (StayFD *)&_n_Pens_Razm993,
 (StayFD *)&_n_Pens_Razm993I,
 (StayFD *)&_n_Pens_RazG993,
 (StayFD *)&_n_Pens_Razm996,
 (StayFD *)&_n_Pens_Razm996I,
 (StayFD *)&_n_Pens_RazG996,
 (StayFD *)&_n_Pens_Razm997,
 (StayFD *)&_n_Pens_Razm997I,
 (StayFD *)&_n_Pens_RazG997,
 (StayFD *)&_n_Pens_RazG808,
 (StayFD *)&_n_Pens_Razm808,
 (StayFD *)&_n_Pens_SirG908,
 (StayFD *)&_n_Pens_Razm850,
 (StayFD *)&_n_Pens_Razm851,
 (StayFD *)&_n_Pens_RazG851,
 (StayFD *)&_n_Pens_Razm853,
 (StayFD *)&_n_Pens_RazG853,
 (StayFD *)&_n_Pens_Razm814,
 (StayFD *)&_n_Pens_RazG814,
 (StayFD *)&_n_Pens_Razm815,
 (StayFD *)&_n_Pens_RazG815,
 (StayFD *)&_n_Pens_Razm816,
 (StayFD *)&_n_Pens_RazG816,
 (StayFD *)&_n_Pens_Razm822,
 (StayFD *)&_n_Pens_RazG822,
 (StayFD *)&_n_Pens_Razm823,
 (StayFD *)&_n_Pens_RazG823,
 (StayFD *)&_n_Pens_Razm854,
 (StayFD *)&_n_Pens_RazG854,
 (StayFD *)&_n_Pens_Razm854D,
 (StayFD *)&_n_Pens_RazG854D,
 (StayFD *)&_n_Pens_Razm709,
 (StayFD *)&_n_Pens_Sir908,
 (StayFD *)&_n_Pens_Razm991,
 (StayFD *)&_n_Pens_RazG991,
 (StayFD *)&_n_Pens_RazmS297,
 (StayFD *)&_n_Pens_RazmS298,
 (StayFD *)&_n_Pens_KoefGs,
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
 (StayFD *)&_n_Per,
 (StayFD *)&_n_Aktuar,
 NULL
};
static BYTE ix_Pravo[] = {2,1,7,0,1,2,3,4,5,6,2,67,2,3,4};
StayDataset _n_Pravo = {NULL,TAG_DATASET,0,0,DS_QBASE,0,1,0,NULL,tcm_Pravo,NULL,
"WORK:PRAVO.DT",ix_Pravo,"Правовые реквизиты по видам пенсий","Pravo",16};
StayDataset *Pravo = &_n_Pravo;

static StayFD *tcm_Aktuar[] =
{
 (StayFD *)&_n_Ak_CodeStr,
 (StayFD *)&_n_Ak_CodeStr1,
 (StayFD *)&_n_Ak_Pokaz1,
 (StayFD *)&_n_Ak_Pokaz2,
 (StayFD *)&_n_Ak_Pokaz3,
 (StayFD *)&_n_Ak_Pokaz4,
 (StayFD *)&_n_Ak_Pokaz5,
 (StayFD *)&_n_Ak_Pokaz6,
 (StayFD *)&_n_Ak_Pokaz7,
 (StayFD *)&_n_Ak_Pokaz8,
 (StayFD *)&_n_Ak_Pokaz9,
 (StayFD *)&_n_Ak_Pokaz10,
 (StayFD *)&_n_Ak_Pokaz11,
 (StayFD *)&_n_Ak_Pokaz12,
 (StayFD *)&_n_Ak_Pokaz13,
 (StayFD *)&_n_Ak_Pokaz14,
 (StayFD *)&_n_Ak_Pokaz15,
 (StayFD *)&_n_Ak_Pokaz16,
 (StayFD *)&_n_Ak_Pokaz17,
 (StayFD *)&_n_Ak_Pokaz18,
 (StayFD *)&_n_Ak_Pokaz19,
 (StayFD *)&_n_Ak_Pokaz20,
 (StayFD *)&_n_Ak_Pokaz21,
 (StayFD *)&_n_Ak_Pokaz22,
 (StayFD *)&_n_Ak_Pokaz23,
 (StayFD *)&_n_Ak_Pokaz24,
 (StayFD *)&_n_Ak_Pokaz25,
 (StayFD *)&_n_Ak_Pokaz26,
 (StayFD *)&_n_Ak_Pokaz27,
 (StayFD *)&_n_Ak_Pokaz28,
 (StayFD *)&_n_Ak_Pokaz29,
 (StayFD *)&_n_Ak_Pokaz30,
 NULL
};
static BYTE ix_Aktuar[] = {1,1,2,0,1};
StayDataset _n_Aktuar = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_Aktuar,NULL,
NULL,ix_Aktuar,NULL,"Aktuar",0};
StayDataset *Aktuar = &_n_Aktuar;

static StayFD *tcm_Per[] =
{
 (StayFD *)&_n_Per_DateBeg,
 (StayFD *)&_n_Per_DopBeg,
 (StayFD *)&_n_Per_DateEnd,
 (StayFD *)&_n_Per_Procent,
 (StayFD *)&_n_Per_ProcKrat,
 (StayFD *)&_n_Per_RazmOsn,
 (StayFD *)&_n_Per_RazmPMin,
 (StayFD *)&_n_Per_RazmPNSt,
 (StayFD *)&_n_Per_RazmDPLM,
 (StayFD *)&_n_Per_RazGDPLM,
 (StayFD *)&_n_Per_RazmDPLP,
 (StayFD *)&_n_Per_RazGDPLP,
 (StayFD *)&_n_Per_RazmDKf,
 (StayFD *)&_n_Per_RazmDKfI,
 (StayFD *)&_n_Per_RazmIgd1,
 (StayFD *)&_n_Per_RazmIgdM,
 (StayFD *)&_n_Per_RazmOgr,
 (StayFD *)&_n_Per_RazmOS,
 (StayFD *)&_n_Per_RazmGS,
 (StayFD *)&_n_Per_RazmOVsr,
 (StayFD *)&_n_Per_RazmOgr2,
 (StayFD *)&_n_Per_RazmOgrNS,
 (StayFD *)&_n_Per_RazmOgrS,
 (StayFD *)&_n_Per_RazmO28,
 (StayFD *)&_n_Per_RazGO28,
 (StayFD *)&_n_Per_RazmO282,
 (StayFD *)&_n_Per_RazmO28NS,
 (StayFD *)&_n_Per_RazmO28S,
 (StayFD *)&_n_Per_RazmNP,
 (StayFD *)&_n_Per_Sum3233,
 (StayFD *)&_n_Per_ProcOIP,
 (StayFD *)&_n_Per_NIgdOIP,
 (StayFD *)&_n_Per_RazmOIP,
 (StayFD *)&_n_Per_RazmOIPNS,
 (StayFD *)&_n_Per_RazmOIPS,
 (StayFD *)&_n_Per_RazmOtct,
 (StayFD *)&_n_Per_RazmDosr,
 (StayFD *)&_n_Per_RazmM136,
 (StayFD *)&_n_Per_RazmM137,
 (StayFD *)&_n_Per_RazmS291,
 (StayFD *)&_n_Per_RazmS293,
 (StayFD *)&_n_Per_RazmKoef,
 (StayFD *)&_n_Per_RazmZKf,
 (StayFD *)&_n_Per_RazmVipl,
 (StayFD *)&_n_Per_RazmGos,
 (StayFD *)&_n_Per_RazmDot,
 (StayFD *)&_n_Per_RazmGDot,
 (StayFD *)&_n_Per_Razm908,
 (StayFD *)&_n_Per_RazG908,
 (StayFD *)&_n_Per_Razm808,
 (StayFD *)&_n_Per_RazG808,
 (StayFD *)&_n_Per_Sir908,
 (StayFD *)&_n_Per_SirG908,
 (StayFD *)&_n_Per_Razm991,
 (StayFD *)&_n_Per_RazG991,
 (StayFD *)&_n_Per_Razm992,
 (StayFD *)&_n_Per_Razm992I,
 (StayFD *)&_n_Per_RazG992,
 (StayFD *)&_n_Per_Razm993,
 (StayFD *)&_n_Per_Razm993I,
 (StayFD *)&_n_Per_RazG993,
 (StayFD *)&_n_Per_Razm996,
 (StayFD *)&_n_Per_Razm996I,
 (StayFD *)&_n_Per_RazG996,
 (StayFD *)&_n_Per_Razm997,
 (StayFD *)&_n_Per_Razm997I,
 (StayFD *)&_n_Per_RazG997,
 (StayFD *)&_n_Per_Razm851,
 (StayFD *)&_n_Per_RazG851,
 (StayFD *)&_n_Per_Razm853,
 (StayFD *)&_n_Per_RazG853,
 (StayFD *)&_n_Per_Razm814,
 (StayFD *)&_n_Per_RazG814,
 (StayFD *)&_n_Per_Razm815,
 (StayFD *)&_n_Per_RazG815,
 (StayFD *)&_n_Per_Razm816,
 (StayFD *)&_n_Per_RazG816,
 (StayFD *)&_n_Per_Razm822,
 (StayFD *)&_n_Per_RazG822,
 (StayFD *)&_n_Per_Razm823,
 (StayFD *)&_n_Per_RazG823,
 (StayFD *)&_n_Per_Razm829,
 (StayFD *)&_n_Per_RazG829,
 (StayFD *)&_n_Per_Razm854,
 (StayFD *)&_n_Per_RazG854,
 (StayFD *)&_n_Per_Razm854D,
 (StayFD *)&_n_Per_RazG854D,
 (StayFD *)&_n_Per_RazmS297,
 (StayFD *)&_n_Per_RazmS298,
 (StayFD *)&_n_Per_IgdVs,
 (StayFD *)&_n_Per_IgdGs,
 (StayFD *)&_n_Per_KoefGs,
 (StayFD *)&_n_Per_PlanSt,
 (StayFD *)&_n_Per_FaktSt,
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
 (StayFD *)&_n_Per_NNNP,
 (StayFD *)&_n_NpCheD,
 (StayFD *)&_n_NpOsn,
 (StayFD *)&_n_NpSud,
 (StayFD *)&_n_Np,
 (StayFD *)&_n_Dp,
 NULL
};
static BYTE ix_Per[] = {1,1,2,0,1};
StayDataset _n_Per = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_Per,NULL,
NULL,ix_Per,NULL,"Per",0};
StayDataset *Per = &_n_Per;

static StayFD *tcm_NpCheD[] =
{
 (StayFD *)&_n_NpChe_Code,
 (StayFD *)&_n_NpChe_NomIgd,
 (StayFD *)&_n_NpChe_DateBeg,
 (StayFD *)&_n_NpChe_DateEnd,
 (StayFD *)&_n_NpChe_Razm,
 (StayFD *)&_n_NpChe_Proc,
 (StayFD *)&_n_NpChe_Kodbl,
 NULL
};
static BYTE ix_NpCheD[] = {1,1,2,0,1};
StayDataset _n_NpCheD = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_NpCheD,NULL,
NULL,ix_NpCheD,NULL,"NpCheD",0};
StayDataset *NpCheD = &_n_NpCheD;

static StayFD *tcm_NpOsn[] =
{
 (StayFD *)&_n_NpOsn_Code,
 (StayFD *)&_n_NpOsn_NomIgd,
 (StayFD *)&_n_NpOsn_DateBeg,
 (StayFD *)&_n_NpOsn_DateEnd,
 (StayFD *)&_n_NpOsn_Razm,
 (StayFD *)&_n_NpOsn_Proc,
 (StayFD *)&_n_NpOsn_Kodbl,
 NULL
};
static BYTE ix_NpOsn[] = {1,1,2,0,1};
StayDataset _n_NpOsn = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_NpOsn,NULL,
NULL,ix_NpOsn,NULL,"NpOsn",0};
StayDataset *NpOsn = &_n_NpOsn;

static StayFD *tcm_NpSud[] =
{
 (StayFD *)&_n_NpSud_Code,
 (StayFD *)&_n_NpSud_NomIgd,
 (StayFD *)&_n_NpSud_DateBeg,
 (StayFD *)&_n_NpSud_DateEnd,
 (StayFD *)&_n_NpSud_Razm,
 (StayFD *)&_n_NpSud_Proc,
 (StayFD *)&_n_NpSud_Kodbl,
 NULL
};
static BYTE ix_NpSud[] = {1,1,2,0,1};
StayDataset _n_NpSud = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_NpSud,NULL,
NULL,ix_NpSud,NULL,"NpSud",0};
StayDataset *NpSud = &_n_NpSud;

static StayFD *tcm_Np[] =
{
 (StayFD *)&_n_Np_Code,
 (StayFD *)&_n_Np_NomIgd,
 (StayFD *)&_n_Np_DateBeg,
 (StayFD *)&_n_Np_DateEnd,
 (StayFD *)&_n_Np_Razm,
 (StayFD *)&_n_Np_Proc,
 (StayFD *)&_n_Np_Kodbl,
 NULL
};
static BYTE ix_Np[] = {1,1,2,0,1};
StayDataset _n_Np = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_Np,NULL,
NULL,ix_Np,NULL,"Np",0};
StayDataset *Np = &_n_Np;

static StayFD *tcm_Dp[] =
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
static BYTE ix_Dp[] = {1,1,2,0,1};
StayDataset _n_Dp = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_Dp,NULL,
NULL,ix_Dp,NULL,"Dp",0};
StayDataset *Dp = &_n_Dp;

static StayFD *tcm_PravoD[] =
{
 (StayFD *)&_n_Pravo_VPen,
 (StayFD *)&_n_Pravo_Nomig,
 (StayFD *)&_n_Pravo_Nr,
 (StayFD *)&_n_Pravo_DateBeg,
 (StayFD *)&_n_Pravo_Prof,
 (StayFD *)&_n_Pravo_DateEnd,
 (StayFD *)&_n_Pravo_FullYes,
 (StayFD *)&_n_Pravo_FullY24,
 (StayFD *)&_n_Pravo_DateMax,
 (StayFD *)&_n_Pravo_MaxPens,
 (StayFD *)&_n_Pravo_DopPens,
 (StayFD *)&_n_Pravo_Zan,
 (StayFD *)&_n_Pravo_Koef,
 (StayFD *)&_n_Pens_Procent,
 (StayFD *)&_n_Pens_ProcKrat,
 (StayFD *)&_n_Pens_ProcNUKR,
 (StayFD *)&_n_Pens_Koef,
 (StayFD *)&_n_Pens_IKf,
 (StayFD *)&_n_Pens_RazmIgd1,
 (StayFD *)&_n_Pens_RazmIgdM,
 (StayFD *)&_n_Pens_RazmKoef,
 (StayFD *)&_n_Pens_RazmNP,
 (StayFD *)&_n_Pens_RazmOgr,
 (StayFD *)&_n_Pens_RazmOS,
 (StayFD *)&_n_Pens_RazmGS,
 (StayFD *)&_n_Pens_RazmOgrNS,
 (StayFD *)&_n_Pens_RazmOsn,
 (StayFD *)&_n_Pens_RazmVipl,
 (StayFD *)&_n_Pens_RazmGos,
 (StayFD *)&_n_Pens_RazmDot,
 (StayFD *)&_n_Pens_RazmGDot,
 (StayFD *)&_n_Pens_RazG908,
 (StayFD *)&_n_Pens_Razm908,
 (StayFD *)&_n_Pens_Razm992,
 (StayFD *)&_n_Pens_Razm992I,
 (StayFD *)&_n_Pens_Razm992,
 (StayFD *)&_n_Pens_Razm993,
 (StayFD *)&_n_Pens_Razm993I,
 (StayFD *)&_n_Pens_Razm993,
 (StayFD *)&_n_Pens_Razm996,
 (StayFD *)&_n_Pens_Razm996I,
 (StayFD *)&_n_Pens_Razm996,
 (StayFD *)&_n_Pens_Razm997,
 (StayFD *)&_n_Pens_Razm997I,
 (StayFD *)&_n_Pens_Razm997,
 (StayFD *)&_n_Pens_RazG808,
 (StayFD *)&_n_Pens_Razm808,
 (StayFD *)&_n_Pens_SirG908,
 (StayFD *)&_n_Pens_Razm850,
 (StayFD *)&_n_Pens_Razm851,
 (StayFD *)&_n_Pens_RazG851,
 (StayFD *)&_n_Pens_Razm853,
 (StayFD *)&_n_Pens_RazG853,
 (StayFD *)&_n_Pens_Razm814,
 (StayFD *)&_n_Pens_RazG814,
 (StayFD *)&_n_Pens_Razm815,
 (StayFD *)&_n_Pens_RazG815,
 (StayFD *)&_n_Pens_Razm816,
 (StayFD *)&_n_Pens_RazG816,
 (StayFD *)&_n_Pens_Razm822,
 (StayFD *)&_n_Pens_RazG822,
 (StayFD *)&_n_Pens_Razm823,
 (StayFD *)&_n_Pens_RazG823,
 (StayFD *)&_n_Pens_Razm854,
 (StayFD *)&_n_Pens_RazG854,
 (StayFD *)&_n_Pens_Razm854D,
 (StayFD *)&_n_Pens_RazG854D,
 (StayFD *)&_n_Pens_Razm709,
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
 (StayFD *)&_n_Pravo_NMDolja,
 NULL
};
static BYTE ix_PravoD[] = {1,1,5,0,1,2,3,4};
StayDataset _n_PravoD = {NULL,TAG_DATASET,0,0,DS_QBASE,0,1,0,NULL,tcm_PravoD,NULL,
"WORK:PRAVOD.DT",ix_PravoD,"Рабочая база по праву","PravoD",16};
StayDataset *PravoD = &_n_PravoD;

/* End FCdataset */
/* Begin FCmenu */
/* End FCmenu */
/* Begin FCframe */
/* End FCframe */
/* Begin FCtabl */
void *NAZ_PEL[] =
 {NULL,
  &_nn_NAZ_PEL,
  &_n_CheZP_Code,
  &_n_CheZP_DateBeg,
  &_n_CheZP_DateEnd,
  &_n_CheZP_Nomig,
  &_n_CheZP_Time,
  &_n_CheZPS_Code,
  &_n_CheZPS_DateBeg,
  &_n_CheZPS_DateEnd,
  &_n_CheZPS_Nomig,
  &_n_CheZPS_Sum,
  &_n_Che_AgeDop,
  &_n_Che_AgeDown,
  &_n_Che_Date86,
  &_n_Che_DateOts,
  &_n_Che_Kateg,
  &_n_Che_Mask,
  &_n_Che_Proc,
  &_n_Che_Produ,
  &_n_Che_TrudLost,
  &_n_Che_Type,
  &_n_Che_TypeKl,
  &_n_Che_TypeName,
  &_n_Che_ZonePr,
  &_n_Che_ZonePrName,
  &_n_Che_ZoneRb,
  &_n_Che_ZoneRbName,
  &_n_Che_PrNpDodP,
  &_n_Che_PrNpProj,
  &_n_Che_PrNpKomp,
  &_n_Igds_Drog,
  &_n_Igds_Dso,
  &_n_Igds_Dusn,
  &_n_Igds_Katnetr,
  &_n_Igds_Katrod,
  &_n_Igds_Nomig,
  &_n_Igds_Pol,
  &_n_Igds_Prab,
  &_n_Igds_Prdel,
  &_n_Igds_Psn,
  &_n_Igds_Sir,
  &_n_Igds_Dolj_NumP,
  &_n_Ind_DateBeg,
  &_n_Ind_FG708,
  &_n_Ind_FP708,
  &_n_Ind_GIND,
  &_n_Ind_Koef,
  &_n_Ind_NMDolja,
  &_n_Ind_Nomig,
  &_n_Ind_P100,
  &_n_Ind_PG708,
  &_n_Ind_PI100,
  &_n_Ind_PIND,
  &_n_Ind_PP708,
  &_n_Inv_DateBeg,
  &_n_Inv_DateEnd,
  &_n_Inv_DateEnd1,
  &_n_Inv_DateEndR,
  &_n_Inv_DateKon,
  &_n_Inv_DateNast,
  &_n_Inv_Group,
  &_n_Inv_MaskOsb,
  &_n_Inv_GroupName,
  &_n_Inv_Prich,
  &_n_Inv_PrichName,
  &_n_Np181_DateBeg,
  &_n_Np181_DateEnd,
  &_n_Np181_Kodbl,
  &_n_Np181_Nomig,
  &_n_Np181_Snadp,
  &_n_NpOsn_Code,
  &_n_NpOsn_DateBeg,
  &_n_NpOsn_DateEnd,
  &_n_NpOsn_Kodbl,
  &_n_NpOsn_NomIgd,
  &_n_NpOsn_Proc,
  &_n_NpOsn_Razm,
  &_n_NpOsn_Razm992,
  &_n_NpSud_Code,
  &_n_NpSud_DateBeg,
  &_n_NpSud_DateEnd,
  &_n_NpSud_Kodbl,
  &_n_NpSud_NomIgd,
  &_n_NpSud_Proc,
  &_n_NpSud_Razm,
  &_n_NpChe_Code,
  &_n_NpChe_DateBeg,
  &_n_NpChe_DateEnd,
  &_n_NpChe_Kodbl,
  &_n_NpChe_NomIgd,
  &_n_NpChe_Proc,
  &_n_NpChe_Razm,
  &_n_Np_Code,
  &_n_Np_DateBeg,
  &_n_Np_DateEnd,
  &_n_Np_Kodbl,
  &_n_Np_NomIgd,
  &_n_Np_Proc,
  &_n_Np_Razm,
  &_n_Dp_Code,
  &_n_Dp_DateBeg,
  &_n_Dp_DateEnd,
  &_n_Dp_Kodbl,
  &_n_Dp_NomIgd,
  &_n_Dp_Proc,
  &_n_Dp_Razm,
  &_n_Dp_Razm850,
  &_n_Dp_Razm851,
  &_n_Dp_Razm709,
  &_n_Npr_Code,
  &_n_Npr_DateBeg,
  &_n_Npr_DateEnd,
  &_n_Npr_Nomig,
  &_n_Npr_Proc,
  &_n_Osob_DateEndR,
  &_n_Osob_DateKon,
  &_n_PIgd_DateBeg,
  &_n_PIgd_DateEnd,
  &_n_PIgd_Nomig,
  &_n_Pens_FaktSt,
  &_n_Pens_IKf,
  &_n_Pens_Koef,
  &_n_Pens_PlanSt,
  &_n_Pens_ProcVar,
  &_n_Pens_Procent,
  &_n_Pens_ProcKrat,
  &_n_Pens_ProcNUKR,
  &_n_Pens_ProcDay,
  &_n_Pens_ProcMes,
  &_n_Pens_Proc0128,
  &_n_Pens_Proc27,
  &_n_Pens_Proc100,
  &_n_Pens_Proc120,
  &_n_Pens_Proc135,
  &_n_Pens_ProcPNST,
  &_n_Pens_Rab708,
  &_n_Pens_RazG808,
  &_n_Pens_RazG908,
  &_n_Pens_Razm991,
  &_n_Pens_RazG991,
  &_n_Pens_Razm992,
  &_n_Pens_Razm992I,
  &_n_Pens_RazG992,
  &_n_Pens_Razm993,
  &_n_Pens_Razm993I,
  &_n_Pens_RazG993,
  &_n_Pens_Razm996,
  &_n_Pens_Razm996I,
  &_n_Pens_RazG996,
  &_n_Pens_Razm997,
  &_n_Pens_Razm997I,
  &_n_Pens_RazG997,
  &_n_Pens_Razm1MN,
  &_n_Pens_Razm1ZR,
  &_n_Pens_Razm808,
  &_n_Pens_Razm908,
  &_n_Pens_RazmDot,
  &_n_Perp_Razm709,
  &_n_Perp_RazG709,
  &_n_Perp_Razm850,
  &_n_Perp_RazG850,
  &_n_Perp_Razm851,
  &_n_Perp_RazG851,
  &_n_Perp_Razm852,
  &_n_Perp_Razm991,
  &_n_Perp_RazG991,
  &_n_Perp_Razm992,
  &_n_Perp_RazG992,
  &_n_Perp_Razm993,
  &_n_Perp_RazG993,
  &_n_Perp_Razm994,
  &_n_Perp_RazG994,
  &_n_Perp_Razm995,
  &_n_Perp_RazG995,
  &_n_Perp_Ra995PF,
  &_n_Perp_RG995PF,
  &_n_Perp_Razm996,
  &_n_Perp_RazG996,
  &_n_Perp_Razm997,
  &_n_Perp_RazG997,
  &_n_Perp_Razm816,
  &_n_Perp_RazG816,
  &_n_Perp_Razm817,
  &_n_Perp_RazG817,
  &_n_Perp_Razm818,
  &_n_Perp_RazG818,
  &_n_Perp_Razm819,
  &_n_Perp_RazG819,
  &_n_Perp_Razm820,
  &_n_Perp_RazG820,
  &_n_Perp_Razm821,
  &_n_Perp_RazG821,
  &_n_Perp_Razm822,
  &_n_Perp_RazG822,
  &_n_Perp_Razm823,
  &_n_Perp_RazG823,
  &_n_Perp_Razm824,
  &_n_Perp_RazG824,
  &_n_Perp_Razm825,
  &_n_Perp_RazG825,
  &_n_Perp_Razm829,
  &_n_Perp_RazG829,
  &_n_Perp_Razm853,
  &_n_Perp_RazG853,
  &_n_Perp_Razm854,
  &_n_Perp_RazG854,
  &_n_Perp_Razm854D,
  &_n_Perp_RazG854D,
  &_n_Perp_Razm855,
  &_n_Perp_RazG855,
  &_n_Perp_Razm856,
  &_n_Perp_RazG856,
  &_n_Perp_Razm857,
  &_n_Perp_RazG857,
  &_n_Perp_Razm858,
  &_n_Perp_RazG858,
  &_n_Perp_RazD858,
  &_n_Perp_Razm826,
  &_n_Perp_RazG826,
  &_n_Perp_Razm827,
  &_n_Perp_RazG827,
  &_n_Perp_Razm830,
  &_n_Perp_RazG830,
  &_n_Perp_Razm828,
  &_n_Perp_RazG828,
  &_n_Perp_Razm890,
  &_n_Perp_RazG890,
  &_n_Perp_Razm814,
  &_n_Perp_RazG814,
  &_n_Perp_Razm815,
  &_n_Perp_RazG815,
  &_n_Pens_RazmGDot,
  &_n_Pens_RazmGIND,
  &_n_Pens_RazmGos,
  &_n_Pens_RazmIND,
  &_n_Pens_RazmOtct,
  &_n_Pens_RazmDosr,
  &_n_Pens_RazmM136,
  &_n_Pens_RazmM137,
  &_n_Pens_RazmS291,
  &_n_Pens_RazmS293,
  &_n_Pens_RazmS297,
  &_n_Pens_RazmS298,
  &_n_Pens_RazmKoef,
  &_n_Pens_RazmZKf,
  &_n_Pens_RazmIgd1,
  &_n_Pens_RazmIgdM,
  &_n_Pens_RazmKoef4,
  &_n_Pens_RazmKoef6,
  &_n_Pens_RazmMALOB,
  &_n_Pens_RazmNP,
  &_n_Pens_RazmNPU,
  &_n_Pens_RazmOgr,
  &_n_Pens_RazmOS,
  &_n_Pens_RazmGS,
  &_n_Pens_RazmOVsr,
  &_n_Pens_Sum3233,
  &_n_Pens_NNNP,
  &_n_Pens_ProcOIP,
  &_n_Pens_NIgdOIP,
  &_n_Pens_RazmOIP,
  &_n_Pens_RazmOIP2,
  &_n_Pens_RazmOIPNS,
  &_n_Pens_RazmOIPS,
  &_n_Pens_RabOgr2,
  &_n_Pens_RabGor2,
  &_n_Pens_RabO0128,
  &_n_Pens_ROsn0128,
  &_n_Pens_RazmOgr2,
  &_n_Pens_RabO282,
  &_n_Pens_RabDKfI,
  &_n_Pens_RazmOgrNS,
  &_n_Pens_RazmOgNS2,
  &_n_Pens_RazmOgrS,
  &_n_Pens_RazmO28,
  &_n_Pens_RazGO28,
  &_n_Pens_RazmO282,
  &_n_Pens_RazmO28NS,
  &_n_Pens_RazmO8NS2,
  &_n_Pens_RazmO28S,
  &_n_Pens_RazmOsn,
  &_n_Pens_RazmPMin,
  &_n_Pens_RazmPNSt,
  &_n_Pens_RazmDPLM,
  &_n_Pens_RazGDPLM,
  &_n_Pens_RazmDPLP,
  &_n_Pens_RazGDPLP,
  &_n_Pens_RazmDKf,
  &_n_Pens_RazmDKfI,
  &_n_Pens_RazmProc,
  &_n_Pens_RazmProcR,
  &_n_Pens_RazmSIND,
  &_n_Pens_RazmVar,
  &_n_Pens_RazmVar5,
  &_n_Pens_RazmVarP,
  &_n_Pens_RazmVipl,
  &_n_Pens_RazmVipl5,
  &_n_Pens_Sir908,
  &_n_Pens_SirG908,
  &_n_Pens_Razm850,
  &_n_Pens_Razm851,
  &_n_Pens_RazG851,
  &_n_Pens_Razm853,
  &_n_Pens_RazG853,
  &_n_Pens_Razm814,
  &_n_Pens_RazG814,
  &_n_Pens_Razm815,
  &_n_Pens_RazG815,
  &_n_Pens_Razm816,
  &_n_Pens_RazG816,
  &_n_Pens_Razm822,
  &_n_Pens_RazG822,
  &_n_Pens_Razm823,
  &_n_Pens_RazG823,
  &_n_Pens_Razm854,
  &_n_Pens_RazG854,
  &_n_Pens_Razm854D,
  &_n_Pens_RazG854D,
  &_n_Pens_Razm709,
  &_n_Pens_KoefGs,
  &_n_Pens_VarRas,
  &_n_Per_DateBeg,
  &_n_Per_DateEnd,
  &_n_Per_DopBeg,
  &_n_Per_IgdGs,
  &_n_Per_KoefGs,
  &_n_Per_IgdVs,
  &_n_Per_NMDolja,
  &_n_Per_NNNP,
  &_n_Per_PShifr,
  &_n_Per_Procent,
  &_n_Per_ProcKrat,
  &_n_Per_PlanSt,
  &_n_Per_FaktSt,
  &_n_Per_RazG808,
  &_n_Per_RazG908,
  &_n_Per_Razm808,
  &_n_Per_Razm908,
  &_n_Per_Razm991,
  &_n_Per_RazG991,
  &_n_Per_Razm992,
  &_n_Per_Razm992I,
  &_n_Per_RazG992,
  &_n_Per_Razm993,
  &_n_Per_Razm993I,
  &_n_Per_RazG993,
  &_n_Per_Razm996,
  &_n_Per_Razm996I,
  &_n_Per_RazG996,
  &_n_Per_Razm997,
  &_n_Per_Razm997I,
  &_n_Per_RazG997,
  &_n_Per_Razm851,
  &_n_Per_RazG851,
  &_n_Per_Razm853,
  &_n_Per_RazG853,
  &_n_Per_Razm814,
  &_n_Per_RazG814,
  &_n_Per_Razm815,
  &_n_Per_RazG815,
  &_n_Per_Razm816,
  &_n_Per_RazG816,
  &_n_Per_Razm822,
  &_n_Per_RazG822,
  &_n_Per_Razm823,
  &_n_Per_RazG823,
  &_n_Per_Razm829,
  &_n_Per_RazG829,
  &_n_Per_Razm854,
  &_n_Per_RazG854,
  &_n_Per_Razm854D,
  &_n_Per_RazG854D,
  &_n_Per_RazmDot,
  &_n_Per_RazmGDot,
  &_n_Per_RazmGIND,
  &_n_Per_RazmGos,
  &_n_Per_RazmNP,
  &_n_Per_RazmIND,
  &_n_Per_RazmOtct,
  &_n_Per_RazmDosr,
  &_n_Per_RazmM136,
  &_n_Per_RazmM137,
  &_n_Per_RazmS291,
  &_n_Per_RazmS293,
  &_n_Per_RazmS297,
  &_n_Per_RazmS298,
  &_n_Per_RazmKoef,
  &_n_Per_RazmZKf,
  &_n_Per_RazmIgd1,
  &_n_Per_RazmIgdM,
  &_n_Per_RazmMALOB,
  &_n_Per_RazmOgr,
  &_n_Per_RazmOS,
  &_n_Per_RazmGS,
  &_n_Per_RazmOVsr,
  &_n_Per_RazmOgr2,
  &_n_Per_RazmOgrNS,
  &_n_Per_RazmOgrS,
  &_n_Per_RazmO28,
  &_n_Per_RazGO28,
  &_n_Per_RazmO282,
  &_n_Per_RazmO28NS,
  &_n_Per_RazmO28S,
  &_n_Per_ProcOIP,
  &_n_Per_NIgdOIP,
  &_n_Per_RazmOIP,
  &_n_Per_RazmOIP2,
  &_n_Per_RazmOIPNS,
  &_n_Per_RazmOIPS,
  &_n_Per_Sum3233,
  &_n_Per_RazmOsn,
  &_n_Per_RazmPMin,
  &_n_Per_RazmPNSt,
  &_n_Per_RazmDPLM,
  &_n_Per_RazGDPLM,
  &_n_Per_RazmDPLP,
  &_n_Per_RazGDPLP,
  &_n_Per_RazmDKf,
  &_n_Per_RazmDKfI,
  &_n_Per_RazmSIND,
  &_n_Per_RazmVipl,
  &_n_Per_Shifr,
  &_n_Per_Sir908,
  &_n_Per_SirG908,
  &_n_Per_VarRas,
  &_n_Pern_Kfn,
  &_n_Perp_Zak,
  &_n_Per_Koef,
  &_n_Perp_DateBeg,
  &_n_Perp_DateEnd,
  &_n_Perp_DopBeg,
  &_n_Perp_IgdGs,
  &_n_Perp_IgdVs,
  &_n_Perp_Kfn,
  &_n_Perp_NMDolja,
  &_n_Perp_Op,
  &_n_Perp_Pr,
  &_n_Perp_RazmO28,
  &_n_Perp_RazGO28,
  &_n_Perp_RazmOS,
  &_n_Perp_RazmGS,
  &_n_Perp_RazmNP,
  &_n_Perp_RazG808,
  &_n_Perp_RazG908,
  &_n_Perp_Razm849,
  &_n_Perp_RazG849,
  &_n_Perp_Razm800,
  &_n_Perp_Razm801,
  &_n_Perp_Razm802,
  &_n_Perp_Razm810,
  &_n_Perp_Razm812,
  &_n_Perp_Razm808,
  &_n_Perp_Razm809,
  &_n_Perp_Razm908,
  &_n_Perp_RazmDot,
  &_n_Perp_RazmGDot,
  &_n_Perp_RazmGIND,
  &_n_Perp_RazmGos,
  &_n_Perp_RazmIND,
  &_n_Perp_RabIND,
  &_n_Perp_RazmIND5,
  &_n_Perp_RazmOtct,
  &_n_Perp_RazmDosr,
  &_n_Perp_RazmM136,
  &_n_Perp_RazmM137,
  &_n_Perp_RazmS291,
  &_n_Perp_RazmS293,
  &_n_Perp_RazmS297,
  &_n_Perp_RazmS298,
  &_n_Perp_RazmKoef,
  &_n_Perp_RazmMALOB,
  &_n_Perp_RazmSIND,
  &_n_Perp_RazmPF,
  &_n_Perp_RazmOsPF,
  &_n_Perp_RazmKfPF,
  &_n_Perp_ProcPF,
  &_n_Perp_ShifrPF,
  &_n_Perp_KfnPF,
  &_n_Perp_Shifr,
  &_n_Perp_Summa,
  &_n_Perp_SummaZKf,
  &_n_Perp_Sum100,
  &_n_Perp_Sum3233,
  &_n_Perp_ProcOIP,
  &_n_Perp_NIgdOIP,
  &_n_Perp_RazmOIP,
  &_n_Perp_VarRas,
  &_n_Perp_RazmPMin,
  &_n_Perp_RazmPNSt,
  &_n_Perp_RazmDPLM,
  &_n_Perp_RazGDPLM,
  &_n_Perp_RazmDPLP,
  &_n_Perp_RazGDPLP,
  &_n_Perp_RazmDKf,
  &_n_Perp_3233PMin,
  &_n_Perp_3233PNSt,
  &_n_Perp_3233DKf,
  &_n_Pers_CodeDoc,
  &_n_Pers_DateIz,
  &_n_Pers_Datin,
  &_n_Pers_Dnpen,
  &_n_Pers_Kfn,
  &_n_Pers_Kin,
  &_n_Pers_NIz,
  &_n_Pers_Op,
  &_n_Pers_Prper,
  &_n_Pers_Psn,
  &_n_Pers_Rnaz,
  &_n_Pravo_Zak,
  &_n_Pravo_Che,
  &_n_Pravo_DateBeg,
  &_n_Pravo_DateChe,
  &_n_Pravo_DateCHK,
  &_n_Pravo_DateEnd,
  &_n_Pravo_DateMax,
  &_n_Pravo_DateVsr,
  &_n_Pravo_DateZan,
  &_n_Pravo_DateZGs,
  &_n_Pravo_DopPens,
  &_n_Pravo_FullYes,
  &_n_Pravo_FullY24,
  &_n_Pravo_Kfn,
  &_n_Pravo_Koef,
  &_n_Pravo_MaxPens,
  &_n_Pravo_NMDolja,
  &_n_Pravo_Nomig,
  &_n_Pravo_Nr,
  &_n_Pravo_Op,
  &_n_Pravo_Prof,
  &_n_Pravo_Shifr,
  &_n_Pravo_VPen,
  &_n_Pravo_Zan,
  &_n_Shifrs_Code,
  &_n_Shifrs_DateC,
  &_n_Shifrs_InsCod,
  &_n_Shifrs_InsDat,
  &_n_Shifrs_Kfn,
  &_n_RInd_PI100,
  &_n_Zan_AgeDown,
  &_n_Pens_RazmNPUG,
  &_n_Ak_CodeStr,
  &_n_Ak_CodeStr1,
  &_n_Akt_Rab1,
  &_n_Akt_Rab2,
  &_n_Akt_Rab3,
  &_n_Akt_Rab4,
  &_n_Akt_Rab5,
  &_n_Ak_Pokaz1,
  &_n_Ak_Pokaz2,
  &_n_Ak_Pokaz3,
  &_n_Ak_Pokaz4,
  &_n_Ak_Pokaz5,
  &_n_Ak_Pokaz6,
  &_n_Ak_Pokaz7,
  &_n_Ak_Pokaz8,
  &_n_Ak_Pokaz9,
  &_n_Ak_Pokaz10,
  &_n_Ak_Pokaz11,
  &_n_Ak_Pokaz12,
  &_n_Ak_Pokaz13,
  &_n_Ak_Pokaz14,
  &_n_Ak_Pokaz15,
  &_n_Ak_Pokaz16,
  &_n_Ak_Pokaz17,
  &_n_Ak_Pokaz18,
  &_n_Ak_Pokaz19,
  &_n_Ak_Pokaz20,
  &_n_Ak_Pokaz21,
  &_n_Ak_Pokaz22,
  &_n_Ak_Pokaz23,
  &_n_Ak_Pokaz24,
  &_n_Ak_Pokaz25,
  &_n_Ak_Pokaz26,
  &_n_Ak_Pokaz27,
  &_n_Ak_Pokaz28,
  &_n_Ak_Pokaz29,
  &_n_Ak_Pokaz30,
  &_n_Akp_CodeStr,
  &_n_Akp_CodeStr1,
  &_n_Akp_Pokaz1,
  &_n_Akp_Pokaz2,
  &_n_Akp_Pokaz3,
  &_n_Akp_Pokaz4,
  &_n_Akp_Pokaz5,
  &_n_Akp_Pokaz6,
  &_n_Akp_Pokaz7,
  &_n_Akp_Pokaz8,
  &_n_Akp_Pokaz9,
  &_n_Akp_Pokaz10,
  &_n_Akp_Pokaz11,
  &_n_Akp_Pokaz12,
  &_n_Akp_Pokaz13,
  &_n_Akp_Pokaz14,
  &_n_Akp_Pokaz15,
  &_n_Akp_Pokaz16,
  &_n_Akp_Pokaz17,
  &_n_Akp_Pokaz18,
  &_n_Akp_Pokaz19,
  &_n_Akp_Pokaz20,
  &_n_Akp_Pokaz21,
  &_n_Akp_Pokaz22,
  &_n_Akp_Pokaz23,
  &_n_Akp_Pokaz24,
  &_n_Akp_Pokaz25,
  &_n_Akp_Pokaz26,
  &_n_Akp_Pokaz27,
  &_n_Akp_Pokaz28,
  &_n_Akp_Pokaz29,
  &_n_Akp_Pokaz30,
  &_n_DCD_Nomig,
  &_n_DCD_DateBeg,
  &_n_DCD_Summa,
  &_n_DCD_Text,
  &_n_ArS_Code,
  &_n_ArS_Priz,
  &_n_ArS_Date,
  &_n_ArS_Date1,
  &_n_ArS_Date2,
  &_n_ArS_Sum,
  &_n_ArS_Ind,
  &_n_ArS_PrUI4,
  &_n_ArS_PrUI2,
  &_n_ArS_Pr1UI2,
  &_n_Pravo_NKor,
  (StayFD *)Aktuarp,
  (StayFD *)BInd,
  (StayFD *)BIndIgd,
  (StayFD *)CheZP,
  (StayFD *)CheZPS,
  (StayFD *)Igds,
  (StayFD *)Shifrs,
  (StayFD *)B_Nazns,
  (StayFD *)ArS,
  (StayFD *)ItogChe,
  (StayFD *)ItogInv,
  (StayFD *)Np181,
  (StayFD *)Npr,
  (StayFD *)Nps,
  (StayFD *)NpGossl,
  (StayFD *)DCDText,
  (StayFD *)Np134,
  (StayFD *)Dp134,
  (StayFD *)NpCheD134,
  (StayFD *)NpSud134,
  (StayFD *)PIgd,
  (StayFD *)Perp,
  (StayFD *)Pers,
  (StayFD *)Pravo,
  (StayFD *)Aktuar,
  (StayFD *)Per,
  (StayFD *)NpCheD,
  (StayFD *)NpOsn,
  (StayFD *)NpSud,
  (StayFD *)Np,
  (StayFD *)Dp,
  (StayFD *)PravoD,
  NULL};

PICMODULEEND(NAZ_PEL)

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
