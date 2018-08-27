//-------------------------------------------------------------------------
// STAY/W      Resource file NEW_REES.XME
//-------------------------------------------------------------------------
// Created 30\03\2009 14:23
//-------------------------------------------------------------------------

#include "NEW_REES.h"

PICMODULEBEG(NEW_REES)

static StayFD _nn_NEW_REES = {NULL,TAG_PIC,0,0,0,0,"NEW_REES",NULL};
WORD  DomPar_Cd;
StayFD _n_DomPar_Cd = {&DomPar_Cd,0,0,0,CLS_I,0,"DomPar_Cd","Код характеристики житла"};
pStayFD _DomPar_Cd = &_n_DomPar_Cd;

StayDate DomPar_DtB;
StayFD _n_DomPar_DtB = {&DomPar_DtB,0,0,0,CLS_Date,0,"DomPar_DtB","Дата початку"};
pStayFD _DomPar_DtB = &_n_DomPar_DtB;

StayDate DomPar_DtE;
StayFD _n_DomPar_DtE = {&DomPar_DtE,0,0,0,CLS_Date,0,"DomPar_DtE","дата закінчення"};
pStayFD _DomPar_DtE = &_n_DomPar_DtE;

BYTE  DomPar_Pr;
StayFD _n_DomPar_Pr = {&DomPar_Pr,0,0,0,CLS_S,0,"DomPar_Pr","Ознака наявності"};
pStayFD _DomPar_Pr = &_n_DomPar_Pr;

DWORD DomPar_Znach;
StayFD _n_DomPar_Znach = {&DomPar_Znach,0,0,0,CLS_L,2,"DomPar_Znach","Значення характ.житла"};
pStayFD _DomPar_Znach = &_n_DomPar_Znach;

WORD  Dom_Cd;
StayFD _n_Dom_Cd = {&Dom_Cd,0,0,0,CLS_I,0,"Dom_Cd","Код житла"};
pStayFD _Dom_Cd = &_n_Dom_Cd;

WORD  Dom_CdVlad;
StayFD _n_Dom_CdVlad = {&Dom_CdVlad,0,0,0,CLS_I,0,"Dom_CdVlad","Код власника"};
pStayFD _Dom_CdVlad = &_n_Dom_CdVlad;

BYTE  Dom_Etag;
StayFD _n_Dom_Etag = {&Dom_Etag,0,0,0,CLS_S,0,"Dom_Etag","Поверх"};
pStayFD _Dom_Etag = &_n_Dom_Etag;

BYTE  Dom_EtagD;
StayFD _n_Dom_EtagD = {&Dom_EtagD,0,0,0,CLS_S,0,"Dom_EtagD","Kiлькість поверхів у будинку"};
pStayFD _Dom_EtagD = &_n_Dom_EtagD;

BYTE  Dom_Komn;
StayFD _n_Dom_Komn = {&Dom_Komn,0,0,0,CLS_S,0,"Dom_Komn","Кількість кімнат"};
pStayFD _Dom_Komn = &_n_Dom_Komn;

DWORD Dom_Squ;
StayFD _n_Dom_Squ = {&Dom_Squ,0,0,0,CLS_L,2,"Dom_Squ","Загальна площа"};
pStayFD _Dom_Squ = &_n_Dom_Squ;

DWORD Dom_SquOpal;
StayFD _n_Dom_SquOpal = {&Dom_SquOpal,0,0,0,CLS_L,2,"Dom_SquOpal","площа, яка опалюється"};
pStayFD _Dom_SquOpal = &_n_Dom_SquOpal;

BYTE  Dom_TypeOpal;
StayFD _n_Dom_TypeOpal = {&Dom_TypeOpal,0,0,0,CLS_S,0,"Dom_TypeOpal","тип опалення"};
pStayFD _Dom_TypeOpal = &_n_Dom_TypeOpal;

DWORD Dom_sqSubs;
StayFD _n_Dom_sqSubs = {&Dom_sqSubs,0,0,0,CLS_L,2,"Dom_sqSubs","площа,на яку призн.пільгу"};
pStayFD _Dom_sqSubs = &_n_Dom_sqSubs;

WORD  Fam_CdExit;
StayFD _n_Fam_CdExit = {&Fam_CdExit,0,0,0,CLS_I,0,"Fam_CdExit","Код причини зняття з обліку"};
pStayFD _Fam_CdExit = &_n_Fam_CdExit;

WORD  Fam_CdRaj;
StayFD _n_Fam_CdRaj = {&Fam_CdRaj,0,0,0,CLS_I,0,"Fam_CdRaj","Номер району"};
pStayFD _Fam_CdRaj = &_n_Fam_CdRaj;

WORD  Fam_CdRelat;
StayFD _n_Fam_CdRelat = {&Fam_CdRelat,0,0,0,CLS_I,0,"Fam_CdRelat","Категорія родинності"};
pStayFD _Fam_CdRelat = &_n_Fam_CdRelat;

StayDate Fam_DateB;
StayFD _n_Fam_DateB = {&Fam_DateB,0,0,0,CLS_Date,0,"Fam_DateB","початок поширення пільги"};
pStayFD _Fam_DateB = &_n_Fam_DateB;

StayDate Fam_DateE;
StayFD _n_Fam_DateE = {&Fam_DateE,0,0,0,CLS_Date,0,"Fam_DateE","кінець поширення пільги"};
pStayFD _Fam_DateE = &_n_Fam_DateE;

char Fam_DepPasp[41];
StayFD _n_Fam_DepPasp = {&Fam_DepPasp,0,0,0,CLS_V,40,"Fam_DepPasp","Ким видано паспорт"};
pStayFD _Fam_DepPasp = &_n_Fam_DepPasp;

StayDate Fam_DtBeg;
StayFD _n_Fam_DtBeg = {&Fam_DtBeg,0,0,0,CLS_Date,0,"Fam_DtBeg","Дата постановки на облік"};
pStayFD _Fam_DtBeg = &_n_Fam_DtBeg;

StayDate Fam_DtBirth;
StayFD _n_Fam_DtBirth = {&Fam_DtBirth,0,0,0,CLS_Date,0,"Fam_DtBirth","Дата народження"};
pStayFD _Fam_DtBirth = &_n_Fam_DtBirth;

StayDate Fam_DtExit;
StayFD _n_Fam_DtExit = {&Fam_DtExit,0,0,0,CLS_Date,0,"Fam_DtExit","Дата зняття з обліку"};
pStayFD _Fam_DtExit = &_n_Fam_DtExit;

StayDate Fam_DtPasp;
StayFD _n_Fam_DtPasp = {&Fam_DtPasp,0,0,0,CLS_Date,0,"Fam_DtPasp","Дата видачі паспорту"};
pStayFD _Fam_DtPasp = &_n_Fam_DtPasp;

char Fam_FIO[51];
StayFD _n_Fam_FIO = {&Fam_FIO,0,0,0,CLS_V,50,"Fam_FIO","ПІБ члена родини"};
pStayFD _Fam_FIO = &_n_Fam_FIO;

WORD  Fam_KatP;
StayFD _n_Fam_KatP = {&Fam_KatP,0,0,0,CLS_I,0,"Fam_KatP","категорія пільговика(власника картки)"};
pStayFD _Fam_KatP = &_n_Fam_KatP;

WORD  Fam_LgCode;
StayFD _n_Fam_LgCode = {&Fam_LgCode,0,0,0,CLS_I,0,"Fam_LgCode","Код пільги"};
pStayFD _Fam_LgCode = &_n_Fam_LgCode;

DWORD Fam_Ls;
StayFD _n_Fam_Ls = {&Fam_Ls,0,0,0,CLS_L,0,"Fam_Ls","Номер особового рахунку"};
pStayFD _Fam_Ls = &_n_Fam_Ls;

