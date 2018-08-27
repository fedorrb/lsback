/* Begin FCbegin */
//-------------------------------------------------------------------------
// STAY / W      Resource file LSEXT.XME
//-------------------------------------------------------------------------
// Created 16\08\2018 10:45
//-------------------------------------------------------------------------

#include "LSEXT.h"

/* End FCbegin */
/* Begin FCinclude */
/* End FCinclude */
/* Begin FChead */
PICMODULEBEG(LSEXT)

static StayFD _nn_LSEXT = {NULL,TAG_PIC,0,0,0,0,"LSEXT",NULL};
/* End FChead */
/* Begin FCtypedef */
/* End FCtypedef */
/* Begin FCfield */
DWORD LE_Nls;
StayFD _n_LE_Nls = {&LE_Nls,0,0,0,CLS_L,0,"LE_Nls","Номер О.Р. АСОПД"};
StayFD *_LE_Nls = &_n_LE_Nls;

STAYUI8 LE_PFUNls;
StayFD _n_LE_PFUNls = {&LE_PFUNls,0,0,0,CLS_G,0,"LE_PFUNls","Номер О.Р. ППВП"};
StayFD *_LE_PFUNls = &_n_LE_PFUNls;

STAYUI6 LE_Nomig;
StayFD _n_LE_Nomig = {&LE_Nomig,0,0,0,CLS_H,0,"LE_Nomig",""};
StayFD *_LE_Nomig = &_n_LE_Nomig;

STAYUI8 AdrE_PFUNls;
StayFD _n_AdrE_PFUNls = {&AdrE_PFUNls,0,0,0,CLS_G,0,"AdrE_PFUNls","Номер О.Р. ППВП"};
StayFD *_AdrE_PFUNls = &_n_AdrE_PFUNls;

STAYUI8 AdrE_Stlm;
StayFD _n_AdrE_Stlm = {&AdrE_Stlm,0,0,0,CLS_G,0,"AdrE_Stlm","ІД населеного пункту"};
StayFD *_AdrE_Stlm = &_n_AdrE_Stlm;

STAYUI8 AdrE_Ul;
StayFD _n_AdrE_Ul = {&AdrE_Ul,0,0,0,CLS_G,0,"AdrE_Ul","ІД вулиці"};
StayFD *_AdrE_Ul = &_n_AdrE_Ul;

char AdrE_Bld[11];
StayFD _n_AdrE_Bld = {&AdrE_Bld,0,0,0,CLS_V,10,"AdrE_Bld","Будинок"};
StayFD *_AdrE_Bld = &_n_AdrE_Bld;

char AdrE_Corp[11];
StayFD _n_AdrE_Corp = {&AdrE_Corp,0,0,0,CLS_V,10,"AdrE_Corp","Корпус"};
StayFD *_AdrE_Corp = &_n_AdrE_Corp;

char AdrE_App[11];
StayFD _n_AdrE_App = {&AdrE_App,0,0,0,CLS_V,10,"AdrE_App","Квартира"};
StayFD *_AdrE_App = &_n_AdrE_App;

char AdrE_Txt[251];
StayFD _n_AdrE_Txt = {&AdrE_Txt,0,0,0,CLS_V,250,"AdrE_Txt","Адреса у текстовому вигляді"};
StayFD *_AdrE_Txt = &_n_AdrE_Txt;

WORD  PdE_Num;
StayFD _n_PdE_Num = {&PdE_Num,0,0,0,CLS_I,0,"PdE_Num","номер кормильца"};
StayFD *_PdE_Num = &_n_PdE_Num;

char PdE_Fam[51];
StayFD _n_PdE_Fam = {&PdE_Fam,0,0,0,CLS_V,50,"PdE_Fam","Пр_звище"};
StayFD *_PdE_Fam = &_n_PdE_Fam;

char PdE_Name[51];
StayFD _n_PdE_Name = {&PdE_Name,0,0,0,CLS_V,50,"PdE_Name","_м\'я"};
StayFD *_PdE_Name = &_n_PdE_Name;

char PdE_Otch[51];
StayFD _n_PdE_Otch = {&PdE_Otch,0,0,0,CLS_V,50,"PdE_Otch","По-батьков_"};
StayFD *_PdE_Otch = &_n_PdE_Otch;

STAYUI6 PdE_IdCd;
StayFD _n_PdE_IdCd = {&PdE_IdCd,0,0,0,CLS_H,0,"PdE_IdCd","_дентиф_кац_йний номер пенс_онера"};
StayFD *_PdE_IdCd = &_n_PdE_IdCd;

StayDate ZrbsE_Dendz;
StayFD _n_ZrbsE_Dendz = {&ZrbsE_Dendz,0,0,0,CLS_Date,0,"ZrbsE_Dendz","Дата последнего заработка (кон"};
StayFD *_ZrbsE_Dendz = &_n_ZrbsE_Dendz;

BYTE  ZrbsE_Mes;
StayFD _n_ZrbsE_Mes = {&ZrbsE_Mes,0,0,0,CLS_S,0,"ZrbsE_Mes","Кол-во месяцев"};
StayFD *_ZrbsE_Mes = &_n_ZrbsE_Mes;

BYTE  ZrbsE_Nepol;
StayFD _n_ZrbsE_Nepol = {&ZrbsE_Nepol,0,0,0,CLS_S,0,"ZrbsE_Nepol","Вид заработка"};
StayFD *_ZrbsE_Nepol = &_n_ZrbsE_Nepol;

BYTE  ZrbsE_Nr;
StayFD _n_ZrbsE_Nr = {&ZrbsE_Nr,0,0,0,CLS_S,0,"ZrbsE_Nr","Номер родителя"};
StayFD *_ZrbsE_Nr = &_n_ZrbsE_Nr;

BYTE  ZrbsE_Nrs;
StayFD _n_ZrbsE_Nrs = {&ZrbsE_Nrs,0,0,0,CLS_S,0,"ZrbsE_Nrs","Номер расчета заработка"};
StayFD *_ZrbsE_Nrs = &_n_ZrbsE_Nrs;

STAYI6 ZrbsE_Zar;
StayFD _n_ZrbsE_Zar = {&ZrbsE_Zar,0,0,0,CLS_Hs,5,"ZrbsE_Zar","Среднемесячный заработок"};
StayFD *_ZrbsE_Zar = &_n_ZrbsE_Zar;

STAYI6 ZrbsE_Zregr;
StayFD _n_ZrbsE_Zregr = {&ZrbsE_Zregr,0,0,0,CLS_Hs,5,"ZrbsE_Zregr","Заработок для примен."};
StayFD *_ZrbsE_Zregr = &_n_ZrbsE_Zregr;

StayDate ZrbsE_DateVZ;
StayFD _n_ZrbsE_DateVZ = {&ZrbsE_DateVZ,0,0,0,CLS_Date,0,"ZrbsE_DateVZ","Дата внесення заробітку"};
StayFD *_ZrbsE_DateVZ = &_n_ZrbsE_DateVZ;

STAYI6 ZrbsE_SRNX;
StayFD _n_ZrbsE_SRNX = {&ZrbsE_SRNX,0,0,0,CLS_Hs,5,"ZrbsE_SRNX","середній заробіток"};
StayFD *_ZrbsE_SRNX = &_n_ZrbsE_SRNX;

DWORD ZrbsE_GdSRNX;
StayFD _n_ZrbsE_GdSRNX = {&ZrbsE_GdSRNX,0,0,0,CLS_L,0,"ZrbsE_GdSRNX","Рік середньої"};
StayFD *_ZrbsE_GdSRNX = &_n_ZrbsE_GdSRNX;

StayDate ZrbsE_MaxDOpt;
StayFD _n_ZrbsE_MaxDOpt = {&ZrbsE_MaxDOpt,0,0,0,CLS_Date,0,"ZrbsE_MaxDOpt","Максимальна дата для оптимізації"};
StayFD *_ZrbsE_MaxDOpt = &_n_ZrbsE_MaxDOpt;

STAYI6 ZrbsE_SKfDoOp;
StayFD _n_ZrbsE_SKfDoOp = {&ZrbsE_SKfDoOp,0,0,0,CLS_Hs,5,"ZrbsE_SKfDoOp","Сума кофіц. до оптимізації"};
StayFD *_ZrbsE_SKfDoOp = &_n_ZrbsE_SKfDoOp;

DWORD ZrbsE_NMsDoOp;
StayFD _n_ZrbsE_NMsDoOp = {&ZrbsE_NMsDoOp,0,0,0,CLS_L,0,"ZrbsE_NMsDoOp","Кількість місяців до оптимізації"};
StayFD *_ZrbsE_NMsDoOp = &_n_ZrbsE_NMsDoOp;

STAYI6 ZrbsE_SKfRas;
StayFD _n_ZrbsE_SKfRas = {&ZrbsE_SKfRas,0,0,0,CLS_Hs,5,"ZrbsE_SKfRas","Сума коеф. після оптимізації"};
StayFD *_ZrbsE_SKfRas = &_n_ZrbsE_SKfRas;

DWORD ZrbsE_NMsRas;
StayFD _n_ZrbsE_NMsRas = {&ZrbsE_NMsRas,0,0,0,CLS_L,0,"ZrbsE_NMsRas","кількість місяців після оптимізації"};
StayFD *_ZrbsE_NMsRas = &_n_ZrbsE_NMsRas;

DWORD ZrbsE_NMesNep;
StayFD _n_ZrbsE_NMesNep = {&ZrbsE_NMesNep,0,0,0,CLS_L,0,"ZrbsE_NMesNep","кількість неповних місяців"};
StayFD *_ZrbsE_NMesNep = &_n_ZrbsE_NMesNep;

STAYI6 ZrbsE_ZAR1SKL;
StayFD _n_ZrbsE_ZAR1SKL = {&ZrbsE_ZAR1SKL,0,0,0,CLS_Hs,5,"ZrbsE_ZAR1SKL","Заробіток по першій складовій"};
StayFD *_ZrbsE_ZAR1SKL = &_n_ZrbsE_ZAR1SKL;