DWORD Fam_NCard;
StayFD _n_Fam_NCard = {&Fam_NCard,0,0,0,CLS_L,0,"Fam_NCard","Номер картки у реєстрі"};
pStayFD _Fam_NCard = &_n_Fam_NCard;

BYTE  Fam_NFam;
StayFD _n_Fam_NFam = {&Fam_NFam,0,0,0,CLS_S,0,"Fam_NFam","Номер члена родини"};
pStayFD _Fam_NFam = &_n_Fam_NFam;

BYTE  Fam_NoServ;
StayFD _n_Fam_NoServ = {&Fam_NoServ,0,0,0,CLS_S,0,"Fam_NoServ","Ознака зняття платежів"};
pStayFD _Fam_NoServ = &_n_Fam_NoServ;

BYTE  Fam_NomF;
StayFD _n_Fam_NomF = {&Fam_NomF,0,0,0,CLS_S,0,"Fam_NomF","Номер члена родини"};
pStayFD _Fam_NomF = &_n_Fam_NomF;

char Fam_NumTaxP[11];
StayFD _n_Fam_NumTaxP = {&Fam_NumTaxP,0,0,0,CLS_V,10,"Fam_NumTaxP","Податковий номер"};
pStayFD _Fam_NumTaxP = &_n_Fam_NumTaxP;

WORD  Fam_Obn;
StayFD _n_Fam_Obn = {&Fam_Obn,0,0,0,CLS_I,0,"Fam_Obn","ознака оновлення"};
pStayFD _Fam_Obn = &_n_Fam_Obn;

BYTE  Fam_Order;
StayFD _n_Fam_Order = {&Fam_Order,0,0,0,CLS_S,0,"Fam_Order","Порядок розрахунку сімей"};
pStayFD _Fam_Order = &_n_Fam_Order;

BYTE  Fam_Osob;
StayFD _n_Fam_Osob = {&Fam_Osob,0,0,0,CLS_S,0,"Fam_Osob","Особливість"};
pStayFD _Fam_Osob = &_n_Fam_Osob;

char Fam_Pasp[15];
StayFD _n_Fam_Pasp = {&Fam_Pasp,0,0,0,CLS_V,14,"Fam_Pasp","Серія та номер паспорту"};
pStayFD _Fam_Pasp = &_n_Fam_Pasp;

char Fam_Pfx[5];
StayFD _n_Fam_Pfx = {&Fam_Pfx,0,0,0,CLS_V,4,"Fam_Pfx","Префікс номеру особового рахунку"};
pStayFD _Fam_Pfx = &_n_Fam_Pfx;

BYTE  Fam_Pol;
StayFD _n_Fam_Pol = {&Fam_Pol,0,0,0,CLS_S,0,"Fam_Pol","Стать"};
pStayFD _Fam_Pol = &_n_Fam_Pol;

BYTE  Fam_PrDee;
StayFD _n_Fam_PrDee = {&Fam_PrDee,0,0,0,CLS_S,0,"Fam_PrDee","ознака працездатності"};
pStayFD _Fam_PrDee = &_n_Fam_PrDee;

WORD  Fam_Prizn;
StayFD _n_Fam_Prizn = {&Fam_Prizn,0,0,0,CLS_I,0,"Fam_Prizn","резерв"};
pStayFD _Fam_Prizn = &_n_Fam_Prizn;

WORD  Fam_Prizn2;
StayFD _n_Fam_Prizn2 = {&Fam_Prizn2,0,0,0,CLS_I,0,"Fam_Prizn2","резерв"};
pStayFD _Fam_Prizn2 = &_n_Fam_Prizn2;

WORD  Fam_PriznP;
StayFD _n_Fam_PriznP = {&Fam_PriznP,0,0,0,CLS_I,0,"Fam_PriznP","ознака пільговика"};
pStayFD _Fam_PriznP = &_n_Fam_PriznP;

WORD  KatP_Cd;
StayFD _n_KatP_Cd = {&KatP_Cd,0,0,0,CLS_I,0,"KatP_Cd","Код категорії пільговика"};
pStayFD _KatP_Cd = &_n_KatP_Cd;

char KatP_Dep[41];
StayFD _n_KatP_Dep = {&KatP_Dep,0,0,0,CLS_V,40,"KatP_Dep","Ким видано документ"};
pStayFD _KatP_Dep = &_n_KatP_Dep;

char KatP_Doc[16];
StayFD _n_KatP_Doc = {&KatP_Doc,0,0,0,CLS_V,15,"KatP_Doc","Номер док.,що дає право на пільгу"};
pStayFD _KatP_Doc = &_n_KatP_Doc;

StayDate KatP_Dt;
StayFD _n_KatP_Dt = {&KatP_Dt,0,0,0,CLS_Date,0,"KatP_Dt","Дата видачі документу,що дає право на пільгу"};
pStayFD _KatP_Dt = &_n_KatP_Dt;

StayDate KatP_DtE;
StayFD _n_KatP_DtE = {&KatP_DtE,0,0,0,CLS_Date,0,"KatP_DtE","дата окончания категории"};
pStayFD _KatP_DtE = &_n_KatP_DtE;

WORD  KatP_Obn;
StayFD _n_KatP_Obn = {&KatP_Obn,0,0,0,CLS_I,0,"KatP_Obn","ознака оновлення"};
pStayFD _KatP_Obn = &_n_KatP_Obn;

BYTE  KatP_Osn;
StayFD _n_KatP_Osn = {&KatP_Osn,0,0,0,CLS_S,0,"KatP_Osn","ознака основної категорії"};
pStayFD _KatP_Osn = &_n_KatP_Osn;

int   LgNac_Fact;
StayFD _n_LgNac_Fact = {&LgNac_Fact,0,0,0,CLS_Ls,4,"LgNac_Fact","факт по послузі"};
pStayFD _LgNac_Fact = &_n_LgNac_Fact;

int   LgNac_FactAll;
StayFD _n_LgNac_FactAll = {&LgNac_FactAll,0,0,0,CLS_Ls,4,"LgNac_FactAll","загальний факт для спарених послуг"};
pStayFD _LgNac_FactAll = &_n_LgNac_FactAll;

int   LgNac_FactCost;
StayFD _n_LgNac_FactCost = {&LgNac_FactCost,0,0,0,CLS_Ls,2,"LgNac_FactCost","вартість послуги"};
pStayFD _LgNac_FactCost = &_n_LgNac_FactCost;

int   LgNac_FactFam;
StayFD _n_LgNac_FactFam = {&LgNac_FactFam,0,0,0,CLS_Ls,4,"LgNac_FactFam","факт для декількох сімей"};
pStayFD _LgNac_FactFam = &_n_LgNac_FactFam;

BYTE  LgNac_FactType;
StayFD _n_LgNac_FactType = {&LgNac_FactType,0,0,0,CLS_S,0,"LgNac_FactType","Тип вимірювання"};
pStayFD _LgNac_FactType = &_n_LgNac_FactType;

WORD  LgNac_God;
StayFD _n_LgNac_God = {&LgNac_God,0,0,0,CLS_I,0,"LgNac_God","Рік нарахування пільги"};
pStayFD _LgNac_God = &_n_LgNac_God;

WORD  LgNac_GodIn;
StayFD _n_LgNac_GodIn = {&LgNac_GodIn,0,0,0,CLS_I,0,"LgNac_GodIn","Рік,в якому проведено завантаження"};
pStayFD _LgNac_GodIn = &_n_LgNac_GodIn;

WORD  LgNac_KodP2;
StayFD _n_LgNac_KodP2 = {&LgNac_KodP2,0,0,0,CLS_I,0,"LgNac_KodP2","код входження в форму П2"};
pStayFD _LgNac_KodP2 = &_n_LgNac_KodP2;

WORD  LgNac_KodZagr;
StayFD _n_LgNac_KodZagr = {&LgNac_KodZagr,0,0,0,CLS_I,0,"LgNac_KodZagr","код результату завантаження"};
pStayFD _LgNac_KodZagr = &_n_LgNac_KodZagr;

WORD  LgNac_Mec;
StayFD _n_LgNac_Mec = {&LgNac_Mec,0,0,0,CLS_I,0,"LgNac_Mec","Місяць нарахування пільги"};
pStayFD _LgNac_Mec = &_n_LgNac_Mec;

WORD  LgNac_MecIn;
StayFD _n_LgNac_MecIn = {&LgNac_MecIn,0,0,0,CLS_I,0,"LgNac_MecIn","Місяць,в якому проведено завантаження"};
pStayFD _LgNac_MecIn = &_n_LgNac_MecIn;

WORD  LgNac_Npp;
StayFD _n_LgNac_Npp = {&LgNac_Npp,0,0,0,CLS_I,0,"LgNac_Npp","номер запису"};
pStayFD _LgNac_Npp = &_n_LgNac_Npp;

BYTE  LgNac_Prizn;
StayFD _n_LgNac_Prizn = {&LgNac_Prizn,0,0,0,CLS_S,0,"LgNac_Prizn","ознака готівки/безготівки"};
pStayFD _LgNac_Prizn = &_n_LgNac_Prizn;

int   LgNac_Sum;
StayFD _n_LgNac_Sum = {&LgNac_Sum,0,0,0,CLS_Ls,2,"LgNac_Sum","Сума пільги"};
pStayFD _LgNac_Sum = &_n_LgNac_Sum;

int   LgNac_SumAll;
StayFD _n_LgNac_SumAll = {&LgNac_SumAll,0,0,0,CLS_Ls,2,"LgNac_SumAll","загальна сума для спарених пільг"};
pStayFD _LgNac_SumAll = &_n_LgNac_SumAll;

int   LgNac_SumFam;
StayFD _n_LgNac_SumFam = {&LgNac_SumFam,0,0,0,CLS_Ls,2,"LgNac_SumFam","сума пільг для декількох сімей"};
pStayFD _LgNac_SumFam = &_n_LgNac_SumFam;

WORD  Lg_Cd;
StayFD _n_Lg_Cd = {&Lg_Cd,0,0,0,CLS_I,0,"Lg_Cd","Код пільги"};
pStayFD _Lg_Cd = &_n_Lg_Cd;

WORD  Lg_CdKat;
StayFD _n_Lg_CdKat = {&Lg_CdKat,0,0,0,CLS_I,0,"Lg_CdKat","Код категорії пільговика"};
pStayFD _Lg_CdKat = &_n_Lg_CdKat;

char Lg_CdO[26];
StayFD _n_Lg_CdO = {&Lg_CdO,0,0,0,CLS_V,25,"Lg_CdO","Особовий рахунок на пільгу"};
pStayFD _Lg_CdO = &_n_Lg_CdO;

WORD  Lg_CdPsn;
StayFD _n_Lg_CdPsn = {&Lg_CdPsn,0,0,0,CLS_I,0,"Lg_CdPsn","код причини зняття з готівки"};
pStayFD _Lg_CdPsn = &_n_Lg_CdPsn;

StayDate Lg_DtB;
StayFD _n_Lg_DtB = {&Lg_DtB,0,0,0,CLS_Date,0,"Lg_DtB","Дата початку"};
pStayFD _Lg_DtB = &_n_Lg_DtB;

StayDate Lg_DtE;
StayFD _n_Lg_DtE = {&Lg_DtE,0,0,0,CLS_Date,0,"Lg_DtE","Дата закінчення"};
pStayFD _Lg_DtE = &_n_Lg_DtE;

uint6 Lg_Kod;
StayFD _n_Lg_Kod = {&Lg_Kod,0,0,0,CLS_H,0,"Lg_Kod","Код ЄДРПОУ"};
pStayFD _Lg_Kod = &_n_Lg_Kod;

BYTE  Lg_Kol;
StayFD _n_Lg_Kol = {&Lg_Kol,0,0,0,CLS_S,0,"Lg_Kol","Кількість пільговиків"};
pStayFD _Lg_Kol = &_n_Lg_Kol;

BYTE  Lg_NFam;
StayFD _n_Lg_NFam = {&Lg_NFam,0,0,0,CLS_S,0,"Lg_NFam","Номер члена родини"};
pStayFD _Lg_NFam = &_n_Lg_NFam;

char Lg_NumTax[11];
StayFD _n_Lg_NumTax = {&Lg_NumTax,0,0,0,CLS_V,10,"Lg_NumTax","Податк.ном.для розрах.рах.на пільгу"};
pStayFD _Lg_NumTax = &_n_Lg_NumTax;

WORD  Lg_Obn;
StayFD _n_Lg_Obn = {&Lg_Obn,0,0,0,CLS_I,0,"Lg_Obn","ознака оновлення"};
pStayFD _Lg_Obn = &_n_Lg_Obn;

WORD  Lg_PayDServCd;
StayFD _n_Lg_PayDServCd = {&Lg_PayDServCd,0,0,0,CLS_I,0,"Lg_PayDServCd","різновид послуги"};
pStayFD _Lg_PayDServCd = &_n_Lg_PayDServCd;

BYTE  Lg_PaySpec;
StayFD _n_Lg_PaySpec = {&Lg_PaySpec,0,0,0,CLS_S,0,"Lg_PaySpec","Вид організації"};
pStayFD _Lg_PaySpec = &_n_Lg_PaySpec;

DWORD Lg_PaySys;
StayFD _n_Lg_PaySys = {&Lg_PaySys,0,0,0,CLS_L,0,"Lg_PaySys","Код системи тарифів"};
pStayFD _Lg_PaySys = &_n_Lg_PaySys;

WORD  Lg_Prizn;
StayFD _n_Lg_Prizn = {&Lg_Prizn,0,0,0,CLS_I,0,"Lg_Prizn","ознака:готівка/безготівка"};
pStayFD _Lg_Prizn = &_n_Lg_Prizn;

BYTE  Lg_CalcOrder;
StayFD _n_Lg_CalcOrder = {&Lg_CalcOrder,0,0,0,CLS_S,0,"Lg_CalcOrder","порядок сімї для розрах."};
pStayFD _Lg_CalcOrder = &_n_Lg_CalcOrder;

BYTE  Lg_Stat;
StayFD _n_Lg_Stat = {&Lg_Stat,0,0,0,CLS_S,0,"Lg_Stat","різновид користування"};
pStayFD _Lg_Stat = &_n_Lg_Stat;

int   Lg_Sum;
StayFD _n_Lg_Sum = {&Lg_Sum,0,0,0,CLS_Ls,2,"Lg_Sum","Вартість пільги(РЕЗЕРВ)"};
pStayFD _Lg_Sum = &_n_Lg_Sum;

BYTE  Lg_Type;
StayFD _n_Lg_Type = {&Lg_Type,0,0,0,CLS_S,0,"Lg_Type","Тип пільги"};
pStayFD _Lg_Type = &_n_Lg_Type;

char Opic_FIO[51];
StayFD _n_Opic_FIO = {&Opic_FIO,0,0,0,CLS_V,50,"Opic_FIO","ПІБ опікуна"};
pStayFD _Opic_FIO = &_n_Opic_FIO;

char Opic_NumTaxP[11];
StayFD _n_Opic_NumTaxP = {&Opic_NumTaxP,0,0,0,CLS_V,10,"Opic_NumTaxP","Податковий номер"};
pStayFD _Opic_NumTaxP = &_n_Opic_NumTaxP;

char Opic_Pasp[15];
StayFD _n_Opic_Pasp = {&Opic_Pasp,0,0,0,CLS_V,14,"Opic_Pasp","Серія та номер паспорту"};
pStayFD _Opic_Pasp = &_n_Opic_Pasp;

WORD  OsobA_CdExit;
StayFD _n_OsobA_CdExit = {&OsobA_CdExit,0,0,0,CLS_I,0,"OsobA_CdExit","Код прич.закінч.дії"};
pStayFD _OsobA_CdExit = &_n_OsobA_CdExit;