STAYI6 ZrbsE_ZAR2SKL;
StayFD _n_ZrbsE_ZAR2SKL = {&ZrbsE_ZAR2SKL,0,0,0,CLS_Hs,5,"ZrbsE_ZAR2SKL","Середньмісячний заробіток для обчислення"};
StayFD *_ZrbsE_ZAR2SKL = &_n_ZrbsE_ZAR2SKL;

DWORD ZrbsE_PRC1SKL;
StayFD _n_ZrbsE_PRC1SKL = {&ZrbsE_PRC1SKL,0,0,0,CLS_L,0,"ZrbsE_PRC1SKL","Загальний відсоток розрах пенсії від заробітку"};
StayFD *_ZrbsE_PRC1SKL = &_n_ZrbsE_PRC1SKL;

STAYI6 ZrbsE_OSN1SKL;
StayFD _n_ZrbsE_OSN1SKL = {&ZrbsE_OSN1SKL,0,0,0,CLS_Hs,5,"ZrbsE_OSN1SKL","Основний розмір пенсії від середнього заробітку"};
StayFD *_ZrbsE_OSN1SKL = &_n_ZrbsE_OSN1SKL;

DWORD T1;
StayFD _n_T1 = {&T1,0,0,0,CLS_L,0,"T1","Номер утриманця"};
StayFD *_T1 = &_n_T1;

DWORD T2;
StayFD _n_T2 = {&T2,0,0,0,CLS_L,0,"T2","Номер годувальника"};
StayFD *_T2 = &_n_T2;

DWORD T3;
StayFD _n_T3 = {&T3,0,0,0,CLS_L,0,"T3","Вид розрахунку"};
StayFD *_T3 = &_n_T3;

STAYI6 T4;
StayFD _n_T4 = {&T4,0,0,0,CLS_Hs,5,"T4","Коефіцієнт стажу"};
StayFD *_T4 = &_n_T4;

STAYI6 T5;
StayFD _n_T5 = {&T5,0,0,0,CLS_Hs,5,"T5","Коефіцієнт заробітної плати"};
StayFD *_T5 = &_n_T5;

BYTE  T6;
StayFD _n_T6 = {&T6,0,0,0,CLS_S,0,"T6","Неповний стаж"};
StayFD *_T6 = &_n_T6;

DWORD T7;
StayFD _n_T7 = {&T7,0,0,0,CLS_L,0,"T7","Рік показника середньорічного розміру заробітної плати"};
StayFD *_T7 = &_n_T7;

DWORD T8;
StayFD _n_T8 = {&T8,0,0,0,CLS_L,0,"T8","Рік показника середньорічного розміру заробітної плати для спецпенсій"};
StayFD *_T8 = &_n_T8;

STAYI6 T9;
StayFD _n_T9 = {&T9,0,0,0,CLS_Hs,5,"T9","Розмір прожиткового мінімуму для розрахунку"};
StayFD *_T9 = &_n_T9;

WORD  T10;
StayFD _n_T10 = {&T10,0,0,0,CLS_I,0,"T10","Кількість понаднормативних років"};
StayFD *_T10 = &_n_T10;

WORD  T11;
StayFD _n_T11 = {&T11,0,0,0,CLS_I,0,"T11","Відсот розрах пенс за віком інв"};
StayFD *_T11 = &_n_T11;

STAYI6 T12;
StayFD _n_T12 = {&T12,0,0,0,CLS_Hs,5,"T12","Відсот розрах пенс за віком помер годув"};
StayFD *_T12 = &_n_T12;

WORD  T13;
StayFD _n_T13 = {&T13,0,0,0,CLS_I,0,"T13","Вид заробітку"};
StayFD *_T13 = &_n_T13;

StayDate T14;
StayFD _n_T14 = {&T14,0,0,0,CLS_Date,0,"T14","Дата вводу коригування заробітку"};
StayFD *_T14 = &_n_T14;

BYTE  T15;
StayFD _n_T15 = {&T15,0,0,0,CLS_S,0,"T15","Ознака оптимізації по методиці з 01.07.2013 року"};
StayFD *_T15 = &_n_T15;

DWORD T16;
StayFD _n_T16 = {&T16,0,0,0,CLS_L,0,"T16","Рік середн зарпл для розрах заробітків для обчислення"};
StayFD *_T16 = &_n_T16;

StayDate T17;
StayFD _n_T17 = {&T17,0,0,0,CLS_Date,0,"T17","Максимальна дата оптимізації заробітку"};
StayFD *_T17 = &_n_T17;

DWORD T18;
StayFD _n_T18 = {&T18,0,0,0,CLS_L,0,"T18","Кількість місяців розрахунку зарплати до оптимізації"};
StayFD *_T18 = &_n_T18;

STAYI6 T19;
StayFD _n_T19 = {&T19,0,0,0,CLS_Hs,5,"T19","Сума коефіцієнтів зарплати до оптимізації"};
StayFD *_T19 = &_n_T19;

STAYI6 T20;
StayFD _n_T20 = {&T20,0,0,0,CLS_Hs,5,"T20","Індивідуальний коефіцієнт заплати до оптимізації"};
StayFD *_T20 = &_n_T20;

DWORD T21;
StayFD _n_T21 = {&T21,0,0,0,CLS_L,0,"T21","Кількість місяців розрахунку зарплати після оптимізації"};
StayFD *_T21 = &_n_T21;

STAYI6 T22;
StayFD _n_T22 = {&T22,0,0,0,CLS_Hs,5,"T22","Індивідуальний коефіцієнт заплати після оптимізації"};
StayFD *_T22 = &_n_T22;

STAYI6 T23;
StayFD _n_T23 = {&T23,0,0,0,CLS_Hs,5,"T23","Сума коефіцієнтів зарплати після оптимізації"};
StayFD *_T23 = &_n_T23;

StayDate T24;
StayFD _n_T24 = {&T24,0,0,0,CLS_Date,0,"T24","Перший період оптимізації початок"};
StayFD *_T24 = &_n_T24;

StayDate T25;
StayFD _n_T25 = {&T25,0,0,0,CLS_Date,0,"T25","Перший період оптимізації кінець"};
StayFD *_T25 = &_n_T25;

DWORD T26;
StayFD _n_T26 = {&T26,0,0,0,CLS_L,0,"T26","Перший період оптимізації кількість місяців"};
StayFD *_T26 = &_n_T26;

StayDate T27;
StayFD _n_T27 = {&T27,0,0,0,CLS_Date,0,"T27","Другий період оптимізації початок"};
StayFD *_T27 = &_n_T27;

StayDate T28;
StayFD _n_T28 = {&T28,0,0,0,CLS_Date,0,"T28","Другий період оптимізації кінець"};
StayFD *_T28 = &_n_T28;

DWORD T29;
StayFD _n_T29 = {&T29,0,0,0,CLS_L,0,"T29","Другий період оптимізації кількість місяців"};
StayFD *_T29 = &_n_T29;

DWORD T30;
StayFD _n_T30 = {&T30,0,0,0,CLS_L,0,"T30","Вилучено додаткових місяців"};
StayFD *_T30 = &_n_T30;

DWORD T31;
StayFD _n_T31 = {&T31,0,0,0,CLS_L,0,"T31","Вилучено місяців по безробіттю"};
StayFD *_T31 = &_n_T31;

DWORD T32;
StayFD _n_T32 = {&T32,0,0,0,CLS_L,0,"T32","Кількість неоптимізованих неповних місяців"};
StayFD *_T32 = &_n_T32;

DWORD T33;
StayFD _n_T33 = {&T33,0,0,0,CLS_L,0,"T33","Кількість неопт непов міс для розрах коеф заробітку"};
StayFD *_T33 = &_n_T33;

DWORD T34;
StayFD _n_T34 = {&T34,0,0,0,CLS_L,0,"T34","Кількість днів неоптимізованих неповних місяців"};
StayFD *_T34 = &_n_T34;

STAYI6 T35;
StayFD _n_T35 = {&T35,0,0,0,CLS_Hs,5,"T35","Індивідуальний коефіцієнт зарплати після оптимізації"};
StayFD *_T35 = &_n_T35;

STAYI6 T36;
StayFD _n_T36 = {&T36,0,0,0,CLS_Hs,5,"T36","Сума коефіцієнтів зарплати(для двоскладової)"};
StayFD *_T36 = &_n_T36;

STAYI6 T37;
StayFD _n_T37 = {&T37,0,0,0,CLS_Hs,5,"T37","Індивідуальний коефіцієнт зарплати(для двосладової)"};
StayFD *_T37 = &_n_T37;

STAYI6 T38;
StayFD _n_T38 = {&T38,0,0,0,CLS_Hs,5,"T38","Середньомісячний заробіток для обчислення(для двоскладової)"};
StayFD *_T38 = &_n_T38;

STAYI6 T39;
StayFD _n_T39 = {&T39,0,0,0,CLS_Hs,5,"T39","Кількість місяців зарплати"};
StayFD *_T39 = &_n_T39;

STAYI6 T40;
StayFD _n_T40 = {&T40,0,0,0,CLS_Hs,5,"T40","Сума зарплати"};
StayFD *_T40 = &_n_T40;

DWORD T41;
StayFD _n_T41 = {&T41,0,0,0,CLS_L,0,"T41","Додатк стаж для оптим(по інвалідності та втраті годувальника), міс"};
StayFD *_T41 = &_n_T41;

DWORD T42;
StayFD _n_T42 = {&T42,0,0,0,CLS_L,0,"T42","Стаж для оптимізації, міс"};
StayFD *_T42 = &_n_T42;

BYTE  T43;
StayFD _n_T43 = {&T43,0,0,0,CLS_S,0,"T43",""};
StayFD *_T43 = &_n_T43;

BYTE  T44;
StayFD _n_T44 = {&T44,0,0,0,CLS_S,0,"T44",""};
StayFD *_T44 = &_n_T44;

WORD  IgdE_Num;
StayFD _n_IgdE_Num = {&IgdE_Num,0,0,0,CLS_I,0,"IgdE_Num",""};
StayFD *_IgdE_Num = &_n_IgdE_Num;