WORD  OsobA_Code;
StayFD _n_OsobA_Code = {&OsobA_Code,0,0,0,CLS_I,0,"OsobA_Code","Код особливості"};
pStayFD _OsobA_Code = &_n_OsobA_Code;

StayDate OsobA_DtBeg;
StayFD _n_OsobA_DtBeg = {&OsobA_DtBeg,0,0,0,CLS_Date,0,"OsobA_DtBeg","Дата початку дії"};
pStayFD _OsobA_DtBeg = &_n_OsobA_DtBeg;

StayDate OsobA_DtEnd;
StayFD _n_OsobA_DtEnd = {&OsobA_DtEnd,0,0,0,CLS_Date,0,"OsobA_DtEnd","Дата закінч.дії"};
pStayFD _OsobA_DtEnd = &_n_OsobA_DtEnd;

BYTE  OsobA_NFam;
StayFD _n_OsobA_NFam = {&OsobA_NFam,0,0,0,CLS_S,0,"OsobA_NFam","номер члена сімї"};
pStayFD _OsobA_NFam = &_n_OsobA_NFam;

BYTE  OsobA_Pr;
StayFD _n_OsobA_Pr = {&OsobA_Pr,0,0,0,CLS_S,0,"OsobA_Pr","Ознака особл.(символ.чи числова)"};
pStayFD _OsobA_Pr = &_n_OsobA_Pr;

BYTE  OsobA_PrKol;
StayFD _n_OsobA_PrKol = {&OsobA_PrKol,0,0,0,CLS_S,0,"OsobA_PrKol","якщо число,то -кіль-ть знаків після ,"};
pStayFD _OsobA_PrKol = &_n_OsobA_PrKol;

char OsobA_StrZnach[256];
StayFD _n_OsobA_StrZnach = {&OsobA_StrZnach,0,0,0,CLS_V,255,"OsobA_StrZnach","знач.особл.(в симв.вигляді)"};
pStayFD _OsobA_StrZnach = &_n_OsobA_StrZnach;

WORD  OsobA_Znach1;
StayFD _n_OsobA_Znach1 = {&OsobA_Znach1,0,0,0,CLS_I,0,"OsobA_Znach1","знач.особл.(INT)"};
pStayFD _OsobA_Znach1 = &_n_OsobA_Znach1;

int6 OsobA_Znach2;
StayFD _n_OsobA_Znach2 = {&OsobA_Znach2,0,0,0,CLS_Hs,2,"OsobA_Znach2","знач.особл.(NUM POINT=2 SIGN)"};
pStayFD _OsobA_Znach2 = &_n_OsobA_Znach2;

DWORD PayD_CodeTar;
StayFD _n_PayD_CodeTar = {&PayD_CodeTar,0,0,0,CLS_L,0,"PayD_CodeTar","Код тарифу"};
pStayFD _PayD_CodeTar = &_n_PayD_CodeTar;

int   PayD_Fact;
StayFD _n_PayD_Fact = {&PayD_Fact,0,0,0,CLS_Ls,4,"PayD_Fact","фактично спожито на виплату"};
pStayFD _PayD_Fact = &_n_PayD_Fact;

int   PayD_FactAll;
StayFD _n_PayD_FactAll = {&PayD_FactAll,0,0,0,CLS_Ls,4,"PayD_FactAll","загальний факт для спарених пілг"};
pStayFD _PayD_FactAll = &_n_PayD_FactAll;

WORD  PayD_God;
StayFD _n_PayD_God = {&PayD_God,0,0,0,CLS_I,0,"PayD_God","Рік нарахування пільги"};
pStayFD _PayD_God = &_n_PayD_God;

WORD  PayD_GodIn;
StayFD _n_PayD_GodIn = {&PayD_GodIn,0,0,0,CLS_I,0,"PayD_GodIn","Рік,в якому проведено завантаження"};
pStayFD _PayD_GodIn = &_n_PayD_GodIn;

WORD  PayD_Kfn;
StayFD _n_PayD_Kfn = {&PayD_Kfn,0,0,0,CLS_I,0,"PayD_Kfn","Код виплати"};
pStayFD _PayD_Kfn = &_n_PayD_Kfn;

WORD  PayD_KodP2;
StayFD _n_PayD_KodP2 = {&PayD_KodP2,0,0,0,CLS_I,0,"PayD_KodP2","код входження в форму П2"};
pStayFD _PayD_KodP2 = &_n_PayD_KodP2;

WORD  PayD_KodZagr;
StayFD _n_PayD_KodZagr = {&PayD_KodZagr,0,0,0,CLS_I,0,"PayD_KodZagr","код результату завантаження"};
pStayFD _PayD_KodZagr = &_n_PayD_KodZagr;

WORD  PayD_Mec;
StayFD _n_PayD_Mec = {&PayD_Mec,0,0,0,CLS_I,0,"PayD_Mec","Місяць нарахування пільги"};
pStayFD _PayD_Mec = &_n_PayD_Mec;

WORD  PayD_MecIn;
StayFD _n_PayD_MecIn = {&PayD_MecIn,0,0,0,CLS_I,0,"PayD_MecIn","Місяць,в якому проведено завантаження"};
pStayFD _PayD_MecIn = &_n_PayD_MecIn;

WORD  PayD_Npp;
StayFD _n_PayD_Npp = {&PayD_Npp,0,0,0,CLS_I,0,"PayD_Npp","номер запису"};
pStayFD _PayD_Npp = &_n_PayD_Npp;

BYTE  PayD_Prizn;
StayFD _n_PayD_Prizn = {&PayD_Prizn,0,0,0,CLS_S,0,"PayD_Prizn","ознака готівка/безготівка"};
pStayFD _PayD_Prizn = &_n_PayD_Prizn;

int   PayD_Sum;
StayFD _n_PayD_Sum = {&PayD_Sum,0,0,0,CLS_Ls,2,"PayD_Sum","Сума пільги"};
pStayFD _PayD_Sum = &_n_PayD_Sum;

int   PayD_SumAll;
StayFD _n_PayD_SumAll = {&PayD_SumAll,0,0,0,CLS_Ls,2,"PayD_SumAll","загальна сума для спарених пільг"};
pStayFD _PayD_SumAll = &_n_PayD_SumAll;

int   PayD_SumFam;
StayFD _n_PayD_SumFam = {&PayD_SumFam,0,0,0,CLS_Ls,2,"PayD_SumFam","сума пільг для декількох сімей"};
pStayFD _PayD_SumFam = &_n_PayD_SumFam;

int   PayD_FactFam;
StayFD _n_PayD_FactFam = {&PayD_FactFam,0,0,0,CLS_Ls,4,"PayD_FactFam","факт для декількох сімей"};
pStayFD _PayD_FactFam = &_n_PayD_FactFam;

BYTE  PayD_TypeNorm;
StayFD _n_PayD_TypeNorm = {&PayD_TypeNorm,0,0,0,CLS_S,0,"PayD_TypeNorm","тип норми"};
pStayFD _PayD_TypeNorm = &_n_PayD_TypeNorm;

WORD  PerP_CdLg;
StayFD _n_PerP_CdLg = {&PerP_CdLg,0,0,0,CLS_I,0,"PerP_CdLg","код пільги"};
pStayFD _PerP_CdLg = &_n_PerP_CdLg;

StayDate PerP_Datin;
StayFD _n_PerP_Datin = {&PerP_Datin,0,0,0,CLS_Date,0,"PerP_Datin","Дата інспектора"};
pStayFD _PerP_Datin = &_n_PerP_Datin;

StayDate PerP_Dnpen;
StayFD _n_PerP_Dnpen = {&PerP_Dnpen,0,0,0,CLS_Date,0,"PerP_Dnpen","Дата початку виплати (з ...)"};
pStayFD _PerP_Dnpen = &_n_PerP_Dnpen;