STAYUI8 IgdE_Nomig;
StayFD _n_IgdE_Nomig = {&IgdE_Nomig,0,0,0,CLS_G,0,"IgdE_Nomig",""};
StayFD *_IgdE_Nomig = &_n_IgdE_Nomig;

WORD  KorE_Num;
StayFD _n_KorE_Num = {&KorE_Num,0,0,0,CLS_I,0,"KorE_Num",""};
StayFD *_KorE_Num = &_n_KorE_Num;

STAYUI8 KorE_Nomig;
StayFD _n_KorE_Nomig = {&KorE_Nomig,0,0,0,CLS_G,0,"KorE_Nomig",""};
StayFD *_KorE_Nomig = &_n_KorE_Nomig;

DWORD Ext_Code;
StayFD _n_Ext_Code = {&Ext_Code,0,0,0,CLS_L,0,"Ext_Code",""};
StayFD *_Ext_Code = &_n_Ext_Code;

StayDate Ext_Date1;
StayFD _n_Ext_Date1 = {&Ext_Date1,0,0,0,CLS_Date,0,"Ext_Date1",""};
StayFD *_Ext_Date1 = &_n_Ext_Date1;

StayDate Ext_Date2;
StayFD _n_Ext_Date2 = {&Ext_Date2,0,0,0,CLS_Date,0,"Ext_Date2",""};
StayFD *_Ext_Date2 = &_n_Ext_Date2;

STAYI6 Ext_Value1;
StayFD _n_Ext_Value1 = {&Ext_Value1,0,0,0,CLS_Hs,5,"Ext_Value1",""};
StayFD *_Ext_Value1 = &_n_Ext_Value1;

STAYI6 Ext_Value2;
StayFD _n_Ext_Value2 = {&Ext_Value2,0,0,0,CLS_Hs,5,"Ext_Value2",""};
StayFD *_Ext_Value2 = &_n_Ext_Value2;

char Ext_Str[101];
StayFD _n_Ext_Str = {&Ext_Str,0,0,0,CLS_V,100,"Ext_Str",""};
StayFD *_Ext_Str = &_n_Ext_Str;

WORD  StgpE_nomig;
StayFD _n_StgpE_nomig = {&StgpE_nomig,0,0,0,CLS_I,0,"StgpE_nomig","Розширений масив даних про стаж"};
StayFD *_StgpE_nomig = &_n_StgpE_nomig;

StayDate StgpE_dbeg;
StayFD _n_StgpE_dbeg = {&StgpE_dbeg,0,0,0,CLS_Date,0,"StgpE_dbeg",""};
StayFD *_StgpE_dbeg = &_n_StgpE_dbeg;

StayDate StgpE_dend;
StayFD _n_StgpE_dend = {&StgpE_dend,0,0,0,CLS_Date,0,"StgpE_dend",""};
StayFD *_StgpE_dend = &_n_StgpE_dend;

WORD  StgpE_gg_t;
StayFD _n_StgpE_gg_t = {&StgpE_gg_t,0,0,0,CLS_I,0,"StgpE_gg_t","Кількість років трудового"};
StayFD *_StgpE_gg_t = &_n_StgpE_gg_t;

WORD  StgpE_mm_t;
StayFD _n_StgpE_mm_t = {&StgpE_mm_t,0,0,0,CLS_I,0,"StgpE_mm_t","Кількість місяців трудового"};
StayFD *_StgpE_mm_t = &_n_StgpE_mm_t;

WORD  StgpE_dd_t;
StayFD _n_StgpE_dd_t = {&StgpE_dd_t,0,0,0,CLS_I,0,"StgpE_dd_t","Кількість днів трудового"};
StayFD *_StgpE_dd_t = &_n_StgpE_dd_t;

WORD  StgpE_gg_k;
StayFD _n_StgpE_gg_k = {&StgpE_gg_k,0,0,0,CLS_I,0,"StgpE_gg_k","Кількість років з кратністю"};
StayFD *_StgpE_gg_k = &_n_StgpE_gg_k;

WORD  StgpE_mm_k;
StayFD _n_StgpE_mm_k = {&StgpE_mm_k,0,0,0,CLS_I,0,"StgpE_mm_k","Кількість місяців з кратністю"};
StayFD *_StgpE_mm_k = &_n_StgpE_mm_k;

WORD  StgpE_dd_k;
StayFD _n_StgpE_dd_k = {&StgpE_dd_k,0,0,0,CLS_I,0,"StgpE_dd_k","Кількість днів з кратністю"};
StayFD *_StgpE_dd_k = &_n_StgpE_dd_k;

WORD  StgE_Kods;
StayFD _n_StgE_Kods = {&StgE_Kods,0,0,0,CLS_I,0,"StgE_Kods","Код стажа (KLStg)"};
StayFD *_StgE_Kods = &_n_StgE_Kods;

WORD  StgE_gg_t;
StayFD _n_StgE_gg_t = {&StgE_gg_t,0,0,0,CLS_I,0,"StgE_gg_t","Кількість років трудового"};
StayFD *_StgE_gg_t = &_n_StgE_gg_t;

WORD  StgE_mm_t;
StayFD _n_StgE_mm_t = {&StgE_mm_t,0,0,0,CLS_I,0,"StgE_mm_t","Кількість місяців трудового"};
StayFD *_StgE_mm_t = &_n_StgE_mm_t;

WORD  StgE_dd_t;
StayFD _n_StgE_dd_t = {&StgE_dd_t,0,0,0,CLS_I,0,"StgE_dd_t","Кількість днів трудового"};
StayFD *_StgE_dd_t = &_n_StgE_dd_t;

WORD  StgE_gg_k;
StayFD _n_StgE_gg_k = {&StgE_gg_k,0,0,0,CLS_I,0,"StgE_gg_k","Кількість років з кратністю"};
StayFD *_StgE_gg_k = &_n_StgE_gg_k;

WORD  StgE_mm_k;
StayFD _n_StgE_mm_k = {&StgE_mm_k,0,0,0,CLS_I,0,"StgE_mm_k","Кількість місяців з кратністю"};
StayFD *_StgE_mm_k = &_n_StgE_mm_k;

WORD  StgE_dd_k;
StayFD _n_StgE_dd_k = {&StgE_dd_k,0,0,0,CLS_I,0,"StgE_dd_k","Кількість днів з кратністю"};
StayFD *_StgE_dd_k = &_n_StgE_dd_k;

STAYUI6 IgdE_ID;
StayFD _n_IgdE_ID = {&IgdE_ID,0,0,0,CLS_H,0,"IgdE_ID",""};
StayFD *_IgdE_ID = &_n_IgdE_ID;

STAYUI6 KorE_ID;
StayFD _n_KorE_ID = {&KorE_ID,0,0,0,CLS_H,0,"KorE_ID",""};
StayFD *_KorE_ID = &_n_KorE_ID;

/* End FCfield */
/* Begin FCextern */
extern StayDataset _n_B_LSExt;
extern StayDataset _n_B_AdrE;
extern StayDataset _n_B_StgpE;
extern StayDataset _n_B_ZrbsE;
extern StayDataset _n_B_TotalE;
extern StayDataset _n_B_PdE;
extern StayDataset _n_B_IgdE;
extern StayDataset _n_B_KorE;
extern StayDataset _n_B_Extra;
/* End FCextern */
/* Begin FCdataset */
static StayFD *tcm_B_LSExt[] =
{
 (StayFD *)&_n_LE_Nls,
 (StayFD *)&_n_LE_PFUNls,
 (StayFD *)&_n_LE_Nomig,
 (StayFD *)&_n_B_AdrE,
 (StayFD *)&_n_B_StgpE,
 (StayFD *)&_n_B_ZrbsE,
 (StayFD *)&_n_B_TotalE,
 (StayFD *)&_n_B_PdE,
 (StayFD *)&_n_B_IgdE,
 (StayFD *)&_n_B_KorE,
 (StayFD *)&_n_B_Extra,
 NULL
};
static BYTE ix_B_LSExt[] = {3,1,1,0,2,1,1,3,1,2};
StayDataset _n_B_LSExt = {NULL,TAG_DATASET,0,0,DS_BBASE,0,1,0,NULL,tcm_B_LSExt,NULL,
"LS:LSEXT.DT",ix_B_LSExt,NULL,"B_LSExt",0};
StayDataset *B_LSExt = &_n_B_LSExt;

static StayFD *tcm_B_AdrE[] =
{
 (StayFD *)&_n_AdrE_PFUNls,
 (StayFD *)&_n_AdrE_Stlm,
 (StayFD *)&_n_AdrE_Ul,
 (StayFD *)&_n_AdrE_Bld,
 (StayFD *)&_n_AdrE_Corp,
 (StayFD *)&_n_AdrE_App,
 (StayFD *)&_n_AdrE_Txt,
 NULL
};
static BYTE ix_B_AdrE[] = {1,1,1,0};
StayDataset _n_B_AdrE = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_AdrE,NULL,
NULL,ix_B_AdrE,"Адреса ППВП","B_AdrE",0};
StayDataset *B_AdrE = &_n_B_AdrE;

static StayFD *tcm_B_StgpE[] =
{
 (StayFD *)&_n_StgpE_nomig,
 (StayFD *)&_n_StgpE_dbeg,
 (StayFD *)&_n_StgpE_dend,
 (StayFD *)&_n_StgpE_gg_t,
 (StayFD *)&_n_StgpE_mm_t,
 (StayFD *)&_n_StgpE_dd_t,
 (StayFD *)&_n_StgpE_gg_k,
 (StayFD *)&_n_StgpE_mm_k,
 (StayFD *)&_n_StgpE_dd_k,
 NULL
};
static BYTE ix_B_StgpE[] = {1,1,3,0,1,2};
StayDataset _n_B_StgpE = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_StgpE,NULL,
NULL,ix_B_StgpE,"Масив додаткових даних про стаж","B_StgpE",0};
StayDataset *B_StgpE = &_n_B_StgpE;