WORD  PerP_Kat;
StayFD _n_PerP_Kat = {&PerP_Kat,0,0,0,CLS_I,0,"PerP_Kat","категорія пільговика"};
pStayFD _PerP_Kat = &_n_PerP_Kat;

WORD  PerP_Kin;
StayFD _n_PerP_Kin = {&PerP_Kin,0,0,0,CLS_I,0,"PerP_Kin","Код інспектора"};
pStayFD _PerP_Kin = &_n_PerP_Kin;

WORD  PerP_Op;
StayFD _n_PerP_Op = {&PerP_Op,0,0,0,CLS_I,0,"PerP_Op","код операции"};
pStayFD _PerP_Op = &_n_PerP_Op;

WORD  PerP_Prper;
StayFD _n_PerP_Prper = {&PerP_Prper,0,0,0,CLS_I,0,"PerP_Prper","ознака (резерв)"};
pStayFD _PerP_Prper = &_n_PerP_Prper;

WORD  PerP_Psn;
StayFD _n_PerP_Psn = {&PerP_Psn,0,0,0,CLS_I,0,"PerP_Psn","Причина зняття з виплати(KLPSN)"};
pStayFD _PerP_Psn = &_n_PerP_Psn;

int6 PerP_Rnaz;
StayFD _n_PerP_Rnaz = {&PerP_Rnaz,0,0,0,CLS_Hs,2,"PerP_Rnaz","Щомісячна сума для кода вип"};
pStayFD _PerP_Rnaz = &_n_PerP_Rnaz;

char R_Apt[5];
StayFD _n_R_Apt = {&R_Apt,0,0,0,CLS_V,4,"R_Apt","Номер квартири прожив."};
pStayFD _R_Apt = &_n_R_Apt;

char R_Build[3];
StayFD _n_R_Build = {&R_Build,0,0,0,CLS_V,2,"R_Build","Номер корпусу прожив."};
pStayFD _R_Build = &_n_R_Build;

WORD  R_CdDepat;
StayFD _n_R_CdDepat = {&R_CdDepat,0,0,0,CLS_I,0,"R_CdDepat","Код установи,яка призн.пенсію"};
pStayFD _R_CdDepat = &_n_R_CdDepat;

WORD  R_CdInsp;
StayFD _n_R_CdInsp = {&R_CdInsp,0,0,0,CLS_I,0,"R_CdInsp","Код інспектора(введ.картки)"};
pStayFD _R_CdInsp = &_n_R_CdInsp;

WORD  R_CdNp;
StayFD _n_R_CdNp = {&R_CdNp,0,0,0,CLS_I,0,"R_CdNp","Тип насел. пункту прожив."};
pStayFD _R_CdNp = &_n_R_CdNp;

WORD  R_CdObl;
StayFD _n_R_CdObl = {&R_CdObl,0,0,0,CLS_I,0,"R_CdObl","Код області"};
pStayFD _R_CdObl = &_n_R_CdObl;

WORD  R_CdRaj;
StayFD _n_R_CdRaj = {&R_CdRaj,0,0,0,CLS_I,0,"R_CdRaj","Код району проживання"};
pStayFD _R_CdRaj = &_n_R_CdRaj;

WORD  R_CdUl;
StayFD _n_R_CdUl = {&R_CdUl,0,0,0,CLS_I,0,"R_CdUl","Код вулиці прожив."};
pStayFD _R_CdUl = &_n_R_CdUl;

char R_DepPasp[41];
StayFD _n_R_DepPasp = {&R_DepPasp,0,0,0,CLS_V,40,"R_DepPasp","Ким видано паспорт"};
pStayFD _R_DepPasp = &_n_R_DepPasp;

StayDate R_DtBirth;
StayFD _n_R_DtBirth = {&R_DtBirth,0,0,0,CLS_Date,0,"R_DtBirth","Дата народження"};
pStayFD _R_DtBirth = &_n_R_DtBirth;

StayDate R_DtInsp;
StayFD _n_R_DtInsp = {&R_DtInsp,0,0,0,CLS_Date,0,"R_DtInsp","Дата інспектора(введ.картки)"};
pStayFD _R_DtInsp = &_n_R_DtInsp;

StayDate R_DtPosv;
StayFD _n_R_DtPosv = {&R_DtPosv,0,0,0,CLS_Date,0,"R_DtPosv","Дата видачі пенс.посв."};
pStayFD _R_DtPosv = &_n_R_DtPosv;

StayDate R_DtUchB;
StayFD _n_R_DtUchB = {&R_DtUchB,0,0,0,CLS_Date,0,"R_DtUchB","Дата постан.на облік"};
pStayFD _R_DtUchB = &_n_R_DtUchB;

char R_House[8];
StayFD _n_R_House = {&R_House,0,0,0,CLS_V,7,"R_House","Номер будинку прожив."};
pStayFD _R_House = &_n_R_House;

DWORD R_Index;
StayFD _n_R_Index = {&R_Index,0,0,0,CLS_L,0,"R_Index","Індекс відд.звязку"};
pStayFD _R_Index = &_n_R_Index;

WORD  R_KatOsn;
StayFD _n_R_KatOsn = {&R_KatOsn,0,0,0,CLS_I,0,"R_KatOsn","основна категорія"};
pStayFD _R_KatOsn = &_n_R_KatOsn;

uint8 R_KodAdr;
StayFD _n_R_KodAdr = {&R_KodAdr,0,0,0,CLS_G,0,"R_KodAdr","Кодована адреса"};
pStayFD _R_KodAdr = &_n_R_KodAdr;

BYTE  R_KolKat;
StayFD _n_R_KolKat = {&R_KolKat,0,0,0,CLS_S,0,"R_KolKat","ознака декілька категорій"};
pStayFD _R_KolKat = &_n_R_KolKat;

DWORD R_NCardP;
StayFD _n_R_NCardP = {&R_NCardP,0,0,0,CLS_L,0,"R_NCardP","Номер картки пільговика"};
pStayFD _R_NCardP = &_n_R_NCardP;

char R_Name1[31];
StayFD _n_R_Name1 = {&R_Name1,0,0,0,CLS_V,30,"R_Name1","Прізвище"};
pStayFD _R_Name1 = &_n_R_Name1;

char R_Name2[21];
StayFD _n_R_Name2 = {&R_Name2,0,0,0,CLS_V,20,"R_Name2","Ім я"};
pStayFD _R_Name2 = &_n_R_Name2;

char R_Name3[21];
StayFD _n_R_Name3 = {&R_Name3,0,0,0,CLS_V,20,"R_Name3","По батькові"};
pStayFD _R_Name3 = &_n_R_Name3;

DWORD R_Nls;
StayFD _n_R_Nls = {&R_Nls,0,0,0,CLS_L,0,"R_Nls","Номер особового рахунку"};
pStayFD _R_Nls = &_n_R_Nls;

DWORD R_NlsGot;
StayFD _n_R_NlsGot = {&R_NlsGot,0,0,0,CLS_L,0,"R_NlsGot","Номер ос.рах.для готівки"};
pStayFD _R_NlsGot = &_n_R_NlsGot;

BYTE  R_Nomig;
StayFD _n_R_Nomig = {&R_Nomig,0,0,0,CLS_S,0,"R_Nomig","Номер утриманця"};
pStayFD _R_Nomig = &_n_R_Nomig;

char R_NumTax[11];
StayFD _n_R_NumTax = {&R_NumTax,0,0,0,CLS_V,10,"R_NumTax","Податковий номер"};
pStayFD _R_NumTax = &_n_R_NumTax;

BYTE  R_Opek;
StayFD _n_R_Opek = {&R_Opek,0,0,0,CLS_S,0,"R_Opek","ознака наявності опікуна"};
pStayFD _R_Opek = &_n_R_Opek;

BYTE  R_PDtOblB;
StayFD _n_R_PDtOblB = {&R_PDtOblB,0,0,0,CLS_S,0,"R_PDtOblB","Дата постанови на облік пільговика"};
pStayFD _R_PDtOblB = &_n_R_PDtOblB;

char R_PensPosv[15];
StayFD _n_R_PensPosv = {&R_PensPosv,0,0,0,CLS_V,14,"R_PensPosv","Серія та номер пенс.посв."};
pStayFD _R_PensPosv = &_n_R_PensPosv;

char R_Pfx[5];
StayFD _n_R_Pfx = {&R_Pfx,0,0,0,CLS_V,4,"R_Pfx","Префікс"};
pStayFD _R_Pfx = &_n_R_Pfx;

BYTE  R_PrAdr;
StayFD _n_R_PrAdr = {&R_PrAdr,0,0,0,CLS_S,0,"R_PrAdr","Ознака збігу адреси проживання та реєстрації"};
pStayFD _R_PrAdr = &_n_R_PrAdr;

BYTE  R_PrGot;
StayFD _n_R_PrGot = {&R_PrGot,0,0,0,CLS_S,0,"R_PrGot","ознака отрим.пільг готівкою"};
pStayFD _R_PrGot = &_n_R_PrGot;

BYTE  R_PrP;
StayFD _n_R_PrP = {&R_PrP,0,0,0,CLS_S,0,"R_PrP","Ознака наявності виплати готівкою"};
pStayFD _R_PrP = &_n_R_PrP;

BYTE  R_PrTwo;
StayFD _n_R_PrTwo = {&R_PrTwo,0,0,0,CLS_S,0,"R_PrTwo","ознака декілька родин пільг"};
pStayFD _R_PrTwo = &_n_R_PrTwo;

DWORD R_Rcd;
StayFD _n_R_Rcd = {&R_Rcd,0,0,0,CLS_L,0,"R_Rcd","Унікальний номер запису"};
pStayFD _R_Rcd = &_n_R_Rcd;

char R_StrAdr[101];
StayFD _n_R_StrAdr = {&R_StrAdr,0,0,0,CLS_V,100,"R_StrAdr","Адрес прописки власника"};
pStayFD _R_StrAdr = &_n_R_StrAdr;

char R_StrNp[51];
StayFD _n_R_StrNp = {&R_StrNp,0,0,0,CLS_V,50,"R_StrNp","Назва насел. пункту"};
pStayFD _R_StrNp = &_n_R_StrNp;

char R_StrTel[8];
StayFD _n_R_StrTel = {&R_StrTel,0,0,0,CLS_V,7,"R_StrTel","Номер телефону"};
pStayFD _R_StrTel = &_n_R_StrTel;

extern StayDataset _n_B_ReestrLg;
extern StayDataset _n_B_KatPP;
extern StayDataset _n_B_PerP;
extern StayDataset _n_B_FamP;
extern StayDataset _n_B_FamLg;
extern StayDataset _n_B_LgP;
extern StayDataset _n_B_LgNacP;
extern StayDataset _n_B_LgPayDP;
extern StayDataset _n_B_DomP;
extern StayDataset _n_B_DomPar;
extern StayDataset _n_B_OsobAP;
extern StayDataset _n_S_AdrPrP;
extern StayDataset _n_S_Opic;
static pStayFD tcm_B_ReestrLg[] =
{
 (StayFD *)&_n_R_Pfx,
 (StayFD *)&_n_R_Nls,
 (StayFD *)&_n_R_Rcd,
 (StayFD *)&_n_R_KodAdr,
 (StayFD *)&_n_R_PrAdr,
 (StayFD *)&_n_R_CdNp,
 (StayFD *)&_n_R_CdObl,
 (StayFD *)&_n_R_CdRaj,
 (StayFD *)&_n_R_CdDepat,
 (StayFD *)&_n_R_CdUl,
 (StayFD *)&_n_R_NlsGot,
 (StayFD *)&_n_R_House,
 (StayFD *)&_n_R_Apt,
 (StayFD *)&_n_R_Build,
 (StayFD *)&_n_R_Opek,
 (StayFD *)&_n_R_Index,
 (StayFD *)&_n_R_DtBirth,
 (StayFD *)&_n_R_Name1,
 (StayFD *)&_n_R_Name2,
 (StayFD *)&_n_R_Name3,
 (StayFD *)&_n_R_NCardP,
 (StayFD *)&_n_R_NumTax,
 (StayFD *)&_n_R_StrTel,
 (StayFD *)&_n_R_CdInsp,
 (StayFD *)&_n_R_DtInsp,
 (StayFD *)&_n_R_DtUchB,
 (StayFD *)&_n_R_KatOsn,
 (StayFD *)&_n_R_KolKat,
 (StayFD *)&_n_R_PrTwo,
 (StayFD *)&_n_R_PrGot,
 (StayFD *)&_n_R_PensPosv,
 (StayFD *)&_n_R_DtPosv,
 (StayFD *)&_n_B_KatPP,
 (StayFD *)&_n_B_PerP,
 (StayFD *)&_n_B_FamP,
 (StayFD *)&_n_B_FamLg,
 (StayFD *)&_n_B_LgP,
 (StayFD *)&_n_B_DomP,
 (StayFD *)&_n_B_OsobAP,
 (StayFD *)&_n_S_AdrPrP,
 (StayFD *)&_n_S_Opic,
 NULL
};
static BYTE ix_B_ReestrLg[] = {6,1,66,0,1,2,65,10,3,67,145,10,146,5,147,5,4,65,3,5,1,20,6,65,21};
StayDataset _n_B_ReestrLg = {NULL,TAG_DATASET,0,0,DS_BBASE,0,1,0,NULL,tcm_B_ReestrLg,NULL,
           "REESTR:REESTRLG.DT",ix_B_ReestrLg,"База єдин.авт.реєстру осіб,які мають пр.на пільги","B_ReestrLg",16};
pStayDataset B_ReestrLg = &_n_B_ReestrLg;

static pStayFD tcm_B_KatPP[] =
{
 (StayFD *)&_n_KatP_Cd,
 (StayFD *)&_n_KatP_Dt,
 (StayFD *)&_n_KatP_Doc,
 (StayFD *)&_n_KatP_Dep,
 (StayFD *)&_n_KatP_Osn,
 (StayFD *)&_n_KatP_DtE,
 (StayFD *)&_n_KatP_Obn,
 NULL
};
static BYTE ix_B_KatPP[] = {1,1,2,0,1};
StayDataset _n_B_KatPP = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KatPP,NULL,
           NULL,ix_B_KatPP,"База даних категорій пільговиків","B_KatPP",};
pStayDataset B_KatPP = &_n_B_KatPP;

static pStayFD tcm_B_PerP[] =
{
 (StayFD *)&_n_PerP_Kat,
 (StayFD *)&_n_PerP_CdLg,
 (StayFD *)&_n_PerP_Dnpen,
 (StayFD *)&_n_PerP_Op,
 (StayFD *)&_n_PerP_Rnaz,
 (StayFD *)&_n_PerP_Prper,
 (StayFD *)&_n_PerP_Psn,
 (StayFD *)&_n_PerP_Kin,
 (StayFD *)&_n_PerP_Datin,
 NULL
};
static BYTE ix_B_PerP[] = {1,1,4,0,1,2,3};
StayDataset _n_B_PerP = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_PerP,NULL,
           NULL,ix_B_PerP,NULL,"B_PerP",};
pStayDataset B_PerP = &_n_B_PerP;