static StayFD *tcm_B_ZrbsE[] =
{
 (StayFD *)&_n_ZrbsE_Nr,
 (StayFD *)&_n_ZrbsE_Nrs,
 (StayFD *)&_n_ZrbsE_Zregr,
 (StayFD *)&_n_ZrbsE_Zar,
 (StayFD *)&_n_ZrbsE_Dendz,
 (StayFD *)&_n_ZrbsE_Mes,
 (StayFD *)&_n_ZrbsE_Nepol,
 (StayFD *)&_n_ZrbsE_DateVZ,
 (StayFD *)&_n_ZrbsE_SRNX,
 (StayFD *)&_n_ZrbsE_GdSRNX,
 (StayFD *)&_n_ZrbsE_MaxDOpt,
 (StayFD *)&_n_ZrbsE_SKfDoOp,
 (StayFD *)&_n_ZrbsE_NMsDoOp,
 (StayFD *)&_n_ZrbsE_SKfRas,
 (StayFD *)&_n_ZrbsE_NMsRas,
 (StayFD *)&_n_ZrbsE_NMesNep,
 (StayFD *)&_n_ZrbsE_ZAR1SKL,
 (StayFD *)&_n_ZrbsE_ZAR2SKL,
 (StayFD *)&_n_ZrbsE_PRC1SKL,
 (StayFD *)&_n_ZrbsE_OSN1SKL,
 NULL
};
static BYTE ix_B_ZrbsE[] = {1,1,2,0,1};
StayDataset _n_B_ZrbsE = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_ZrbsE,NULL,
NULL,ix_B_ZrbsE,"Масив зведених даних про заробітки","B_ZrbsE",0};
StayDataset *B_ZrbsE = &_n_B_ZrbsE;

static StayFD *tcm_B_TotalE[] =
{
 (StayFD *)&_n_T1,
 (StayFD *)&_n_T2,
 (StayFD *)&_n_T3,
 (StayFD *)&_n_T4,
 (StayFD *)&_n_T5,
 (StayFD *)&_n_T6,
 (StayFD *)&_n_T7,
 (StayFD *)&_n_T8,
 (StayFD *)&_n_T9,
 (StayFD *)&_n_T10,
 (StayFD *)&_n_T11,
 (StayFD *)&_n_T12,
 (StayFD *)&_n_T13,
 (StayFD *)&_n_T14,
 (StayFD *)&_n_T15,
 (StayFD *)&_n_T16,
 (StayFD *)&_n_T17,
 (StayFD *)&_n_T18,
 (StayFD *)&_n_T19,
 (StayFD *)&_n_T20,
 (StayFD *)&_n_T21,
 (StayFD *)&_n_T22,
 (StayFD *)&_n_T23,
 (StayFD *)&_n_T24,
 (StayFD *)&_n_T25,
 (StayFD *)&_n_T26,
 (StayFD *)&_n_T27,
 (StayFD *)&_n_T28,
 (StayFD *)&_n_T29,
 (StayFD *)&_n_T30,
 (StayFD *)&_n_T31,
 (StayFD *)&_n_T32,
 (StayFD *)&_n_T33,
 (StayFD *)&_n_T34,
 (StayFD *)&_n_T35,
 (StayFD *)&_n_T36,
 (StayFD *)&_n_T37,
 (StayFD *)&_n_T38,
 (StayFD *)&_n_T39,
 (StayFD *)&_n_T40,
 (StayFD *)&_n_T41,
 (StayFD *)&_n_T42,
 (StayFD *)&_n_T43,
 (StayFD *)&_n_T44,
 NULL
};
static BYTE ix_B_TotalE[] = {1,1,2,0,1};
StayDataset _n_B_TotalE = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_TotalE,NULL,
NULL,ix_B_TotalE,NULL,"B_TotalE",0};
StayDataset *B_TotalE = &_n_B_TotalE;

static StayFD *tcm_B_PdE[] =
{
 (StayFD *)&_n_PdE_Num,
 (StayFD *)&_n_PdE_Fam,
 (StayFD *)&_n_PdE_Name,
 (StayFD *)&_n_PdE_Otch,
 (StayFD *)&_n_PdE_IdCd,
 NULL
};
static BYTE ix_B_PdE[] = {1,1,1,0};
StayDataset _n_B_PdE = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_PdE,NULL,
NULL,ix_B_PdE,"База подопечных","B_PdE",0};
StayDataset *B_PdE = &_n_B_PdE;

static StayFD *tcm_B_IgdE[] =
{
 (StayFD *)&_n_IgdE_Num,
 (StayFD *)&_n_IgdE_Nomig,
 (StayFD *)&_n_IgdE_ID,
 NULL
};
static BYTE ix_B_IgdE[] = {2,1,1,0,2,1,1};
StayDataset _n_B_IgdE = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_IgdE,NULL,
NULL,ix_B_IgdE,NULL,"B_IgdE",0};
StayDataset *B_IgdE = &_n_B_IgdE;