static pStayFD tcm_B_FamP[] =
{
 (StayFD *)&_n_Fam_NomF,
 (StayFD *)&_n_Fam_DtBirth,
 (StayFD *)&_n_Fam_CdRaj,
 (StayFD *)&_n_Fam_CdRelat,
 (StayFD *)&_n_Fam_FIO,
 (StayFD *)&_n_Fam_Pfx,
 (StayFD *)&_n_Fam_Ls,
 (StayFD *)&_n_Fam_NumTaxP,
 (StayFD *)&_n_Fam_Osob,
 (StayFD *)&_n_Fam_CdExit,
 (StayFD *)&_n_Fam_DtBeg,
 (StayFD *)&_n_Fam_DtExit,
 (StayFD *)&_n_Fam_Pasp,
 (StayFD *)&_n_Fam_DtPasp,
 (StayFD *)&_n_Fam_DepPasp,
 (StayFD *)&_n_Fam_NCard,
 (StayFD *)&_n_Fam_PrDee,
 (StayFD *)&_n_Fam_Order,
 (StayFD *)&_n_Fam_Pol,
 (StayFD *)&_n_Fam_PriznP,
 (StayFD *)&_n_Fam_NoServ,
 (StayFD *)&_n_Fam_Obn,
 NULL
};
static BYTE ix_B_FamP[] = {1,1,1,0};
StayDataset _n_B_FamP = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_FamP,NULL,
           NULL,ix_B_FamP,"База відомостей про родину","B_FamP",};
pStayDataset B_FamP = &_n_B_FamP;

static pStayFD tcm_B_FamLg[] =
{
 (StayFD *)&_n_Fam_KatP,
 (StayFD *)&_n_Fam_LgCode,
 (StayFD *)&_n_Fam_NFam,
 (StayFD *)&_n_Fam_DateB,
 (StayFD *)&_n_Fam_DateE,
 (StayFD *)&_n_Fam_Prizn,
 (StayFD *)&_n_Fam_Prizn2,
 NULL
};
static BYTE ix_B_FamLg[] = {1,1,4,0,1,2,3};
StayDataset _n_B_FamLg = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_FamLg,NULL,
           NULL,ix_B_FamLg,"База пільг для члена сімї","B_FamLg",};
pStayDataset B_FamLg = &_n_B_FamLg;

static pStayFD tcm_B_LgP[] =
{
 (StayFD *)&_n_Lg_CdKat,
 (StayFD *)&_n_Lg_Cd,
 (StayFD *)&_n_Lg_DtB,
 (StayFD *)&_n_Lg_DtE,
 (StayFD *)&_n_Lg_Stat,
 (StayFD *)&_n_Lg_Sum,
 (StayFD *)&_n_Lg_Kol,
 (StayFD *)&_n_Lg_Kod,
 (StayFD *)&_n_Lg_CdO,
 (StayFD *)&_n_Lg_NumTax,
 (StayFD *)&_n_Lg_NFam,
 (StayFD *)&_n_Lg_Prizn,
 (StayFD *)&_n_Lg_PaySpec,
 (StayFD *)&_n_Lg_PaySys,
 (StayFD *)&_n_Lg_PayDServCd,
 (StayFD *)&_n_Lg_CdPsn,
 (StayFD *)&_n_Lg_Obn,
 (StayFD *)&_n_Lg_CalcOrder,
 (StayFD *)&_n_B_LgNacP,
 (StayFD *)&_n_B_LgPayDP,
 NULL
};
static BYTE ix_B_LgP[] = {1,1,3,0,1,2};
StayDataset _n_B_LgP = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_LgP,NULL,
           NULL,ix_B_LgP,"База пільг","B_LgP",};
pStayDataset B_LgP = &_n_B_LgP;

static pStayFD tcm_B_LgNacP[] =
{
 (StayFD *)&_n_LgNac_GodIn,
 (StayFD *)&_n_LgNac_MecIn,
 (StayFD *)&_n_LgNac_God,
 (StayFD *)&_n_LgNac_Mec,
 (StayFD *)&_n_LgNac_Npp,
 (StayFD *)&_n_LgNac_Prizn,
 (StayFD *)&_n_LgNac_FactCost,
 (StayFD *)&_n_LgNac_FactType,
 (StayFD *)&_n_LgNac_Sum,
 (StayFD *)&_n_LgNac_Fact,
 (StayFD *)&_n_LgNac_SumAll,
 (StayFD *)&_n_LgNac_FactAll,
 (StayFD *)&_n_LgNac_SumFam,
 (StayFD *)&_n_LgNac_FactFam,
 (StayFD *)&_n_LgNac_KodZagr,
 (StayFD *)&_n_LgNac_KodP2,
 NULL
};
static BYTE ix_B_LgNacP[] = {1,1,4,0,1,2,3};
StayDataset _n_B_LgNacP = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_LgNacP,NULL,
           NULL,ix_B_LgNacP,"База нарахувань пільг","B_LgNacP",};
pStayDataset B_LgNacP = &_n_B_LgNacP;

static pStayFD tcm_B_LgPayDP[] =
{
 (StayFD *)&_n_PayD_GodIn,
 (StayFD *)&_n_PayD_MecIn,
 (StayFD *)&_n_PayD_God,
 (StayFD *)&_n_PayD_Mec,
 (StayFD *)&_n_PayD_Npp,
 (StayFD *)&_n_PayD_Prizn,
 (StayFD *)&_n_PayD_CodeTar,
 (StayFD *)&_n_PayD_Kfn,
 (StayFD *)&_n_PayD_Sum,
 (StayFD *)&_n_PayD_Fact,
 (StayFD *)&_n_PayD_SumAll,
 (StayFD *)&_n_PayD_FactAll,
 (StayFD *)&_n_PayD_SumFam,
 (StayFD *)&_n_PayD_FactFam,
 (StayFD *)&_n_PayD_TypeNorm,
 (StayFD *)&_n_PayD_KodZagr,
 (StayFD *)&_n_PayD_KodP2,
 NULL
};
static BYTE ix_B_LgPayDP[] = {1,1,4,0,1,2,3};
StayDataset _n_B_LgPayDP = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_LgPayDP,NULL,
           NULL,ix_B_LgPayDP,"База даних про надані послуги","B_LgPayDP",};
pStayDataset B_LgPayDP = &_n_B_LgPayDP;

static pStayFD tcm_B_DomP[] =
{
 (StayFD *)&_n_Dom_Cd,
 (StayFD *)&_n_Dom_CdVlad,
 (StayFD *)&_n_Dom_Etag,
 (StayFD *)&_n_Dom_EtagD,
 (StayFD *)&_n_Dom_Komn,
 (StayFD *)&_n_Dom_Squ,
 (StayFD *)&_n_Dom_sqSubs,
 (StayFD *)&_n_Dom_SquOpal,
 (StayFD *)&_n_Dom_TypeOpal,
 (StayFD *)&_n_B_DomPar,
 NULL
};
static BYTE ix_B_DomP[] = {1,1,1,0};
StayDataset _n_B_DomP = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_DomP,NULL,
           NULL,ix_B_DomP,"Відомості про житло","B_DomP",};
pStayDataset B_DomP = &_n_B_DomP;

static pStayFD tcm_B_DomPar[] =
{
 (StayFD *)&_n_DomPar_Cd,
 (StayFD *)&_n_DomPar_Pr,
 (StayFD *)&_n_DomPar_DtE,
 (StayFD *)&_n_DomPar_DtB,
 (StayFD *)&_n_DomPar_Znach,
 NULL
};
static BYTE ix_B_DomPar[] = {1,1,1,0};
StayDataset _n_B_DomPar = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_DomPar,NULL,
           NULL,ix_B_DomPar,"База характеристик житла","B_DomPar",};
pStayDataset B_DomPar = &_n_B_DomPar;

static pStayFD tcm_B_OsobAP[] =
{
 (StayFD *)&_n_OsobA_NFam,
 (StayFD *)&_n_OsobA_Code,
 (StayFD *)&_n_OsobA_DtBeg,
 (StayFD *)&_n_OsobA_DtEnd,
 (StayFD *)&_n_OsobA_CdExit,
 (StayFD *)&_n_OsobA_StrZnach,
 (StayFD *)&_n_OsobA_Pr,
 (StayFD *)&_n_OsobA_PrKol,
 (StayFD *)&_n_OsobA_Znach1,
 (StayFD *)&_n_OsobA_Znach2,
 NULL
};
static BYTE ix_B_OsobAP[] = {1,1,3,0,1,2};
StayDataset _n_B_OsobAP = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_OsobAP,NULL,
           NULL,ix_B_OsobAP,"База особливост.","B_OsobAP",};
pStayDataset B_OsobAP = &_n_B_OsobAP;

static pStayFD tcm_S_AdrPrP[] =
{
 (StayFD *)&_n_R_StrAdr,
 NULL
};
StayDataset _n_S_AdrPrP = {NULL,TAG_DATASET,0,0,DS_STRUCT,0,1,0,NULL,tcm_S_AdrPrP,NULL,
           NULL,NULL,"База даних про адресу проживання","S_AdrPrP",};
pStayDataset S_AdrPrP = &_n_S_AdrPrP;

static pStayFD tcm_S_Opic[] =
{
 (StayFD *)&_n_Opic_FIO,
 (StayFD *)&_n_Opic_Pasp,
 (StayFD *)&_n_Opic_NumTaxP,
 NULL
};
StayDataset _n_S_Opic = {NULL,TAG_DATASET,0,0,DS_STRUCT,0,1,0,NULL,tcm_S_Opic,NULL,
           NULL,NULL,"Відомості про опікуна","S_Opic",};
pStayDataset S_Opic = &_n_S_Opic;

void *NEW_REES[] =
 {NULL,
  &_nn_NEW_REES,
  &_n_DomPar_Cd,
  &_n_DomPar_DtB,
  &_n_DomPar_DtE,
  &_n_DomPar_Pr,
  &_n_DomPar_Znach,
  &_n_Dom_Cd,
  &_n_Dom_CdVlad,
  &_n_Dom_Etag,
  &_n_Dom_EtagD,
  &_n_Dom_Komn,
  &_n_Dom_Squ,
  &_n_Dom_SquOpal,
  &_n_Dom_TypeOpal,
  &_n_Dom_sqSubs,
  &_n_Fam_CdExit,
  &_n_Fam_CdRaj,
  &_n_Fam_CdRelat,
  &_n_Fam_DateB,
  &_n_Fam_DateE,
  &_n_Fam_DepPasp,
  &_n_Fam_DtBeg,
  &_n_Fam_DtBirth,
  &_n_Fam_DtExit,
  &_n_Fam_DtPasp,
  &_n_Fam_FIO,
  &_n_Fam_KatP,
  &_n_Fam_LgCode,
  &_n_Fam_Ls,
  &_n_Fam_NCard,
  &_n_Fam_NFam,
  &_n_Fam_NoServ,
  &_n_Fam_NomF,
  &_n_Fam_NumTaxP,
  &_n_Fam_Obn,
  &_n_Fam_Order,
  &_n_Fam_Osob,
  &_n_Fam_Pasp,
  &_n_Fam_Pfx,
  &_n_Fam_Pol,
  &_n_Fam_PrDee,
  &_n_Fam_Prizn,
  &_n_Fam_Prizn2,
  &_n_Fam_PriznP,
  &_n_KatP_Cd,
  &_n_KatP_Dep,
  &_n_KatP_Doc,
  &_n_KatP_Dt,
  &_n_KatP_DtE,
  &_n_KatP_Obn,
  &_n_KatP_Osn,
  &_n_LgNac_Fact,
  &_n_LgNac_FactAll,
  &_n_LgNac_FactCost,
  &_n_LgNac_FactFam,
  &_n_LgNac_FactType,
  &_n_LgNac_God,
  &_n_LgNac_GodIn,
  &_n_LgNac_KodP2,
  &_n_LgNac_KodZagr,
  &_n_LgNac_Mec,
  &_n_LgNac_MecIn,
  &_n_LgNac_Npp,
  &_n_LgNac_Prizn,
  &_n_LgNac_Sum,
  &_n_LgNac_SumAll,
  &_n_LgNac_SumFam,
  &_n_Lg_Cd,
  &_n_Lg_CdKat,
  &_n_Lg_CdO,
  &_n_Lg_CdPsn,
  &_n_Lg_DtB,
  &_n_Lg_DtE,
  &_n_Lg_Kod,
  &_n_Lg_Kol,
  &_n_Lg_NFam,
  &_n_Lg_NumTax,
  &_n_Lg_Obn,
  &_n_Lg_PayDServCd,
  &_n_Lg_PaySpec,
  &_n_Lg_PaySys,
  &_n_Lg_Prizn,
  &_n_Lg_CalcOrder,
  &_n_Lg_Stat,
  &_n_Lg_Sum,
  &_n_Lg_Type,
  &_n_Opic_FIO,
  &_n_Opic_NumTaxP,
  &_n_Opic_Pasp,
  &_n_OsobA_CdExit,
  &_n_OsobA_Code,
  &_n_OsobA_DtBeg,
  &_n_OsobA_DtEnd,
  &_n_OsobA_NFam,
  &_n_OsobA_Pr,
  &_n_OsobA_PrKol,
  &_n_OsobA_StrZnach,
  &_n_OsobA_Znach1,
  &_n_OsobA_Znach2,
  &_n_PayD_CodeTar,
  &_n_PayD_Fact,
  &_n_PayD_FactAll,
  &_n_PayD_God,
  &_n_PayD_GodIn,
  &_n_PayD_Kfn,
  &_n_PayD_KodP2,
  &_n_PayD_KodZagr,
  &_n_PayD_Mec,
  &_n_PayD_MecIn,
  &_n_PayD_Npp,
  &_n_PayD_Prizn,
  &_n_PayD_Sum,
  &_n_PayD_SumAll,
  &_n_PayD_SumFam,
  &_n_PayD_FactFam,
  &_n_PayD_TypeNorm,
  &_n_PerP_CdLg,
  &_n_PerP_Datin,
  &_n_PerP_Dnpen,
  &_n_PerP_Kat,
  &_n_PerP_Kin,
  &_n_PerP_Op,
  &_n_PerP_Prper,
  &_n_PerP_Psn,
  &_n_PerP_Rnaz,
  &_n_R_Apt,
  &_n_R_Build,
  &_n_R_CdDepat,
  &_n_R_CdInsp,
  &_n_R_CdNp,
  &_n_R_CdObl,
  &_n_R_CdRaj,
  &_n_R_CdUl,
  &_n_R_DepPasp,
  &_n_R_DtBirth,
  &_n_R_DtInsp,
  &_n_R_DtPosv,
  &_n_R_DtUchB,
  &_n_R_House,
  &_n_R_Index,
  &_n_R_KatOsn,
  &_n_R_KodAdr,
  &_n_R_KolKat,
  &_n_R_NCardP,
  &_n_R_Name1,
  &_n_R_Name2,
  &_n_R_Name3,
  &_n_R_Nls,
  &_n_R_NlsGot,
  &_n_R_Nomig,
  &_n_R_NumTax,
  &_n_R_Opek,
  &_n_R_PDtOblB,
  &_n_R_PensPosv,
  &_n_R_Pfx,
  &_n_R_PrAdr,
  &_n_R_PrGot,
  &_n_R_PrP,
  &_n_R_PrTwo,
  &_n_R_Rcd,
  &_n_R_StrAdr,
  &_n_R_StrNp,
  &_n_R_StrTel,
  (StayFD *)B_ReestrLg,
  (StayFD *)B_KatPP,
  (StayFD *)B_PerP,
  (StayFD *)B_FamP,
  (StayFD *)B_FamLg,
  (StayFD *)B_LgP,
  (StayFD *)B_LgNacP,
  (StayFD *)B_LgPayDP,
  (StayFD *)B_DomP,
  (StayFD *)B_DomPar,
  (StayFD *)B_OsobAP,
  (StayFD *)S_AdrPrP,
  (StayFD *)S_Opic,
  NULL};

PICMODULEEND(NEW_REES)