static StayFD *tcm_B_KorE[] =
{
 (StayFD *)&_n_KorE_Num,
 (StayFD *)&_n_KorE_Nomig,
 (StayFD *)&_n_KorE_ID,
 NULL
};
static BYTE ix_B_KorE[] = {2,1,1,0,2,1,1};
StayDataset _n_B_KorE = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_KorE,NULL,
NULL,ix_B_KorE,NULL,"B_KorE",0};
StayDataset *B_KorE = &_n_B_KorE;

static StayFD *tcm_B_Extra[] =
{
 (StayFD *)&_n_Ext_Code,
 (StayFD *)&_n_Ext_Date1,
 (StayFD *)&_n_Ext_Date2,
 (StayFD *)&_n_Ext_Value1,
 (StayFD *)&_n_Ext_Value2,
 (StayFD *)&_n_Ext_Str,
 NULL
};
static BYTE ix_B_Extra[] = {1,1,1,0};
StayDataset _n_B_Extra = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_Extra,NULL,
NULL,ix_B_Extra,NULL,"B_Extra",0};
StayDataset *B_Extra = &_n_B_Extra;

/* End FCdataset */
/* Begin FCmenu */
/* End FCmenu */
/* Begin FCframe */
/* End FCframe */
/* Begin FCtabl */
void *LSEXT[] =
 {NULL,
  &_nn_LSEXT,
  &_n_LE_Nls,
  &_n_LE_PFUNls,
  &_n_LE_Nomig,
  &_n_AdrE_PFUNls,
  &_n_AdrE_Stlm,
  &_n_AdrE_Ul,
  &_n_AdrE_Bld,
  &_n_AdrE_Corp,
  &_n_AdrE_App,
  &_n_AdrE_Txt,
  &_n_PdE_Num,
  &_n_PdE_Fam,
  &_n_PdE_Name,
  &_n_PdE_Otch,
  &_n_PdE_IdCd,
  &_n_ZrbsE_Dendz,
  &_n_ZrbsE_Mes,
  &_n_ZrbsE_Nepol,
  &_n_ZrbsE_Nr,
  &_n_ZrbsE_Nrs,
  &_n_ZrbsE_Zar,
  &_n_ZrbsE_Zregr,
  &_n_ZrbsE_DateVZ,
  &_n_ZrbsE_SRNX,
  &_n_ZrbsE_GdSRNX,
  &_n_ZrbsE_MaxDOpt,
  &_n_ZrbsE_SKfDoOp,
  &_n_ZrbsE_NMsDoOp,
  &_n_ZrbsE_SKfRas,
  &_n_ZrbsE_NMsRas,
  &_n_ZrbsE_NMesNep,
  &_n_ZrbsE_ZAR1SKL,
  &_n_ZrbsE_ZAR2SKL,
  &_n_ZrbsE_PRC1SKL,
  &_n_ZrbsE_OSN1SKL,
  &_n_T1,
  &_n_T2,
  &_n_T3,
  &_n_T4,
  &_n_T5,
  &_n_T6,
  &_n_T7,
  &_n_T8,
  &_n_T9,
  &_n_T10,
  &_n_T11,
  &_n_T12,
  &_n_T13,
  &_n_T14,
  &_n_T15,
  &_n_T16,
  &_n_T17,
  &_n_T18,
  &_n_T19,
  &_n_T20,
  &_n_T21,
  &_n_T22,
  &_n_T23,
  &_n_T24,
  &_n_T25,
  &_n_T26,
  &_n_T27,
  &_n_T28,
  &_n_T29,
  &_n_T30,
  &_n_T31,
  &_n_T32,
  &_n_T33,
  &_n_T34,
  &_n_T35,
  &_n_T36,
  &_n_T37,
  &_n_T38,
  &_n_T39,
  &_n_T40,
  &_n_T41,
  &_n_T42,
  &_n_T43,
  &_n_T44,
  &_n_IgdE_Num,
  &_n_IgdE_Nomig,
  &_n_KorE_Num,
  &_n_KorE_Nomig,
  &_n_Ext_Code,
  &_n_Ext_Date1,
  &_n_Ext_Date2,
  &_n_Ext_Value1,
  &_n_Ext_Value2,
  &_n_Ext_Str,
  &_n_StgpE_nomig,
  &_n_StgpE_dbeg,
  &_n_StgpE_dend,
  &_n_StgpE_gg_t,
  &_n_StgpE_mm_t,
  &_n_StgpE_dd_t,
  &_n_StgpE_gg_k,
  &_n_StgpE_mm_k,
  &_n_StgpE_dd_k,
  &_n_StgE_Kods,
  &_n_StgE_gg_t,
  &_n_StgE_mm_t,
  &_n_StgE_dd_t,
  &_n_StgE_gg_k,
  &_n_StgE_mm_k,
  &_n_StgE_dd_k,
  &_n_IgdE_ID,
  &_n_KorE_ID,
  (StayFD *)B_LSExt,
  (StayFD *)B_AdrE,
  (StayFD *)B_StgpE,
  (StayFD *)B_ZrbsE,
  (StayFD *)B_TotalE,
  (StayFD *)B_PdE,
  (StayFD *)B_IgdE,
  (StayFD *)B_KorE,
  (StayFD *)B_Extra,
  NULL};

PICMODULEEND(LSEXT)

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
