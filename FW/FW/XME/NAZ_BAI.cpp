/* Begin FCbegin */
//-------------------------------------------------------------------------
// STAY / W      Resource file NAZ_BAI.XME
//-------------------------------------------------------------------------
// Created 10\11\2016 10:45
//-------------------------------------------------------------------------

#include "NAZ_BAI.h"

/* End FCbegin */
/* Begin FCinclude */
/* End FCinclude */
/* Begin FChead */
PICMODULEBEG(NAZ_BAI)

static StayFD _nn_NAZ_BAI = {NULL,TAG_PIC,0,0,0,0,"NAZ_BAI",NULL};
/* End FChead */
/* Begin FCtypedef */
/* End FCtypedef */
/* Begin FCfield */
BYTE  Klprof1_Kod;
StayFD _n_Klprof1_Kod = {&Klprof1_Kod,0,0,0,CLS_S,0,"Klprof1_Kod","Код профессии"};
StayFD *_Klprof1_Kod = &_n_Klprof1_Kod;

char Klprof1_Krnam[12];
StayFD _n_Klprof1_Krnam = {&Klprof1_Krnam,0,0,0,CLS_V,11,"Klprof1_Krnam","Краткое наименование"};
StayFD *_Klprof1_Krnam = &_n_Klprof1_Krnam;

char Klprof1_Naim[23];
StayFD _n_Klprof1_Naim = {&Klprof1_Naim,0,0,0,CLS_V,22,"Klprof1_Naim","Полное наименование"};
StayFD *_Klprof1_Naim = &_n_Klprof1_Naim;

BYTE  Klprof1_Probr;
StayFD _n_Klprof1_Probr = {&Klprof1_Probr,0,0,0,CLS_S,0,"Klprof1_Probr","Признак обработки"};
StayFD *_Klprof1_Probr = &_n_Klprof1_Probr;

BYTE  Klprof2_Kod;
StayFD _n_Klprof2_Kod = {&Klprof2_Kod,0,0,0,CLS_S,0,"Klprof2_Kod","Код профессии"};
StayFD *_Klprof2_Kod = &_n_Klprof2_Kod;

char Klprof2_Krnam[12];
StayFD _n_Klprof2_Krnam = {&Klprof2_Krnam,0,0,0,CLS_V,11,"Klprof2_Krnam","Краткое наименование"};
StayFD *_Klprof2_Krnam = &_n_Klprof2_Krnam;

char Klprof2_Naim[23];
StayFD _n_Klprof2_Naim = {&Klprof2_Naim,0,0,0,CLS_V,22,"Klprof2_Naim","Полное наименование"};
StayFD *_Klprof2_Naim = &_n_Klprof2_Naim;

BYTE  Klprof2_Probr;
StayFD _n_Klprof2_Probr = {&Klprof2_Probr,0,0,0,CLS_S,0,"Klprof2_Probr","Признак обработки"};
StayFD *_Klprof2_Probr = &_n_Klprof2_Probr;

BYTE  Kol2_Day;
StayFD _n_Kol2_Day = {&Kol2_Day,0,0,0,CLS_S,0,"Kol2_Day","Колх стаж - дни"};
StayFD *_Kol2_Day = &_n_Kol2_Day;

BYTE  Kol2_Mon;
StayFD _n_Kol2_Mon = {&Kol2_Mon,0,0,0,CLS_S,0,"Kol2_Mon","Колх стаж - месяцы"};
StayFD *_Kol2_Mon = &_n_Kol2_Mon;

WORD  Kol2_Trud;
StayFD _n_Kol2_Trud = {&Kol2_Trud,0,0,0,CLS_I,0,"Kol2_Trud","Колх стаж - трудодни"};
StayFD *_Kol2_Trud = &_n_Kol2_Trud;

WORD  Kol2_Year;
StayFD _n_Kol2_Year = {&Kol2_Year,0,0,0,CLS_I,0,"Kol2_Year","Колх стаж - года"};
StayFD *_Kol2_Year = &_n_Kol2_Year;

BYTE  Kol_Day;
StayFD _n_Kol_Day = {&Kol_Day,0,0,0,CLS_S,0,"Kol_Day","Колх стаж - дни"};
StayFD *_Kol_Day = &_n_Kol_Day;

BYTE  Kol_Mon;
StayFD _n_Kol_Mon = {&Kol_Mon,0,0,0,CLS_S,0,"Kol_Mon","Колх стаж - месяцы"};
StayFD *_Kol_Mon = &_n_Kol_Mon;

WORD  Kol_Trud;
StayFD _n_Kol_Trud = {&Kol_Trud,0,0,0,CLS_I,0,"Kol_Trud","Колх стаж - трудодни"};
StayFD *_Kol_Trud = &_n_Kol_Trud;

WORD  Kol_Year;
StayFD _n_Kol_Year = {&Kol_Year,0,0,0,CLS_I,0,"Kol_Year","Колх стаж - года"};
StayFD *_Kol_Year = &_n_Kol_Year;

BYTE  LMax_Stg;
StayFD _n_LMax_Stg = {&LMax_Stg,0,0,0,CLS_S,0,"LMax_Stg","Мах число профессий"};
StayFD *_LMax_Stg = &_n_LMax_Stg;

BYTE  Nrs_Status;
StayFD _n_Nrs_Status = {&Nrs_Status,0,0,0,CLS_S,0,"Nrs_Status","Статус сводного заработка"};
StayFD *_Nrs_Status = &_n_Nrs_Status;

BYTE  Num_Stage;
StayFD _n_Num_Stage = {&Num_Stage,0,0,0,CLS_S,0,"Num_Stage","Количество периодов в стаже"};
StayFD *_Num_Stage = &_n_Num_Stage;

BYTE  PstgPodz_Nr;
StayFD _n_PstgPodz_Nr = {&PstgPodz_Nr,0,0,0,CLS_S,0,"PstgPodz_Nr","Номер зачета по стажу"};
StayFD *_PstgPodz_Nr = &_n_PstgPodz_Nr;

WORD  PstgPodz_Kods;
StayFD _n_PstgPodz_Kods = {&PstgPodz_Kods,0,0,0,CLS_I,0,"PstgPodz_Kods","Код стажа"};
StayFD *_PstgPodz_Kods = &_n_PstgPodz_Kods;

BYTE  PstgPodz_Year;
StayFD _n_PstgPodz_Year = {&PstgPodz_Year,0,0,0,CLS_S,0,"PstgPodz_Year","Год факт"};
StayFD *_PstgPodz_Year = &_n_PstgPodz_Year;

BYTE  PstgPodz_Mon;
StayFD _n_PstgPodz_Mon = {&PstgPodz_Mon,0,0,0,CLS_S,0,"PstgPodz_Mon","Месяц факт"};
StayFD *_PstgPodz_Mon = &_n_PstgPodz_Mon;

BYTE  PstgPodz_Day;
StayFD _n_PstgPodz_Day = {&PstgPodz_Day,0,0,0,CLS_S,0,"PstgPodz_Day","Дни факт"};
StayFD *_PstgPodz_Day = &_n_PstgPodz_Day;

short Pstg_Day;
StayFD _n_Pstg_Day = {&Pstg_Day,0,0,0,CLS_Is,0,"Pstg_Day","Дни факт"};
StayFD *_Pstg_Day = &_n_Pstg_Day;

BYTE  Pstg_Kods;
StayFD _n_Pstg_Kods = {&Pstg_Kods,0,0,0,CLS_S,0,"Pstg_Kods","Код стажа"};
StayFD *_Pstg_Kods = &_n_Pstg_Kods;

STAYI6 Pstg_Koef;
StayFD _n_Pstg_Koef = {&Pstg_Koef,0,0,0,CLS_Hs,2,"Pstg_Koef","Коэффициент перерасчета"};
StayFD *_Pstg_Koef = &_n_Pstg_Koef;

short Pstg_Mon;
StayFD _n_Pstg_Mon = {&Pstg_Mon,0,0,0,CLS_Is,0,"Pstg_Mon","Месяц факт"};
StayFD *_Pstg_Mon = &_n_Pstg_Mon;

BYTE  Pstg_NZach;
StayFD _n_Pstg_NZach = {&Pstg_NZach,0,0,0,CLS_S,0,"Pstg_NZach","Номер зачета по стажу"};
StayFD *_Pstg_NZach = &_n_Pstg_NZach;

short Pstg_PDay;
StayFD _n_Pstg_PDay = {&Pstg_PDay,0,0,0,CLS_Is,0,"Pstg_PDay","Дни перерасчет"};
StayFD *_Pstg_PDay = &_n_Pstg_PDay;

short Pstg_PMon;
StayFD _n_Pstg_PMon = {&Pstg_PMon,0,0,0,CLS_Is,0,"Pstg_PMon","Месяц перерасчет"};
StayFD *_Pstg_PMon = &_n_Pstg_PMon;

short Pstg_PYear;
StayFD _n_Pstg_PYear = {&Pstg_PYear,0,0,0,CLS_Is,0,"Pstg_PYear","Год перерасчет"};
StayFD *_Pstg_PYear = &_n_Pstg_PYear;

short Pstg_Year;
StayFD _n_Pstg_Year = {&Pstg_Year,0,0,0,CLS_Is,0,"Pstg_Year","Год факт"};
StayFD *_Pstg_Year = &_n_Pstg_Year;

STAYUI6 Stg13_Code;
StayFD _n_Stg13_Code = {&Stg13_Code,0,0,0,CLS_H,0,"Stg13_Code","Код предприятия/организации"};
StayFD *_Stg13_Code = &_n_Stg13_Code;

BYTE  Stg13_Dni;
StayFD _n_Stg13_Dni = {&Stg13_Dni,0,0,0,CLS_S,0,"Stg13_Dni","Кол-во дней стажа"};
StayFD *_Stg13_Dni = &_n_Stg13_Dni;

BYTE  Stg13_God;
StayFD _n_Stg13_God = {&Stg13_God,0,0,0,CLS_S,0,"Stg13_God","Кол-во лет стажа"};
StayFD *_Stg13_God = &_n_Stg13_God;

BYTE  Stg13_Mec;
StayFD _n_Stg13_Mec = {&Stg13_Mec,0,0,0,CLS_S,0,"Stg13_Mec","Кол_во месяцев стажа"};
StayFD *_Stg13_Mec = &_n_Stg13_Mec;

BYTE  Stg13_DniV;
StayFD _n_Stg13_DniV = {&Stg13_DniV,0,0,0,CLS_S,0,"Stg13_DniV","Кол-во дней стажа"};
StayFD *_Stg13_DniV = &_n_Stg13_DniV;

BYTE  Stg13_GodV;
StayFD _n_Stg13_GodV = {&Stg13_GodV,0,0,0,CLS_S,0,"Stg13_GodV","Кол-во лет стажа"};
StayFD *_Stg13_GodV = &_n_Stg13_GodV;

BYTE  Stg13_MecV;
StayFD _n_Stg13_MecV = {&Stg13_MecV,0,0,0,CLS_S,0,"Stg13_MecV","Кол_во месяцев стажа"};
StayFD *_Stg13_MecV = &_n_Stg13_MecV;

WORD  Stg13_Priz;
StayFD _n_Stg13_Priz = {&Stg13_Priz,0,0,0,CLS_I,0,"Stg13_Priz","Код льготного стажа"};
StayFD *_Stg13_Priz = &_n_Stg13_Priz;

DWORD Stg13_Suma;
StayFD _n_Stg13_Suma = {&Stg13_Suma,0,0,0,CLS_L,2,"Stg13_Suma","Процент общий"};
StayFD *_Stg13_Suma = &_n_Stg13_Suma;

long  Stg13_Two;
StayFD _n_Stg13_Two = {&Stg13_Two,0,0,0,CLS_Ls,2,"Stg13_Two","Процент льготного стажа"};
StayFD *_Stg13_Two = &_n_Stg13_Two;

STAYUI6 RKlOrgR_Code;
StayFD _n_RKlOrgR_Code = {&RKlOrgR_Code,0,0,0,CLS_H,0,"RKlOrgR_Code","рабочая"};
StayFD *_RKlOrgR_Code = &_n_RKlOrgR_Code;

BYTE  RKlShP_All;
StayFD _n_RKlShP_All = {&RKlShP_All,0,0,0,CLS_S,0,"RKlShP_All","Общий стаж(1-неполный)"};
StayFD *_RKlShP_All = &_n_RKlShP_All;

WORD  RKlShP_CodeVp;
StayFD _n_RKlShP_CodeVp = {&RKlShP_CodeVp,0,0,0,CLS_I,0,"RKlShP_CodeVp","Код выплаты (KlFN_)"};
StayFD *_RKlShP_CodeVp = &_n_RKlShP_CodeVp;

BYTE  RKlShP_KIgd;
StayFD _n_RKlShP_KIgd = {&RKlShP_KIgd,0,0,0,CLS_S,0,"RKlShP_KIgd","Количество иждивенцев"};
StayFD *_RKlShP_KIgd = &_n_RKlShP_KIgd;

BYTE  RKlShP_Kor;
StayFD _n_RKlShP_Kor = {&RKlShP_Kor,0,0,0,CLS_S,0,"RKlShP_Kor","Категория кормил.(KlKor_)"};
StayFD *_RKlShP_Kor = &_n_RKlShP_Kor;

BYTE  RKlShP_Lgt;
StayFD _n_RKlShP_Lgt = {&RKlShP_Lgt,0,0,0,CLS_S,0,"RKlShP_Lgt","Льготный стаж(1-неполный)"};
StayFD *_RKlShP_Lgt = &_n_RKlShP_Lgt;

BYTE  RKlShP_Netr;
StayFD _n_RKlShP_Netr = {&RKlShP_Netr,0,0,0,CLS_S,0,"RKlShP_Netr","Категор. нетруд.(KlNet_)"};
StayFD *_RKlShP_Netr = &_n_RKlShP_Netr;

BYTE  RKlShP_Nr;
StayFD _n_RKlShP_Nr = {&RKlShP_Nr,0,0,0,CLS_S,0,"RKlShP_Nr","Номер расчета(1,2,3)"};
StayFD *_RKlShP_Nr = &_n_RKlShP_Nr;

BYTE  RKlShP_PSKor;
StayFD _n_RKlShP_PSKor = {&RKlShP_PSKor,0,0,0,CLS_S,0,"RKlShP_PSKor","Прич. смерти корм.(KlPS_)"};
StayFD *_RKlShP_PSKor = &_n_RKlShP_PSKor;

BYTE  RKlShP_PoCH;
StayFD _n_RKlShP_PoCH = {&RKlShP_PoCH,0,0,0,CLS_S,0,"RKlShP_PoCH","Тип пострадав. ЧАЭС(KlPost)"};
StayFD *_RKlShP_PoCH = &_n_RKlShP_PoCH;

BYTE  RKlShP_PrCH;
StayFD _n_RKlShP_PrCH = {&RKlShP_PrCH,0,0,0,CLS_S,0,"RKlShP_PrCH","Причастность ЧАЭС(KlChe_)"};
StayFD *_RKlShP_PrCH = &_n_RKlShP_PrCH;

BYTE  RKlShP_PrInv;
StayFD _n_RKlShP_PrInv = {&RKlShP_PrInv,0,0,0,CLS_S,0,"RKlShP_PrInv","Причина инв-ти (KlPInv_)"};
StayFD *_RKlShP_PrInv = &_n_RKlShP_PrInv;

BYTE  RKlShP_Prof;
StayFD _n_RKlShP_Prof = {&RKlShP_Prof,0,0,0,CLS_S,0,"RKlShP_Prof","Код профессии"};
StayFD *_RKlShP_Prof = &_n_RKlShP_Prof;

BYTE  RKlShP_Sex;
StayFD _n_RKlShP_Sex = {&RKlShP_Sex,0,0,0,CLS_S,0,"RKlShP_Sex","Пол"};
StayFD *_RKlShP_Sex = &_n_RKlShP_Sex;

BYTE  RKlShP_VInv;
StayFD _n_RKlShP_VInv = {&RKlShP_VInv,0,0,0,CLS_S,0,"RKlShP_VInv","Вид инвалидности (KlInv_)"};
StayFD *_RKlShP_VInv = &_n_RKlShP_VInv;

BYTE  RKlShP_VP;
StayFD _n_RKlShP_VP = {&RKlShP_VP,0,0,0,CLS_S,0,"RKlShP_VP","Вид пенсии(KlVPen_)"};
StayFD *_RKlShP_VP = &_n_RKlShP_VP;

STAYUI6 RPrcSv_Code;
StayFD _n_RPrcSv_Code = {&RPrcSv_Code,0,0,0,CLS_H,0,"RPrcSv_Code","Код предприятия/организации"};
StayFD *_RPrcSv_Code = &_n_RPrcSv_Code;

BYTE  RPrcSv_CodeD;
StayFD _n_RPrcSv_CodeD = {&RPrcSv_CodeD,0,0,0,CLS_S,0,"RPrcSv_CodeD","Дополн. код"};
StayFD *_RPrcSv_CodeD = &_n_RPrcSv_CodeD;

BYTE  RPrcSv_Dni;
StayFD _n_RPrcSv_Dni = {&RPrcSv_Dni,0,0,0,CLS_S,0,"RPrcSv_Dni","Кол-во дней стажа"};
StayFD *_RPrcSv_Dni = &_n_RPrcSv_Dni;

BYTE  RPrcSv_God;
StayFD _n_RPrcSv_God = {&RPrcSv_God,0,0,0,CLS_S,0,"RPrcSv_God","Кол-во лет стажа"};
StayFD *_RPrcSv_God = &_n_RPrcSv_God;

BYTE  RPrcSv_Mec;
StayFD _n_RPrcSv_Mec = {&RPrcSv_Mec,0,0,0,CLS_S,0,"RPrcSv_Mec","Кол_во месяцев стажа"};
StayFD *_RPrcSv_Mec = &_n_RPrcSv_Mec;

long  RPrcSv_One;
StayFD _n_RPrcSv_One = {&RPrcSv_One,0,0,0,CLS_Ls,2,"RPrcSv_One","Процент для бюджетных орг."};
StayFD *_RPrcSv_One = &_n_RPrcSv_One;

DWORD RPrcSv_Suma;
StayFD _n_RPrcSv_Suma = {&RPrcSv_Suma,0,0,0,CLS_L,2,"RPrcSv_Suma","Процент общий"};
StayFD *_RPrcSv_Suma = &_n_RPrcSv_Suma;

long  RPrcSv_Two;
StayFD _n_RPrcSv_Two = {&RPrcSv_Two,0,0,0,CLS_Ls,2,"RPrcSv_Two","Процент для не бюджетных орг."};
StayFD *_RPrcSv_Two = &_n_RPrcSv_Two;

STAYUI6 RPrc_Code;
StayFD _n_RPrc_Code = {&RPrc_Code,0,0,0,CLS_H,0,"RPrc_Code","Код предприятия/организации"};
StayFD *_RPrc_Code = &_n_RPrc_Code;

STAYUI6 RRPrc_Code;
StayFD _n_RRPrc_Code = {&RRPrc_Code,0,0,0,CLS_H,0,"RRPrc_Code","Код предприятия/организации- рабочая"};
StayFD *_RRPrc_Code = &_n_RRPrc_Code;

BYTE  RPrc_CodeD;
StayFD _n_RPrc_CodeD = {&RPrc_CodeD,0,0,0,CLS_S,0,"RPrc_CodeD","Дополн. код"};
StayFD *_RPrc_CodeD = &_n_RPrc_CodeD;

BYTE  RPrc_Dni;
StayFD _n_RPrc_Dni = {&RPrc_Dni,0,0,0,CLS_S,0,"RPrc_Dni","Кол-во дней стажа"};
StayFD *_RPrc_Dni = &_n_RPrc_Dni;

BYTE  RPrc_God;
StayFD _n_RPrc_God = {&RPrc_God,0,0,0,CLS_S,0,"RPrc_God","Кол-во лет стажа"};
StayFD *_RPrc_God = &_n_RPrc_God;

BYTE  RPrc_Mec;
StayFD _n_RPrc_Mec = {&RPrc_Mec,0,0,0,CLS_S,0,"RPrc_Mec","Кол_во месяцев стажа"};
StayFD *_RPrc_Mec = &_n_RPrc_Mec;

long  RPrc_One;
StayFD _n_RPrc_One = {&RPrc_One,0,0,0,CLS_Ls,2,"RPrc_One","Процент для бюджетных орг."};
StayFD *_RPrc_One = &_n_RPrc_One;

short RPrc_ProcB;
StayFD _n_RPrc_ProcB = {&RPrc_ProcB,0,0,0,CLS_Is,2,"RPrc_ProcB","Процент для бюджетных орг."};
StayFD *_RPrc_ProcB = &_n_RPrc_ProcB;

DWORD RPrc_Suma;
StayFD _n_RPrc_Suma = {&RPrc_Suma,0,0,0,CLS_L,2,"RPrc_Suma","Процент общий"};
StayFD *_RPrc_Suma = &_n_RPrc_Suma;

long  RPrc_Two;
StayFD _n_RPrc_Two = {&RPrc_Two,0,0,0,CLS_Ls,2,"RPrc_Two","Процент для не бюджетных орг."};
StayFD *_RPrc_Two = &_n_RPrc_Two;

STAYI6 RRzrbCl_Suma;
StayFD _n_RRzrbCl_Suma = {&RRzrbCl_Suma,0,0,0,CLS_Hs,5,"RRzrbCl_Suma",""};
StayFD *_RRzrbCl_Suma = &_n_RRzrbCl_Suma;

StayDate RRzrb_Dbeg;
StayFD _n_RRzrb_Dbeg = {&RRzrb_Dbeg,0,0,0,CLS_Date,0,"RRzrb_Dbeg","рабочая дата"};
StayFD *_RRzrb_Dbeg = &_n_RRzrb_Dbeg;

BYTE  RRzrb_Mes;
StayFD _n_RRzrb_Mes = {&RRzrb_Mes,0,0,0,CLS_S,0,"RRzrb_Mes",""};
StayFD *_RRzrb_Mes = &_n_RRzrb_Mes;

BYTE  RRzrb_Nr;
StayFD _n_RRzrb_Nr = {&RRzrb_Nr,0,0,0,CLS_S,0,"RRzrb_Nr",""};
StayFD *_RRzrb_Nr = &_n_RRzrb_Nr;

BYTE  RRzrb_Nrs;
StayFD _n_RRzrb_Nrs = {&RRzrb_Nrs,0,0,0,CLS_S,0,"RRzrb_Nrs",""};
StayFD *_RRzrb_Nrs = &_n_RRzrb_Nrs;

STAYI6 RRzrb_StrSuma;
StayFD _n_RRzrb_StrSuma = {&RRzrb_StrSuma,0,0,0,CLS_Hs,5,"RRzrb_StrSuma",""};
StayFD *_RRzrb_StrSuma = &_n_RRzrb_StrSuma;

STAYI6 RRzrb_Suma;
StayFD _n_RRzrb_Suma = {&RRzrb_Suma,0,0,0,CLS_Hs,5,"RRzrb_Suma",""};
StayFD *_RRzrb_Suma = &_n_RRzrb_Suma;

StayDate RStgp_DEndP;
StayFD _n_RStgp_DEndP = {&RStgp_DEndP,0,0,0,CLS_Date,0,"RStgp_DEndP","Дата посл периода стажа"};
StayFD *_RStgp_DEndP = &_n_RStgp_DEndP;

StayDate RStgp_DEndP1;
StayFD _n_RStgp_DEndP1 = {&RStgp_DEndP1,0,0,0,CLS_Date,0,"RStgp_DEndP1","Дата посл периода стажа"};
StayFD *_RStgp_DEndP1 = &_n_RStgp_DEndP1;

StayDate RStgp_DEndP2;
StayFD _n_RStgp_DEndP2 = {&RStgp_DEndP2,0,0,0,CLS_Date,0,"RStgp_DEndP2","Дата посл периода стажа"};
StayFD *_RStgp_DEndP2 = &_n_RStgp_DEndP2;

StayDate RZrb_DBStr;
StayFD _n_RZrb_DBStr = {&RZrb_DBStr,0,0,0,CLS_Date,0,"RZrb_DBStr","Рабочая по дате начала периода"};
StayFD *_RZrb_DBStr = &_n_RZrb_DBStr;

DWORD Rez;
StayFD _n_Rez = {&Rez,0,0,0,CLS_L,2,"Rez","Первый результат"};
StayFD *_Rez = &_n_Rez;

DWORD Rez1;
StayFD _n_Rez1 = {&Rez1,0,0,0,CLS_L,2,"Rez1","Второй результат"};
StayFD *_Rez1 = &_n_Rez1;

StayDate RizrbKf_Dbeg;
StayFD _n_RizrbKf_Dbeg = {&RizrbKf_Dbeg,0,0,0,CLS_Date,0,"RizrbKf_Dbeg","Дата начала заработка"};
StayFD *_RizrbKf_Dbeg = &_n_RizrbKf_Dbeg;

StayDate RizrbKf_Dend;
StayFD _n_RizrbKf_Dend = {&RizrbKf_Dend,0,0,0,CLS_Date,0,"RizrbKf_Dend","Дата конца  заработка"};
StayFD *_RizrbKf_Dend = &_n_RizrbKf_Dend;

StayDate Rizrb_DateVZ;
StayFD _n_Rizrb_DateVZ = {&Rizrb_DateVZ,0,0,0,CLS_Date,0,"Rizrb_DateVZ","Дата ввода заработка"};
StayFD *_Rizrb_DateVZ = &_n_Rizrb_DateVZ;

StayDate Rizrb_DateVZS;
StayFD _n_Rizrb_DateVZS = {&Rizrb_DateVZS,0,0,0,CLS_Date,0,"Rizrb_DateVZS","Дата ввода заработка"};
StayFD *_Rizrb_DateVZS = &_n_Rizrb_DateVZS;

StayDate Rizrb_Date919;
StayFD _n_Rizrb_Date919 = {&Rizrb_Date919,0,0,0,CLS_Date,0,"Rizrb_Date919","Дата 919"};
StayFD *_Rizrb_Date919 = &_n_Rizrb_Date919;

StayDate Rizrb_DSRNX;
StayFD _n_Rizrb_DSRNX = {&Rizrb_DSRNX,0,0,0,CLS_Date,0,"Rizrb_DSRNX","Дата для определения средней з/п"};
StayFD *_Rizrb_DSRNX = &_n_Rizrb_DSRNX;

WORD  Rizrb_YrSRNX;
StayFD _n_Rizrb_YrSRNX = {&Rizrb_YrSRNX,0,0,0,CLS_I,0,"Rizrb_YrSRNX","Год средней по НХ"};
StayFD *_Rizrb_YrSRNX = &_n_Rizrb_YrSRNX;

StayDate Rizrb_D2SRNX;
StayFD _n_Rizrb_D2SRNX = {&Rizrb_D2SRNX,0,0,0,CLS_Date,0,"Rizrb_D2SRNX","Дата для определения средней з/п"};
StayFD *_Rizrb_D2SRNX = &_n_Rizrb_D2SRNX;

WORD  Rizrb_Y2SRNX;
StayFD _n_Rizrb_Y2SRNX = {&Rizrb_Y2SRNX,0,0,0,CLS_I,0,"Rizrb_Y2SRNX","Год средней по НХ"};
StayFD *_Rizrb_Y2SRNX = &_n_Rizrb_Y2SRNX;

WORD  Rizrb_NSrNX;
StayFD _n_Rizrb_NSrNX = {&Rizrb_NSrNX,0,0,0,CLS_I,0,"Rizrb_NSrNX","Год средней по НХ"};
StayFD *_Rizrb_NSrNX = &_n_Rizrb_NSrNX;

DWORD RizrbKf_Koef;
StayFD _n_RizrbKf_Koef = {&RizrbKf_Koef,0,0,0,CLS_L,2,"RizrbKf_Koef","Коэф осучаснення"};
StayFD *_RizrbKf_Koef = &_n_RizrbKf_Koef;

DWORD RizrbKf_Koef1;
StayFD _n_RizrbKf_Koef1 = {&RizrbKf_Koef1,0,0,0,CLS_L,2,"RizrbKf_Koef1","Коэф осучаснення н/р"};
StayFD *_RizrbKf_Koef1 = &_n_RizrbKf_Koef1;

WORD  RizrbKf_Mes;
StayFD _n_RizrbKf_Mes = {&RizrbKf_Mes,0,0,0,CLS_I,0,"RizrbKf_Mes","Кол-во месяцев"};
StayFD *_RizrbKf_Mes = &_n_RizrbKf_Mes;

WORD  RizrbKf_Mes25;
StayFD _n_RizrbKf_Mes25 = {&RizrbKf_Mes25,0,0,0,CLS_I,0,"RizrbKf_Mes25","Кол-во месяцев-25"};
StayFD *_RizrbKf_Mes25 = &_n_RizrbKf_Mes25;

BYTE  RizrbKf_Nr;
StayFD _n_RizrbKf_Nr = {&RizrbKf_Nr,0,0,0,CLS_S,0,"RizrbKf_Nr","Номер родителя"};
StayFD *_RizrbKf_Nr = &_n_RizrbKf_Nr;

BYTE  RizrbKf_Nrs;
StayFD _n_RizrbKf_Nrs = {&RizrbKf_Nrs,0,0,0,CLS_S,0,"RizrbKf_Nrs","Номер расчета"};
StayFD *_RizrbKf_Nrs = &_n_RizrbKf_Nrs;

STAYUI6 RizrbKf_SrNx;
StayFD _n_RizrbKf_SrNx = {&RizrbKf_SrNx,0,0,0,CLS_H,5,"RizrbKf_SrNx","Средняя по н/х за период"};
StayFD *_RizrbKf_SrNx = &_n_RizrbKf_SrNx;

STAYUI6 RizrbKf_SrNx1;
StayFD _n_RizrbKf_SrNx1 = {&RizrbKf_SrNx1,0,0,0,CLS_H,5,"RizrbKf_SrNx1","Средняя по н/х за период н/р"};
StayFD *_RizrbKf_SrNx1 = &_n_RizrbKf_SrNx1;

STAYI6 RizrbKf_Suma;
StayFD _n_RizrbKf_Suma = {&RizrbKf_Suma,0,0,0,CLS_Hs,5,"RizrbKf_Suma","Сумма зароботка за период"};
StayFD *_RizrbKf_Suma = &_n_RizrbKf_Suma;

STAYI6 RizrbKf_Suma25;
StayFD _n_RizrbKf_Suma25 = {&RizrbKf_Suma25,0,0,0,CLS_Hs,5,"RizrbKf_Suma25","Сумма зароботка за период-25"};
StayFD *_RizrbKf_Suma25 = &_n_RizrbKf_Suma25;

STAYI6 RizrbKf_Sum25P;
StayFD _n_RizrbKf_Sum25P = {&RizrbKf_Sum25P,0,0,0,CLS_Hs,5,"RizrbKf_Sum25P","Сумма зароботка за период-25P"};
StayFD *_RizrbKf_Sum25P = &_n_RizrbKf_Sum25P;

STAYI6 RizrbKf_Sum25F;
StayFD _n_RizrbKf_Sum25F = {&RizrbKf_Sum25F,0,0,0,CLS_Hs,5,"RizrbKf_Sum25F","Сумма зароботка за период-25F"};
StayFD *_RizrbKf_Sum25F = &_n_RizrbKf_Sum25F;

STAYI6 RizrbKf_SumaP;
StayFD _n_RizrbKf_SumaP = {&RizrbKf_SumaP,0,0,0,CLS_Hs,5,"RizrbKf_SumaP","Приведен сумма зароб за период"};
StayFD *_RizrbKf_SumaP = &_n_RizrbKf_SumaP;

STAYI6 RizrbKf_SumaP1;
StayFD _n_RizrbKf_SumaP1 = {&RizrbKf_SumaP1,0,0,0,CLS_Hs,5,"RizrbKf_SumaP1","Приведен сум зар за период н/р"};
StayFD *_RizrbKf_SumaP1 = &_n_RizrbKf_SumaP1;

StayDate Rizrb_DBegZ;
StayFD _n_Rizrb_DBegZ = {&Rizrb_DBegZ,0,0,0,CLS_Date,0,"Rizrb_DBegZ","Дата начала заработка"};
StayFD *_Rizrb_DBegZ = &_n_Rizrb_DBegZ;

StayDate Rizrb_DateCHD;
StayFD _n_Rizrb_DateCHD = {&Rizrb_DateCHD,0,0,0,CLS_Date,0,"Rizrb_DateCHD","Дата начала заработка"};
StayFD *_Rizrb_DateCHD = &_n_Rizrb_DateCHD;

StayDate Rizrb_DEZF192;
StayFD _n_Rizrb_DEZF192 = {&Rizrb_DEZF192,0,0,0,CLS_Date,0,"Rizrb_DEZF192","макс дата"};
StayFD *_Rizrb_DEZF192 = &_n_Rizrb_DEZF192;

StayDate Rizrb_DEZF292;
StayFD _n_Rizrb_DEZF292 = {&Rizrb_DEZF292,0,0,0,CLS_Date,0,"Rizrb_DEZF292","макс дата"};
StayFD *_Rizrb_DEZF292 = &_n_Rizrb_DEZF292;

StayDate Rizrb_DMZr121;
StayFD _n_Rizrb_DMZr121 = {&Rizrb_DMZr121,0,0,0,CLS_Date,0,"Rizrb_DMZr121","макс дата - 12 заробўток"};
StayFD *_Rizrb_DMZr121 = &_n_Rizrb_DMZr121;

StayDate Rizrb_DMZr131;
StayFD _n_Rizrb_DMZr131 = {&Rizrb_DMZr131,0,0,0,CLS_Date,0,"Rizrb_DMZr131","макс дата - 13 заробўток"};
StayFD *_Rizrb_DMZr131 = &_n_Rizrb_DMZr131;

StayDate Rizrb_DMZr141;
StayFD _n_Rizrb_DMZr141 = {&Rizrb_DMZr141,0,0,0,CLS_Date,0,"Rizrb_DMZr141","макс дата - 14 заробўток"};
StayFD *_Rizrb_DMZr141 = &_n_Rizrb_DMZr141;

StayDate Rizrb_DMZr151;
StayFD _n_Rizrb_DMZr151 = {&Rizrb_DMZr151,0,0,0,CLS_Date,0,"Rizrb_DMZr151","макс дата - 15 заробўток"};
StayFD *_Rizrb_DMZr151 = &_n_Rizrb_DMZr151;

StayDate Rizrb_DMZr161;
StayFD _n_Rizrb_DMZr161 = {&Rizrb_DMZr161,0,0,0,CLS_Date,0,"Rizrb_DMZr161","макс дата - 16 заробўток"};
StayFD *_Rizrb_DMZr161 = &_n_Rizrb_DMZr161;

StayDate Rizrb_DMZr122;
StayFD _n_Rizrb_DMZr122 = {&Rizrb_DMZr122,0,0,0,CLS_Date,0,"Rizrb_DMZr122","макс дата - 12 заробўток"};
StayFD *_Rizrb_DMZr122 = &_n_Rizrb_DMZr122;

StayDate Rizrb_DMZr132;
StayFD _n_Rizrb_DMZr132 = {&Rizrb_DMZr132,0,0,0,CLS_Date,0,"Rizrb_DMZr132","макс дата - 13 заробўток"};
StayFD *_Rizrb_DMZr132 = &_n_Rizrb_DMZr132;

StayDate Rizrb_DMZr142;
StayFD _n_Rizrb_DMZr142 = {&Rizrb_DMZr142,0,0,0,CLS_Date,0,"Rizrb_DMZr142","макс дата - 14 заробўток"};
StayFD *_Rizrb_DMZr142 = &_n_Rizrb_DMZr142;

StayDate Rizrb_DMZr152;
StayFD _n_Rizrb_DMZr152 = {&Rizrb_DMZr152,0,0,0,CLS_Date,0,"Rizrb_DMZr152","макс дата - 15 заробўток"};
StayFD *_Rizrb_DMZr152 = &_n_Rizrb_DMZr152;

StayDate Rizrb_DMZarR;
StayFD _n_Rizrb_DMZarR = {&Rizrb_DMZarR,0,0,0,CLS_Date,0,"Rizrb_DMZarR","макс дата - рабочая"};
StayFD *_Rizrb_DMZarR = &_n_Rizrb_DMZarR;

StayDate Rizrb_DEndZ;
StayFD _n_Rizrb_DEndZ = {&Rizrb_DEndZ,0,0,0,CLS_Date,0,"Rizrb_DEndZ","Дата конца  заработка"};
StayFD *_Rizrb_DEndZ = &_n_Rizrb_DEndZ;

StayDate Rizrb_DBegDl1;
StayFD _n_Rizrb_DBegDl1 = {&Rizrb_DBegDl1,0,0,0,CLS_Date,0,"Rizrb_DBegDl1","Дата начала заработка"};
StayFD *_Rizrb_DBegDl1 = &_n_Rizrb_DBegDl1;

StayDate Rizrb_DEndDl1;
StayFD _n_Rizrb_DEndDl1 = {&Rizrb_DEndDl1,0,0,0,CLS_Date,0,"Rizrb_DEndDl1","Дата начала заработка"};
StayFD *_Rizrb_DEndDl1 = &_n_Rizrb_DEndDl1;

StayDate Rizrb_DBegDl2;
StayFD _n_Rizrb_DBegDl2 = {&Rizrb_DBegDl2,0,0,0,CLS_Date,0,"Rizrb_DBegDl2","Дата начала заработка"};
StayFD *_Rizrb_DBegDl2 = &_n_Rizrb_DBegDl2;

StayDate Rizrb_DEndDl2;
StayFD _n_Rizrb_DEndDl2 = {&Rizrb_DEndDl2,0,0,0,CLS_Date,0,"Rizrb_DEndDl2","Дата начала заработка"};
StayFD *_Rizrb_DEndDl2 = &_n_Rizrb_DEndDl2;

StayDate Rizrb_DBegDl3;
StayFD _n_Rizrb_DBegDl3 = {&Rizrb_DBegDl3,0,0,0,CLS_Date,0,"Rizrb_DBegDl3","Дата начала заработка"};
StayFD *_Rizrb_DBegDl3 = &_n_Rizrb_DBegDl3;

StayDate Rizrb_DEndDl3;
StayFD _n_Rizrb_DEndDl3 = {&Rizrb_DEndDl3,0,0,0,CLS_Date,0,"Rizrb_DEndDl3","Дата начала заработка"};
StayFD *_Rizrb_DEndDl3 = &_n_Rizrb_DEndDl3;

StayDate Rizrb_DBegDl4;
StayFD _n_Rizrb_DBegDl4 = {&Rizrb_DBegDl4,0,0,0,CLS_Date,0,"Rizrb_DBegDl4","Дата начала заработка"};
StayFD *_Rizrb_DBegDl4 = &_n_Rizrb_DBegDl4;

StayDate Rizrb_DEndDl4;
StayFD _n_Rizrb_DEndDl4 = {&Rizrb_DEndDl4,0,0,0,CLS_Date,0,"Rizrb_DEndDl4","Дата начала заработка"};
StayFD *_Rizrb_DEndDl4 = &_n_Rizrb_DEndDl4;

StayDate Rizrb_DBegDl5;
StayFD _n_Rizrb_DBegDl5 = {&Rizrb_DBegDl5,0,0,0,CLS_Date,0,"Rizrb_DBegDl5","Дата начала заработка"};
StayFD *_Rizrb_DBegDl5 = &_n_Rizrb_DBegDl5;

StayDate Rizrb_DEndDl5;
StayFD _n_Rizrb_DEndDl5 = {&Rizrb_DEndDl5,0,0,0,CLS_Date,0,"Rizrb_DEndDl5","Дата начала заработка"};
StayFD *_Rizrb_DEndDl5 = &_n_Rizrb_DEndDl5;

StayDate Rizrb_DBegDl6;
StayFD _n_Rizrb_DBegDl6 = {&Rizrb_DBegDl6,0,0,0,CLS_Date,0,"Rizrb_DBegDl6","Дата начала заработка"};
StayFD *_Rizrb_DBegDl6 = &_n_Rizrb_DBegDl6;

StayDate Rizrb_DEndDl6;
StayFD _n_Rizrb_DEndDl6 = {&Rizrb_DEndDl6,0,0,0,CLS_Date,0,"Rizrb_DEndDl6","Дата начала заработка"};
StayFD *_Rizrb_DEndDl6 = &_n_Rizrb_DEndDl6;

StayDate Rizrb_DEndZ92;
StayFD _n_Rizrb_DEndZ92 = {&Rizrb_DEndZ92,0,0,0,CLS_Date,0,"Rizrb_DEndZ92","Дата макс зар-ка факт"};
StayFD *_Rizrb_DEndZ92 = &_n_Rizrb_DEndZ92;

StayDate Rizrb_DEndZ92P;
StayFD _n_Rizrb_DEndZ92P = {&Rizrb_DEndZ92P,0,0,0,CLS_Date,0,"Rizrb_DEndZ92P","Дата макс зар-ка факт н/р"};
StayFD *_Rizrb_DEndZ92P = &_n_Rizrb_DEndZ92P;

StayDate Rizrb_DBegZ1;
StayFD _n_Rizrb_DBegZ1 = {&Rizrb_DBegZ1,0,0,0,CLS_Date,0,"Rizrb_DBegZ1","макс дата"};
StayFD *_Rizrb_DBegZ1 = &_n_Rizrb_DBegZ1;

StayDate Rizrb_DBegZ2;
StayFD _n_Rizrb_DBegZ2 = {&Rizrb_DBegZ2,0,0,0,CLS_Date,0,"Rizrb_DBegZ2","макс дата"};
StayFD *_Rizrb_DBegZ2 = &_n_Rizrb_DBegZ2;

StayDate Rizrb_DEndZF1;
StayFD _n_Rizrb_DEndZF1 = {&Rizrb_DEndZF1,0,0,0,CLS_Date,0,"Rizrb_DEndZF1","макс дата"};
StayFD *_Rizrb_DEndZF1 = &_n_Rizrb_DEndZF1;

StayDate Rizrb_DEndZF2;
StayFD _n_Rizrb_DEndZF2 = {&Rizrb_DEndZF2,0,0,0,CLS_Date,0,"Rizrb_DEndZF2","макс дата"};
StayFD *_Rizrb_DEndZF2 = &_n_Rizrb_DEndZF2;

StayDate Rizrb_DEndZU1;
StayFD _n_Rizrb_DEndZU1 = {&Rizrb_DEndZU1,0,0,0,CLS_Date,0,"Rizrb_DEndZU1","макс дата"};
StayFD *_Rizrb_DEndZU1 = &_n_Rizrb_DEndZU1;

StayDate Rizrb_DEndZU2;
StayFD _n_Rizrb_DEndZU2 = {&Rizrb_DEndZU2,0,0,0,CLS_Date,0,"Rizrb_DEndZU2","макс дата"};
StayFD *_Rizrb_DEndZU2 = &_n_Rizrb_DEndZU2;

StayDate Rizrb_DEndZMB1;
StayFD _n_Rizrb_DEndZMB1 = {&Rizrb_DEndZMB1,0,0,0,CLS_Date,0,"Rizrb_DEndZMB1","макс дата"};
StayFD *_Rizrb_DEndZMB1 = &_n_Rizrb_DEndZMB1;

StayDate Rizrb_DEndZMB2;
StayFD _n_Rizrb_DEndZMB2 = {&Rizrb_DEndZMB2,0,0,0,CLS_Date,0,"Rizrb_DEndZMB2","макс дата"};
StayFD *_Rizrb_DEndZMB2 = &_n_Rizrb_DEndZMB2;

StayDate Rizrb_DEndZFF;
StayFD _n_Rizrb_DEndZFF = {&Rizrb_DEndZFF,0,0,0,CLS_Date,0,"Rizrb_DEndZFF","Дата макс зар-ка факт"};
StayFD *_Rizrb_DEndZFF = &_n_Rizrb_DEndZFF;

StayDate Rizrb_DEndZK1;
StayFD _n_Rizrb_DEndZK1 = {&Rizrb_DEndZK1,0,0,0,CLS_Date,0,"Rizrb_DEndZK1","макс дата"};
StayFD *_Rizrb_DEndZK1 = &_n_Rizrb_DEndZK1;

StayDate Rizrb_DEndZK2;
StayFD _n_Rizrb_DEndZK2 = {&Rizrb_DEndZK2,0,0,0,CLS_Date,0,"Rizrb_DEndZK2","макс дата"};
StayFD *_Rizrb_DEndZK2 = &_n_Rizrb_DEndZK2;

StayDate Rizrb_DEndZKK;
StayFD _n_Rizrb_DEndZKK = {&Rizrb_DEndZKK,0,0,0,CLS_Date,0,"Rizrb_DEndZKK","Дата макс зар-ка скорр"};
StayFD *_Rizrb_DEndZKK = &_n_Rizrb_DEndZKK;

StayDate Rizrb_DEndZP;
StayFD _n_Rizrb_DEndZP = {&Rizrb_DEndZP,0,0,0,CLS_Date,0,"Rizrb_DEndZP","дата предыдущая"};
StayFD *_Rizrb_DEndZP = &_n_Rizrb_DEndZP;

StayDate Rizrb_DRabZKK;
StayFD _n_Rizrb_DRabZKK = {&Rizrb_DRabZKK,0,0,0,CLS_Date,0,"Rizrb_DRabZKK","Дата макс зар-ка рабочая"};
StayFD *_Rizrb_DRabZKK = &_n_Rizrb_DRabZKK;

StayDate Rizrb_DRabZFF;
StayFD _n_Rizrb_DRabZFF = {&Rizrb_DRabZFF,0,0,0,CLS_Date,0,"Rizrb_DRabZFF","Дата макс зар-ка рабочая"};
StayFD *_Rizrb_DRabZFF = &_n_Rizrb_DRabZFF;

StayDate Rizrb_DRabZU;
StayFD _n_Rizrb_DRabZU = {&Rizrb_DRabZU,0,0,0,CLS_Date,0,"Rizrb_DRabZU","Дата макс зар-ка рабочая"};
StayFD *_Rizrb_DRabZU = &_n_Rizrb_DRabZU;

StayDate Rizrb_RabMU;
StayFD _n_Rizrb_RabMU = {&Rizrb_RabMU,0,0,0,CLS_Date,0,"Rizrb_RabMU","Кол-во месяцев зар-ка рабочая"};
StayFD *_Rizrb_RabMU = &_n_Rizrb_RabMU;

BYTE  Rizrb_Day;
StayFD _n_Rizrb_Day = {&Rizrb_Day,0,0,0,CLS_S,0,"Rizrb_Day","Количество дней"};
StayFD *_Rizrb_Day = &_n_Rizrb_Day;

BYTE  Rizrb_DayH;
StayFD _n_Rizrb_DayH = {&Rizrb_DayH,0,0,0,CLS_S,0,"Rizrb_DayH","Количество праздников"};
StayFD *_Rizrb_DayH = &_n_Rizrb_DayH;

STAYI6 Rizrb_Dopl;
StayFD _n_Rizrb_Dopl = {&Rizrb_Dopl,0,0,0,CLS_Hs,5,"Rizrb_Dopl","Сумма доплат"};
StayFD *_Rizrb_Dopl = &_n_Rizrb_Dopl;

BYTE  Rizrb_NMesKF;
StayFD _n_Rizrb_NMesKF = {&Rizrb_NMesKF,0,0,0,CLS_S,0,"Rizrb_NMesKF","Число месяцев по IKoef"};
StayFD *_Rizrb_NMesKF = &_n_Rizrb_NMesKF;

BYTE  Rizrb_NMesDl1;
StayFD _n_Rizrb_NMesDl1 = {&Rizrb_NMesDl1,0,0,0,CLS_S,0,"Rizrb_NMesDl1","Число месяцев по IKoef"};
StayFD *_Rizrb_NMesDl1 = &_n_Rizrb_NMesDl1;

BYTE  Rizrb_NMesDl2;
StayFD _n_Rizrb_NMesDl2 = {&Rizrb_NMesDl2,0,0,0,CLS_S,0,"Rizrb_NMesDl2","Число месяцев по IKoef"};
StayFD *_Rizrb_NMesDl2 = &_n_Rizrb_NMesDl2;

BYTE  Rizrb_NMesDS2;
StayFD _n_Rizrb_NMesDS2 = {&Rizrb_NMesDS2,0,0,0,CLS_S,0,"Rizrb_NMesDS2","Число месяцев по IKoef"};
StayFD *_Rizrb_NMesDS2 = &_n_Rizrb_NMesDS2;

BYTE  Rizrb_NMesDl3;
StayFD _n_Rizrb_NMesDl3 = {&Rizrb_NMesDl3,0,0,0,CLS_S,0,"Rizrb_NMesDl3","Число месяцев по IKoef"};
StayFD *_Rizrb_NMesDl3 = &_n_Rizrb_NMesDl3;

BYTE  Rizrb_NMesDl4;
StayFD _n_Rizrb_NMesDl4 = {&Rizrb_NMesDl4,0,0,0,CLS_S,0,"Rizrb_NMesDl4","Число месяцев по IKoef"};
StayFD *_Rizrb_NMesDl4 = &_n_Rizrb_NMesDl4;

BYTE  Rizrb_NMesDS4;
StayFD _n_Rizrb_NMesDS4 = {&Rizrb_NMesDS4,0,0,0,CLS_S,0,"Rizrb_NMesDS4","Число месяцев по IKoef"};
StayFD *_Rizrb_NMesDS4 = &_n_Rizrb_NMesDS4;

BYTE  Rizrb_NMesDl5;
StayFD _n_Rizrb_NMesDl5 = {&Rizrb_NMesDl5,0,0,0,CLS_S,0,"Rizrb_NMesDl5","Число месяцев по IKoef"};
StayFD *_Rizrb_NMesDl5 = &_n_Rizrb_NMesDl5;

BYTE  Rizrb_NMesDS5;
StayFD _n_Rizrb_NMesDS5 = {&Rizrb_NMesDS5,0,0,0,CLS_S,0,"Rizrb_NMesDS5","Число месяцев по IKoef"};
StayFD *_Rizrb_NMesDS5 = &_n_Rizrb_NMesDS5;

BYTE  Rizrb_NMesDl6;
StayFD _n_Rizrb_NMesDl6 = {&Rizrb_NMesDl6,0,0,0,CLS_S,0,"Rizrb_NMesDl6","Число месяцев по IKoef"};
StayFD *_Rizrb_NMesDl6 = &_n_Rizrb_NMesDl6;

BYTE  Rizrb_NMesDS6;
StayFD _n_Rizrb_NMesDS6 = {&Rizrb_NMesDS6,0,0,0,CLS_S,0,"Rizrb_NMesDS6","Число месяцев по IKoef"};
StayFD *_Rizrb_NMesDS6 = &_n_Rizrb_NMesDS6;

BYTE  Rizrb_NMesKF1;
StayFD _n_Rizrb_NMesKF1 = {&Rizrb_NMesKF1,0,0,0,CLS_S,0,"Rizrb_NMesKF1","Число месяцев по IKoef1"};
StayFD *_Rizrb_NMesKF1 = &_n_Rizrb_NMesKF1;

BYTE  Rizrb_NMesKF2;
StayFD _n_Rizrb_NMesKF2 = {&Rizrb_NMesKF2,0,0,0,CLS_S,0,"Rizrb_NMesKF2","Число месяцев по IKoef2"};
StayFD *_Rizrb_NMesKF2 = &_n_Rizrb_NMesKF2;

BYTE  Rizrb_MaxNMB1;
StayFD _n_Rizrb_MaxNMB1 = {&Rizrb_MaxNMB1,0,0,0,CLS_S,0,"Rizrb_MaxNMB1","Число месяцев по Молдове-Беларусў"};
StayFD *_Rizrb_MaxNMB1 = &_n_Rizrb_MaxNMB1;

BYTE  Rizrb_MaxNMB2;
StayFD _n_Rizrb_MaxNMB2 = {&Rizrb_MaxNMB2,0,0,0,CLS_S,0,"Rizrb_MaxNMB2","Число месяцев по Молдове-Беларусў"};
StayFD *_Rizrb_MaxNMB2 = &_n_Rizrb_MaxNMB2;

BYTE  Rizrb_NMes24A;
StayFD _n_Rizrb_NMes24A = {&Rizrb_NMes24A,0,0,0,CLS_S,0,"Rizrb_NMes24A","Число месяцев по IKoef2"};
StayFD *_Rizrb_NMes24A = &_n_Rizrb_NMes24A;

BYTE  Rizrb_NMes24I;
StayFD _n_Rizrb_NMes24I = {&Rizrb_NMes24I,0,0,0,CLS_S,0,"Rizrb_NMes24I","Число месяцев по IKoef2"};
StayFD *_Rizrb_NMes24I = &_n_Rizrb_NMes24I;

BYTE  Rizrb_NMes25A;
StayFD _n_Rizrb_NMes25A = {&Rizrb_NMes25A,0,0,0,CLS_S,0,"Rizrb_NMes25A","Число месяцев по IKoef2"};
StayFD *_Rizrb_NMes25A = &_n_Rizrb_NMes25A;

BYTE  Rizrb_NMes25I;
StayFD _n_Rizrb_NMes25I = {&Rizrb_NMes25I,0,0,0,CLS_S,0,"Rizrb_NMes25I","Число месяцев по IKoef2"};
StayFD *_Rizrb_NMes25I = &_n_Rizrb_NMes25I;

BYTE  Rizrb_NMes27A;
StayFD _n_Rizrb_NMes27A = {&Rizrb_NMes27A,0,0,0,CLS_S,0,"Rizrb_NMes27A","Число месяцев по IKoef2"};
StayFD *_Rizrb_NMes27A = &_n_Rizrb_NMes27A;

BYTE  Rizrb_NMes27I;
StayFD _n_Rizrb_NMes27I = {&Rizrb_NMes27I,0,0,0,CLS_S,0,"Rizrb_NMes27I","Число месяцев по IKoef2"};
StayFD *_Rizrb_NMes27I = &_n_Rizrb_NMes27I;

WORD  Rizrb_NS79DP;
StayFD _n_Rizrb_NS79DP = {&Rizrb_NS79DP,0,0,0,CLS_I,0,"Rizrb_NS79DP","K-во уд-х спецучастков 79"};
StayFD *_Rizrb_NS79DP = &_n_Rizrb_NS79DP;

WORD  Rizrb_NS79DPI;
StayFD _n_Rizrb_NS79DPI = {&Rizrb_NS79DPI,0,0,0,CLS_I,0,"Rizrb_NS79DPI","K-во  уд-х спецучастков 79"};
StayFD *_Rizrb_NS79DPI = &_n_Rizrb_NS79DPI;

WORD  Rizrb_NS79D7;
StayFD _n_Rizrb_NS79D7 = {&Rizrb_NS79D7,0,0,0,CLS_I,0,"Rizrb_NS79D7","K-во  уд-х спецучастков 79"};
StayFD *_Rizrb_NS79D7 = &_n_Rizrb_NS79D7;

WORD  Rizrb_NS79D7I;
StayFD _n_Rizrb_NS79D7I = {&Rizrb_NS79D7I,0,0,0,CLS_I,0,"Rizrb_NS79D7I","K-во  уд-х спецучастков 79"};
StayFD *_Rizrb_NS79D7I = &_n_Rizrb_NS79D7I;

WORD  Rizrb_NStrOP;
StayFD _n_Rizrb_NStrOP = {&Rizrb_NStrOP,0,0,0,CLS_I,0,"Rizrb_NStrOP","K-во ост-ся неп-х спецучастков"};
StayFD *_Rizrb_NStrOP = &_n_Rizrb_NStrOP;

WORD  Rizrb_NStrOPI;
StayFD _n_Rizrb_NStrOPI = {&Rizrb_NStrOPI,0,0,0,CLS_I,0,"Rizrb_NStrOPI","K-во ост-ся неп-х спецучастков"};
StayFD *_Rizrb_NStrOPI = &_n_Rizrb_NStrOPI;

WORD  Rizrb_NStrO7;
StayFD _n_Rizrb_NStrO7 = {&Rizrb_NStrO7,0,0,0,CLS_I,0,"Rizrb_NStrO7","K-во ост-ся неп-х спецучастков"};
StayFD *_Rizrb_NStrO7 = &_n_Rizrb_NStrO7;

WORD  Rizrb_NStrO7I;
StayFD _n_Rizrb_NStrO7I = {&Rizrb_NStrO7I,0,0,0,CLS_I,0,"Rizrb_NStrO7I","K-во ост-ся неп-х спецучастков"};
StayFD *_Rizrb_NStrO7I = &_n_Rizrb_NStrO7I;

DWORD Rizrb_NSumOP;
StayFD _n_Rizrb_NSumOP = {&Rizrb_NSumOP,0,0,0,CLS_L,0,"Rizrb_NSumOP","Сумма дней ост-ся неп-х спецучастков"};
StayFD *_Rizrb_NSumOP = &_n_Rizrb_NSumOP;

DWORD Rizrb_NSumOPI;
StayFD _n_Rizrb_NSumOPI = {&Rizrb_NSumOPI,0,0,0,CLS_L,0,"Rizrb_NSumOPI","Сумма дней ост-ся неп-х спецучастков"};
StayFD *_Rizrb_NSumOPI = &_n_Rizrb_NSumOPI;

DWORD Rizrb_NSumO7;
StayFD _n_Rizrb_NSumO7 = {&Rizrb_NSumO7,0,0,0,CLS_L,0,"Rizrb_NSumO7","Сумма дней ост-ся неп-х спецучастков"};
StayFD *_Rizrb_NSumO7 = &_n_Rizrb_NSumO7;

DWORD Rizrb_NSumO7I;
StayFD _n_Rizrb_NSumO7I = {&Rizrb_NSumO7I,0,0,0,CLS_L,0,"Rizrb_NSumO7I","Сумма дней ост-ся неп-х спецучастков"};
StayFD *_Rizrb_NSumO7I = &_n_Rizrb_NSumO7I;

BYTE  Rizrb_NStrSP;
StayFD _n_Rizrb_NStrSP = {&Rizrb_NStrSP,0,0,0,CLS_S,0,"Rizrb_NStrSP","K-во спецучастков"};
StayFD *_Rizrb_NStrSP = &_n_Rizrb_NStrSP;

BYTE  Rizrb_NStrSPI;
StayFD _n_Rizrb_NStrSPI = {&Rizrb_NStrSPI,0,0,0,CLS_S,0,"Rizrb_NStrSPI","K-во спецучастков"};
StayFD *_Rizrb_NStrSPI = &_n_Rizrb_NStrSPI;

BYTE  Rizrb_NStrS7;
StayFD _n_Rizrb_NStrS7 = {&Rizrb_NStrS7,0,0,0,CLS_S,0,"Rizrb_NStrS7","K-во спецучастков"};
StayFD *_Rizrb_NStrS7 = &_n_Rizrb_NStrS7;

BYTE  Rizrb_NStrS7I;
StayFD _n_Rizrb_NStrS7I = {&Rizrb_NStrS7I,0,0,0,CLS_S,0,"Rizrb_NStrS7I","K-во спецучастков"};
StayFD *_Rizrb_NStrS7I = &_n_Rizrb_NStrS7I;

BYTE  Rizrb_NStrHP;
StayFD _n_Rizrb_NStrHP = {&Rizrb_NStrHP,0,0,0,CLS_S,0,"Rizrb_NStrHP","K-во уд-х неп месяцев"};
StayFD *_Rizrb_NStrHP = &_n_Rizrb_NStrHP;

BYTE  Rizrb_NStrHPI;
StayFD _n_Rizrb_NStrHPI = {&Rizrb_NStrHPI,0,0,0,CLS_S,0,"Rizrb_NStrHPI","K-во уд-х неп месяцев"};
StayFD *_Rizrb_NStrHPI = &_n_Rizrb_NStrHPI;

BYTE  Rizrb_NStrH7;
StayFD _n_Rizrb_NStrH7 = {&Rizrb_NStrH7,0,0,0,CLS_S,0,"Rizrb_NStrH7","K-во уд-х неп месяцев"};
StayFD *_Rizrb_NStrH7 = &_n_Rizrb_NStrH7;

BYTE  Rizrb_NStrH7I;
StayFD _n_Rizrb_NStrH7I = {&Rizrb_NStrH7I,0,0,0,CLS_S,0,"Rizrb_NStrH7I","K-во уд-х неп месяцев"};
StayFD *_Rizrb_NStrH7I = &_n_Rizrb_NStrH7I;

BYTE  Rizrb_VarOpt;
StayFD _n_Rizrb_VarOpt = {&Rizrb_VarOpt,0,0,0,CLS_S,0,"Rizrb_VarOpt","Варўант оптимўзацўў"};
StayFD *_Rizrb_VarOpt = &_n_Rizrb_VarOpt;

BYTE  Rizrb_VarOptI;
StayFD _n_Rizrb_VarOptI = {&Rizrb_VarOptI,0,0,0,CLS_S,0,"Rizrb_VarOptI","Варўант оптимўзацўў"};
StayFD *_Rizrb_VarOptI = &_n_Rizrb_VarOptI;

STAYI6 Rizrb_IKoef1;
StayFD _n_Rizrb_IKoef1 = {&Rizrb_IKoef1,0,0,0,CLS_Hs,5,"Rizrb_IKoef1","Индывидуальный коеф-нт-1"};
StayFD *_Rizrb_IKoef1 = &_n_Rizrb_IKoef1;

STAYI6 Rizrb_IKoef2;
StayFD _n_Rizrb_IKoef2 = {&Rizrb_IKoef2,0,0,0,CLS_Hs,5,"Rizrb_IKoef2","Индывидуальный коеф-нт-2"};
StayFD *_Rizrb_IKoef2 = &_n_Rizrb_IKoef2;

STAYI6 Rizrb_IKNX1;
StayFD _n_Rizrb_IKNX1 = {&Rizrb_IKNX1,0,0,0,CLS_Hs,5,"Rizrb_IKNX1","Индывидуальный коеф-нт-1"};
StayFD *_Rizrb_IKNX1 = &_n_Rizrb_IKNX1;

STAYI6 Rizrb_IKNX2;
StayFD _n_Rizrb_IKNX2 = {&Rizrb_IKNX2,0,0,0,CLS_Hs,5,"Rizrb_IKNX2","Индывидуальный коеф-нт-2"};
StayFD *_Rizrb_IKNX2 = &_n_Rizrb_IKNX2;

STAYI6 Rizrb_IKNF1;
StayFD _n_Rizrb_IKNF1 = {&Rizrb_IKNF1,0,0,0,CLS_Hs,5,"Rizrb_IKNF1","Индывидуальный коеф-нт-1"};
StayFD *_Rizrb_IKNF1 = &_n_Rizrb_IKNF1;

STAYI6 Rizrb_IKNF2;
StayFD _n_Rizrb_IKNF2 = {&Rizrb_IKNF2,0,0,0,CLS_Hs,5,"Rizrb_IKNF2","Индывидуальный коеф-нт-2"};
StayFD *_Rizrb_IKNF2 = &_n_Rizrb_IKNF2;

STAYI6 Rizrb_IKNI1;
StayFD _n_Rizrb_IKNI1 = {&Rizrb_IKNI1,0,0,0,CLS_Hs,5,"Rizrb_IKNI1","Индывидуальный коеф-нт-1"};
StayFD *_Rizrb_IKNI1 = &_n_Rizrb_IKNI1;

STAYI6 Rizrb_IKNI2;
StayFD _n_Rizrb_IKNI2 = {&Rizrb_IKNI2,0,0,0,CLS_Hs,5,"Rizrb_IKNI2","Индывидуальный коеф-нт-2"};
StayFD *_Rizrb_IKNI2 = &_n_Rizrb_IKNI2;

STAYI6 Rizrb_IKNS1;
StayFD _n_Rizrb_IKNS1 = {&Rizrb_IKNS1,0,0,0,CLS_Hs,5,"Rizrb_IKNS1","Индывидуальный коеф-нт-1"};
StayFD *_Rizrb_IKNS1 = &_n_Rizrb_IKNS1;

STAYI6 Rizrb_IKNFNA1;
StayFD _n_Rizrb_IKNFNA1 = {&Rizrb_IKNFNA1,0,0,0,CLS_Hs,5,"Rizrb_IKNFNA1","Индывидуальный коеф-нт-1"};
StayFD *_Rizrb_IKNFNA1 = &_n_Rizrb_IKNFNA1;

STAYI6 Rizrb_IKNFNA2;
StayFD _n_Rizrb_IKNFNA2 = {&Rizrb_IKNFNA2,0,0,0,CLS_Hs,5,"Rizrb_IKNFNA2","Индывидуальный коеф-нт-2"};
StayFD *_Rizrb_IKNFNA2 = &_n_Rizrb_IKNFNA2;

STAYI6 Rizrb_IKGOS1;
StayFD _n_Rizrb_IKGOS1 = {&Rizrb_IKGOS1,0,0,0,CLS_Hs,5,"Rizrb_IKGOS1","Индывидуальный коеф-нт-1"};
StayFD *_Rizrb_IKGOS1 = &_n_Rizrb_IKGOS1;

STAYI6 Rizrb_IKGOS2;
StayFD _n_Rizrb_IKGOS2 = {&Rizrb_IKGOS2,0,0,0,CLS_Hs,5,"Rizrb_IKGOS2","Индывидуальный коеф-нт-2"};
StayFD *_Rizrb_IKGOS2 = &_n_Rizrb_IKGOS2;

STAYI6 Rizrb_IKfP24;
StayFD _n_Rizrb_IKfP24 = {&Rizrb_IKfP24,0,0,0,CLS_Hs,5,"Rizrb_IKfP24","Индывидуальный коеф-нт"};
StayFD *_Rizrb_IKfP24 = &_n_Rizrb_IKfP24;

STAYI6 Rizrb_IKfPI4;
StayFD _n_Rizrb_IKfPI4 = {&Rizrb_IKfPI4,0,0,0,CLS_Hs,5,"Rizrb_IKfPI4","Индывидуальный коеф-нт"};
StayFD *_Rizrb_IKfPI4 = &_n_Rizrb_IKfPI4;

STAYI6 Rizrb_IKoef;
StayFD _n_Rizrb_IKoef = {&Rizrb_IKoef,0,0,0,CLS_Hs,5,"Rizrb_IKoef","Индывидуальный коеф-нт"};
StayFD *_Rizrb_IKoef = &_n_Rizrb_IKoef;

STAYI6 Rizrb_IKoef24;
StayFD _n_Rizrb_IKoef24 = {&Rizrb_IKoef24,0,0,0,CLS_Hs,5,"Rizrb_IKoef24","Индывидуальный коеф-нт"};
StayFD *_Rizrb_IKoef24 = &_n_Rizrb_IKoef24;

STAYI6 Rizrb_IKoefI4;
StayFD _n_Rizrb_IKoefI4 = {&Rizrb_IKoefI4,0,0,0,CLS_Hs,5,"Rizrb_IKoefI4","Индывидуальный коеф-нт"};
StayFD *_Rizrb_IKoefI4 = &_n_Rizrb_IKoefI4;

STAYI6 Rizrb_IKoef22;
StayFD _n_Rizrb_IKoef22 = {&Rizrb_IKoef22,0,0,0,CLS_Hs,5,"Rizrb_IKoef22","Индывидуальный коеф-нт"};
StayFD *_Rizrb_IKoef22 = &_n_Rizrb_IKoef22;

STAYI6 Rizrb_IKf245;
StayFD _n_Rizrb_IKf245 = {&Rizrb_IKf245,0,0,0,CLS_Hs,5,"Rizrb_IKf245","Индывидуальный коеф-нт"};
StayFD *_Rizrb_IKf245 = &_n_Rizrb_IKf245;

STAYI6 Rizrb_IKf247;
StayFD _n_Rizrb_IKf247 = {&Rizrb_IKf247,0,0,0,CLS_Hs,5,"Rizrb_IKf247","Индывидуальный коеф-нт"};
StayFD *_Rizrb_IKf247 = &_n_Rizrb_IKf247;

STAYI6 Rizrb_IKoef24A;
StayFD _n_Rizrb_IKoef24A = {&Rizrb_IKoef24A,0,0,0,CLS_Hs,5,"Rizrb_IKoef24A","Индывидуальный коеф-нт"};
StayFD *_Rizrb_IKoef24A = &_n_Rizrb_IKoef24A;

STAYI6 Rizrb_IKoef44;
StayFD _n_Rizrb_IKoef44 = {&Rizrb_IKoef44,0,0,0,CLS_Hs,5,"Rizrb_IKoef44","Индывидуальный коеф-нт"};
StayFD *_Rizrb_IKoef44 = &_n_Rizrb_IKoef44;

STAYI6 Rizrb_IKoefNF;
StayFD _n_Rizrb_IKoefNF = {&Rizrb_IKoefNF,0,0,0,CLS_Hs,5,"Rizrb_IKoefNF","Индывидуальный коеф-нт"};
StayFD *_Rizrb_IKoefNF = &_n_Rizrb_IKoefNF;

STAYI6 Rizrb_IKfPOkl;
StayFD _n_Rizrb_IKfPOkl = {&Rizrb_IKfPOkl,0,0,0,CLS_Hs,5,"Rizrb_IKfPOkl","Индывидуальный коеф-нт"};
StayFD *_Rizrb_IKfPOkl = &_n_Rizrb_IKfPOkl;

STAYI6 Rizrb_IKSuma;
StayFD _n_Rizrb_IKSuma = {&Rizrb_IKSuma,0,0,0,CLS_Hs,5,"Rizrb_IKSuma","Сумма инд. коеф-ов"};
StayFD *_Rizrb_IKSuma = &_n_Rizrb_IKSuma;

STAYI6 Rizrb_IKP24;
StayFD _n_Rizrb_IKP24 = {&Rizrb_IKP24,0,0,0,CLS_Hs,5,"Rizrb_IKP24","Сумма инд. коеф-ов"};
StayFD *_Rizrb_IKP24 = &_n_Rizrb_IKP24;

STAYI6 Rizrb_IKS24;
StayFD _n_Rizrb_IKS24 = {&Rizrb_IKS24,0,0,0,CLS_Hs,5,"Rizrb_IKS24","Сумма инд. коеф-ов"};
StayFD *_Rizrb_IKS24 = &_n_Rizrb_IKS24;

STAYI6 Rizrb_IKS22;
StayFD _n_Rizrb_IKS22 = {&Rizrb_IKS22,0,0,0,CLS_Hs,5,"Rizrb_IKS22","Сумма инд. коеф-ов"};
StayFD *_Rizrb_IKS22 = &_n_Rizrb_IKS22;

STAYI6 Rizrb_IKPI4;
StayFD _n_Rizrb_IKPI4 = {&Rizrb_IKPI4,0,0,0,CLS_Hs,5,"Rizrb_IKPI4","Сумма инд. коеф-ов"};
StayFD *_Rizrb_IKPI4 = &_n_Rizrb_IKPI4;

STAYI6 Rizrb_IKSI4;
StayFD _n_Rizrb_IKSI4 = {&Rizrb_IKSI4,0,0,0,CLS_Hs,5,"Rizrb_IKSI4","Сумма инд. коеф-ов"};
StayFD *_Rizrb_IKSI4 = &_n_Rizrb_IKSI4;

STAYI6 Rizrb_IKS24A;
StayFD _n_Rizrb_IKS24A = {&Rizrb_IKS24A,0,0,0,CLS_Hs,5,"Rizrb_IKS24A","Сумма инд. коеф-ов"};
StayFD *_Rizrb_IKS24A = &_n_Rizrb_IKS24A;

STAYI6 Rizrb_IKS245;
StayFD _n_Rizrb_IKS245 = {&Rizrb_IKS245,0,0,0,CLS_Hs,5,"Rizrb_IKS245","Сумма инд. коеф-ов"};
StayFD *_Rizrb_IKS245 = &_n_Rizrb_IKS245;

STAYI6 Rizrb_IKS247;
StayFD _n_Rizrb_IKS247 = {&Rizrb_IKS247,0,0,0,CLS_Hs,5,"Rizrb_IKS247","Сумма инд. коеф-ов"};
StayFD *_Rizrb_IKS247 = &_n_Rizrb_IKS247;

STAYI6 Rizrb_IKS245A;
StayFD _n_Rizrb_IKS245A = {&Rizrb_IKS245A,0,0,0,CLS_Hs,5,"Rizrb_IKS245A","Сумма инд. коеф-ов"};
StayFD *_Rizrb_IKS245A = &_n_Rizrb_IKS245A;

STAYI6 Rizrb_IKS247A;
StayFD _n_Rizrb_IKS247A = {&Rizrb_IKS247A,0,0,0,CLS_Hs,5,"Rizrb_IKS247A","Сумма инд. коеф-ов"};
StayFD *_Rizrb_IKS247A = &_n_Rizrb_IKS247A;

STAYI6 Rizrb_IKSNF;
StayFD _n_Rizrb_IKSNF = {&Rizrb_IKSNF,0,0,0,CLS_Hs,5,"Rizrb_IKSNF","Сумма инд. коеф-ов"};
StayFD *_Rizrb_IKSNF = &_n_Rizrb_IKSNF;

STAYI6 Rizrb_MaxMF192;
StayFD _n_Rizrb_MaxMF192 = {&Rizrb_MaxMF192,0,0,0,CLS_Hs,5,"Rizrb_MaxMF192","Макс Факт по 1-му род"};
StayFD *_Rizrb_MaxMF192 = &_n_Rizrb_MaxMF192;

STAYI6 Rizrb_MaxMF292;
StayFD _n_Rizrb_MaxMF292 = {&Rizrb_MaxMF292,0,0,0,CLS_Hs,5,"Rizrb_MaxMF292","Макс Факт по 2-му род"};
StayFD *_Rizrb_MaxMF292 = &_n_Rizrb_MaxMF292;

STAYI6 Rizrb_MaxMF121;
StayFD _n_Rizrb_MaxMF121 = {&Rizrb_MaxMF121,0,0,0,CLS_Hs,5,"Rizrb_MaxMF121","Макс Факт по 1-му род"};
StayFD *_Rizrb_MaxMF121 = &_n_Rizrb_MaxMF121;

STAYI6 Rizrb_MaxMF221;
StayFD _n_Rizrb_MaxMF221 = {&Rizrb_MaxMF221,0,0,0,CLS_Hs,5,"Rizrb_MaxMF221","Макс Факт по 2-му род"};
StayFD *_Rizrb_MaxMF221 = &_n_Rizrb_MaxMF221;

BYTE  Rizrb_MaxMN192;
StayFD _n_Rizrb_MaxMN192 = {&Rizrb_MaxMN192,0,0,0,CLS_S,0,"Rizrb_MaxMN192","Число месяцев по 1-му родителю"};
StayFD *_Rizrb_MaxMN192 = &_n_Rizrb_MaxMN192;

BYTE  Rizrb_MaxMN292;
StayFD _n_Rizrb_MaxMN292 = {&Rizrb_MaxMN292,0,0,0,CLS_S,0,"Rizrb_MaxMN292","Число месяцев по 2-му родителю"};
StayFD *_Rizrb_MaxMN292 = &_n_Rizrb_MaxMN292;

STAYI6 Rizrb_MaxMZF92;
StayFD _n_Rizrb_MaxMZF92 = {&Rizrb_MaxMZF92,0,0,0,CLS_Hs,5,"Rizrb_MaxMZF92","Сумма неск з-ка для расчета"};
StayFD *_Rizrb_MaxMZF92 = &_n_Rizrb_MaxMZF92;

STAYI6 Rizrb_MaxMZF21;
StayFD _n_Rizrb_MaxMZF21 = {&Rizrb_MaxMZF21,0,0,0,CLS_Hs,5,"Rizrb_MaxMZF21","Сумма неск з-ка для расчета"};
StayFD *_Rizrb_MaxMZF21 = &_n_Rizrb_MaxMZF21;

STAYI6 Rizrb_MaxZU1;
StayFD _n_Rizrb_MaxZU1 = {&Rizrb_MaxZU1,0,0,0,CLS_Hs,5,"Rizrb_MaxZU1","Сумма"};
StayFD *_Rizrb_MaxZU1 = &_n_Rizrb_MaxZU1;

STAYI6 Rizrb_MaxZU2;
StayFD _n_Rizrb_MaxZU2 = {&Rizrb_MaxZU2,0,0,0,CLS_Hs,5,"Rizrb_MaxZU2","Сумма"};
StayFD *_Rizrb_MaxZU2 = &_n_Rizrb_MaxZU2;

STAYI6 Rizrb_MaxZMB1;
StayFD _n_Rizrb_MaxZMB1 = {&Rizrb_MaxZMB1,0,0,0,CLS_Hs,5,"Rizrb_MaxZMB1","Сумма"};
StayFD *_Rizrb_MaxZMB1 = &_n_Rizrb_MaxZMB1;

STAYI6 Rizrb_MaxZMB2;
StayFD _n_Rizrb_MaxZMB2 = {&Rizrb_MaxZMB2,0,0,0,CLS_Hs,5,"Rizrb_MaxZMB2","Сумма"};
StayFD *_Rizrb_MaxZMB2 = &_n_Rizrb_MaxZMB2;

STAYI6 Rizrb_MaxZMB8;
StayFD _n_Rizrb_MaxZMB8 = {&Rizrb_MaxZMB8,0,0,0,CLS_Hs,5,"Rizrb_MaxZMB8","Сумма"};
StayFD *_Rizrb_MaxZMB8 = &_n_Rizrb_MaxZMB8;

STAYI6 Rizrb_MaxMZFP;
StayFD _n_Rizrb_MaxMZFP = {&Rizrb_MaxMZFP,0,0,0,CLS_Hs,5,"Rizrb_MaxMZFP","Сумма неск з-ка для расчета нр"};
StayFD *_Rizrb_MaxMZFP = &_n_Rizrb_MaxMZFP;

STAYI6 Rizrb_MaxMesF1;
StayFD _n_Rizrb_MaxMesF1 = {&Rizrb_MaxMesF1,0,0,0,CLS_Hs,5,"Rizrb_MaxMesF1","Макс Факт по 1-му род"};
StayFD *_Rizrb_MaxMesF1 = &_n_Rizrb_MaxMesF1;

STAYI6 Rizrb_MaxMesF2;
StayFD _n_Rizrb_MaxMesF2 = {&Rizrb_MaxMesF2,0,0,0,CLS_Hs,5,"Rizrb_MaxMesF2","Макс Факт по 2-му род"};
StayFD *_Rizrb_MaxMesF2 = &_n_Rizrb_MaxMesF2;

STAYI6 Rizrb_MaxMesFF;
StayFD _n_Rizrb_MaxMesFF = {&Rizrb_MaxMesFF,0,0,0,CLS_Hs,5,"Rizrb_MaxMesFF","Макс Факт по 2-м род-м"};
StayFD *_Rizrb_MaxMesFF = &_n_Rizrb_MaxMesFF;

STAYI6 Rizrb_MaxM21FF;
StayFD _n_Rizrb_MaxM21FF = {&Rizrb_MaxM21FF,0,0,0,CLS_Hs,5,"Rizrb_MaxM21FF","Макс Факт по 2-м род-м"};
StayFD *_Rizrb_MaxM21FF = &_n_Rizrb_MaxM21FF;

STAYI6 Rizrb_MaxMesK1;
StayFD _n_Rizrb_MaxMesK1 = {&Rizrb_MaxMesK1,0,0,0,CLS_Hs,5,"Rizrb_MaxMesK1","Макс Скор 1-й род"};
StayFD *_Rizrb_MaxMesK1 = &_n_Rizrb_MaxMesK1;

STAYI6 Rizrb_MaxMesK2;
StayFD _n_Rizrb_MaxMesK2 = {&Rizrb_MaxMesK2,0,0,0,CLS_Hs,5,"Rizrb_MaxMesK2","Макс Скор 2-й род"};
StayFD *_Rizrb_MaxMesK2 = &_n_Rizrb_MaxMesK2;

BYTE  Rizrb_MaxMesN1;
StayFD _n_Rizrb_MaxMesN1 = {&Rizrb_MaxMesN1,0,0,0,CLS_S,0,"Rizrb_MaxMesN1","Число месяцев по 1-му родителю"};
StayFD *_Rizrb_MaxMesN1 = &_n_Rizrb_MaxMesN1;

BYTE  Rizrb_MaxMesN2;
StayFD _n_Rizrb_MaxMesN2 = {&Rizrb_MaxMesN2,0,0,0,CLS_S,0,"Rizrb_MaxMesN2","Число месяцев по 2-му родителю"};
StayFD *_Rizrb_MaxMesN2 = &_n_Rizrb_MaxMesN2;

BYTE  Rizrb_MaxNU1;
StayFD _n_Rizrb_MaxNU1 = {&Rizrb_MaxNU1,0,0,0,CLS_S,0,"Rizrb_MaxNU1",""};
StayFD *_Rizrb_MaxNU1 = &_n_Rizrb_MaxNU1;

BYTE  Rizrb_MaxNU2;
StayFD _n_Rizrb_MaxNU2 = {&Rizrb_MaxNU2,0,0,0,CLS_S,0,"Rizrb_MaxNU2",""};
StayFD *_Rizrb_MaxNU2 = &_n_Rizrb_MaxNU2;

BYTE  Rizrb_MaxMU1;
StayFD _n_Rizrb_MaxMU1 = {&Rizrb_MaxMU1,0,0,0,CLS_S,0,"Rizrb_MaxMU1","Число месяцев по ущербу1"};
StayFD *_Rizrb_MaxMU1 = &_n_Rizrb_MaxMU1;

BYTE  Rizrb_MaxMU2;
StayFD _n_Rizrb_MaxMU2 = {&Rizrb_MaxMU2,0,0,0,CLS_S,0,"Rizrb_MaxMU2","Число месяцев по ущербу2"};
StayFD *_Rizrb_MaxMU2 = &_n_Rizrb_MaxMU2;

BYTE  Rizrb_MaxMesP;
StayFD _n_Rizrb_MaxMesP = {&Rizrb_MaxMesP,0,0,0,CLS_S,0,"Rizrb_MaxMesP","Число месяцев н/р"};
StayFD *_Rizrb_MaxMesP = &_n_Rizrb_MaxMesP;

STAYI6 Rizrb_MaxMesZF;
StayFD _n_Rizrb_MaxMesZF = {&Rizrb_MaxMesZF,0,0,0,CLS_Hs,5,"Rizrb_MaxMesZF","Сумма неск з-ка для расчета"};
StayFD *_Rizrb_MaxMesZF = &_n_Rizrb_MaxMesZF;

STAYI6 Rizrb_MaxMesZK;
StayFD _n_Rizrb_MaxMesZK = {&Rizrb_MaxMesZK,0,0,0,CLS_Hs,5,"Rizrb_MaxMesZK","Сумма скорр з-ка для расчета"};
StayFD *_Rizrb_MaxMesZK = &_n_Rizrb_MaxMesZK;

BYTE  Rizrb_MaxNF192;
StayFD _n_Rizrb_MaxNF192 = {&Rizrb_MaxNF192,0,0,0,CLS_S,0,"Rizrb_MaxNF192","ном расч по факту 1-й род"};
StayFD *_Rizrb_MaxNF192 = &_n_Rizrb_MaxNF192;

BYTE  Rizrb_MaxNF292;
StayFD _n_Rizrb_MaxNF292 = {&Rizrb_MaxNF292,0,0,0,CLS_S,0,"Rizrb_MaxNF292","ном расч по факту 2-й род"};
StayFD *_Rizrb_MaxNF292 = &_n_Rizrb_MaxNF292;

BYTE  Rizrb_MaxNrs1;
StayFD _n_Rizrb_MaxNrs1 = {&Rizrb_MaxNrs1,0,0,0,CLS_S,0,"Rizrb_MaxNrs1","Номер макс расчета 1-го род"};
StayFD *_Rizrb_MaxNrs1 = &_n_Rizrb_MaxNrs1;

BYTE  Rizrb_MaxNrs2;
StayFD _n_Rizrb_MaxNrs2 = {&Rizrb_MaxNrs2,0,0,0,CLS_S,0,"Rizrb_MaxNrs2","Номер макс расчета 2-го род"};
StayFD *_Rizrb_MaxNrs2 = &_n_Rizrb_MaxNrs2;

BYTE  Rizrb_MaxNNX1;
StayFD _n_Rizrb_MaxNNX1 = {&Rizrb_MaxNNX1,0,0,0,CLS_S,0,"Rizrb_MaxNNX1","Номер макс расчета 1-го род"};
StayFD *_Rizrb_MaxNNX1 = &_n_Rizrb_MaxNNX1;

BYTE  Rizrb_MaxNNX2;
StayFD _n_Rizrb_MaxNNX2 = {&Rizrb_MaxNNX2,0,0,0,CLS_S,0,"Rizrb_MaxNNX2","Номер макс расчета 2-го род"};
StayFD *_Rizrb_MaxNNX2 = &_n_Rizrb_MaxNNX2;

BYTE  Rizrb_MaxNNF1;
StayFD _n_Rizrb_MaxNNF1 = {&Rizrb_MaxNNF1,0,0,0,CLS_S,0,"Rizrb_MaxNNF1","Номер макс расчета 1-го род"};
StayFD *_Rizrb_MaxNNF1 = &_n_Rizrb_MaxNNF1;

BYTE  Rizrb_MaxNNF2;
StayFD _n_Rizrb_MaxNNF2 = {&Rizrb_MaxNNF2,0,0,0,CLS_S,0,"Rizrb_MaxNNF2","Номер макс расчета 2-го род"};
StayFD *_Rizrb_MaxNNF2 = &_n_Rizrb_MaxNNF2;

BYTE  Rizrb_MaxNNI1;
StayFD _n_Rizrb_MaxNNI1 = {&Rizrb_MaxNNI1,0,0,0,CLS_S,0,"Rizrb_MaxNNI1","Номер макс расчета 1-го род"};
StayFD *_Rizrb_MaxNNI1 = &_n_Rizrb_MaxNNI1;

BYTE  Rizrb_MaxNNI2;
StayFD _n_Rizrb_MaxNNI2 = {&Rizrb_MaxNNI2,0,0,0,CLS_S,0,"Rizrb_MaxNNI2","Номер макс расчета 2-го род"};
StayFD *_Rizrb_MaxNNI2 = &_n_Rizrb_MaxNNI2;

BYTE  Rizrb_MaxNNS1;
StayFD _n_Rizrb_MaxNNS1 = {&Rizrb_MaxNNS1,0,0,0,CLS_S,0,"Rizrb_MaxNNS1","Номер макс расчета 1-го род"};
StayFD *_Rizrb_MaxNNS1 = &_n_Rizrb_MaxNNS1;

BYTE  Rizrb_MaxNNA1;
StayFD _n_Rizrb_MaxNNA1 = {&Rizrb_MaxNNA1,0,0,0,CLS_S,0,"Rizrb_MaxNNA1","Номер макс расчета 1-го род"};
StayFD *_Rizrb_MaxNNA1 = &_n_Rizrb_MaxNNA1;

BYTE  Rizrb_MaxNNA2;
StayFD _n_Rizrb_MaxNNA2 = {&Rizrb_MaxNNA2,0,0,0,CLS_S,0,"Rizrb_MaxNNA2","Номер макс расчета 2-го род"};
StayFD *_Rizrb_MaxNNA2 = &_n_Rizrb_MaxNNA2;

BYTE  Rizrb_MaxNNG1;
StayFD _n_Rizrb_MaxNNG1 = {&Rizrb_MaxNNG1,0,0,0,CLS_S,0,"Rizrb_MaxNNG1","Номер макс расчета 1-го род"};
StayFD *_Rizrb_MaxNNG1 = &_n_Rizrb_MaxNNG1;

BYTE  Rizrb_MaxNNG2;
StayFD _n_Rizrb_MaxNNG2 = {&Rizrb_MaxNNG2,0,0,0,CLS_S,0,"Rizrb_MaxNNG2","Номер макс расчета 2-го род"};
StayFD *_Rizrb_MaxNNG2 = &_n_Rizrb_MaxNNG2;

BYTE  Rizrb_MaxNrsF1;
StayFD _n_Rizrb_MaxNrsF1 = {&Rizrb_MaxNrsF1,0,0,0,CLS_S,0,"Rizrb_MaxNrsF1","ном расч по факту 1-й род"};
StayFD *_Rizrb_MaxNrsF1 = &_n_Rizrb_MaxNrsF1;

BYTE  Rizrb_MaxNrsF2;
StayFD _n_Rizrb_MaxNrsF2 = {&Rizrb_MaxNrsF2,0,0,0,CLS_S,0,"Rizrb_MaxNrsF2","ном расч по факту 2-й род"};
StayFD *_Rizrb_MaxNrsF2 = &_n_Rizrb_MaxNrsF2;

BYTE  Rizrb_MNrsPZ1;
StayFD _n_Rizrb_MNrsPZ1 = {&Rizrb_MNrsPZ1,0,0,0,CLS_S,0,"Rizrb_MNrsPZ1","ном расч по факту 1-й род"};
StayFD *_Rizrb_MNrsPZ1 = &_n_Rizrb_MNrsPZ1;

BYTE  Rizrb_MNrsPZ2;
StayFD _n_Rizrb_MNrsPZ2 = {&Rizrb_MNrsPZ2,0,0,0,CLS_S,0,"Rizrb_MNrsPZ2","ном расч по факту 2-й род"};
StayFD *_Rizrb_MNrsPZ2 = &_n_Rizrb_MNrsPZ2;

BYTE  Rizrb_MaxNrsK1;
StayFD _n_Rizrb_MaxNrsK1 = {&Rizrb_MaxNrsK1,0,0,0,CLS_S,0,"Rizrb_MaxNrsK1","ном расч по скорр 1-й род"};
StayFD *_Rizrb_MaxNrsK1 = &_n_Rizrb_MaxNrsK1;

BYTE  Rizrb_MaxNrsK2;
StayFD _n_Rizrb_MaxNrsK2 = {&Rizrb_MaxNrsK2,0,0,0,CLS_S,0,"Rizrb_MaxNrsK2","ном расч по скорр 2-й род"};
StayFD *_Rizrb_MaxNrsK2 = &_n_Rizrb_MaxNrsK2;

BYTE  Rizrb_MaxNrsP;
StayFD _n_Rizrb_MaxNrsP = {&Rizrb_MaxNrsP,0,0,0,CLS_S,0,"Rizrb_MaxNrsP","ном расч по факту н/р"};
StayFD *_Rizrb_MaxNrsP = &_n_Rizrb_MaxNrsP;

BYTE  Rizrb_MaxNrsS;
StayFD _n_Rizrb_MaxNrsS = {&Rizrb_MaxNrsS,0,0,0,CLS_S,0,"Rizrb_MaxNrsS","Максммальный номер расчета 1-2"};
StayFD *_Rizrb_MaxNrsS = &_n_Rizrb_MaxNrsS;

WORD  Rizrb_Mes;
StayFD _n_Rizrb_Mes = {&Rizrb_Mes,0,0,0,CLS_I,0,"Rizrb_Mes","Число месяцев"};
StayFD *_Rizrb_Mes = &_n_Rizrb_Mes;

WORD  Rizrb_MesP24;
StayFD _n_Rizrb_MesP24 = {&Rizrb_MesP24,0,0,0,CLS_I,0,"Rizrb_MesP24","Число месяцев"};
StayFD *_Rizrb_MesP24 = &_n_Rizrb_MesP24;

BYTE  Rizrb_Nr;
StayFD _n_Rizrb_Nr = {&Rizrb_Nr,0,0,0,CLS_S,0,"Rizrb_Nr","Номер родителя"};
StayFD *_Rizrb_Nr = &_n_Rizrb_Nr;

BYTE  Rizrb_Nrs;
StayFD _n_Rizrb_Nrs = {&Rizrb_Nrs,0,0,0,CLS_S,0,"Rizrb_Nrs","Номер расчета"};
StayFD *_Rizrb_Nrs = &_n_Rizrb_Nrs;

BYTE  Rizrb_Error;
StayFD _n_Rizrb_Error = {&Rizrb_Error,0,0,0,CLS_S,0,"Rizrb_Error","Номер расчета"};
StayFD *_Rizrb_Error = &_n_Rizrb_Error;

StayDate Rizrb_DtSRNX;
StayFD _n_Rizrb_DtSRNX = {&Rizrb_DtSRNX,0,0,0,CLS_Date,0,"Rizrb_DtSRNX","Дата инд коеф"};
StayFD *_Rizrb_DtSRNX = &_n_Rizrb_DtSRNX;

StayDate Rizrb_DtKoef;
StayFD _n_Rizrb_DtKoef = {&Rizrb_DtKoef,0,0,0,CLS_Date,0,"Rizrb_DtKoef","Дата инд коеф"};
StayFD *_Rizrb_DtKoef = &_n_Rizrb_DtKoef;

StayDate Rizrb_DtKoef1;
StayFD _n_Rizrb_DtKoef1 = {&Rizrb_DtKoef1,0,0,0,CLS_Date,0,"Rizrb_DtKoef1","Дата инд коеф1"};
StayFD *_Rizrb_DtKoef1 = &_n_Rizrb_DtKoef1;

StayDate Rizrb_DtKoef2;
StayFD _n_Rizrb_DtKoef2 = {&Rizrb_DtKoef2,0,0,0,CLS_Date,0,"Rizrb_DtKoef2","Дата инд коеф2"};
StayFD *_Rizrb_DtKoef2 = &_n_Rizrb_DtKoef2;

StayDate Rizrb_DEZOpt;
StayFD _n_Rizrb_DEZOpt = {&Rizrb_DEZOpt,0,0,0,CLS_Date,0,"Rizrb_DEZOpt","Дата посл зар-ка по оптим-ии"};
StayFD *_Rizrb_DEZOpt = &_n_Rizrb_DEZOpt;

BYTE  Rizrb_NDelMes;
StayFD _n_Rizrb_NDelMes = {&Rizrb_NDelMes,0,0,0,CLS_S,0,"Rizrb_NDelMes","Макс Число запўсей по оптимиз-ии"};
StayFD *_Rizrb_NDelMes = &_n_Rizrb_NDelMes;

BYTE  Rizrb_PMax;
StayFD _n_Rizrb_PMax = {&Rizrb_PMax,0,0,0,CLS_S,0,"Rizrb_PMax","Признак максимального з-ка"};
StayFD *_Rizrb_PMax = &_n_Rizrb_PMax;

STAYI6 Rizrb_Prem;
StayFD _n_Rizrb_Prem = {&Rizrb_Prem,0,0,0,CLS_Hs,5,"Rizrb_Prem","Премии п. N207-7"};
StayFD *_Rizrb_Prem = &_n_Rizrb_Prem;

STAYI6 Rizrb_RCoeff;
StayFD _n_Rizrb_RCoeff = {&Rizrb_RCoeff,0,0,0,CLS_Hs,9,"Rizrb_RCoeff","рабочая - коэффициент"};
StayFD *_Rizrb_RCoeff = &_n_Rizrb_RCoeff;

STAYI6 Rizrb_Rab;
StayFD _n_Rizrb_Rab = {&Rizrb_Rab,0,0,0,CLS_Hs,2,"Rizrb_Rab",""};
StayFD *_Rizrb_Rab = &_n_Rizrb_Rab;

BYTE  Rizrb_Pr56Z;
StayFD _n_Rizrb_Pr56Z = {&Rizrb_Pr56Z,0,0,0,CLS_S,0,"Rizrb_Pr56Z","Признак ошибки по 56 статье"};
StayFD *_Rizrb_Pr56Z = &_n_Rizrb_Pr56Z;

BYTE  Rizrb_Pr79Z;
StayFD _n_Rizrb_Pr79Z = {&Rizrb_Pr79Z,0,0,0,CLS_S,0,"Rizrb_Pr79Z","Признак ошибки по занятости"};
StayFD *_Rizrb_Pr79Z = &_n_Rizrb_Pr79Z;

BYTE  Rizrb_PrZar;
StayFD _n_Rizrb_PrZar = {&Rizrb_PrZar,0,0,0,CLS_S,0,"Rizrb_PrZar","Признак ошибки стаж/зар-к"};
StayFD *_Rizrb_PrZar = &_n_Rizrb_PrZar;

STAYI6 Rizrb_Rab28;
StayFD _n_Rizrb_Rab28 = {&Rizrb_Rab28,0,0,0,CLS_Hs,2,"Rizrb_Rab28",""};
StayFD *_Rizrb_Rab28 = &_n_Rizrb_Rab28;

STAYI6 Rizrb_Rab1;
StayFD _n_Rizrb_Rab1 = {&Rizrb_Rab1,0,0,0,CLS_Hs,5,"Rizrb_Rab1","рабочая"};
StayFD *_Rizrb_Rab1 = &_n_Rizrb_Rab1;

STAYI6 Rizrb_Rab12;
StayFD _n_Rizrb_Rab12 = {&Rizrb_Rab12,0,0,0,CLS_Hs,5,"Rizrb_Rab12","рабочая"};
StayFD *_Rizrb_Rab12 = &_n_Rizrb_Rab12;

STAYI6 Rizrb_Rab0;
StayFD _n_Rizrb_Rab0 = {&Rizrb_Rab0,0,0,0,CLS_Hs,0,"Rizrb_Rab0","рабочая"};
StayFD *_Rizrb_Rab0 = &_n_Rizrb_Rab0;

STAYI6 Rizrb_Rab00;
StayFD _n_Rizrb_Rab00 = {&Rizrb_Rab00,0,0,0,CLS_Hs,0,"Rizrb_Rab00","рабочая"};
StayFD *_Rizrb_Rab00 = &_n_Rizrb_Rab00;

STAYI6 Rizrb_RabOVsr;
StayFD _n_Rizrb_RabOVsr = {&Rizrb_RabOVsr,0,0,0,CLS_Hs,5,"Rizrb_RabOVsr","рабочая"};
StayFD *_Rizrb_RabOVsr = &_n_Rizrb_RabOVsr;

STAYI6 Rizrb_Rab5;
StayFD _n_Rizrb_Rab5 = {&Rizrb_Rab5,0,0,0,CLS_Hs,5,"Rizrb_Rab5","рабочая"};
StayFD *_Rizrb_Rab5 = &_n_Rizrb_Rab5;

STAYI6 Rizrb_Rab512;
StayFD _n_Rizrb_Rab512 = {&Rizrb_Rab512,0,0,0,CLS_Hs,5,"Rizrb_Rab512","рабочая"};
StayFD *_Rizrb_Rab512 = &_n_Rizrb_Rab512;

STAYI6 Rizrb_Rab56;
StayFD _n_Rizrb_Rab56 = {&Rizrb_Rab56,0,0,0,CLS_Hs,5,"Rizrb_Rab56","рабочая"};
StayFD *_Rizrb_Rab56 = &_n_Rizrb_Rab56;

STAYI6 Rizrb_Rab7;
StayFD _n_Rizrb_Rab7 = {&Rizrb_Rab7,0,0,0,CLS_Hs,5,"Rizrb_Rab7","рабочая"};
StayFD *_Rizrb_Rab7 = &_n_Rizrb_Rab7;

STAYI6 Rizrb_Rab76;
StayFD _n_Rizrb_Rab76 = {&Rizrb_Rab76,0,0,0,CLS_Hs,5,"Rizrb_Rab76","рабочая"};
StayFD *_Rizrb_Rab76 = &_n_Rizrb_Rab76;

STAYI6 Rizrb_Rab592;
StayFD _n_Rizrb_Rab592 = {&Rizrb_Rab592,0,0,0,CLS_Hs,5,"Rizrb_Rab592","рабочая"};
StayFD *_Rizrb_Rab592 = &_n_Rizrb_Rab592;

STAYI6 Rizrb_RabOtct;
StayFD _n_Rizrb_RabOtct = {&Rizrb_RabOtct,0,0,0,CLS_Hs,5,"Rizrb_RabOtct","рабочая"};
StayFD *_Rizrb_RabOtct = &_n_Rizrb_RabOtct;

STAYI6 Rizrb_RabDosr;
StayFD _n_Rizrb_RabDosr = {&Rizrb_RabDosr,0,0,0,CLS_Hs,5,"Rizrb_RabDosr","рабочая"};
StayFD *_Rizrb_RabDosr = &_n_Rizrb_RabDosr;

STAYI6 Rizrb_RabS291;
StayFD _n_Rizrb_RabS291 = {&Rizrb_RabS291,0,0,0,CLS_Hs,5,"Rizrb_RabS291","рабочая"};
StayFD *_Rizrb_RabS291 = &_n_Rizrb_RabS291;

STAYI6 Rizrb_RabS293;
StayFD _n_Rizrb_RabS293 = {&Rizrb_RabS293,0,0,0,CLS_Hs,5,"Rizrb_RabS293","рабочая"};
StayFD *_Rizrb_RabS293 = &_n_Rizrb_RabS293;

STAYI6 Rizrb_RabS297;
StayFD _n_Rizrb_RabS297 = {&Rizrb_RabS297,0,0,0,CLS_Hs,5,"Rizrb_RabS297","рабочая"};
StayFD *_Rizrb_RabS297 = &_n_Rizrb_RabS297;

STAYI6 Rizrb_RabS298;
StayFD _n_Rizrb_RabS298 = {&Rizrb_RabS298,0,0,0,CLS_Hs,5,"Rizrb_RabS298","рабочая"};
StayFD *_Rizrb_RabS298 = &_n_Rizrb_RabS298;

STAYI6 Rizrb_Rab808;
StayFD _n_Rizrb_Rab808 = {&Rizrb_Rab808,0,0,0,CLS_Hs,2,"Rizrb_Rab808","рабочая"};
StayFD *_Rizrb_Rab808 = &_n_Rizrb_Rab808;

STAYI6 Rizrb_Rab908;
StayFD _n_Rizrb_Rab908 = {&Rizrb_Rab908,0,0,0,CLS_Hs,2,"Rizrb_Rab908","рабочая"};
StayFD *_Rizrb_Rab908 = &_n_Rizrb_Rab908;

STAYI6 Rizrb_RabG808;
StayFD _n_Rizrb_RabG808 = {&Rizrb_RabG808,0,0,0,CLS_Hs,2,"Rizrb_RabG808","рабочая"};
StayFD *_Rizrb_RabG808 = &_n_Rizrb_RabG808;

STAYI6 Rizrb_RabG908;
StayFD _n_Rizrb_RabG908 = {&Rizrb_RabG908,0,0,0,CLS_Hs,2,"Rizrb_RabG908","рабочая"};
StayFD *_Rizrb_RabG908 = &_n_Rizrb_RabG908;

STAYI6 Rizrb_Rab991;
StayFD _n_Rizrb_Rab991 = {&Rizrb_Rab991,0,0,0,CLS_Hs,2,"Rizrb_Rab991","рабочая"};
StayFD *_Rizrb_Rab991 = &_n_Rizrb_Rab991;

STAYI6 Rizrb_RabG991;
StayFD _n_Rizrb_RabG991 = {&Rizrb_RabG991,0,0,0,CLS_Hs,2,"Rizrb_RabG991","рабочая"};
StayFD *_Rizrb_RabG991 = &_n_Rizrb_RabG991;

STAYI6 Rizrb_Rab992;
StayFD _n_Rizrb_Rab992 = {&Rizrb_Rab992,0,0,0,CLS_Hs,2,"Rizrb_Rab992","рабочая"};
StayFD *_Rizrb_Rab992 = &_n_Rizrb_Rab992;

STAYI6 Rizrb_RabG992;
StayFD _n_Rizrb_RabG992 = {&Rizrb_RabG992,0,0,0,CLS_Hs,2,"Rizrb_RabG992","рабочая"};
StayFD *_Rizrb_RabG992 = &_n_Rizrb_RabG992;

STAYI6 Rizrb_Rab993;
StayFD _n_Rizrb_Rab993 = {&Rizrb_Rab993,0,0,0,CLS_Hs,2,"Rizrb_Rab993","рабочая"};
StayFD *_Rizrb_Rab993 = &_n_Rizrb_Rab993;

STAYI6 Rizrb_RabG993;
StayFD _n_Rizrb_RabG993 = {&Rizrb_RabG993,0,0,0,CLS_Hs,2,"Rizrb_RabG993","рабочая"};
StayFD *_Rizrb_RabG993 = &_n_Rizrb_RabG993;

STAYI6 Rizrb_Rab994;
StayFD _n_Rizrb_Rab994 = {&Rizrb_Rab994,0,0,0,CLS_Hs,2,"Rizrb_Rab994","рабочая"};
StayFD *_Rizrb_Rab994 = &_n_Rizrb_Rab994;

STAYI6 Rizrb_RabG994;
StayFD _n_Rizrb_RabG994 = {&Rizrb_RabG994,0,0,0,CLS_Hs,2,"Rizrb_RabG994","рабочая"};
StayFD *_Rizrb_RabG994 = &_n_Rizrb_RabG994;

STAYI6 Rizrb_Rab995;
StayFD _n_Rizrb_Rab995 = {&Rizrb_Rab995,0,0,0,CLS_Hs,2,"Rizrb_Rab995","рабочая"};
StayFD *_Rizrb_Rab995 = &_n_Rizrb_Rab995;

STAYI6 Rizrb_RabG995;
StayFD _n_Rizrb_RabG995 = {&Rizrb_RabG995,0,0,0,CLS_Hs,2,"Rizrb_RabG995","рабочая"};
StayFD *_Rizrb_RabG995 = &_n_Rizrb_RabG995;

STAYI6 Rizrb_Rab996;
StayFD _n_Rizrb_Rab996 = {&Rizrb_Rab996,0,0,0,CLS_Hs,2,"Rizrb_Rab996","рабочая"};
StayFD *_Rizrb_Rab996 = &_n_Rizrb_Rab996;

STAYI6 Rizrb_RabG996;
StayFD _n_Rizrb_RabG996 = {&Rizrb_RabG996,0,0,0,CLS_Hs,2,"Rizrb_RabG996","рабочая"};
StayFD *_Rizrb_RabG996 = &_n_Rizrb_RabG996;

STAYI6 Rizrb_Rab997;
StayFD _n_Rizrb_Rab997 = {&Rizrb_Rab997,0,0,0,CLS_Hs,2,"Rizrb_Rab997","рабочая"};
StayFD *_Rizrb_Rab997 = &_n_Rizrb_Rab997;

STAYI6 Rizrb_RabG997;
StayFD _n_Rizrb_RabG997 = {&Rizrb_RabG997,0,0,0,CLS_Hs,2,"Rizrb_RabG997","рабочая"};
StayFD *_Rizrb_RabG997 = &_n_Rizrb_RabG997;

STAYI6 Rizrb_Rab803;
StayFD _n_Rizrb_Rab803 = {&Rizrb_Rab803,0,0,0,CLS_Hs,2,"Rizrb_Rab803","рабочая"};
StayFD *_Rizrb_Rab803 = &_n_Rizrb_Rab803;

STAYI6 Rizrb_RabG803;
StayFD _n_Rizrb_RabG803 = {&Rizrb_RabG803,0,0,0,CLS_Hs,2,"Rizrb_RabG803","рабочая"};
StayFD *_Rizrb_RabG803 = &_n_Rizrb_RabG803;

STAYI6 Rizrb_Rab804;
StayFD _n_Rizrb_Rab804 = {&Rizrb_Rab804,0,0,0,CLS_Hs,2,"Rizrb_Rab804","рабочая"};
StayFD *_Rizrb_Rab804 = &_n_Rizrb_Rab804;

STAYI6 Rizrb_RabG804;
StayFD _n_Rizrb_RabG804 = {&Rizrb_RabG804,0,0,0,CLS_Hs,2,"Rizrb_RabG804","рабочая"};
StayFD *_Rizrb_RabG804 = &_n_Rizrb_RabG804;

STAYI6 Rizrb_Rab805;
StayFD _n_Rizrb_Rab805 = {&Rizrb_Rab805,0,0,0,CLS_Hs,2,"Rizrb_Rab805","рабочая"};
StayFD *_Rizrb_Rab805 = &_n_Rizrb_Rab805;

STAYI6 Rizrb_RabG805;
StayFD _n_Rizrb_RabG805 = {&Rizrb_RabG805,0,0,0,CLS_Hs,2,"Rizrb_RabG805","рабочая"};
StayFD *_Rizrb_RabG805 = &_n_Rizrb_RabG805;

STAYI6 Rizrb_Rab806;
StayFD _n_Rizrb_Rab806 = {&Rizrb_Rab806,0,0,0,CLS_Hs,2,"Rizrb_Rab806","рабочая"};
StayFD *_Rizrb_Rab806 = &_n_Rizrb_Rab806;

STAYI6 Rizrb_RabG806;
StayFD _n_Rizrb_RabG806 = {&Rizrb_RabG806,0,0,0,CLS_Hs,2,"Rizrb_RabG806","рабочая"};
StayFD *_Rizrb_RabG806 = &_n_Rizrb_RabG806;

STAYI6 Rizrb_Rab807;
StayFD _n_Rizrb_Rab807 = {&Rizrb_Rab807,0,0,0,CLS_Hs,2,"Rizrb_Rab807","рабочая"};
StayFD *_Rizrb_Rab807 = &_n_Rizrb_Rab807;

STAYI6 Rizrb_RabG807;
StayFD _n_Rizrb_RabG807 = {&Rizrb_RabG807,0,0,0,CLS_Hs,2,"Rizrb_RabG807","рабочая"};
StayFD *_Rizrb_RabG807 = &_n_Rizrb_RabG807;

STAYI6 Rizrb_Rab816;
StayFD _n_Rizrb_Rab816 = {&Rizrb_Rab816,0,0,0,CLS_Hs,2,"Rizrb_Rab816","рабочая"};
StayFD *_Rizrb_Rab816 = &_n_Rizrb_Rab816;

STAYI6 Rizrb_RabG816;
StayFD _n_Rizrb_RabG816 = {&Rizrb_RabG816,0,0,0,CLS_Hs,2,"Rizrb_RabG816","рабочая"};
StayFD *_Rizrb_RabG816 = &_n_Rizrb_RabG816;

STAYI6 Rizrb_Rab818;
StayFD _n_Rizrb_Rab818 = {&Rizrb_Rab818,0,0,0,CLS_Hs,2,"Rizrb_Rab818","рабочая"};
StayFD *_Rizrb_Rab818 = &_n_Rizrb_Rab818;

STAYI6 Rizrb_RabG818;
StayFD _n_Rizrb_RabG818 = {&Rizrb_RabG818,0,0,0,CLS_Hs,2,"Rizrb_RabG818","рабочая"};
StayFD *_Rizrb_RabG818 = &_n_Rizrb_RabG818;

STAYI6 Rizrb_Rab819;
StayFD _n_Rizrb_Rab819 = {&Rizrb_Rab819,0,0,0,CLS_Hs,2,"Rizrb_Rab819","рабочая"};
StayFD *_Rizrb_Rab819 = &_n_Rizrb_Rab819;

STAYI6 Rizrb_RabG819;
StayFD _n_Rizrb_RabG819 = {&Rizrb_RabG819,0,0,0,CLS_Hs,2,"Rizrb_RabG819","рабочая"};
StayFD *_Rizrb_RabG819 = &_n_Rizrb_RabG819;

STAYI6 Rizrb_Rab820;
StayFD _n_Rizrb_Rab820 = {&Rizrb_Rab820,0,0,0,CLS_Hs,2,"Rizrb_Rab820","рабочая"};
StayFD *_Rizrb_Rab820 = &_n_Rizrb_Rab820;

STAYI6 Rizrb_RabG820;
StayFD _n_Rizrb_RabG820 = {&Rizrb_RabG820,0,0,0,CLS_Hs,2,"Rizrb_RabG820","рабочая"};
StayFD *_Rizrb_RabG820 = &_n_Rizrb_RabG820;

STAYI6 Rizrb_Rab821;
StayFD _n_Rizrb_Rab821 = {&Rizrb_Rab821,0,0,0,CLS_Hs,2,"Rizrb_Rab821","рабочая"};
StayFD *_Rizrb_Rab821 = &_n_Rizrb_Rab821;

STAYI6 Rizrb_RabG821;
StayFD _n_Rizrb_RabG821 = {&Rizrb_RabG821,0,0,0,CLS_Hs,2,"Rizrb_RabG821","рабочая"};
StayFD *_Rizrb_RabG821 = &_n_Rizrb_RabG821;

STAYI6 Rizrb_Rab822;
StayFD _n_Rizrb_Rab822 = {&Rizrb_Rab822,0,0,0,CLS_Hs,2,"Rizrb_Rab822","рабочая"};
StayFD *_Rizrb_Rab822 = &_n_Rizrb_Rab822;

STAYI6 Rizrb_RabG822;
StayFD _n_Rizrb_RabG822 = {&Rizrb_RabG822,0,0,0,CLS_Hs,2,"Rizrb_RabG822","рабочая"};
StayFD *_Rizrb_RabG822 = &_n_Rizrb_RabG822;

STAYI6 Rizrb_Rab823;
StayFD _n_Rizrb_Rab823 = {&Rizrb_Rab823,0,0,0,CLS_Hs,2,"Rizrb_Rab823","рабочая"};
StayFD *_Rizrb_Rab823 = &_n_Rizrb_Rab823;

STAYI6 Rizrb_RabG823;
StayFD _n_Rizrb_RabG823 = {&Rizrb_RabG823,0,0,0,CLS_Hs,2,"Rizrb_RabG823","рабочая"};
StayFD *_Rizrb_RabG823 = &_n_Rizrb_RabG823;

STAYI6 Rizrb_Rab824;
StayFD _n_Rizrb_Rab824 = {&Rizrb_Rab824,0,0,0,CLS_Hs,2,"Rizrb_Rab824","рабочая"};
StayFD *_Rizrb_Rab824 = &_n_Rizrb_Rab824;

STAYI6 Rizrb_RabG824;
StayFD _n_Rizrb_RabG824 = {&Rizrb_RabG824,0,0,0,CLS_Hs,2,"Rizrb_RabG824","рабочая"};
StayFD *_Rizrb_RabG824 = &_n_Rizrb_RabG824;

STAYI6 Rizrb_Rab825;
StayFD _n_Rizrb_Rab825 = {&Rizrb_Rab825,0,0,0,CLS_Hs,2,"Rizrb_Rab825","рабочая"};
StayFD *_Rizrb_Rab825 = &_n_Rizrb_Rab825;

STAYI6 Rizrb_RabG825;
StayFD _n_Rizrb_RabG825 = {&Rizrb_RabG825,0,0,0,CLS_Hs,2,"Rizrb_RabG825","рабочая"};
StayFD *_Rizrb_RabG825 = &_n_Rizrb_RabG825;

STAYI6 Rizrb_Rab829;
StayFD _n_Rizrb_Rab829 = {&Rizrb_Rab829,0,0,0,CLS_Hs,2,"Rizrb_Rab829","рабочая"};
StayFD *_Rizrb_Rab829 = &_n_Rizrb_Rab829;

STAYI6 Rizrb_RabG829;
StayFD _n_Rizrb_RabG829 = {&Rizrb_RabG829,0,0,0,CLS_Hs,2,"Rizrb_RabG829","рабочая"};
StayFD *_Rizrb_RabG829 = &_n_Rizrb_RabG829;

STAYI6 Rizrb_RabOS;
StayFD _n_Rizrb_RabOS = {&Rizrb_RabOS,0,0,0,CLS_Hs,2,"Rizrb_RabOS","рабочая"};
StayFD *_Rizrb_RabOS = &_n_Rizrb_RabOS;

STAYI6 Rizrb_RabGS;
StayFD _n_Rizrb_RabGS = {&Rizrb_RabGS,0,0,0,CLS_Hs,2,"Rizrb_RabGS","рабочая"};
StayFD *_Rizrb_RabGS = &_n_Rizrb_RabGS;

STAYI6 Rizrb_RabPZ1;
StayFD _n_Rizrb_RabPZ1 = {&Rizrb_RabPZ1,0,0,0,CLS_Hs,2,"Rizrb_RabPZ1","рабочая"};
StayFD *_Rizrb_RabPZ1 = &_n_Rizrb_RabPZ1;

STAYI6 Rizrb_RabPZ2;
StayFD _n_Rizrb_RabPZ2 = {&Rizrb_RabPZ2,0,0,0,CLS_Hs,2,"Rizrb_RabPZ2","рабочая"};
StayFD *_Rizrb_RabPZ2 = &_n_Rizrb_RabPZ2;

STAYI6 Rizrb_ZarPZ1;
StayFD _n_Rizrb_ZarPZ1 = {&Rizrb_ZarPZ1,0,0,0,CLS_Hs,5,"Rizrb_ZarPZ1","рабочая"};
StayFD *_Rizrb_ZarPZ1 = &_n_Rizrb_ZarPZ1;

STAYI6 Rizrb_ZarPZ2;
StayFD _n_Rizrb_ZarPZ2 = {&Rizrb_ZarPZ2,0,0,0,CLS_Hs,5,"Rizrb_ZarPZ2","рабочая"};
StayFD *_Rizrb_ZarPZ2 = &_n_Rizrb_ZarPZ2;

STAYI6 Rizrb_Rab817;
StayFD _n_Rizrb_Rab817 = {&Rizrb_Rab817,0,0,0,CLS_Hs,2,"Rizrb_Rab817","рабочая"};
StayFD *_Rizrb_Rab817 = &_n_Rizrb_Rab817;

STAYI6 Rizrb_RabG817;
StayFD _n_Rizrb_RabG817 = {&Rizrb_RabG817,0,0,0,CLS_Hs,2,"Rizrb_RabG817","рабочая"};
StayFD *_Rizrb_RabG817 = &_n_Rizrb_RabG817;

STAYI6 Rizrb_Rab709;
StayFD _n_Rizrb_Rab709 = {&Rizrb_Rab709,0,0,0,CLS_Hs,2,"Rizrb_Rab709","рабочая"};
StayFD *_Rizrb_Rab709 = &_n_Rizrb_Rab709;

STAYI6 Rizrb_RabG709;
StayFD _n_Rizrb_RabG709 = {&Rizrb_RabG709,0,0,0,CLS_Hs,2,"Rizrb_RabG709","рабочая"};
StayFD *_Rizrb_RabG709 = &_n_Rizrb_RabG709;

STAYI6 Rizrb_RDP709;
StayFD _n_Rizrb_RDP709 = {&Rizrb_RDP709,0,0,0,CLS_Hs,2,"Rizrb_RDP709","рабочая"};
StayFD *_Rizrb_RDP709 = &_n_Rizrb_RDP709;

STAYI6 Rizrb_RDP850;
StayFD _n_Rizrb_RDP850 = {&Rizrb_RDP850,0,0,0,CLS_Hs,2,"Rizrb_RDP850","рабочая"};
StayFD *_Rizrb_RDP850 = &_n_Rizrb_RDP850;

STAYI6 Rizrb_Rab812;
StayFD _n_Rizrb_Rab812 = {&Rizrb_Rab812,0,0,0,CLS_Hs,2,"Rizrb_Rab812","рабочая"};
StayFD *_Rizrb_Rab812 = &_n_Rizrb_Rab812;

STAYI6 Rizrb_Rab851;
StayFD _n_Rizrb_Rab851 = {&Rizrb_Rab851,0,0,0,CLS_Hs,2,"Rizrb_Rab851","рабочая"};
StayFD *_Rizrb_Rab851 = &_n_Rizrb_Rab851;

STAYI6 Rizrb_RabG851;
StayFD _n_Rizrb_RabG851 = {&Rizrb_RabG851,0,0,0,CLS_Hs,2,"Rizrb_RabG851","рабочая"};
StayFD *_Rizrb_RabG851 = &_n_Rizrb_RabG851;

STAYI6 Rizrb_Rab852;
StayFD _n_Rizrb_Rab852 = {&Rizrb_Rab852,0,0,0,CLS_Hs,2,"Rizrb_Rab852","рабочая"};
StayFD *_Rizrb_Rab852 = &_n_Rizrb_Rab852;

STAYI6 Rizrb_Rab853;
StayFD _n_Rizrb_Rab853 = {&Rizrb_Rab853,0,0,0,CLS_Hs,2,"Rizrb_Rab853","рабочая"};
StayFD *_Rizrb_Rab853 = &_n_Rizrb_Rab853;

STAYI6 Rizrb_RabG853;
StayFD _n_Rizrb_RabG853 = {&Rizrb_RabG853,0,0,0,CLS_Hs,2,"Rizrb_RabG853","рабочая"};
StayFD *_Rizrb_RabG853 = &_n_Rizrb_RabG853;

STAYI6 Rizrb_Rab814;
StayFD _n_Rizrb_Rab814 = {&Rizrb_Rab814,0,0,0,CLS_Hs,2,"Rizrb_Rab814","рабочая"};
StayFD *_Rizrb_Rab814 = &_n_Rizrb_Rab814;

STAYI6 Rizrb_RabG814;
StayFD _n_Rizrb_RabG814 = {&Rizrb_RabG814,0,0,0,CLS_Hs,2,"Rizrb_RabG814","рабочая"};
StayFD *_Rizrb_RabG814 = &_n_Rizrb_RabG814;

STAYI6 Rizrb_Rab815;
StayFD _n_Rizrb_Rab815 = {&Rizrb_Rab815,0,0,0,CLS_Hs,2,"Rizrb_Rab815","рабочая"};
StayFD *_Rizrb_Rab815 = &_n_Rizrb_Rab815;

STAYI6 Rizrb_RabG815;
StayFD _n_Rizrb_RabG815 = {&Rizrb_RabG815,0,0,0,CLS_Hs,2,"Rizrb_RabG815","рабочая"};
StayFD *_Rizrb_RabG815 = &_n_Rizrb_RabG815;

STAYI6 Rizrb_RabDPLM;
StayFD _n_Rizrb_RabDPLM = {&Rizrb_RabDPLM,0,0,0,CLS_Hs,2,"Rizrb_RabDPLM","рабочая"};
StayFD *_Rizrb_RabDPLM = &_n_Rizrb_RabDPLM;

STAYI6 Rizrb_RaGDPLM;
StayFD _n_Rizrb_RaGDPLM = {&Rizrb_RaGDPLM,0,0,0,CLS_Hs,2,"Rizrb_RaGDPLM","рабочая"};
StayFD *_Rizrb_RaGDPLM = &_n_Rizrb_RaGDPLM;

STAYI6 Rizrb_RabDPLP;
StayFD _n_Rizrb_RabDPLP = {&Rizrb_RabDPLP,0,0,0,CLS_Hs,2,"Rizrb_RabDPLP","рабочая"};
StayFD *_Rizrb_RabDPLP = &_n_Rizrb_RabDPLP;

STAYI6 Rizrb_RaGDPLP;
StayFD _n_Rizrb_RaGDPLP = {&Rizrb_RaGDPLP,0,0,0,CLS_Hs,2,"Rizrb_RaGDPLP","рабочая"};
StayFD *_Rizrb_RaGDPLP = &_n_Rizrb_RaGDPLP;

STAYI6 Rizrb_Rab854;
StayFD _n_Rizrb_Rab854 = {&Rizrb_Rab854,0,0,0,CLS_Hs,2,"Rizrb_Rab854","рабочая"};
StayFD *_Rizrb_Rab854 = &_n_Rizrb_Rab854;

STAYI6 Rizrb_RabG854;
StayFD _n_Rizrb_RabG854 = {&Rizrb_RabG854,0,0,0,CLS_Hs,2,"Rizrb_RabG854","рабочая"};
StayFD *_Rizrb_RabG854 = &_n_Rizrb_RabG854;

STAYI6 Rizrb_Rab854D;
StayFD _n_Rizrb_Rab854D = {&Rizrb_Rab854D,0,0,0,CLS_Hs,2,"Rizrb_Rab854D","рабочая"};
StayFD *_Rizrb_Rab854D = &_n_Rizrb_Rab854D;

STAYI6 Rizrb_RaG854D;
StayFD _n_Rizrb_RaG854D = {&Rizrb_RaG854D,0,0,0,CLS_Hs,2,"Rizrb_RaG854D","рабочая"};
StayFD *_Rizrb_RaG854D = &_n_Rizrb_RaG854D;

STAYI6 Rizrb_Rab855;
StayFD _n_Rizrb_Rab855 = {&Rizrb_Rab855,0,0,0,CLS_Hs,2,"Rizrb_Rab855","рабочая"};
StayFD *_Rizrb_Rab855 = &_n_Rizrb_Rab855;

STAYI6 Rizrb_RabG855;
StayFD _n_Rizrb_RabG855 = {&Rizrb_RabG855,0,0,0,CLS_Hs,2,"Rizrb_RabG855","рабочая"};
StayFD *_Rizrb_RabG855 = &_n_Rizrb_RabG855;

STAYI6 Rizrb_Rab856;
StayFD _n_Rizrb_Rab856 = {&Rizrb_Rab856,0,0,0,CLS_Hs,2,"Rizrb_Rab856","рабочая"};
StayFD *_Rizrb_Rab856 = &_n_Rizrb_Rab856;

STAYI6 Rizrb_RabG856;
StayFD _n_Rizrb_RabG856 = {&Rizrb_RabG856,0,0,0,CLS_Hs,2,"Rizrb_RabG856","рабочая"};
StayFD *_Rizrb_RabG856 = &_n_Rizrb_RabG856;

STAYI6 Rizrb_Rab857;
StayFD _n_Rizrb_Rab857 = {&Rizrb_Rab857,0,0,0,CLS_Hs,2,"Rizrb_Rab857","рабочая"};
StayFD *_Rizrb_Rab857 = &_n_Rizrb_Rab857;

STAYI6 Rizrb_RabG857;
StayFD _n_Rizrb_RabG857 = {&Rizrb_RabG857,0,0,0,CLS_Hs,2,"Rizrb_RabG857","рабочая"};
StayFD *_Rizrb_RabG857 = &_n_Rizrb_RabG857;

STAYI6 Rizrb_Rab858;
StayFD _n_Rizrb_Rab858 = {&Rizrb_Rab858,0,0,0,CLS_Hs,2,"Rizrb_Rab858","рабочая"};
StayFD *_Rizrb_Rab858 = &_n_Rizrb_Rab858;

STAYI6 Rizrb_RabG858;
StayFD _n_Rizrb_RabG858 = {&Rizrb_RabG858,0,0,0,CLS_Hs,2,"Rizrb_RabG858","рабочая"};
StayFD *_Rizrb_RabG858 = &_n_Rizrb_RabG858;

STAYI6 Rizrb_Rab826;
StayFD _n_Rizrb_Rab826 = {&Rizrb_Rab826,0,0,0,CLS_Hs,2,"Rizrb_Rab826","рабочая"};
StayFD *_Rizrb_Rab826 = &_n_Rizrb_Rab826;

STAYI6 Rizrb_RabG826;
StayFD _n_Rizrb_RabG826 = {&Rizrb_RabG826,0,0,0,CLS_Hs,2,"Rizrb_RabG826","рабочая"};
StayFD *_Rizrb_RabG826 = &_n_Rizrb_RabG826;

STAYI6 Rizrb_Rab827;
StayFD _n_Rizrb_Rab827 = {&Rizrb_Rab827,0,0,0,CLS_Hs,2,"Rizrb_Rab827","рабочая"};
StayFD *_Rizrb_Rab827 = &_n_Rizrb_Rab827;

STAYI6 Rizrb_Rab828;
StayFD _n_Rizrb_Rab828 = {&Rizrb_Rab828,0,0,0,CLS_Hs,2,"Rizrb_Rab828","рабочая"};
StayFD *_Rizrb_Rab828 = &_n_Rizrb_Rab828;

STAYI6 Rizrb_Rab890;
StayFD _n_Rizrb_Rab890 = {&Rizrb_Rab890,0,0,0,CLS_Hs,2,"Rizrb_Rab890","рабочая"};
StayFD *_Rizrb_Rab890 = &_n_Rizrb_Rab890;

STAYI6 Rizrb_RabG890;
StayFD _n_Rizrb_RabG890 = {&Rizrb_RabG890,0,0,0,CLS_Hs,2,"Rizrb_RabG890","рабочая"};
StayFD *_Rizrb_RabG890 = &_n_Rizrb_RabG890;

STAYI6 Rizrb_Rab849;
StayFD _n_Rizrb_Rab849 = {&Rizrb_Rab849,0,0,0,CLS_Hs,2,"Rizrb_Rab849","рабочая"};
StayFD *_Rizrb_Rab849 = &_n_Rizrb_Rab849;

STAYI6 Rizrb_RabM136;
StayFD _n_Rizrb_RabM136 = {&Rizrb_RabM136,0,0,0,CLS_Hs,2,"Rizrb_RabM136","рабочая"};
StayFD *_Rizrb_RabM136 = &_n_Rizrb_RabM136;

STAYI6 Rizrb_RabG136;
StayFD _n_Rizrb_RabG136 = {&Rizrb_RabG136,0,0,0,CLS_Hs,2,"Rizrb_RabG136","рабочая"};
StayFD *_Rizrb_RabG136 = &_n_Rizrb_RabG136;

STAYI6 Rizrb_RabM137;
StayFD _n_Rizrb_RabM137 = {&Rizrb_RabM137,0,0,0,CLS_Hs,2,"Rizrb_RabM137","рабочая"};
StayFD *_Rizrb_RabM137 = &_n_Rizrb_RabM137;

STAYI6 Rizrb_RabG137;
StayFD _n_Rizrb_RabG137 = {&Rizrb_RabG137,0,0,0,CLS_Hs,2,"Rizrb_RabG137","рабочая"};
StayFD *_Rizrb_RabG137 = &_n_Rizrb_RabG137;

STAYI6 Rizrb_Rab402;
StayFD _n_Rizrb_Rab402 = {&Rizrb_Rab402,0,0,0,CLS_Hs,2,"Rizrb_Rab402","рабочая"};
StayFD *_Rizrb_Rab402 = &_n_Rizrb_Rab402;

STAYI6 Rizrb_Rab462;
StayFD _n_Rizrb_Rab462 = {&Rizrb_Rab462,0,0,0,CLS_Hs,2,"Rizrb_Rab462","рабочая"};
StayFD *_Rizrb_Rab462 = &_n_Rizrb_Rab462;

STAYI6 Rizrb_RabGDot;
StayFD _n_Rizrb_RabGDot = {&Rizrb_RabGDot,0,0,0,CLS_Hs,2,"Rizrb_RabGDot","рабочая"};
StayFD *_Rizrb_RabGDot = &_n_Rizrb_RabGDot;

STAYI6 Rizrb_RabGIND;
StayFD _n_Rizrb_RabGIND = {&Rizrb_RabGIND,0,0,0,CLS_Hs,5,"Rizrb_RabGIND","рабочая"};
StayFD *_Rizrb_RabGIND = &_n_Rizrb_RabGIND;

STAYI6 Rizrb_RabGos;
StayFD _n_Rizrb_RabGos = {&Rizrb_RabGos,0,0,0,CLS_Hs,5,"Rizrb_RabGos","рабочая"};
StayFD *_Rizrb_RabGos = &_n_Rizrb_RabGos;

STAYI6 Rizrb_RabIND;
StayFD _n_Rizrb_RabIND = {&Rizrb_RabIND,0,0,0,CLS_Hs,2,"Rizrb_RabIND","рабочая"};
StayFD *_Rizrb_RabIND = &_n_Rizrb_RabIND;

STAYI6 Rizrb_RabMALOB;
StayFD _n_Rizrb_RabMALOB = {&Rizrb_RabMALOB,0,0,0,CLS_Hs,2,"Rizrb_RabMALOB","рабочая"};
StayFD *_Rizrb_RabMALOB = &_n_Rizrb_RabMALOB;

STAYI6 Rizrb_RabMesZF;
StayFD _n_Rizrb_RabMesZF = {&Rizrb_RabMesZF,0,0,0,CLS_Hs,5,"Rizrb_RabMesZF","Сумма неск з-ка для расчета"};
StayFD *_Rizrb_RabMesZF = &_n_Rizrb_RabMesZF;

STAYI6 Rizrb_RabZU;
StayFD _n_Rizrb_RabZU = {&Rizrb_RabZU,0,0,0,CLS_Hs,5,"Rizrb_RabZU","Сумма неск з-ка для расчета"};
StayFD *_Rizrb_RabZU = &_n_Rizrb_RabZU;

STAYI6 Rizrb_Sum3233;
StayFD _n_Rizrb_Sum3233 = {&Rizrb_Sum3233,0,0,0,CLS_Hs,2,"Rizrb_Sum3233",""};
StayFD *_Rizrb_Sum3233 = &_n_Rizrb_Sum3233;

STAYI6 Rizrb_RazmOIP;
StayFD _n_Rizrb_RazmOIP = {&Rizrb_RazmOIP,0,0,0,CLS_Hs,2,"Rizrb_RazmOIP",""};
StayFD *_Rizrb_RazmOIP = &_n_Rizrb_RazmOIP;

WORD  Rizrb_ProcOIP;
StayFD _n_Rizrb_ProcOIP = {&Rizrb_ProcOIP,0,0,0,CLS_I,0,"Rizrb_ProcOIP",""};
StayFD *_Rizrb_ProcOIP = &_n_Rizrb_ProcOIP;

BYTE  Rizrb_NIgdOIP;
StayFD _n_Rizrb_NIgdOIP = {&Rizrb_NIgdOIP,0,0,0,CLS_S,0,"Rizrb_NIgdOIP",""};
StayFD *_Rizrb_NIgdOIP = &_n_Rizrb_NIgdOIP;

STAYI6 Rizrb_RabMesZK;
StayFD _n_Rizrb_RabMesZK = {&Rizrb_RabMesZK,0,0,0,CLS_Hs,5,"Rizrb_RabMesZK","Сумма скорр з-ка рабочая"};
StayFD *_Rizrb_RabMesZK = &_n_Rizrb_RabMesZK;

STAYI6 Rizrb_Z132121;
StayFD _n_Rizrb_Z132121 = {&Rizrb_Z132121,0,0,0,CLS_Hs,5,"Rizrb_Z132121","Сумма неск з-ка для расчета"};
StayFD *_Rizrb_Z132121 = &_n_Rizrb_Z132121;

STAYI6 Rizrb_Zar1321;
StayFD _n_Rizrb_Zar1321 = {&Rizrb_Zar1321,0,0,0,CLS_Hs,5,"Rizrb_Zar1321","Сумма скорр з-ка рабочая"};
StayFD *_Rizrb_Zar1321 = &_n_Rizrb_Zar1321;

STAYI6 Rizrb_Zar1322;
StayFD _n_Rizrb_Zar1322 = {&Rizrb_Zar1322,0,0,0,CLS_Hs,5,"Rizrb_Zar1322","Сумма скорр з-ка рабочая"};
StayFD *_Rizrb_Zar1322 = &_n_Rizrb_Zar1322;

STAYI6 Rizrb_ZNX1321;
StayFD _n_Rizrb_ZNX1321 = {&Rizrb_ZNX1321,0,0,0,CLS_Hs,5,"Rizrb_ZNX1321","Tєььр ёъюЁЁ ч-ър Ёрсюўр "};
StayFD *_Rizrb_ZNX1321 = &_n_Rizrb_ZNX1321;

STAYI6 Rizrb_ZNX1322;
StayFD _n_Rizrb_ZNX1322 = {&Rizrb_ZNX1322,0,0,0,CLS_Hs,5,"Rizrb_ZNX1322","Tєььр ёъюЁЁ ч-ър Ёрсюўр "};
StayFD *_Rizrb_ZNX1322 = &_n_Rizrb_ZNX1322;

StayDate Rizrb_DEZ1321;
StayFD _n_Rizrb_DEZ1321 = {&Rizrb_DEZ1321,0,0,0,CLS_Date,0,"Rizrb_DEZ1321","макс дата"};
StayFD *_Rizrb_DEZ1321 = &_n_Rizrb_DEZ1321;

StayDate Rizrb_DEZ1322;
StayFD _n_Rizrb_DEZ1322 = {&Rizrb_DEZ1322,0,0,0,CLS_Date,0,"Rizrb_DEZ1322","макс дата"};
StayFD *_Rizrb_DEZ1322 = &_n_Rizrb_DEZ1322;

STAYI6 Rizrb_RabSIND;
StayFD _n_Rizrb_RabSIND = {&Rizrb_RabSIND,0,0,0,CLS_Hs,5,"Rizrb_RabSIND","рабочая"};
StayFD *_Rizrb_RabSIND = &_n_Rizrb_RabSIND;

STAYI6 Rizrb_SrMesFt;
StayFD _n_Rizrb_SrMesFt = {&Rizrb_SrMesFt,0,0,0,CLS_Hs,5,"Rizrb_SrMesFt","Средн.месячный -фактический"};
StayFD *_Rizrb_SrMesFt = &_n_Rizrb_SrMesFt;

STAYI6 Rizrb_SrMesKr;
StayFD _n_Rizrb_SrMesKr = {&Rizrb_SrMesKr,0,0,0,CLS_Hs,5,"Rizrb_SrMesKr","Средн.мес. скоррегированный."};
StayFD *_Rizrb_SrMesKr = &_n_Rizrb_SrMesKr;

STAYI6 Rizrb_RZNX27;
StayFD _n_Rizrb_RZNX27 = {&Rizrb_RZNX27,0,0,0,CLS_Hs,2,"Rizrb_RZNX27","средняя за пред год"};
StayFD *_Rizrb_RZNX27 = &_n_Rizrb_RZNX27;

STAYI6 Rizrb_RZNP27;
StayFD _n_Rizrb_RZNP27 = {&Rizrb_RZNP27,0,0,0,CLS_Hs,2,"Rizrb_RZNP27","средняя за пред год"};
StayFD *_Rizrb_RZNP27 = &_n_Rizrb_RZNP27;

STAYI6 Rizrb_RZNXI7;
StayFD _n_Rizrb_RZNXI7 = {&Rizrb_RZNXI7,0,0,0,CLS_Hs,2,"Rizrb_RZNXI7","средняя за пред год"};
StayFD *_Rizrb_RZNXI7 = &_n_Rizrb_RZNXI7;

STAYI6 Rizrb_RZNPI7;
StayFD _n_Rizrb_RZNPI7 = {&Rizrb_RZNPI7,0,0,0,CLS_Hs,2,"Rizrb_RZNPI7","средняя за пред год"};
StayFD *_Rizrb_RZNPI7 = &_n_Rizrb_RZNPI7;

STAYI6 Rizrb_SrNX;
StayFD _n_Rizrb_SrNX = {&Rizrb_SrNX,0,0,0,CLS_Hs,2,"Rizrb_SrNX","средняя за пред год"};
StayFD *_Rizrb_SrNX = &_n_Rizrb_SrNX;

STAYI6 Rizrb_GdSrNXP;
StayFD _n_Rizrb_GdSrNXP = {&Rizrb_GdSrNXP,0,0,0,CLS_Hs,2,"Rizrb_GdSrNXP","средняя за пред год"};
StayFD *_Rizrb_GdSrNXP = &_n_Rizrb_GdSrNXP;

STAYI6 Rizrb_SrNX22;
StayFD _n_Rizrb_SrNX22 = {&Rizrb_SrNX22,0,0,0,CLS_Hs,2,"Rizrb_SrNX22","средняя за пред год"};
StayFD *_Rizrb_SrNX22 = &_n_Rizrb_SrNX22;

STAYI6 Rizrb_SrNX24;
StayFD _n_Rizrb_SrNX24 = {&Rizrb_SrNX24,0,0,0,CLS_Hs,2,"Rizrb_SrNX24","средняя за пред год"};
StayFD *_Rizrb_SrNX24 = &_n_Rizrb_SrNX24;

STAYI6 Rizrb_SrDR24;
StayFD _n_Rizrb_SrDR24 = {&Rizrb_SrDR24,0,0,0,CLS_Hs,2,"Rizrb_SrDR24","средняя за пред год"};
StayFD *_Rizrb_SrDR24 = &_n_Rizrb_SrDR24;

STAYI6 Rizrb_SrNX26;
StayFD _n_Rizrb_SrNX26 = {&Rizrb_SrNX26,0,0,0,CLS_Hs,2,"Rizrb_SrNX26","средняя за пред год"};
StayFD *_Rizrb_SrNX26 = &_n_Rizrb_SrNX26;

STAYI6 Rizrb_SrNX27;
StayFD _n_Rizrb_SrNX27 = {&Rizrb_SrNX27,0,0,0,CLS_Hs,2,"Rizrb_SrNX27","средняя за пред год"};
StayFD *_Rizrb_SrNX27 = &_n_Rizrb_SrNX27;

STAYI6 Rizrb_SrNX28;
StayFD _n_Rizrb_SrNX28 = {&Rizrb_SrNX28,0,0,0,CLS_Hs,2,"Rizrb_SrNX28","средняя за пред год"};
StayFD *_Rizrb_SrNX28 = &_n_Rizrb_SrNX28;

STAYI6 Rizrb_SrNX29;
StayFD _n_Rizrb_SrNX29 = {&Rizrb_SrNX29,0,0,0,CLS_Hs,2,"Rizrb_SrNX29","средняя за пред год"};
StayFD *_Rizrb_SrNX29 = &_n_Rizrb_SrNX29;

STAYI6 Rizrb_SrNXA9;
StayFD _n_Rizrb_SrNXA9 = {&Rizrb_SrNXA9,0,0,0,CLS_Hs,2,"Rizrb_SrNXA9","средняя за пред год"};
StayFD *_Rizrb_SrNXA9 = &_n_Rizrb_SrNXA9;

STAYI6 Rizrb_SrX01A;
StayFD _n_Rizrb_SrX01A = {&Rizrb_SrX01A,0,0,0,CLS_Hs,2,"Rizrb_SrX01A","средняя за пред год"};
StayFD *_Rizrb_SrX01A = &_n_Rizrb_SrX01A;

STAYI6 Rizrb_SrX04A;
StayFD _n_Rizrb_SrX04A = {&Rizrb_SrX04A,0,0,0,CLS_Hs,2,"Rizrb_SrX04A","средняя за пред год"};
StayFD *_Rizrb_SrX04A = &_n_Rizrb_SrX04A;

STAYI6 Rizrb_SrX07A;
StayFD _n_Rizrb_SrX07A = {&Rizrb_SrX07A,0,0,0,CLS_Hs,2,"Rizrb_SrX07A","средняя за пред год"};
StayFD *_Rizrb_SrX07A = &_n_Rizrb_SrX07A;

STAYI6 Rizrb_SrX10A;
StayFD _n_Rizrb_SrX10A = {&Rizrb_SrX10A,0,0,0,CLS_Hs,2,"Rizrb_SrX10A","средняя за пред год"};
StayFD *_Rizrb_SrX10A = &_n_Rizrb_SrX10A;

STAYI6 Rizrb_SrX12A;
StayFD _n_Rizrb_SrX12A = {&Rizrb_SrX12A,0,0,0,CLS_Hs,2,"Rizrb_SrX12A","средняя за пред год"};
StayFD *_Rizrb_SrX12A = &_n_Rizrb_SrX12A;

STAYI6 Rizrb_SrX017;
StayFD _n_Rizrb_SrX017 = {&Rizrb_SrX017,0,0,0,CLS_Hs,2,"Rizrb_SrX017","средняя за пред год"};
StayFD *_Rizrb_SrX017 = &_n_Rizrb_SrX017;

STAYI6 Rizrb_SrX047;
StayFD _n_Rizrb_SrX047 = {&Rizrb_SrX047,0,0,0,CLS_Hs,2,"Rizrb_SrX047","средняя за пред год"};
StayFD *_Rizrb_SrX047 = &_n_Rizrb_SrX047;

STAYI6 Rizrb_SrX077;
StayFD _n_Rizrb_SrX077 = {&Rizrb_SrX077,0,0,0,CLS_Hs,2,"Rizrb_SrX077","средняя за пред год"};
StayFD *_Rizrb_SrX077 = &_n_Rizrb_SrX077;

STAYI6 Rizrb_SrX107;
StayFD _n_Rizrb_SrX107 = {&Rizrb_SrX107,0,0,0,CLS_Hs,2,"Rizrb_SrX107","средняя за пред год"};
StayFD *_Rizrb_SrX107 = &_n_Rizrb_SrX107;

STAYI6 Rizrb_SrX127;
StayFD _n_Rizrb_SrX127 = {&Rizrb_SrX127,0,0,0,CLS_Hs,2,"Rizrb_SrX127","средняя за пред год"};
StayFD *_Rizrb_SrX127 = &_n_Rizrb_SrX127;

STAYI6 Rizrb_SrNX20;
StayFD _n_Rizrb_SrNX20 = {&Rizrb_SrNX20,0,0,0,CLS_Hs,2,"Rizrb_SrNX20","средняя за пред год"};
StayFD *_Rizrb_SrNX20 = &_n_Rizrb_SrNX20;

STAYI6 Rizrb_SrNX21;
StayFD _n_Rizrb_SrNX21 = {&Rizrb_SrNX21,0,0,0,CLS_Hs,2,"Rizrb_SrNX21","средняя за пред год"};
StayFD *_Rizrb_SrNX21 = &_n_Rizrb_SrNX21;

STAYI6 Rizrb_SrNX2B;
StayFD _n_Rizrb_SrNX2B = {&Rizrb_SrNX2B,0,0,0,CLS_Hs,2,"Rizrb_SrNX2B","средняя за пред год"};
StayFD *_Rizrb_SrNX2B = &_n_Rizrb_SrNX2B;

STAYI6 Rizrb_SrNX2C;
StayFD _n_Rizrb_SrNX2C = {&Rizrb_SrNX2C,0,0,0,CLS_Hs,2,"Rizrb_SrNX2C","средняя за пред год"};
StayFD *_Rizrb_SrNX2C = &_n_Rizrb_SrNX2C;

STAYI6 Rizrb_SrNX2D;
StayFD _n_Rizrb_SrNX2D = {&Rizrb_SrNX2D,0,0,0,CLS_Hs,2,"Rizrb_SrNX2D","средняя за пред год"};
StayFD *_Rizrb_SrNX2D = &_n_Rizrb_SrNX2D;

STAYI6 Rizrb_SrNX2E;
StayFD _n_Rizrb_SrNX2E = {&Rizrb_SrNX2E,0,0,0,CLS_Hs,2,"Rizrb_SrNX2E","средняя за пред год"};
StayFD *_Rizrb_SrNX2E = &_n_Rizrb_SrNX2E;

STAYI6 Rizrb_SrNX2F;
StayFD _n_Rizrb_SrNX2F = {&Rizrb_SrNX2F,0,0,0,CLS_Hs,2,"Rizrb_SrNX2F","средняя за пред год"};
StayFD *_Rizrb_SrNX2F = &_n_Rizrb_SrNX2F;

STAYI6 Rizrb_SrNX44;
StayFD _n_Rizrb_SrNX44 = {&Rizrb_SrNX44,0,0,0,CLS_Hs,2,"Rizrb_SrNX44","средняя за пред год"};
StayFD *_Rizrb_SrNX44 = &_n_Rizrb_SrNX44;

STAYI6 Rizrb_SrNX8A;
StayFD _n_Rizrb_SrNX8A = {&Rizrb_SrNX8A,0,0,0,CLS_Hs,2,"Rizrb_SrNX8A","средняя за пред год"};
StayFD *_Rizrb_SrNX8A = &_n_Rizrb_SrNX8A;

STAYI6 Rizrb_SrNX7N;
StayFD _n_Rizrb_SrNX7N = {&Rizrb_SrNX7N,0,0,0,CLS_Hs,2,"Rizrb_SrNX7N","средняя за пред год"};
StayFD *_Rizrb_SrNX7N = &_n_Rizrb_SrNX7N;

STAYI6 Rizrb_SrNX8N;
StayFD _n_Rizrb_SrNX8N = {&Rizrb_SrNX8N,0,0,0,CLS_Hs,2,"Rizrb_SrNX8N","средняя за пред год"};
StayFD *_Rizrb_SrNX8N = &_n_Rizrb_SrNX8N;

STAYI6 Rizrb_SrNX9N;
StayFD _n_Rizrb_SrNX9N = {&Rizrb_SrNX9N,0,0,0,CLS_Hs,2,"Rizrb_SrNX9N","средняя за пред год"};
StayFD *_Rizrb_SrNX9N = &_n_Rizrb_SrNX9N;

STAYI6 Rizrb_SrNXAN;
StayFD _n_Rizrb_SrNXAN = {&Rizrb_SrNXAN,0,0,0,CLS_Hs,2,"Rizrb_SrNXAN","средняя за пред год"};
StayFD *_Rizrb_SrNXAN = &_n_Rizrb_SrNXAN;

STAYI6 Rizrb_SrNXBN;
StayFD _n_Rizrb_SrNXBN = {&Rizrb_SrNXBN,0,0,0,CLS_Hs,2,"Rizrb_SrNXBN","средняя за пред год"};
StayFD *_Rizrb_SrNXBN = &_n_Rizrb_SrNXBN;

STAYI6 Rizrb_SrNXCN;
StayFD _n_Rizrb_SrNXCN = {&Rizrb_SrNXCN,0,0,0,CLS_Hs,2,"Rizrb_SrNXCN","средняя за пред год"};
StayFD *_Rizrb_SrNXCN = &_n_Rizrb_SrNXCN;

STAYI6 Rizrb_SrNXDN;
StayFD _n_Rizrb_SrNXDN = {&Rizrb_SrNXDN,0,0,0,CLS_Hs,2,"Rizrb_SrNXDN","средняя за пред год"};
StayFD *_Rizrb_SrNXDN = &_n_Rizrb_SrNXDN;

STAYI6 Rizrb_SrNXEN;
StayFD _n_Rizrb_SrNXEN = {&Rizrb_SrNXEN,0,0,0,CLS_Hs,2,"Rizrb_SrNXEN","средняя за пред год"};
StayFD *_Rizrb_SrNXEN = &_n_Rizrb_SrNXEN;

STAYI6 Rizrb_SrNXFN;
StayFD _n_Rizrb_SrNXFN = {&Rizrb_SrNXFN,0,0,0,CLS_Hs,2,"Rizrb_SrNXFN","средняя за пред год"};
StayFD *_Rizrb_SrNXFN = &_n_Rizrb_SrNXFN;

STAYI6 Rizrb_SrNXGN;
StayFD _n_Rizrb_SrNXGN = {&Rizrb_SrNXGN,0,0,0,CLS_Hs,2,"Rizrb_SrNXGN","средняя за пред год"};
StayFD *_Rizrb_SrNXGN = &_n_Rizrb_SrNXGN;

STAYI6 Rizrb_SrNXVC;
StayFD _n_Rizrb_SrNXVC = {&Rizrb_SrNXVC,0,0,0,CLS_Hs,2,"Rizrb_SrNXVC","средняя за пред год"};
StayFD *_Rizrb_SrNXVC = &_n_Rizrb_SrNXVC;

STAYI6 Rizrb_SrNXNF;
StayFD _n_Rizrb_SrNXNF = {&Rizrb_SrNXNF,0,0,0,CLS_Hs,2,"Rizrb_SrNXNF","средняя за пред год"};
StayFD *_Rizrb_SrNXNF = &_n_Rizrb_SrNXNF;

STAYI6 Rizrb_SrNX1;
StayFD _n_Rizrb_SrNX1 = {&Rizrb_SrNX1,0,0,0,CLS_Hs,2,"Rizrb_SrNX1","средняя за пред год-1"};
StayFD *_Rizrb_SrNX1 = &_n_Rizrb_SrNX1;

STAYI6 Rizrb_SrNX2;
StayFD _n_Rizrb_SrNX2 = {&Rizrb_SrNX2,0,0,0,CLS_Hs,2,"Rizrb_SrNX2","средняя за пред год-2"};
StayFD *_Rizrb_SrNX2 = &_n_Rizrb_SrNX2;

STAYI6 Rizrb_ZarNX;
StayFD _n_Rizrb_ZarNX = {&Rizrb_ZarNX,0,0,0,CLS_Hs,2,"Rizrb_ZarNX","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarNX = &_n_Rizrb_ZarNX;

STAYI6 Rizrb_ZarNX22;
StayFD _n_Rizrb_ZarNX22 = {&Rizrb_ZarNX22,0,0,0,CLS_Hs,2,"Rizrb_ZarNX22","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarNX22 = &_n_Rizrb_ZarNX22;

STAYI6 Rizrb_ZarNX2B;
StayFD _n_Rizrb_ZarNX2B = {&Rizrb_ZarNX2B,0,0,0,CLS_Hs,2,"Rizrb_ZarNX2B","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarNX2B = &_n_Rizrb_ZarNX2B;

STAYI6 Rizrb_ZarNXIB;
StayFD _n_Rizrb_ZarNXIB = {&Rizrb_ZarNXIB,0,0,0,CLS_Hs,2,"Rizrb_ZarNXIB","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarNXIB = &_n_Rizrb_ZarNXIB;

STAYI6 Rizrb_ZarNP2B;
StayFD _n_Rizrb_ZarNP2B = {&Rizrb_ZarNP2B,0,0,0,CLS_Hs,2,"Rizrb_ZarNP2B","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarNP2B = &_n_Rizrb_ZarNP2B;

STAYI6 Rizrb_ZarNPIB;
StayFD _n_Rizrb_ZarNPIB = {&Rizrb_ZarNPIB,0,0,0,CLS_Hs,2,"Rizrb_ZarNPIB","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarNPIB = &_n_Rizrb_ZarNPIB;

STAYI6 Rizrb_ZarNX2C;
StayFD _n_Rizrb_ZarNX2C = {&Rizrb_ZarNX2C,0,0,0,CLS_Hs,2,"Rizrb_ZarNX2C","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarNX2C = &_n_Rizrb_ZarNX2C;

STAYI6 Rizrb_ZarNXIC;
StayFD _n_Rizrb_ZarNXIC = {&Rizrb_ZarNXIC,0,0,0,CLS_Hs,2,"Rizrb_ZarNXIC","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarNXIC = &_n_Rizrb_ZarNXIC;

STAYI6 Rizrb_ZarNP2C;
StayFD _n_Rizrb_ZarNP2C = {&Rizrb_ZarNP2C,0,0,0,CLS_Hs,2,"Rizrb_ZarNP2C","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarNP2C = &_n_Rizrb_ZarNP2C;

STAYI6 Rizrb_ZarNPIC;
StayFD _n_Rizrb_ZarNPIC = {&Rizrb_ZarNPIC,0,0,0,CLS_Hs,2,"Rizrb_ZarNPIC","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarNPIC = &_n_Rizrb_ZarNPIC;

STAYI6 Rizrb_ZarNX2D;
StayFD _n_Rizrb_ZarNX2D = {&Rizrb_ZarNX2D,0,0,0,CLS_Hs,2,"Rizrb_ZarNX2D","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarNX2D = &_n_Rizrb_ZarNX2D;

STAYI6 Rizrb_ZarNXID;
StayFD _n_Rizrb_ZarNXID = {&Rizrb_ZarNXID,0,0,0,CLS_Hs,2,"Rizrb_ZarNXID","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarNXID = &_n_Rizrb_ZarNXID;

STAYI6 Rizrb_ZarNP2D;
StayFD _n_Rizrb_ZarNP2D = {&Rizrb_ZarNP2D,0,0,0,CLS_Hs,2,"Rizrb_ZarNP2D","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarNP2D = &_n_Rizrb_ZarNP2D;

STAYI6 Rizrb_ZarNPID;
StayFD _n_Rizrb_ZarNPID = {&Rizrb_ZarNPID,0,0,0,CLS_Hs,2,"Rizrb_ZarNPID","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarNPID = &_n_Rizrb_ZarNPID;

STAYI6 Rizrb_ZarNX2E;
StayFD _n_Rizrb_ZarNX2E = {&Rizrb_ZarNX2E,0,0,0,CLS_Hs,2,"Rizrb_ZarNX2E","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarNX2E = &_n_Rizrb_ZarNX2E;

STAYI6 Rizrb_ZarNXIE;
StayFD _n_Rizrb_ZarNXIE = {&Rizrb_ZarNXIE,0,0,0,CLS_Hs,2,"Rizrb_ZarNXIE","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarNXIE = &_n_Rizrb_ZarNXIE;

STAYI6 Rizrb_ZarNP2E;
StayFD _n_Rizrb_ZarNP2E = {&Rizrb_ZarNP2E,0,0,0,CLS_Hs,2,"Rizrb_ZarNP2E","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarNP2E = &_n_Rizrb_ZarNP2E;

STAYI6 Rizrb_ZarNPIE;
StayFD _n_Rizrb_ZarNPIE = {&Rizrb_ZarNPIE,0,0,0,CLS_Hs,2,"Rizrb_ZarNPIE","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarNPIE = &_n_Rizrb_ZarNPIE;

STAYI6 Rizrb_ZarNX2F;
StayFD _n_Rizrb_ZarNX2F = {&Rizrb_ZarNX2F,0,0,0,CLS_Hs,2,"Rizrb_ZarNX2F","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarNX2F = &_n_Rizrb_ZarNX2F;

STAYI6 Rizrb_ZarNXIF;
StayFD _n_Rizrb_ZarNXIF = {&Rizrb_ZarNXIF,0,0,0,CLS_Hs,2,"Rizrb_ZarNXIF","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarNXIF = &_n_Rizrb_ZarNXIF;

STAYI6 Rizrb_ZarNP2F;
StayFD _n_Rizrb_ZarNP2F = {&Rizrb_ZarNP2F,0,0,0,CLS_Hs,2,"Rizrb_ZarNP2F","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarNP2F = &_n_Rizrb_ZarNP2F;

STAYI6 Rizrb_ZarNPIF;
StayFD _n_Rizrb_ZarNPIF = {&Rizrb_ZarNPIF,0,0,0,CLS_Hs,2,"Rizrb_ZarNPIF","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarNPIF = &_n_Rizrb_ZarNPIF;

STAYI6 Rizrb_ZarNX24;
StayFD _n_Rizrb_ZarNX24 = {&Rizrb_ZarNX24,0,0,0,CLS_Hs,2,"Rizrb_ZarNX24","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarNX24 = &_n_Rizrb_ZarNX24;

STAYI6 Rizrb_ZarDR24;
StayFD _n_Rizrb_ZarDR24 = {&Rizrb_ZarDR24,0,0,0,CLS_Hs,2,"Rizrb_ZarDR24","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarDR24 = &_n_Rizrb_ZarDR24;

STAYI6 Rizrb_ZarNXI4;
StayFD _n_Rizrb_ZarNXI4 = {&Rizrb_ZarNXI4,0,0,0,CLS_Hs,2,"Rizrb_ZarNXI4","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarNXI4 = &_n_Rizrb_ZarNXI4;

STAYI6 Rizrb_ZarNP24;
StayFD _n_Rizrb_ZarNP24 = {&Rizrb_ZarNP24,0,0,0,CLS_Hs,2,"Rizrb_ZarNP24","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarNP24 = &_n_Rizrb_ZarNP24;

STAYI6 Rizrb_ZarNPI4;
StayFD _n_Rizrb_ZarNPI4 = {&Rizrb_ZarNPI4,0,0,0,CLS_Hs,2,"Rizrb_ZarNPI4","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarNPI4 = &_n_Rizrb_ZarNPI4;

STAYI6 Rizrb_ZarNP26;
StayFD _n_Rizrb_ZarNP26 = {&Rizrb_ZarNP26,0,0,0,CLS_Hs,2,"Rizrb_ZarNP26","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarNP26 = &_n_Rizrb_ZarNP26;

STAYI6 Rizrb_ZarNP28;
StayFD _n_Rizrb_ZarNP28 = {&Rizrb_ZarNP28,0,0,0,CLS_Hs,2,"Rizrb_ZarNP28","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarNP28 = &_n_Rizrb_ZarNP28;

STAYI6 Rizrb_ZarNPI8;
StayFD _n_Rizrb_ZarNPI8 = {&Rizrb_ZarNPI8,0,0,0,CLS_Hs,2,"Rizrb_ZarNPI8","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarNPI8 = &_n_Rizrb_ZarNPI8;

STAYI6 Rizrb_ZarNP29;
StayFD _n_Rizrb_ZarNP29 = {&Rizrb_ZarNP29,0,0,0,CLS_Hs,2,"Rizrb_ZarNP29","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarNP29 = &_n_Rizrb_ZarNP29;

STAYI6 Rizrb_ZarNPA9;
StayFD _n_Rizrb_ZarNPA9 = {&Rizrb_ZarNPA9,0,0,0,CLS_Hs,2,"Rizrb_ZarNPA9","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarNPA9 = &_n_Rizrb_ZarNPA9;

STAYI6 Rizrb_ZarNPI0;
StayFD _n_Rizrb_ZarNPI0 = {&Rizrb_ZarNPI0,0,0,0,CLS_Hs,2,"Rizrb_ZarNPI0","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarNPI0 = &_n_Rizrb_ZarNPI0;

STAYI6 Rizrb_ZarNPI1;
StayFD _n_Rizrb_ZarNPI1 = {&Rizrb_ZarNPI1,0,0,0,CLS_Hs,2,"Rizrb_ZarNPI1","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarNPI1 = &_n_Rizrb_ZarNPI1;

STAYI6 Rizrb_ZarNPI9;
StayFD _n_Rizrb_ZarNPI9 = {&Rizrb_ZarNPI9,0,0,0,CLS_Hs,2,"Rizrb_ZarNPI9","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarNPI9 = &_n_Rizrb_ZarNPI9;

STAYI6 Rizrb_ZarNPIA;
StayFD _n_Rizrb_ZarNPIA = {&Rizrb_ZarNPIA,0,0,0,CLS_Hs,2,"Rizrb_ZarNPIA","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarNPIA = &_n_Rizrb_ZarNPIA;

STAYI6 Rizrb_ZarP01A;
StayFD _n_Rizrb_ZarP01A = {&Rizrb_ZarP01A,0,0,0,CLS_Hs,2,"Rizrb_ZarP01A","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarP01A = &_n_Rizrb_ZarP01A;

STAYI6 Rizrb_ZarP04A;
StayFD _n_Rizrb_ZarP04A = {&Rizrb_ZarP04A,0,0,0,CLS_Hs,2,"Rizrb_ZarP04A","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarP04A = &_n_Rizrb_ZarP04A;

STAYI6 Rizrb_ZarP07A;
StayFD _n_Rizrb_ZarP07A = {&Rizrb_ZarP07A,0,0,0,CLS_Hs,2,"Rizrb_ZarP07A","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarP07A = &_n_Rizrb_ZarP07A;

STAYI6 Rizrb_ZarP10A;
StayFD _n_Rizrb_ZarP10A = {&Rizrb_ZarP10A,0,0,0,CLS_Hs,2,"Rizrb_ZarP10A","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarP10A = &_n_Rizrb_ZarP10A;

STAYI6 Rizrb_ZarP12A;
StayFD _n_Rizrb_ZarP12A = {&Rizrb_ZarP12A,0,0,0,CLS_Hs,2,"Rizrb_ZarP12A","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarP12A = &_n_Rizrb_ZarP12A;

STAYI6 Rizrb_ZarP017;
StayFD _n_Rizrb_ZarP017 = {&Rizrb_ZarP017,0,0,0,CLS_Hs,2,"Rizrb_ZarP017","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarP017 = &_n_Rizrb_ZarP017;

STAYI6 Rizrb_ZarP047;
StayFD _n_Rizrb_ZarP047 = {&Rizrb_ZarP047,0,0,0,CLS_Hs,2,"Rizrb_ZarP047","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarP047 = &_n_Rizrb_ZarP047;

STAYI6 Rizrb_ZarP077;
StayFD _n_Rizrb_ZarP077 = {&Rizrb_ZarP077,0,0,0,CLS_Hs,2,"Rizrb_ZarP077","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarP077 = &_n_Rizrb_ZarP077;

STAYI6 Rizrb_ZarP107;
StayFD _n_Rizrb_ZarP107 = {&Rizrb_ZarP107,0,0,0,CLS_Hs,2,"Rizrb_ZarP107","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarP107 = &_n_Rizrb_ZarP107;

STAYI6 Rizrb_ZarP127;
StayFD _n_Rizrb_ZarP127 = {&Rizrb_ZarP127,0,0,0,CLS_Hs,2,"Rizrb_ZarP127","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarP127 = &_n_Rizrb_ZarP127;

STAYI6 Rizrb_ZarP129;
StayFD _n_Rizrb_ZarP129 = {&Rizrb_ZarP129,0,0,0,CLS_Hs,2,"Rizrb_ZarP129","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarP129 = &_n_Rizrb_ZarP129;

STAYI6 Rizrb_ZarNP20;
StayFD _n_Rizrb_ZarNP20 = {&Rizrb_ZarNP20,0,0,0,CLS_Hs,2,"Rizrb_ZarNP20","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarNP20 = &_n_Rizrb_ZarNP20;

STAYI6 Rizrb_ZarNP21;
StayFD _n_Rizrb_ZarNP21 = {&Rizrb_ZarNP21,0,0,0,CLS_Hs,2,"Rizrb_ZarNP21","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarNP21 = &_n_Rizrb_ZarNP21;

STAYI6 Rizrb_ZarNX26;
StayFD _n_Rizrb_ZarNX26 = {&Rizrb_ZarNX26,0,0,0,CLS_Hs,2,"Rizrb_ZarNX26","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarNX26 = &_n_Rizrb_ZarNX26;

STAYI6 Rizrb_ZarNX27;
StayFD _n_Rizrb_ZarNX27 = {&Rizrb_ZarNX27,0,0,0,CLS_Hs,2,"Rizrb_ZarNX27","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarNX27 = &_n_Rizrb_ZarNX27;

STAYI6 Rizrb_ZarNX28;
StayFD _n_Rizrb_ZarNX28 = {&Rizrb_ZarNX28,0,0,0,CLS_Hs,2,"Rizrb_ZarNX28","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarNX28 = &_n_Rizrb_ZarNX28;

STAYI6 Rizrb_ZarNXI0;
StayFD _n_Rizrb_ZarNXI0 = {&Rizrb_ZarNXI0,0,0,0,CLS_Hs,2,"Rizrb_ZarNXI0","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarNXI0 = &_n_Rizrb_ZarNXI0;

STAYI6 Rizrb_ZarNXI1;
StayFD _n_Rizrb_ZarNXI1 = {&Rizrb_ZarNXI1,0,0,0,CLS_Hs,2,"Rizrb_ZarNXI1","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarNXI1 = &_n_Rizrb_ZarNXI1;

STAYI6 Rizrb_ZarNXI8;
StayFD _n_Rizrb_ZarNXI8 = {&Rizrb_ZarNXI8,0,0,0,CLS_Hs,2,"Rizrb_ZarNXI8","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarNXI8 = &_n_Rizrb_ZarNXI8;

STAYI6 Rizrb_ZarNX29;
StayFD _n_Rizrb_ZarNX29 = {&Rizrb_ZarNX29,0,0,0,CLS_Hs,2,"Rizrb_ZarNX29","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarNX29 = &_n_Rizrb_ZarNX29;

STAYI6 Rizrb_ZarNXA9;
StayFD _n_Rizrb_ZarNXA9 = {&Rizrb_ZarNXA9,0,0,0,CLS_Hs,2,"Rizrb_ZarNXA9","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarNXA9 = &_n_Rizrb_ZarNXA9;

STAYI6 Rizrb_ZarNXI9;
StayFD _n_Rizrb_ZarNXI9 = {&Rizrb_ZarNXI9,0,0,0,CLS_Hs,2,"Rizrb_ZarNXI9","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarNXI9 = &_n_Rizrb_ZarNXI9;

STAYI6 Rizrb_ZarNXIA;
StayFD _n_Rizrb_ZarNXIA = {&Rizrb_ZarNXIA,0,0,0,CLS_Hs,2,"Rizrb_ZarNXIA","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarNXIA = &_n_Rizrb_ZarNXIA;

STAYI6 Rizrb_ZarX01A;
StayFD _n_Rizrb_ZarX01A = {&Rizrb_ZarX01A,0,0,0,CLS_Hs,2,"Rizrb_ZarX01A","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarX01A = &_n_Rizrb_ZarX01A;

STAYI6 Rizrb_ZarX04A;
StayFD _n_Rizrb_ZarX04A = {&Rizrb_ZarX04A,0,0,0,CLS_Hs,2,"Rizrb_ZarX04A","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarX04A = &_n_Rizrb_ZarX04A;

STAYI6 Rizrb_ZarX07A;
StayFD _n_Rizrb_ZarX07A = {&Rizrb_ZarX07A,0,0,0,CLS_Hs,2,"Rizrb_ZarX07A","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarX07A = &_n_Rizrb_ZarX07A;

STAYI6 Rizrb_ZarX10A;
StayFD _n_Rizrb_ZarX10A = {&Rizrb_ZarX10A,0,0,0,CLS_Hs,2,"Rizrb_ZarX10A","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarX10A = &_n_Rizrb_ZarX10A;

STAYI6 Rizrb_ZarX12A;
StayFD _n_Rizrb_ZarX12A = {&Rizrb_ZarX12A,0,0,0,CLS_Hs,2,"Rizrb_ZarX12A","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarX12A = &_n_Rizrb_ZarX12A;

STAYI6 Rizrb_ZarX017;
StayFD _n_Rizrb_ZarX017 = {&Rizrb_ZarX017,0,0,0,CLS_Hs,2,"Rizrb_ZarX017","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarX017 = &_n_Rizrb_ZarX017;

STAYI6 Rizrb_ZarX047;
StayFD _n_Rizrb_ZarX047 = {&Rizrb_ZarX047,0,0,0,CLS_Hs,2,"Rizrb_ZarX047","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarX047 = &_n_Rizrb_ZarX047;

STAYI6 Rizrb_ZarX077;
StayFD _n_Rizrb_ZarX077 = {&Rizrb_ZarX077,0,0,0,CLS_Hs,2,"Rizrb_ZarX077","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarX077 = &_n_Rizrb_ZarX077;

STAYI6 Rizrb_ZarX107;
StayFD _n_Rizrb_ZarX107 = {&Rizrb_ZarX107,0,0,0,CLS_Hs,2,"Rizrb_ZarX107","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarX107 = &_n_Rizrb_ZarX107;

STAYI6 Rizrb_ZarX127;
StayFD _n_Rizrb_ZarX127 = {&Rizrb_ZarX127,0,0,0,CLS_Hs,2,"Rizrb_ZarX127","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarX127 = &_n_Rizrb_ZarX127;

STAYI6 Rizrb_ZarI01A;
StayFD _n_Rizrb_ZarI01A = {&Rizrb_ZarI01A,0,0,0,CLS_Hs,2,"Rizrb_ZarI01A","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarI01A = &_n_Rizrb_ZarI01A;

STAYI6 Rizrb_ZarI04A;
StayFD _n_Rizrb_ZarI04A = {&Rizrb_ZarI04A,0,0,0,CLS_Hs,2,"Rizrb_ZarI04A","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarI04A = &_n_Rizrb_ZarI04A;

STAYI6 Rizrb_ZarI07A;
StayFD _n_Rizrb_ZarI07A = {&Rizrb_ZarI07A,0,0,0,CLS_Hs,2,"Rizrb_ZarI07A","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarI07A = &_n_Rizrb_ZarI07A;

STAYI6 Rizrb_ZarI10A;
StayFD _n_Rizrb_ZarI10A = {&Rizrb_ZarI10A,0,0,0,CLS_Hs,2,"Rizrb_ZarI10A","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarI10A = &_n_Rizrb_ZarI10A;

STAYI6 Rizrb_ZarI12A;
StayFD _n_Rizrb_ZarI12A = {&Rizrb_ZarI12A,0,0,0,CLS_Hs,2,"Rizrb_ZarI12A","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarI12A = &_n_Rizrb_ZarI12A;

STAYI6 Rizrb_ZarI017;
StayFD _n_Rizrb_ZarI017 = {&Rizrb_ZarI017,0,0,0,CLS_Hs,2,"Rizrb_ZarI017","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarI017 = &_n_Rizrb_ZarI017;

STAYI6 Rizrb_ZarI047;
StayFD _n_Rizrb_ZarI047 = {&Rizrb_ZarI047,0,0,0,CLS_Hs,2,"Rizrb_ZarI047","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarI047 = &_n_Rizrb_ZarI047;

STAYI6 Rizrb_ZarI077;
StayFD _n_Rizrb_ZarI077 = {&Rizrb_ZarI077,0,0,0,CLS_Hs,2,"Rizrb_ZarI077","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarI077 = &_n_Rizrb_ZarI077;

STAYI6 Rizrb_ZarI107;
StayFD _n_Rizrb_ZarI107 = {&Rizrb_ZarI107,0,0,0,CLS_Hs,2,"Rizrb_ZarI107","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarI107 = &_n_Rizrb_ZarI107;

STAYI6 Rizrb_ZarI127;
StayFD _n_Rizrb_ZarI127 = {&Rizrb_ZarI127,0,0,0,CLS_Hs,2,"Rizrb_ZarI127","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarI127 = &_n_Rizrb_ZarI127;

STAYI6 Rizrb_ZarX129;
StayFD _n_Rizrb_ZarX129 = {&Rizrb_ZarX129,0,0,0,CLS_Hs,2,"Rizrb_ZarX129","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarX129 = &_n_Rizrb_ZarX129;

STAYI6 Rizrb_ZarNX20;
StayFD _n_Rizrb_ZarNX20 = {&Rizrb_ZarNX20,0,0,0,CLS_Hs,2,"Rizrb_ZarNX20","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarNX20 = &_n_Rizrb_ZarNX20;

STAYI6 Rizrb_ZarNX21;
StayFD _n_Rizrb_ZarNX21 = {&Rizrb_ZarNX21,0,0,0,CLS_Hs,2,"Rizrb_ZarNX21","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarNX21 = &_n_Rizrb_ZarNX21;

STAYI6 Rizrb_ZarNX44;
StayFD _n_Rizrb_ZarNX44 = {&Rizrb_ZarNX44,0,0,0,CLS_Hs,2,"Rizrb_ZarNX44","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarNX44 = &_n_Rizrb_ZarNX44;

STAYI6 Rizrb_ZarNX8A;
StayFD _n_Rizrb_ZarNX8A = {&Rizrb_ZarNX8A,0,0,0,CLS_Hs,2,"Rizrb_ZarNX8A","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarNX8A = &_n_Rizrb_ZarNX8A;

STAYI6 Rizrb_ZarNX7N;
StayFD _n_Rizrb_ZarNX7N = {&Rizrb_ZarNX7N,0,0,0,CLS_Hs,2,"Rizrb_ZarNX7N","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarNX7N = &_n_Rizrb_ZarNX7N;

STAYI6 Rizrb_ZarNX8N;
StayFD _n_Rizrb_ZarNX8N = {&Rizrb_ZarNX8N,0,0,0,CLS_Hs,2,"Rizrb_ZarNX8N","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarNX8N = &_n_Rizrb_ZarNX8N;

STAYI6 Rizrb_ZarNX9N;
StayFD _n_Rizrb_ZarNX9N = {&Rizrb_ZarNX9N,0,0,0,CLS_Hs,2,"Rizrb_ZarNX9N","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarNX9N = &_n_Rizrb_ZarNX9N;

STAYI6 Rizrb_ZarNXAN;
StayFD _n_Rizrb_ZarNXAN = {&Rizrb_ZarNXAN,0,0,0,CLS_Hs,2,"Rizrb_ZarNXAN","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarNXAN = &_n_Rizrb_ZarNXAN;

STAYI6 Rizrb_ZarNXBN;
StayFD _n_Rizrb_ZarNXBN = {&Rizrb_ZarNXBN,0,0,0,CLS_Hs,2,"Rizrb_ZarNXBN","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarNXBN = &_n_Rizrb_ZarNXBN;

STAYI6 Rizrb_ZarNXCN;
StayFD _n_Rizrb_ZarNXCN = {&Rizrb_ZarNXCN,0,0,0,CLS_Hs,2,"Rizrb_ZarNXCN","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarNXCN = &_n_Rizrb_ZarNXCN;

STAYI6 Rizrb_ZarNXDN;
StayFD _n_Rizrb_ZarNXDN = {&Rizrb_ZarNXDN,0,0,0,CLS_Hs,2,"Rizrb_ZarNXDN","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarNXDN = &_n_Rizrb_ZarNXDN;

STAYI6 Rizrb_ZarNXEN;
StayFD _n_Rizrb_ZarNXEN = {&Rizrb_ZarNXEN,0,0,0,CLS_Hs,2,"Rizrb_ZarNXEN","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarNXEN = &_n_Rizrb_ZarNXEN;

STAYI6 Rizrb_ZarNXFN;
StayFD _n_Rizrb_ZarNXFN = {&Rizrb_ZarNXFN,0,0,0,CLS_Hs,2,"Rizrb_ZarNXFN","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarNXFN = &_n_Rizrb_ZarNXFN;

STAYI6 Rizrb_ZarNXGN;
StayFD _n_Rizrb_ZarNXGN = {&Rizrb_ZarNXGN,0,0,0,CLS_Hs,2,"Rizrb_ZarNXGN","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarNXGN = &_n_Rizrb_ZarNXGN;

STAYI6 Rizrb_ZarNXVC;
StayFD _n_Rizrb_ZarNXVC = {&Rizrb_ZarNXVC,0,0,0,CLS_Hs,2,"Rizrb_ZarNXVC","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarNXVC = &_n_Rizrb_ZarNXVC;

STAYI6 Rizrb_ZarNXNF;
StayFD _n_Rizrb_ZarNXNF = {&Rizrb_ZarNXNF,0,0,0,CLS_Hs,2,"Rizrb_ZarNXNF","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarNXNF = &_n_Rizrb_ZarNXNF;

STAYI6 Rizrb_ZrNXNFP;
StayFD _n_Rizrb_ZrNXNFP = {&Rizrb_ZrNXNFP,0,0,0,CLS_Hs,2,"Rizrb_ZrNXNFP","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZrNXNFP = &_n_Rizrb_ZrNXNFP;

STAYI6 Rizrb_ZarNX1;
StayFD _n_Rizrb_ZarNX1 = {&Rizrb_ZarNX1,0,0,0,CLS_Hs,2,"Rizrb_ZarNX1","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarNX1 = &_n_Rizrb_ZarNX1;

STAYI6 Rizrb_ZarNX2;
StayFD _n_Rizrb_ZarNX2 = {&Rizrb_ZarNX2,0,0,0,CLS_Hs,2,"Rizrb_ZarNX2","Заработок за средняя за пред год-2"};
StayFD *_Rizrb_ZarNX2 = &_n_Rizrb_ZarNX2;

STAYI6 Rizrb_ZarPK1;
StayFD _n_Rizrb_ZarPK1 = {&Rizrb_ZarPK1,0,0,0,CLS_Hs,2,"Rizrb_ZarPK1","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarPK1 = &_n_Rizrb_ZarPK1;

STAYI6 Rizrb_ZarPK2;
StayFD _n_Rizrb_ZarPK2 = {&Rizrb_ZarPK2,0,0,0,CLS_Hs,2,"Rizrb_ZarPK2","Заработок за средняя за пред год-2"};
StayFD *_Rizrb_ZarPK2 = &_n_Rizrb_ZarPK2;

STAYI6 Rizrb_ZarIK1;
StayFD _n_Rizrb_ZarIK1 = {&Rizrb_ZarIK1,0,0,0,CLS_Hs,2,"Rizrb_ZarIK1","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarIK1 = &_n_Rizrb_ZarIK1;

STAYI6 Rizrb_ZarIK2;
StayFD _n_Rizrb_ZarIK2 = {&Rizrb_ZarIK2,0,0,0,CLS_Hs,2,"Rizrb_ZarIK2","Заработок за средняя за пред год-2"};
StayFD *_Rizrb_ZarIK2 = &_n_Rizrb_ZarIK2;

STAYI6 Rizrb_ZarGOS1;
StayFD _n_Rizrb_ZarGOS1 = {&Rizrb_ZarGOS1,0,0,0,CLS_Hs,2,"Rizrb_ZarGOS1","Заработок за средняя за пред год"};
StayFD *_Rizrb_ZarGOS1 = &_n_Rizrb_ZarGOS1;

STAYI6 Rizrb_ZarGOS2;
StayFD _n_Rizrb_ZarGOS2 = {&Rizrb_ZarGOS2,0,0,0,CLS_Hs,2,"Rizrb_ZarGOS2","Заработок за средняя за пред год-2"};
StayFD *_Rizrb_ZarGOS2 = &_n_Rizrb_ZarGOS2;

STAYI6 Rpzrb_SrMesFt;
StayFD _n_Rpzrb_SrMesFt = {&Rpzrb_SrMesFt,0,0,0,CLS_Hs,5,"Rpzrb_SrMesFt","Средн.месячный -фактический"};
StayFD *_Rpzrb_SrMesFt = &_n_Rpzrb_SrMesFt;

STAYI6 Rpzrb_SrMesKr;
StayFD _n_Rpzrb_SrMesKr = {&Rpzrb_SrMesKr,0,0,0,CLS_Hs,5,"Rpzrb_SrMesKr","Средн.мес. скоррегированный."};
StayFD *_Rpzrb_SrMesKr = &_n_Rpzrb_SrMesKr;

DWORD Rpzrb_IKS24;
StayFD _n_Rpzrb_IKS24 = {&Rpzrb_IKS24,0,0,0,CLS_L,5,"Rpzrb_IKS24","Сума сум (кальк.)"};
StayFD *_Rpzrb_IKS24 = &_n_Rpzrb_IKS24;

DWORD Rpzrb_IKoef24;
StayFD _n_Rpzrb_IKoef24 = {&Rpzrb_IKoef24,0,0,0,CLS_L,5,"Rpzrb_IKoef24","Сума сум (кальк.)"};
StayFD *_Rpzrb_IKoef24 = &_n_Rpzrb_IKoef24;

DWORD Rpzrb_IKSI4;
StayFD _n_Rpzrb_IKSI4 = {&Rpzrb_IKSI4,0,0,0,CLS_L,5,"Rpzrb_IKSI4","Сума сум (кальк.)"};
StayFD *_Rpzrb_IKSI4 = &_n_Rpzrb_IKSI4;

DWORD Rpzrb_IKoefI4;
StayFD _n_Rpzrb_IKoefI4 = {&Rpzrb_IKoefI4,0,0,0,CLS_L,5,"Rpzrb_IKoefI4","Сума сум (кальк.)"};
StayFD *_Rpzrb_IKoefI4 = &_n_Rpzrb_IKoefI4;

char Rpzrb_TOptim[13];
StayFD _n_Rpzrb_TOptim = {&Rpzrb_TOptim,0,0,0,CLS_V,12,"Rpzrb_TOptim","ъю®Є ьрёёютюую яхЁхЁрёіхҐр"};
StayFD *_Rpzrb_TOptim = &_n_Rpzrb_TOptim;

STAYI6 Rizrb_StrSuma;
StayFD _n_Rizrb_StrSuma = {&Rizrb_StrSuma,0,0,0,CLS_Hs,5,"Rizrb_StrSuma","Сумаа скорр.зар-ка - всего"};
StayFD *_Rizrb_StrSuma = &_n_Rizrb_StrSuma;

STAYI6 Rizrb_StrOgr22;
StayFD _n_Rizrb_StrOgr22 = {&Rizrb_StrOgr22,0,0,0,CLS_Hs,5,"Rizrb_StrOgr22","Сумаа скорр.зар-ка - всего"};
StayFD *_Rizrb_StrOgr22 = &_n_Rizrb_StrOgr22;

STAYI6 Rizrb_StrOgr24;
StayFD _n_Rizrb_StrOgr24 = {&Rizrb_StrOgr24,0,0,0,CLS_Hs,5,"Rizrb_StrOgr24","Сумаа скорр.зар-ка - всего"};
StayFD *_Rizrb_StrOgr24 = &_n_Rizrb_StrOgr24;

STAYI6 Rizrb_StrOgrNF;
StayFD _n_Rizrb_StrOgrNF = {&Rizrb_StrOgrNF,0,0,0,CLS_Hs,5,"Rizrb_StrOgrNF","Сумаа скорр.зар-ка - всего"};
StayFD *_Rizrb_StrOgrNF = &_n_Rizrb_StrOgrNF;

STAYI6 Rizrb_Suma;
StayFD _n_Rizrb_Suma = {&Rizrb_Suma,0,0,0,CLS_Hs,5,"Rizrb_Suma","Сумма заработка - всего"};
StayFD *_Rizrb_Suma = &_n_Rizrb_Suma;

STAYI6 Rizrb_Suma92;
StayFD _n_Rizrb_Suma92 = {&Rizrb_Suma92,0,0,0,CLS_Hs,5,"Rizrb_Suma92","Сумма заработка - всего"};
StayFD *_Rizrb_Suma92 = &_n_Rizrb_Suma92;

STAYI6 Rizrb_Suma92P;
StayFD _n_Rizrb_Suma92P = {&Rizrb_Suma92P,0,0,0,CLS_Hs,5,"Rizrb_Suma92P","Сумма заработка - всего н/р"};
StayFD *_Rizrb_Suma92P = &_n_Rizrb_Suma92P;

STAYI6 Rizrb_Suma21;
StayFD _n_Rizrb_Suma21 = {&Rizrb_Suma21,0,0,0,CLS_Hs,5,"Rizrb_Suma21","Сумма заработка - всего"};
StayFD *_Rizrb_Suma21 = &_n_Rizrb_Suma21;

STAYI6 Rizrb_Suma21P;
StayFD _n_Rizrb_Suma21P = {&Rizrb_Suma21P,0,0,0,CLS_Hs,5,"Rizrb_Suma21P","Сумма заработка - всего н/р"};
StayFD *_Rizrb_Suma21P = &_n_Rizrb_Suma21P;

STAYI6 Rizrb_SumaSp;
StayFD _n_Rizrb_SumaSp = {&Rizrb_SumaSp,0,0,0,CLS_Hs,5,"Rizrb_SumaSp","Сумма зароботка по справке"};
StayFD *_Rizrb_SumaSp = &_n_Rizrb_SumaSp;

char Rizrb_TStr1[101];
StayFD _n_Rizrb_TStr1 = {&Rizrb_TStr1,0,0,0,CLS_V,100,"Rizrb_TStr1","Текст - Регрессивная шкала"};
StayFD *_Rizrb_TStr1 = &_n_Rizrb_TStr1;

char Rizrb_TStr2[101];
StayFD _n_Rizrb_TStr2 = {&Rizrb_TStr2,0,0,0,CLS_V,100,"Rizrb_TStr2","Текст - Среднемес.факт"};
StayFD *_Rizrb_TStr2 = &_n_Rizrb_TStr2;

char Rizrb_TStr3[101];
StayFD _n_Rizrb_TStr3 = {&Rizrb_TStr3,0,0,0,CLS_V,100,"Rizrb_TStr3","Текст - Среднемес.Скоррег."};
StayFD *_Rizrb_TStr3 = &_n_Rizrb_TStr3;

STAYI6 Rizrb_ZRegr;
StayFD _n_Rizrb_ZRegr = {&Rizrb_ZRegr,0,0,0,CLS_Hs,5,"Rizrb_ZRegr","Заработок для регресса"};
StayFD *_Rizrb_ZRegr = &_n_Rizrb_ZRegr;

STAYI6 Rpzrb_ZRegr;
StayFD _n_Rpzrb_ZRegr = {&Rpzrb_ZRegr,0,0,0,CLS_Hs,5,"Rpzrb_ZRegr","Заработок для регресса"};
StayFD *_Rpzrb_ZRegr = &_n_Rpzrb_ZRegr;

BYTE  Rizrbs_Nr;
StayFD _n_Rizrbs_Nr = {&Rizrbs_Nr,0,0,0,CLS_S,0,"Rizrbs_Nr","Номер родителя - старый"};
StayFD *_Rizrbs_Nr = &_n_Rizrbs_Nr;

BYTE  Rizrbs_Nrs;
StayFD _n_Rizrbs_Nrs = {&Rizrbs_Nrs,0,0,0,CLS_S,0,"Rizrbs_Nrs","Номер расчета  - старый"};
StayFD *_Rizrbs_Nrs = &_n_Rizrbs_Nrs;

BYTE  Rizrb_Nepol;
StayFD _n_Rizrb_Nepol = {&Rizrb_Nepol,0,0,0,CLS_S,0,"Rizrb_Nepol","Признак заработка"};
StayFD *_Rizrb_Nepol = &_n_Rizrb_Nepol;

BYTE  Rizrb_PrKf56;
StayFD _n_Rizrb_PrKf56 = {&Rizrb_PrKf56,0,0,0,CLS_S,0,"Rizrb_PrKf56","Признак заработка"};
StayFD *_Rizrb_PrKf56 = &_n_Rizrb_PrKf56;

BYTE  Rizrb_PrGos;
StayFD _n_Rizrb_PrGos = {&Rizrb_PrGos,0,0,0,CLS_S,0,"Rizrb_PrGos","Признак заработка"};
StayFD *_Rizrb_PrGos = &_n_Rizrb_PrGos;

BYTE  Rizrb_PrZU;
StayFD _n_Rizrb_PrZU = {&Rizrb_PrZU,0,0,0,CLS_S,0,"Rizrb_PrZU","Признак заработка"};
StayFD *_Rizrb_PrZU = &_n_Rizrb_PrZU;

BYTE  Rizrb_PrAuto;
StayFD _n_Rizrb_PrAuto = {&Rizrb_PrAuto,0,0,0,CLS_S,0,"Rizrb_PrAuto","Признак заработка"};
StayFD *_Rizrb_PrAuto = &_n_Rizrb_PrAuto;

long  Rstag;
StayFD _n_Rstag = {&Rstag,0,0,0,CLS_Ls,0,"Rstag",""};
StayFD *_Rstag = &_n_Rstag;

WORD  Rstg_Code;
StayFD _n_Rstg_Code = {&Rstg_Code,0,0,0,CLS_I,0,"Rstg_Code","Код сводного стажа"};
StayFD *_Rstg_Code = &_n_Rstg_Code;

BYTE  Rstg_Dd;
StayFD _n_Rstg_Dd = {&Rstg_Dd,0,0,0,CLS_S,0,"Rstg_Dd","Дни"};
StayFD *_Rstg_Dd = &_n_Rstg_Dd;

BYTE  Rstg_Gg;
StayFD _n_Rstg_Gg = {&Rstg_Gg,0,0,0,CLS_S,0,"Rstg_Gg","Года"};
StayFD *_Rstg_Gg = &_n_Rstg_Gg;

BYTE  Rstg_Mm;
StayFD _n_Rstg_Mm = {&Rstg_Mm,0,0,0,CLS_S,0,"Rstg_Mm","Месяцы"};
StayFD *_Rstg_Mm = &_n_Rstg_Mm;

BYTE  Rstg_Num;
StayFD _n_Rstg_Num = {&Rstg_Num,0,0,0,CLS_S,0,"Rstg_Num","Номер стажа"};
StayFD *_Rstg_Num = &_n_Rstg_Num;

StayDate Rstgp1_Dbeg;
StayFD _n_Rstgp1_Dbeg = {&Rstgp1_Dbeg,0,0,0,CLS_Date,0,"Rstgp1_Dbeg","Дата начала периода"};
StayFD *_Rstgp1_Dbeg = &_n_Rstgp1_Dbeg;

BYTE  Rstgp1_Dd;
StayFD _n_Rstgp1_Dd = {&Rstgp1_Dd,0,0,0,CLS_S,0,"Rstgp1_Dd","Дней"};
StayFD *_Rstgp1_Dd = &_n_Rstgp1_Dd;

StayDate Rstgp1_Dend;
StayFD _n_Rstgp1_Dend = {&Rstgp1_Dend,0,0,0,CLS_Date,0,"Rstgp1_Dend","Дата конца периода"};
StayFD *_Rstgp1_Dend = &_n_Rstgp1_Dend;

BYTE  Rstgp1_Dok;
StayFD _n_Rstgp1_Dok = {&Rstgp1_Dok,0,0,0,CLS_S,0,"Rstgp1_Dok","Документ"};
StayFD *_Rstgp1_Dok = &_n_Rstgp1_Dok;

BYTE  Rstgp1_Gg;
StayFD _n_Rstgp1_Gg = {&Rstgp1_Gg,0,0,0,CLS_S,0,"Rstgp1_Gg","Года"};
StayFD *_Rstgp1_Gg = &_n_Rstgp1_Gg;

STAYUI6 Rstgp1_KodPr;
StayFD _n_Rstgp1_KodPr = {&Rstgp1_KodPr,0,0,0,CLS_H,0,"Rstgp1_KodPr","Код предприятия"};
StayFD *_Rstgp1_KodPr = &_n_Rstgp1_KodPr;

WORD  Rstgp1_Kolh;
StayFD _n_Rstgp1_Kolh = {&Rstgp1_Kolh,0,0,0,CLS_I,0,"Rstgp1_Kolh","Число трудодней для клх"};
StayFD *_Rstgp1_Kolh = &_n_Rstgp1_Kolh;

BYTE  Rstgp1_Krat;
StayFD _n_Rstgp1_Krat = {&Rstgp1_Krat,0,0,0,CLS_S,0,"Rstgp1_Krat","Кратность"};
StayFD *_Rstgp1_Krat = &_n_Rstgp1_Krat;

WORD  Rstgp1_Lgvl;
StayFD _n_Rstgp1_Lgvl = {&Rstgp1_Lgvl,0,0,0,CLS_I,0,"Rstgp1_Lgvl","Льготность стажа"};
StayFD *_Rstgp1_Lgvl = &_n_Rstgp1_Lgvl;

BYTE  Rstgp1_Krat24;
StayFD _n_Rstgp1_Krat24 = {&Rstgp1_Krat24,0,0,0,CLS_S,0,"Rstgp1_Krat24","Кратность с 2004"};
StayFD *_Rstgp1_Krat24 = &_n_Rstgp1_Krat24;

BYTE  Rstgp1_GgKr;
StayFD _n_Rstgp1_GgKr = {&Rstgp1_GgKr,0,0,0,CLS_S,0,"Rstgp1_GgKr","Годи - кратность с 2004"};
StayFD *_Rstgp1_GgKr = &_n_Rstgp1_GgKr;

BYTE  Rstgp1_MmKr;
StayFD _n_Rstgp1_MmKr = {&Rstgp1_MmKr,0,0,0,CLS_S,0,"Rstgp1_MmKr","Месяцы - кратность с 2004"};
StayFD *_Rstgp1_MmKr = &_n_Rstgp1_MmKr;

BYTE  Rstgp1_DdKr;
StayFD _n_Rstgp1_DdKr = {&Rstgp1_DdKr,0,0,0,CLS_S,0,"Rstgp1_DdKr","Днў - кратность с 2004"};
StayFD *_Rstgp1_DdKr = &_n_Rstgp1_DdKr;

BYTE  Rstgp1_Mm;
StayFD _n_Rstgp1_Mm = {&Rstgp1_Mm,0,0,0,CLS_S,0,"Rstgp1_Mm","Месяцы"};
StayFD *_Rstgp1_Mm = &_n_Rstgp1_Mm;

BYTE  Rstgp1_Num;
StayFD _n_Rstgp1_Num = {&Rstgp1_Num,0,0,0,CLS_S,0,"Rstgp1_Num","Номер стажа"};
StayFD *_Rstgp1_Num = &_n_Rstgp1_Num;

BYTE  Rstgp1_Sever;
StayFD _n_Rstgp1_Sever = {&Rstgp1_Sever,0,0,0,CLS_S,0,"Rstgp1_Sever","Север"};
StayFD *_Rstgp1_Sever = &_n_Rstgp1_Sever;

BYTE  Rstgp1_Sezon;
StayFD _n_Rstgp1_Sezon = {&Rstgp1_Sezon,0,0,0,CLS_S,0,"Rstgp1_Sezon","Сезонность"};
StayFD *_Rstgp1_Sezon = &_n_Rstgp1_Sezon;

WORD  Rstgp1_Vtch;
StayFD _n_Rstgp1_Vtch = {&Rstgp1_Vtch,0,0,0,CLS_I,0,"Rstgp1_Vtch","В том числе - признак"};
StayFD *_Rstgp1_Vtch = &_n_Rstgp1_Vtch;

BYTE  Rstgp1_Strach;
StayFD _n_Rstgp1_Strach = {&Rstgp1_Strach,0,0,0,CLS_S,0,"Rstgp1_Strach","Признак страхового стажа"};
StayFD *_Rstgp1_Strach = &_n_Rstgp1_Strach;

BYTE  Rstgp1COK_Pri;
StayFD _n_Rstgp1COK_Pri = {&Rstgp1COK_Pri,0,0,0,CLS_S,0,"Rstgp1COK_Pri",""};
StayFD *_Rstgp1COK_Pri = &_n_Rstgp1COK_Pri;

WORD  Rstgp1COK_Dni;
StayFD _n_Rstgp1COK_Dni = {&Rstgp1COK_Dni,0,0,0,CLS_I,0,"Rstgp1COK_Dni",""};
StayFD *_Rstgp1COK_Dni = &_n_Rstgp1COK_Dni;

BYTE  Rstgp1COK_Gg;
StayFD _n_Rstgp1COK_Gg = {&Rstgp1COK_Gg,0,0,0,CLS_S,0,"Rstgp1COK_Gg",""};
StayFD *_Rstgp1COK_Gg = &_n_Rstgp1COK_Gg;

BYTE  Rstgp1COK_Mm;
StayFD _n_Rstgp1COK_Mm = {&Rstgp1COK_Mm,0,0,0,CLS_S,0,"Rstgp1COK_Mm",""};
StayFD *_Rstgp1COK_Mm = &_n_Rstgp1COK_Mm;

BYTE  Rstgp1COK_Dd;
StayFD _n_Rstgp1COK_Dd = {&Rstgp1COK_Dd,0,0,0,CLS_S,0,"Rstgp1COK_Dd",""};
StayFD *_Rstgp1COK_Dd = &_n_Rstgp1COK_Dd;

StayDate Rstgp2_Dbeg;
StayFD _n_Rstgp2_Dbeg = {&Rstgp2_Dbeg,0,0,0,CLS_Date,0,"Rstgp2_Dbeg","Дата начала периода"};
StayFD *_Rstgp2_Dbeg = &_n_Rstgp2_Dbeg;

BYTE  Rstgp2_Dd;
StayFD _n_Rstgp2_Dd = {&Rstgp2_Dd,0,0,0,CLS_S,0,"Rstgp2_Dd","Дней"};
StayFD *_Rstgp2_Dd = &_n_Rstgp2_Dd;

StayDate Rstgp2_Dend;
StayFD _n_Rstgp2_Dend = {&Rstgp2_Dend,0,0,0,CLS_Date,0,"Rstgp2_Dend","Дата конца периода"};
StayFD *_Rstgp2_Dend = &_n_Rstgp2_Dend;

BYTE  Rstgp2_Dok;
StayFD _n_Rstgp2_Dok = {&Rstgp2_Dok,0,0,0,CLS_S,0,"Rstgp2_Dok","Документ"};
StayFD *_Rstgp2_Dok = &_n_Rstgp2_Dok;

BYTE  Rstgp2_Gg;
StayFD _n_Rstgp2_Gg = {&Rstgp2_Gg,0,0,0,CLS_S,0,"Rstgp2_Gg","Года"};
StayFD *_Rstgp2_Gg = &_n_Rstgp2_Gg;

STAYUI6 Rstgp2_KodPr;
StayFD _n_Rstgp2_KodPr = {&Rstgp2_KodPr,0,0,0,CLS_H,0,"Rstgp2_KodPr","Код предприятия"};
StayFD *_Rstgp2_KodPr = &_n_Rstgp2_KodPr;

WORD  Rstgp2_Kolh;
StayFD _n_Rstgp2_Kolh = {&Rstgp2_Kolh,0,0,0,CLS_I,0,"Rstgp2_Kolh","Число трудодней для клх"};
StayFD *_Rstgp2_Kolh = &_n_Rstgp2_Kolh;

BYTE  Rstgp2_Krat;
StayFD _n_Rstgp2_Krat = {&Rstgp2_Krat,0,0,0,CLS_S,0,"Rstgp2_Krat","Кратность"};
StayFD *_Rstgp2_Krat = &_n_Rstgp2_Krat;

WORD  Rstgp2_Lgvl;
StayFD _n_Rstgp2_Lgvl = {&Rstgp2_Lgvl,0,0,0,CLS_I,0,"Rstgp2_Lgvl","Льготность стажа"};
StayFD *_Rstgp2_Lgvl = &_n_Rstgp2_Lgvl;

BYTE  Rstgp2_Krat24;
StayFD _n_Rstgp2_Krat24 = {&Rstgp2_Krat24,0,0,0,CLS_S,0,"Rstgp2_Krat24","Кратность с 2004"};
StayFD *_Rstgp2_Krat24 = &_n_Rstgp2_Krat24;

BYTE  Rstgp2_GgKr;
StayFD _n_Rstgp2_GgKr = {&Rstgp2_GgKr,0,0,0,CLS_S,0,"Rstgp2_GgKr","Годи - кратность с 2004"};
StayFD *_Rstgp2_GgKr = &_n_Rstgp2_GgKr;

BYTE  Rstgp2_MmKr;
StayFD _n_Rstgp2_MmKr = {&Rstgp2_MmKr,0,0,0,CLS_S,0,"Rstgp2_MmKr","Месяцы - кратность с 2004"};
StayFD *_Rstgp2_MmKr = &_n_Rstgp2_MmKr;

BYTE  Rstgp2_DdKr;
StayFD _n_Rstgp2_DdKr = {&Rstgp2_DdKr,0,0,0,CLS_S,0,"Rstgp2_DdKr","Днў - кратность с 2004"};
StayFD *_Rstgp2_DdKr = &_n_Rstgp2_DdKr;

BYTE  Rstgp2_Mm;
StayFD _n_Rstgp2_Mm = {&Rstgp2_Mm,0,0,0,CLS_S,0,"Rstgp2_Mm","Месяцы"};
StayFD *_Rstgp2_Mm = &_n_Rstgp2_Mm;

BYTE  Rstgp2_Num;
StayFD _n_Rstgp2_Num = {&Rstgp2_Num,0,0,0,CLS_S,0,"Rstgp2_Num","Номер стажа"};
StayFD *_Rstgp2_Num = &_n_Rstgp2_Num;

BYTE  Rstgp2_Sever;
StayFD _n_Rstgp2_Sever = {&Rstgp2_Sever,0,0,0,CLS_S,0,"Rstgp2_Sever","Север"};
StayFD *_Rstgp2_Sever = &_n_Rstgp2_Sever;

BYTE  Rstgp2_Sezon;
StayFD _n_Rstgp2_Sezon = {&Rstgp2_Sezon,0,0,0,CLS_S,0,"Rstgp2_Sezon","Сезонность"};
StayFD *_Rstgp2_Sezon = &_n_Rstgp2_Sezon;

WORD  Rstgp2_Vtch;
StayFD _n_Rstgp2_Vtch = {&Rstgp2_Vtch,0,0,0,CLS_I,0,"Rstgp2_Vtch","В том числе - признак"};
StayFD *_Rstgp2_Vtch = &_n_Rstgp2_Vtch;

BYTE  Rstgp2_Strach;
StayFD _n_Rstgp2_Strach = {&Rstgp2_Strach,0,0,0,CLS_S,0,"Rstgp2_Strach","Признак страхового стажа"};
StayFD *_Rstgp2_Strach = &_n_Rstgp2_Strach;

BYTE  Rstgp2COK_Pri;
StayFD _n_Rstgp2COK_Pri = {&Rstgp2COK_Pri,0,0,0,CLS_S,0,"Rstgp2COK_Pri",""};
StayFD *_Rstgp2COK_Pri = &_n_Rstgp2COK_Pri;

WORD  Rstgp2COK_Dni;
StayFD _n_Rstgp2COK_Dni = {&Rstgp2COK_Dni,0,0,0,CLS_I,0,"Rstgp2COK_Dni",""};
StayFD *_Rstgp2COK_Dni = &_n_Rstgp2COK_Dni;

BYTE  Rstgp2COK_Gg;
StayFD _n_Rstgp2COK_Gg = {&Rstgp2COK_Gg,0,0,0,CLS_S,0,"Rstgp2COK_Gg",""};
StayFD *_Rstgp2COK_Gg = &_n_Rstgp2COK_Gg;

BYTE  Rstgp2COK_Mm;
StayFD _n_Rstgp2COK_Mm = {&Rstgp2COK_Mm,0,0,0,CLS_S,0,"Rstgp2COK_Mm",""};
StayFD *_Rstgp2COK_Mm = &_n_Rstgp2COK_Mm;

BYTE  Rstgp2COK_Dd;
StayFD _n_Rstgp2COK_Dd = {&Rstgp2COK_Dd,0,0,0,CLS_S,0,"Rstgp2COK_Dd",""};
StayFD *_Rstgp2COK_Dd = &_n_Rstgp2COK_Dd;

STAYUI6 RstgISD_ICode;
StayFD _n_RstgISD_ICode = {&RstgISD_ICode,0,0,0,CLS_H,0,"RstgISD_ICode",""};
StayFD *_RstgISD_ICode = &_n_RstgISD_ICode;

WORD  RstgISD_Gg;
StayFD _n_RstgISD_Gg = {&RstgISD_Gg,0,0,0,CLS_I,0,"RstgISD_Gg",""};
StayFD *_RstgISD_Gg = &_n_RstgISD_Gg;

BYTE  RstgISD_Mm;
StayFD _n_RstgISD_Mm = {&RstgISD_Mm,0,0,0,CLS_S,0,"RstgISD_Mm",""};
StayFD *_RstgISD_Mm = &_n_RstgISD_Mm;

BYTE  RstgISD_StDd;
StayFD _n_RstgISD_StDd = {&RstgISD_StDd,0,0,0,CLS_S,0,"RstgISD_StDd",""};
StayFD *_RstgISD_StDd = &_n_RstgISD_StDd;

BYTE  RstgpCOK_Priz;
StayFD _n_RstgpCOK_Priz = {&RstgpCOK_Priz,0,0,0,CLS_S,0,"RstgpCOK_Priz",""};
StayFD *_RstgpCOK_Priz = &_n_RstgpCOK_Priz;

WORD  RstgpCOK_Dni;
StayFD _n_RstgpCOK_Dni = {&RstgpCOK_Dni,0,0,0,CLS_I,0,"RstgpCOK_Dni",""};
StayFD *_RstgpCOK_Dni = &_n_RstgpCOK_Dni;

BYTE  RstgpCOK_Gg;
StayFD _n_RstgpCOK_Gg = {&RstgpCOK_Gg,0,0,0,CLS_S,0,"RstgpCOK_Gg",""};
StayFD *_RstgpCOK_Gg = &_n_RstgpCOK_Gg;

BYTE  RstgpCOK_Mm;
StayFD _n_RstgpCOK_Mm = {&RstgpCOK_Mm,0,0,0,CLS_S,0,"RstgpCOK_Mm",""};
StayFD *_RstgpCOK_Mm = &_n_RstgpCOK_Mm;

BYTE  RstgpCOK_Dd;
StayFD _n_RstgpCOK_Dd = {&RstgpCOK_Dd,0,0,0,CLS_S,0,"RstgpCOK_Dd",""};
StayFD *_RstgpCOK_Dd = &_n_RstgpCOK_Dd;

StayDate Rstgp_Dbeg;
StayFD _n_Rstgp_Dbeg = {&Rstgp_Dbeg,0,0,0,CLS_Date,0,"Rstgp_Dbeg","Дата начала периода"};
StayFD *_Rstgp_Dbeg = &_n_Rstgp_Dbeg;

BYTE  Rstgp_Dd;
StayFD _n_Rstgp_Dd = {&Rstgp_Dd,0,0,0,CLS_S,0,"Rstgp_Dd","Дней"};
StayFD *_Rstgp_Dd = &_n_Rstgp_Dd;

StayDate Rstgp_Dend;
StayFD _n_Rstgp_Dend = {&Rstgp_Dend,0,0,0,CLS_Date,0,"Rstgp_Dend","Дата конца периода"};
StayFD *_Rstgp_Dend = &_n_Rstgp_Dend;

BYTE  Rstgp_Dok;
StayFD _n_Rstgp_Dok = {&Rstgp_Dok,0,0,0,CLS_S,0,"Rstgp_Dok","Документ"};
StayFD *_Rstgp_Dok = &_n_Rstgp_Dok;

BYTE  Rstgp_Gg;
StayFD _n_Rstgp_Gg = {&Rstgp_Gg,0,0,0,CLS_S,0,"Rstgp_Gg","Года"};
StayFD *_Rstgp_Gg = &_n_Rstgp_Gg;

STAYUI6 Rstgp_KodPr;
StayFD _n_Rstgp_KodPr = {&Rstgp_KodPr,0,0,0,CLS_H,0,"Rstgp_KodPr","Код предприятия"};
StayFD *_Rstgp_KodPr = &_n_Rstgp_KodPr;

WORD  Rstgp_Kolh;
StayFD _n_Rstgp_Kolh = {&Rstgp_Kolh,0,0,0,CLS_I,0,"Rstgp_Kolh","Число трудодней для клх"};
StayFD *_Rstgp_Kolh = &_n_Rstgp_Kolh;

BYTE  Rstgp_Krat;
StayFD _n_Rstgp_Krat = {&Rstgp_Krat,0,0,0,CLS_S,0,"Rstgp_Krat","Кратность"};
StayFD *_Rstgp_Krat = &_n_Rstgp_Krat;

WORD  Rstgp_Lgvl;
StayFD _n_Rstgp_Lgvl = {&Rstgp_Lgvl,0,0,0,CLS_I,0,"Rstgp_Lgvl","Льготность стажа"};
StayFD *_Rstgp_Lgvl = &_n_Rstgp_Lgvl;

BYTE  Rstgp_Krat24;
StayFD _n_Rstgp_Krat24 = {&Rstgp_Krat24,0,0,0,CLS_S,0,"Rstgp_Krat24","Кратность с 2004"};
StayFD *_Rstgp_Krat24 = &_n_Rstgp_Krat24;

BYTE  Rstgp_GgKr;
StayFD _n_Rstgp_GgKr = {&Rstgp_GgKr,0,0,0,CLS_S,0,"Rstgp_GgKr","Годи - кратность с 2004"};
StayFD *_Rstgp_GgKr = &_n_Rstgp_GgKr;

BYTE  Rstgp_MmKr;
StayFD _n_Rstgp_MmKr = {&Rstgp_MmKr,0,0,0,CLS_S,0,"Rstgp_MmKr","Месяцы - кратность с 2004"};
StayFD *_Rstgp_MmKr = &_n_Rstgp_MmKr;

BYTE  Rstgp_DdKr;
StayFD _n_Rstgp_DdKr = {&Rstgp_DdKr,0,0,0,CLS_S,0,"Rstgp_DdKr","Днў - кратность с 2004"};
StayFD *_Rstgp_DdKr = &_n_Rstgp_DdKr;

BYTE  Rstgp_Mm;
StayFD _n_Rstgp_Mm = {&Rstgp_Mm,0,0,0,CLS_S,0,"Rstgp_Mm","Месяцы"};
StayFD *_Rstgp_Mm = &_n_Rstgp_Mm;

BYTE  Rstgp_Num;
StayFD _n_Rstgp_Num = {&Rstgp_Num,0,0,0,CLS_S,0,"Rstgp_Num","Номер стажа"};
StayFD *_Rstgp_Num = &_n_Rstgp_Num;

BYTE  Rstgp_Sever;
StayFD _n_Rstgp_Sever = {&Rstgp_Sever,0,0,0,CLS_S,0,"Rstgp_Sever","Север"};
StayFD *_Rstgp_Sever = &_n_Rstgp_Sever;

BYTE  Rstgp_Sezon;
StayFD _n_Rstgp_Sezon = {&Rstgp_Sezon,0,0,0,CLS_S,0,"Rstgp_Sezon","Сезонность"};
StayFD *_Rstgp_Sezon = &_n_Rstgp_Sezon;

WORD  Rstgp_Vtch;
StayFD _n_Rstgp_Vtch = {&Rstgp_Vtch,0,0,0,CLS_I,0,"Rstgp_Vtch","В том числе - признак"};
StayFD *_Rstgp_Vtch = &_n_Rstgp_Vtch;

BYTE  Rstgp_Strach;
StayFD _n_Rstgp_Strach = {&Rstgp_Strach,0,0,0,CLS_S,0,"Rstgp_Strach","Признак страхового стажа"};
StayFD *_Rstgp_Strach = &_n_Rstgp_Strach;

StayDate RabRstgp_Dend;
StayFD _n_RabRstgp_Dend = {&RabRstgp_Dend,0,0,0,CLS_Date,0,"RabRstgp_Dend","Дата конца периода"};
StayFD *_RabRstgp_Dend = &_n_RabRstgp_Dend;

StayDate Rstgpr_Dbeg;
StayFD _n_Rstgpr_Dbeg = {&Rstgpr_Dbeg,0,0,0,CLS_Date,0,"Rstgpr_Dbeg","Дата начала периода"};
StayFD *_Rstgpr_Dbeg = &_n_Rstgpr_Dbeg;

StayDate Rstgpr_Dend;
StayFD _n_Rstgpr_Dend = {&Rstgpr_Dend,0,0,0,CLS_Date,0,"Rstgpr_Dend","Дата конца периода"};
StayFD *_Rstgpr_Dend = &_n_Rstgpr_Dend;

BYTE  Rstgph_Num;
StayFD _n_Rstgph_Num = {&Rstgph_Num,0,0,0,CLS_S,0,"Rstgph_Num","Номер родителя"};
StayFD *_Rstgph_Num = &_n_Rstgph_Num;

StayDate Rstgph_Dbeg;
StayFD _n_Rstgph_Dbeg = {&Rstgph_Dbeg,0,0,0,CLS_Date,0,"Rstgph_Dbeg","Дата начала периода"};
StayFD *_Rstgph_Dbeg = &_n_Rstgph_Dbeg;

StayDate Rstgph_Dend;
StayFD _n_Rstgph_Dend = {&Rstgph_Dend,0,0,0,CLS_Date,0,"Rstgph_Dend","Дата конца периода"};
StayFD *_Rstgph_Dend = &_n_Rstgph_Dend;

BYTE  Rstgph_StrSPU;
StayFD _n_Rstgph_StrSPU = {&Rstgph_StrSPU,0,0,0,CLS_S,0,"Rstgph_StrSPU","Код льготного периода"};
StayFD *_Rstgph_StrSPU = &_n_Rstgph_StrSPU;

BYTE  Rstgph_StrHEP;
StayFD _n_Rstgph_StrHEP = {&Rstgph_StrHEP,0,0,0,CLS_S,0,"Rstgph_StrHEP","К-во неполних дней"};
StayFD *_Rstgph_StrHEP = &_n_Rstgph_StrHEP;

DWORD Rstgph_S79HEP;
StayFD _n_Rstgph_S79HEP = {&Rstgph_S79HEP,0,0,0,CLS_L,0,"Rstgph_S79HEP","К-во дней по БЕЗРАБОТИЦЕ"};
StayFD *_Rstgph_S79HEP = &_n_Rstgph_S79HEP;

WORD  Rstgs_Code;
StayFD _n_Rstgs_Code = {&Rstgs_Code,0,0,0,CLS_I,0,"Rstgs_Code","Код сводного стажа - старого"};
StayFD *_Rstgs_Code = &_n_Rstgs_Code;

BYTE  Rstgs_Dd;
StayFD _n_Rstgs_Dd = {&Rstgs_Dd,0,0,0,CLS_S,0,"Rstgs_Dd","Дни                - старого"};
StayFD *_Rstgs_Dd = &_n_Rstgs_Dd;

BYTE  Rstgs_Gg;
StayFD _n_Rstgs_Gg = {&Rstgs_Gg,0,0,0,CLS_S,0,"Rstgs_Gg","Года               - старого"};
StayFD *_Rstgs_Gg = &_n_Rstgs_Gg;

BYTE  Rstgs_Mm;
StayFD _n_Rstgs_Mm = {&Rstgs_Mm,0,0,0,CLS_S,0,"Rstgs_Mm","Месяцы             - старого"};
StayFD *_Rstgs_Mm = &_n_Rstgs_Mm;

BYTE  Rstgs_Num;
StayFD _n_Rstgs_Num = {&Rstgs_Num,0,0,0,CLS_S,0,"Rstgs_Num","Номер стажа"};
StayFD *_Rstgs_Num = &_n_Rstgs_Num;

WORD  RzrbCl_Ch;
StayFD _n_RzrbCl_Ch = {&RzrbCl_Ch,0,0,0,CLS_I,0,"RzrbCl_Ch","Часы"};
StayFD *_RzrbCl_Ch = &_n_RzrbCl_Ch;

WORD  RzrbCl_ChH;
StayFD _n_RzrbCl_ChH = {&RzrbCl_ChH,0,0,0,CLS_I,0,"RzrbCl_ChH","Праздничные часы"};
StayFD *_RzrbCl_ChH = &_n_RzrbCl_ChH;

WORD  RzrbCl_ChN;
StayFD _n_RzrbCl_ChN = {&RzrbCl_ChN,0,0,0,CLS_I,0,"RzrbCl_ChN","Ночные часы"};
StayFD *_RzrbCl_ChN = &_n_RzrbCl_ChN;

WORD  RzrbCl_Kr;
StayFD _n_RzrbCl_Kr = {&RzrbCl_Kr,0,0,0,CLS_I,0,"RzrbCl_Kr","кратность"};
StayFD *_RzrbCl_Kr = &_n_RzrbCl_Kr;

WORD  RzrbCl_KrN;
StayFD _n_RzrbCl_KrN = {&RzrbCl_KrN,0,0,0,CLS_I,0,"RzrbCl_KrN","кратность ночных"};
StayFD *_RzrbCl_KrN = &_n_RzrbCl_KrN;

BYTE  RzrbCl_Min;
StayFD _n_RzrbCl_Min = {&RzrbCl_Min,0,0,0,CLS_S,0,"RzrbCl_Min","Минуты"};
StayFD *_RzrbCl_Min = &_n_RzrbCl_Min;

BYTE  RzrbCl_MinH;
StayFD _n_RzrbCl_MinH = {&RzrbCl_MinH,0,0,0,CLS_S,0,"RzrbCl_MinH","Праздничные минуты"};
StayFD *_RzrbCl_MinH = &_n_RzrbCl_MinH;

BYTE  RzrbCl_MinN;
StayFD _n_RzrbCl_MinN = {&RzrbCl_MinN,0,0,0,CLS_S,0,"RzrbCl_MinN","Ночные минуты"};
StayFD *_RzrbCl_MinN = &_n_RzrbCl_MinN;

WORD  RzrbCl_PcPrem;
StayFD _n_RzrbCl_PcPrem = {&RzrbCl_PcPrem,0,0,0,CLS_I,0,"RzrbCl_PcPrem","процент премии"};
StayFD *_RzrbCl_PcPrem = &_n_RzrbCl_PcPrem;

DWORD RzrbCl_Suma;
StayFD _n_RzrbCl_Suma = {&RzrbCl_Suma,0,0,0,CLS_L,5,"RzrbCl_Suma","Сумма по рекв-ту (кальк.)"};
StayFD *_RzrbCl_Suma = &_n_RzrbCl_Suma;

DWORD RzrbCl_Suma2;
StayFD _n_RzrbCl_Suma2 = {&RzrbCl_Suma2,0,0,0,CLS_L,7,"RzrbCl_Suma2","Сумма сохраненный заработок"};
StayFD *_RzrbCl_Suma2 = &_n_RzrbCl_Suma2;

DWORD RzrbCl_SumaTr;
StayFD _n_RzrbCl_SumaTr = {&RzrbCl_SumaTr,0,0,0,CLS_L,7,"RzrbCl_SumaTr","Сумма по тарифу"};
StayFD *_RzrbCl_SumaTr = &_n_RzrbCl_SumaTr;

BYTE  Rzrb_DKoef;
StayFD _n_Rzrb_DKoef = {&Rzrb_DKoef,0,0,0,CLS_S,0,"Rzrb_DKoef","Дополнительный коэффициент"};
StayFD *_Rzrb_DKoef = &_n_Rzrb_DKoef;

StayDate Rzrb_Dbeg;
StayFD _n_Rzrb_Dbeg = {&Rzrb_Dbeg,0,0,0,CLS_Date,0,"Rzrb_Dbeg","Дата начала периода"};
StayFD *_Rzrb_Dbeg = &_n_Rzrb_Dbeg;

StayDate Rzrb_Dend;
StayFD _n_Rzrb_Dend = {&Rzrb_Dend,0,0,0,CLS_Date,0,"Rzrb_Dend","Дата конца периода"};
StayFD *_Rzrb_Dend = &_n_Rzrb_Dend;

STAYI6 Rzrb_Dopl;
StayFD _n_Rzrb_Dopl = {&Rzrb_Dopl,0,0,0,CLS_Hs,5,"Rzrb_Dopl","Доплата"};
StayFD *_Rzrb_Dopl = &_n_Rzrb_Dopl;

STAYI6 Rzrb_SrNX;
StayFD _n_Rzrb_SrNX = {&Rzrb_SrNX,0,0,0,CLS_Hs,5,"Rzrb_SrNX","Середня по н/г"};
StayFD *_Rzrb_SrNX = &_n_Rzrb_SrNX;

STAYI6 Rzrb_SrNX24;
StayFD _n_Rzrb_SrNX24 = {&Rzrb_SrNX24,0,0,0,CLS_Hs,5,"Rzrb_SrNX24","Середня по н/г"};
StayFD *_Rzrb_SrNX24 = &_n_Rzrb_SrNX24;

STAYI6 Rzrb_SrNXNF;
StayFD _n_Rzrb_SrNXNF = {&Rzrb_SrNXNF,0,0,0,CLS_Hs,5,"Rzrb_SrNXNF","Середня по н/г"};
StayFD *_Rzrb_SrNXNF = &_n_Rzrb_SrNXNF;

STAYI6 Rzrb_SrNX22;
StayFD _n_Rzrb_SrNX22 = {&Rzrb_SrNX22,0,0,0,CLS_Hs,5,"Rzrb_SrNX22","Середня по н/г"};
StayFD *_Rzrb_SrNX22 = &_n_Rzrb_SrNX22;

BYTE  Rzrb_Fras;
StayFD _n_Rzrb_Fras = {&Rzrb_Fras,0,0,0,CLS_S,0,"Rzrb_Fras","факт число расчетов"};
StayFD *_Rzrb_Fras = &_n_Rzrb_Fras;

BYTE  Rzrb_Fras1;
StayFD _n_Rzrb_Fras1 = {&Rzrb_Fras1,0,0,0,CLS_S,0,"Rzrb_Fras1","факт расчетов 1"};
StayFD *_Rzrb_Fras1 = &_n_Rzrb_Fras1;

BYTE  Rzrb_StrSPU;
StayFD _n_Rzrb_StrSPU = {&Rzrb_StrSPU,0,0,0,CLS_S,0,"Rzrb_StrSPU","Спецучасток"};
StayFD *_Rzrb_StrSPU = &_n_Rzrb_StrSPU;

BYTE  Rzrb_NStrDel;
StayFD _n_Rzrb_NStrDel = {&Rzrb_NStrDel,0,0,0,CLS_S,0,"Rzrb_NStrDel","факт расчетов 1"};
StayFD *_Rzrb_NStrDel = &_n_Rzrb_NStrDel;

BYTE  Rzrb_NStrDelI;
StayFD _n_Rzrb_NStrDelI = {&Rzrb_NStrDelI,0,0,0,CLS_S,0,"Rzrb_NStrDelI","факт расчетов 1"};
StayFD *_Rzrb_NStrDelI = &_n_Rzrb_NStrDelI;

BYTE  Rzrb_NStsDel;
StayFD _n_Rzrb_NStsDel = {&Rzrb_NStsDel,0,0,0,CLS_S,0,"Rzrb_NStsDel","факт расчетов 1"};
StayFD *_Rzrb_NStsDel = &_n_Rzrb_NStsDel;

BYTE  Rzrb_NStsDelI;
StayFD _n_Rzrb_NStsDelI = {&Rzrb_NStsDelI,0,0,0,CLS_S,0,"Rzrb_NStsDelI","факт расчетов 1"};
StayFD *_Rzrb_NStsDelI = &_n_Rzrb_NStsDelI;

BYTE  Rzrb_NStrD07;
StayFD _n_Rzrb_NStrD07 = {&Rzrb_NStrD07,0,0,0,CLS_S,0,"Rzrb_NStrD07","факт расчетов 1"};
StayFD *_Rzrb_NStrD07 = &_n_Rzrb_NStrD07;

BYTE  Rzrb_NStrD07I;
StayFD _n_Rzrb_NStrD07I = {&Rzrb_NStrD07I,0,0,0,CLS_S,0,"Rzrb_NStrD07I","факт расчетов 1"};
StayFD *_Rzrb_NStrD07I = &_n_Rzrb_NStrD07I;

BYTE  Rzrb_NStsD07;
StayFD _n_Rzrb_NStsD07 = {&Rzrb_NStsD07,0,0,0,CLS_S,0,"Rzrb_NStsD07","факт расчетов 1"};
StayFD *_Rzrb_NStsD07 = &_n_Rzrb_NStsD07;

BYTE  Rzrb_NStsD07I;
StayFD _n_Rzrb_NStsD07I = {&Rzrb_NStsD07I,0,0,0,CLS_S,0,"Rzrb_NStsD07I","факт расчетов 1"};
StayFD *_Rzrb_NStsD07I = &_n_Rzrb_NStsD07I;

BYTE  Rzrb_StrHEP;
StayFD _n_Rzrb_StrHEP = {&Rzrb_StrHEP,0,0,0,CLS_S,0,"Rzrb_StrHEP","факт расчетов 1"};
StayFD *_Rzrb_StrHEP = &_n_Rzrb_StrHEP;

BYTE  Rzrb_NStsHEP;
StayFD _n_Rzrb_NStsHEP = {&Rzrb_NStsHEP,0,0,0,CLS_S,0,"Rzrb_NStsHEP","факт расчетов 1"};
StayFD *_Rzrb_NStsHEP = &_n_Rzrb_NStsHEP;

BYTE  Rzrb_NStsHEPI;
StayFD _n_Rzrb_NStsHEPI = {&Rzrb_NStsHEPI,0,0,0,CLS_S,0,"Rzrb_NStsHEPI","факт расчетов 1"};
StayFD *_Rzrb_NStsHEPI = &_n_Rzrb_NStsHEPI;

BYTE  Rzrb_NStsH07;
StayFD _n_Rzrb_NStsH07 = {&Rzrb_NStsH07,0,0,0,CLS_S,0,"Rzrb_NStsH07","факт расчетов 1"};
StayFD *_Rzrb_NStsH07 = &_n_Rzrb_NStsH07;

BYTE  Rzrb_NStsH07I;
StayFD _n_Rzrb_NStsH07I = {&Rzrb_NStsH07I,0,0,0,CLS_S,0,"Rzrb_NStsH07I","факт расчетов 1"};
StayFD *_Rzrb_NStsH07I = &_n_Rzrb_NStsH07I;

BYTE  Rzrb_S79HEP;
StayFD _n_Rzrb_S79HEP = {&Rzrb_S79HEP,0,0,0,CLS_S,0,"Rzrb_S79HEP","факт расчетов 1"};
StayFD *_Rzrb_S79HEP = &_n_Rzrb_S79HEP;

BYTE  Rzrb_NS79HEP;
StayFD _n_Rzrb_NS79HEP = {&Rzrb_NS79HEP,0,0,0,CLS_S,0,"Rzrb_NS79HEP","факт расчетов 1"};
StayFD *_Rzrb_NS79HEP = &_n_Rzrb_NS79HEP;

BYTE  Rzrb_NS79HEPI;
StayFD _n_Rzrb_NS79HEPI = {&Rzrb_NS79HEPI,0,0,0,CLS_S,0,"Rzrb_NS79HEPI","факт расчетов 1"};
StayFD *_Rzrb_NS79HEPI = &_n_Rzrb_NS79HEPI;

BYTE  Rzrb_NS79H07;
StayFD _n_Rzrb_NS79H07 = {&Rzrb_NS79H07,0,0,0,CLS_S,0,"Rzrb_NS79H07","факт расчетов 1"};
StayFD *_Rzrb_NS79H07 = &_n_Rzrb_NS79H07;

BYTE  Rzrb_NS79H07I;
StayFD _n_Rzrb_NS79H07I = {&Rzrb_NS79H07I,0,0,0,CLS_S,0,"Rzrb_NS79H07I","факт расчетов 1"};
StayFD *_Rzrb_NS79H07I = &_n_Rzrb_NS79H07I;

BYTE  Rzrb_Fras2;
StayFD _n_Rzrb_Fras2 = {&Rzrb_Fras2,0,0,0,CLS_S,0,"Rzrb_Fras2","Факт расчетов 2"};
StayFD *_Rzrb_Fras2 = &_n_Rzrb_Fras2;

STAYUI6 Rzrb_KodPr;
StayFD _n_Rzrb_KodPr = {&Rzrb_KodPr,0,0,0,CLS_H,0,"Rzrb_KodPr","Код предприятия"};
StayFD *_Rzrb_KodPr = &_n_Rzrb_KodPr;

DWORD Rzrb_Koef;
StayFD _n_Rzrb_Koef = {&Rzrb_Koef,0,0,0,CLS_L,2,"Rzrb_Koef","Коэффициент коррегирования"};
StayFD *_Rzrb_Koef = &_n_Rzrb_Koef;

BYTE  Rzrb_MaxNras;
StayFD _n_Rzrb_MaxNras = {&Rzrb_MaxNras,0,0,0,CLS_S,0,"Rzrb_MaxNras","Максимальный номер расчета"};
StayFD *_Rzrb_MaxNras = &_n_Rzrb_MaxNras;

BYTE  Rzrb_Mes;
StayFD _n_Rzrb_Mes = {&Rzrb_Mes,0,0,0,CLS_S,0,"Rzrb_Mes","Количество месяцев"};
StayFD *_Rzrb_Mes = &_n_Rzrb_Mes;

BYTE  Rzrb_Nepol;
StayFD _n_Rzrb_Nepol = {&Rzrb_Nepol,0,0,0,CLS_S,0,"Rzrb_Nepol","Признак заработка"};
StayFD *_Rzrb_Nepol = &_n_Rzrb_Nepol;

BYTE  Rzrb_Nr;
StayFD _n_Rzrb_Nr = {&Rzrb_Nr,0,0,0,CLS_S,0,"Rzrb_Nr","Номер родителя"};
StayFD *_Rzrb_Nr = &_n_Rzrb_Nr;

BYTE  Rzrb_Nras;
StayFD _n_Rzrb_Nras = {&Rzrb_Nras,0,0,0,CLS_S,0,"Rzrb_Nras","Номер расчета"};
StayFD *_Rzrb_Nras = &_n_Rzrb_Nras;

BYTE  Rzrb_Nrod;
StayFD _n_Rzrb_Nrod = {&Rzrb_Nrod,0,0,0,CLS_S,0,"Rzrb_Nrod","Номер родителя"};
StayFD *_Rzrb_Nrod = &_n_Rzrb_Nrod;

BYTE  Rzrb_Nrs;
StayFD _n_Rzrb_Nrs = {&Rzrb_Nrs,0,0,0,CLS_S,0,"Rzrb_Nrs","Номер расчета"};
StayFD *_Rzrb_Nrs = &_n_Rzrb_Nrs;

STAYI6 Rzrb_Ogr;
StayFD _n_Rzrb_Ogr = {&Rzrb_Ogr,0,0,0,CLS_Hs,5,"Rzrb_Ogr","Заработок огранич"};
StayFD *_Rzrb_Ogr = &_n_Rzrb_Ogr;

STAYI6 Rzrb_Ogr24;
StayFD _n_Rzrb_Ogr24 = {&Rzrb_Ogr24,0,0,0,CLS_Hs,5,"Rzrb_Ogr24","Заработок огранич"};
StayFD *_Rzrb_Ogr24 = &_n_Rzrb_Ogr24;

STAYI6 Rzrb_IKf24;
StayFD _n_Rzrb_IKf24 = {&Rzrb_IKf24,0,0,0,CLS_Hs,5,"Rzrb_IKf24","Заработок огранич"};
StayFD *_Rzrb_IKf24 = &_n_Rzrb_IKf24;

STAYI6 Rzrb_OgrNF;
StayFD _n_Rzrb_OgrNF = {&Rzrb_OgrNF,0,0,0,CLS_Hs,5,"Rzrb_OgrNF","Заработок огранич"};
StayFD *_Rzrb_OgrNF = &_n_Rzrb_OgrNF;

STAYI6 Rzrb_IKfNF;
StayFD _n_Rzrb_IKfNF = {&Rzrb_IKfNF,0,0,0,CLS_Hs,5,"Rzrb_IKfNF","Заработок огранич"};
StayFD *_Rzrb_IKfNF = &_n_Rzrb_IKfNF;

STAYI6 Rzrb_Ogr22;
StayFD _n_Rzrb_Ogr22 = {&Rzrb_Ogr22,0,0,0,CLS_Hs,5,"Rzrb_Ogr22","Заработок огранич"};
StayFD *_Rzrb_Ogr22 = &_n_Rzrb_Ogr22;

STAYI6 Rzrb_IKf22;
StayFD _n_Rzrb_IKf22 = {&Rzrb_IKf22,0,0,0,CLS_Hs,5,"Rzrb_IKf22","Заработок огранич"};
StayFD *_Rzrb_IKf22 = &_n_Rzrb_IKf22;

BYTE  Rzrb_PrStrach;
StayFD _n_Rzrb_PrStrach = {&Rzrb_PrStrach,0,0,0,CLS_S,0,"Rzrb_PrStrach","признак добров?льного страхування"};
StayFD *_Rzrb_PrStrach = &_n_Rzrb_PrStrach;

StayDate Rzrb_DtStrach;
StayFD _n_Rzrb_DtStrach = {&Rzrb_DtStrach,0,0,0,CLS_Date,0,"Rzrb_DtStrach","дата добров?льного страхування"};
StayFD *_Rzrb_DtStrach = &_n_Rzrb_DtStrach;

BYTE  Rzrb_PrProp;
StayFD _n_Rzrb_PrProp = {&Rzrb_PrProp,0,0,0,CLS_S,0,"Rzrb_PrProp","признак пропусков в зар-ке"};
StayFD *_Rzrb_PrProp = &_n_Rzrb_PrProp;

BYTE  Rzrb_PrPer;
StayFD _n_Rzrb_PrPer = {&Rzrb_PrPer,0,0,0,CLS_S,0,"Rzrb_PrPer","Признак последующего перерасчета"};
StayFD *_Rzrb_PrPer = &_n_Rzrb_PrPer;

STAYI6 Rzrb_Prem;
StayFD _n_Rzrb_Prem = {&Rzrb_Prem,0,0,0,CLS_Hs,5,"Rzrb_Prem","Премии п.N207-7"};
StayFD *_Rzrb_Prem = &_n_Rzrb_Prem;

BYTE  Rzrb_Pr919;
StayFD _n_Rzrb_Pr919 = {&Rzrb_Pr919,0,0,0,CLS_S,0,"Rzrb_Pr919","Признак постанови 919 1-мўн 2-тар ст"};
StayFD *_Rzrb_Pr919 = &_n_Rzrb_Pr919;

STAYI6 Rzrb_StrSuma;
StayFD _n_Rzrb_StrSuma = {&Rzrb_StrSuma,0,0,0,CLS_Hs,5,"Rzrb_StrSuma","Сумма по строке"};
StayFD *_Rzrb_StrSuma = &_n_Rzrb_StrSuma;

STAYI6 Rzrb_Suma;
StayFD _n_Rzrb_Suma = {&Rzrb_Suma,0,0,0,CLS_Hs,5,"Rzrb_Suma","Сумма за период"};
StayFD *_Rzrb_Suma = &_n_Rzrb_Suma;

BYTE  Rzrb_PrKf56;
StayFD _n_Rzrb_PrKf56 = {&Rzrb_PrKf56,0,0,0,CLS_S,0,"Rzrb_PrKf56","Признак заработка"};
StayFD *_Rzrb_PrKf56 = &_n_Rzrb_PrKf56;

char Rzrb_TNepol[9];
StayFD _n_Rzrb_TNepol = {&Rzrb_TNepol,0,0,0,CLS_V,8,"Rzrb_TNepol","Текст признака заработка"};
StayFD *_Rzrb_TNepol = &_n_Rzrb_TNepol;

char Rzrb_TNras[6];
StayFD _n_Rzrb_TNras = {&Rzrb_TNras,0,0,0,CLS_V,5,"Rzrb_TNras","Поясняющий текст"};
StayFD *_Rzrb_TNras = &_n_Rzrb_TNras;

char Rzrb_Tkoef[9];
StayFD _n_Rzrb_Tkoef = {&Rzrb_Tkoef,0,0,0,CLS_V,8,"Rzrb_Tkoef","Текст  коэфф-та"};
StayFD *_Rzrb_Tkoef = &_n_Rzrb_Tkoef;

char Rzrb_TOpt[5];
StayFD _n_Rzrb_TOpt = {&Rzrb_TOpt,0,0,0,CLS_V,4,"Rzrb_TOpt","Текст оптим?зац?ї"};
StayFD *_Rzrb_TOpt = &_n_Rzrb_TOpt;

char Rzrb_TOpti[5];
StayFD _n_Rzrb_TOpti = {&Rzrb_TOpti,0,0,0,CLS_V,4,"Rzrb_TOpti","Текст оптим?зац?ї-?нв-ть"};
StayFD *_Rzrb_TOpti = &_n_Rzrb_TOpti;

STAYI6 Rzrb_SumYear;
StayFD _n_Rzrb_SumYear = {&Rzrb_SumYear,0,0,0,CLS_Hs,5,"Rzrb_SumYear","Заработок огранич"};
StayFD *_Rzrb_SumYear = &_n_Rzrb_SumYear;

StayDate Rzrbr_Dbeg;
StayFD _n_Rzrbr_Dbeg = {&Rzrbr_Dbeg,0,0,0,CLS_Date,0,"Rzrbr_Dbeg","Дата начала периода"};
StayFD *_Rzrbr_Dbeg = &_n_Rzrbr_Dbeg;

StayDate Rzrbr_Dend;
StayFD _n_Rzrbr_Dend = {&Rzrbr_Dend,0,0,0,CLS_Date,0,"Rzrbr_Dend","Дата конца периода"};
StayFD *_Rzrbr_Dend = &_n_Rzrbr_Dend;

BYTE  Rzrbr_Nr;
StayFD _n_Rzrbr_Nr = {&Rzrbr_Nr,0,0,0,CLS_S,0,"Rzrbr_Nr","Номер родителя"};
StayFD *_Rzrbr_Nr = &_n_Rzrbr_Nr;

BYTE  Rzrbr_Nrs;
StayFD _n_Rzrbr_Nrs = {&Rzrbr_Nrs,0,0,0,CLS_S,0,"Rzrbr_Nrs","Номер расчета"};
StayFD *_Rzrbr_Nrs = &_n_Rzrbr_Nrs;

STAYI6 Rzrbr_Suma;
StayFD _n_Rzrbr_Suma = {&Rzrbr_Suma,0,0,0,CLS_Hs,5,"Rzrbr_Suma","Сумма за период"};
StayFD *_Rzrbr_Suma = &_n_Rzrbr_Suma;

BYTE  Rzrbr_Priz;
StayFD _n_Rzrbr_Priz = {&Rzrbr_Priz,0,0,0,CLS_S,0,"Rzrbr_Priz","Признак"};
StayFD *_Rzrbr_Priz = &_n_Rzrbr_Priz;

BYTE  Sezon1;
StayFD _n_Sezon1 = {&Sezon1,0,0,0,CLS_S,0,"Sezon1",""};
StayFD *_Sezon1 = &_n_Sezon1;

BYTE  Sezon2;
StayFD _n_Sezon2 = {&Sezon2,0,0,0,CLS_S,0,"Sezon2",""};
StayFD *_Sezon2 = &_n_Sezon2;

DWORD StrSuma;
StayFD _n_StrSuma = {&StrSuma,0,0,0,CLS_L,2,"StrSuma","Результат вычислений"};
StayFD *_StrSuma = &_n_StrSuma;

char TMax[3];
StayFD _n_TMax = {&TMax,0,0,0,CLS_V,2,"TMax","Звездочка"};
StayFD *_TMax = &_n_TMax;

char T_Dok[5];
StayFD _n_T_Dok = {&T_Dok,0,0,0,CLS_V,4,"T_Dok","Текст графы - Документ"};
StayFD *_T_Dok = &_n_T_Dok;

char T_Krat[12];
StayFD _n_T_Krat = {&T_Krat,0,0,0,CLS_V,11,"T_Krat","Текст графы - Кратность"};
StayFD *_T_Krat = &_n_T_Krat;

char T_Lgvl[12];
StayFD _n_T_Lgvl = {&T_Lgvl,0,0,0,CLS_V,11,"T_Lgvl","Текст графы - ЛьготаВыслуга"};
StayFD *_T_Lgvl = &_n_T_Lgvl;

char T_Sever[6];
StayFD _n_T_Sever = {&T_Sever,0,0,0,CLS_V,5,"T_Sever","Текст графы - Север"};
StayFD *_T_Sever = &_n_T_Sever;

char T_Sezon[6];
StayFD _n_T_Sezon = {&T_Sezon,0,0,0,CLS_V,5,"T_Sezon","Текст графы - Сезонность"};
StayFD *_T_Sezon = &_n_T_Sezon;

char T_Vtch[13];
StayFD _n_T_Vtch = {&T_Vtch,0,0,0,CLS_V,12,"T_Vtch","Текст графы - В том числе"};
StayFD *_T_Vtch = &_n_T_Vtch;

char T_Vtch1[23];
StayFD _n_T_Vtch1 = {&T_Vtch1,0,0,0,CLS_V,22,"T_Vtch1","Текст выбранного льготного ста"};
StayFD *_T_Vtch1 = &_n_T_Vtch1;

char T_SPOV[2];
StayFD _n_T_SPOV = {&T_SPOV,0,0,0,CLS_V,1,"T_SPOV",""};
StayFD *_T_SPOV = &_n_T_SPOV;

WORD  kfpov;
StayFD _n_kfpov = {&kfpov,0,0,0,CLS_I,2,"kfpov",""};
StayFD *_kfpov = &_n_kfpov;

BYTE  var_day;
StayFD _n_var_day = {&var_day,0,0,0,CLS_S,0,"var_day",""};
StayFD *_var_day = &_n_var_day;

BYTE  var_mon;
StayFD _n_var_mon = {&var_mon,0,0,0,CLS_S,0,"var_mon",""};
StayFD *_var_mon = &_n_var_mon;

WORD  var_moni;
StayFD _n_var_moni = {&var_moni,0,0,0,CLS_I,0,"var_moni",""};
StayFD *_var_moni = &_n_var_moni;

BYTE  var_year;
StayFD _n_var_year = {&var_year,0,0,0,CLS_S,0,"var_year",""};
StayFD *_var_year = &_n_var_year;

STAYUI6 Rizrb_RabPMIN;
StayFD _n_Rizrb_RabPMIN = {&Rizrb_RabPMIN,0,0,0,CLS_H,2,"Rizrb_RabPMIN",""};
StayFD *_Rizrb_RabPMIN = &_n_Rizrb_RabPMIN;

StayDate DateNazI;
StayFD _n_DateNazI = {&DateNazI,0,0,0,CLS_Date,0,"DateNazI","„ в  ЇҐаў. ­ §­ зҐ­Ёп I Є®а"};
StayFD *_DateNazI = &_n_DateNazI;

StayDate DateObrNaz;
StayFD _n_DateObrNaz = {&DateObrNaz,0,0,0,CLS_Date,0,"DateObrNaz","„ в  ®Ўа йҐ­Ёп"};
StayFD *_DateObrNaz = &_n_DateObrNaz;

StayDate DateObrNazI;
StayFD _n_DateObrNazI = {&DateObrNazI,0,0,0,CLS_Date,0,"DateObrNazI","„ в  ®Ўа йҐ­Ёп I Є®а"};
StayFD *_DateObrNazI = &_n_DateObrNazI;

StayDate DateObrPer;
StayFD _n_DateObrPer = {&DateObrPer,0,0,0,CLS_Date,0,"DateObrPer","„ в  ®Ўа йҐ­Ёп §  ЇҐаҐа бзҐв®¬"};
StayFD *_DateObrPer = &_n_DateObrPer;

StayDate DateObrPerI;
StayFD _n_DateObrPerI = {&DateObrPerI,0,0,0,CLS_Date,0,"DateObrPerI","„ в  ®Ўа йҐ­Ёп §  ЇҐа I Є®а"};
StayFD *_DateObrPerI = &_n_DateObrPerI;

StayDate DatePerI;
StayFD _n_DatePerI = {&DatePerI,0,0,0,CLS_Date,0,"DatePerI","„ в  ЇҐаҐа. I Є®а"};
StayFD *_DatePerI = &_n_DatePerI;

WORD  Kfn_Code;
StayFD _n_Kfn_Code = {&Kfn_Code,0,0,0,CLS_I,0,"Kfn_Code",""};
StayFD *_Kfn_Code = &_n_Kfn_Code;

WORD  Kfn;
StayFD _n_Kfn = {&Kfn,0,0,0,CLS_I,0,"Kfn",""};
StayFD *_Kfn = &_n_Kfn;

WORD  Shifr;
StayFD _n_Shifr = {&Shifr,0,0,0,CLS_I,0,"Shifr",""};
StayFD *_Shifr = &_n_Shifr;

WORD  oldkfn;
StayFD _n_oldkfn = {&oldkfn,0,0,0,CLS_I,0,"oldkfn",""};
StayFD *_oldkfn = &_n_oldkfn;

WORD  kfn;
StayFD _n_kfn = {&kfn,0,0,0,CLS_I,0,"kfn",""};
StayFD *_kfn = &_n_kfn;

StayDate OldOp;
StayFD _n_OldOp = {&OldOp,0,0,0,CLS_Date,0,"OldOp",""};
StayFD *_OldOp = &_n_OldOp;

StayDate DateOldOp;
StayFD _n_DateOldOp = {&DateOldOp,0,0,0,CLS_Date,0,"DateOldOp",""};
StayFD *_DateOldOp = &_n_DateOldOp;

StayDate DateOsob411;
StayFD _n_DateOsob411 = {&DateOsob411,0,0,0,CLS_Date,0,"DateOsob411",""};
StayFD *_DateOsob411 = &_n_DateOsob411;

StayDate DateOsob413;
StayFD _n_DateOsob413 = {&DateOsob413,0,0,0,CLS_Date,0,"DateOsob413",""};
StayFD *_DateOsob413 = &_n_DateOsob413;

StayDate RDatePVV;
StayFD _n_RDatePVV = {&RDatePVV,0,0,0,CLS_Date,0,"RDatePVV",""};
StayFD *_RDatePVV = &_n_RDatePVV;

StayDate RDate1000;
StayFD _n_RDate1000 = {&RDate1000,0,0,0,CLS_Date,0,"RDate1000",""};
StayFD *_RDate1000 = &_n_RDate1000;

StayDate RDtPerLjot;
StayFD _n_RDtPerLjot = {&RDtPerLjot,0,0,0,CLS_Date,0,"RDtPerLjot",""};
StayFD *_RDtPerLjot = &_n_RDtPerLjot;

BYTE  PrMalZar;
StayFD _n_PrMalZar = {&PrMalZar,0,0,0,CLS_S,0,"PrMalZar",""};
StayFD *_PrMalZar = &_n_PrMalZar;

BYTE  prputbsh;
StayFD _n_prputbsh = {&prputbsh,0,0,0,CLS_S,0,"prputbsh",""};
StayFD *_prputbsh = &_n_prputbsh;

BYTE  OpCurrent;
StayFD _n_OpCurrent = {&OpCurrent,0,0,0,CLS_S,0,"OpCurrent",""};
StayFD *_OpCurrent = &_n_OpCurrent;

BYTE  PrKont88;
StayFD _n_PrKont88 = {&PrKont88,0,0,0,CLS_S,0,"PrKont88",""};
StayFD *_PrKont88 = &_n_PrKont88;

BYTE  PrKont89;
StayFD _n_PrKont89 = {&PrKont89,0,0,0,CLS_S,0,"PrKont89",""};
StayFD *_PrKont89 = &_n_PrKont89;

BYTE  PrOsob201;
StayFD _n_PrOsob201 = {&PrOsob201,0,0,0,CLS_S,0,"PrOsob201",""};
StayFD *_PrOsob201 = &_n_PrOsob201;

BYTE  pros97;
StayFD _n_pros97 = {&pros97,0,0,0,CLS_S,0,"pros97",""};
StayFD *_pros97 = &_n_pros97;

BYTE  prizos97;
StayFD _n_prizos97 = {&prizos97,0,0,0,CLS_S,0,"prizos97",""};
StayFD *_prizos97 = &_n_prizos97;

BYTE  Fras_Nrod;
StayFD _n_Fras_Nrod = {&Fras_Nrod,0,0,0,CLS_S,0,"Fras_Nrod","Номер кормильца"};
StayFD *_Fras_Nrod = &_n_Fras_Nrod;

BYTE  Fras_Fras;
StayFD _n_Fras_Fras = {&Fras_Fras,0,0,0,CLS_S,0,"Fras_Fras","Количество введенных заработков"};
StayFD *_Fras_Fras = &_n_Fras_Fras;

STAYI6 KlMinZar_RabS;
StayFD _n_KlMinZar_RabS = {&KlMinZar_RabS,0,0,0,CLS_Hs,5,"KlMinZar_RabS","Рабочая"};
StayFD *_KlMinZar_RabS = &_n_KlMinZar_RabS;

/* End FCfield */
/* Begin FCextern */
extern StayDataset _n_ItogZrb;
extern StayDataset _n_L_Protstg;
extern StayDataset _n_Pstg;
extern StayDataset _n_PstgPodz;
extern StayDataset _n_Stg13;
extern StayDataset _n_RPrc;
extern StayDataset _n_RPrcSv;
extern StayDataset _n_R_Klprof1;
extern StayDataset _n_R_Klprof2;
extern StayDataset _n_Rizrb;
extern StayDataset _n_RizrbKf;
extern StayDataset _n_Rizrbs;
extern StayDataset _n_Rstg;
extern StayDataset _n_Rstgp;
extern StayDataset _n_Rstgpr;
extern StayDataset _n_Rstgs;
extern StayDataset _n_RstgISD;
extern StayDataset _n_Rstgph;
extern StayDataset _n_Rzrbr;
extern StayDataset _n_Rzrb;
extern StayDataset _n_RzrbCh;
extern StayDataset _n_RzrbNras;
extern StayDataset _n_RabBase;
extern StayDataset _n_A_Fras;
/* End FCextern */
/* Begin FCdataset */
static StayFD *tcm_ItogZrb[] =
{
 (StayFD *)&_n_Rzrb_MaxNras,
 (StayFD *)&_n_Rzrb_Fras,
 (StayFD *)&_n_Rzrb_Fras1,
 (StayFD *)&_n_Rzrb_Fras2,
 (StayFD *)&_n_Rizrb_NMesKF1,
 (StayFD *)&_n_Rizrb_NMesKF2,
 (StayFD *)&_n_Rizrb_IKS22,
 (StayFD *)&_n_Rizrb_IKS24,
 (StayFD *)&_n_Rizrb_IKS245,
 (StayFD *)&_n_Rizrb_IKS247,
 (StayFD *)&_n_Rizrb_IKS245A,
 (StayFD *)&_n_Rizrb_IKS247A,
 (StayFD *)&_n_Rizrb_IKoef24,
 (StayFD *)&_n_Rizrb_IKoef22,
 (StayFD *)&_n_Rizrb_IKf245,
 (StayFD *)&_n_Rizrb_IKf247,
 (StayFD *)&_n_Rizrb_NMes24A,
 (StayFD *)&_n_Rizrb_NMes24I,
 (StayFD *)&_n_Rizrb_NMes25A,
 (StayFD *)&_n_Rizrb_NMes25I,
 (StayFD *)&_n_Rizrb_NMes27A,
 (StayFD *)&_n_Rizrb_NMes27I,
 (StayFD *)&_n_Rizrb_NS79DP,
 (StayFD *)&_n_Rizrb_NS79DPI,
 (StayFD *)&_n_Rizrb_NS79D7,
 (StayFD *)&_n_Rizrb_NS79D7I,
 (StayFD *)&_n_Rizrb_NStrOP,
 (StayFD *)&_n_Rizrb_NStrOPI,
 (StayFD *)&_n_Rizrb_NStrO7,
 (StayFD *)&_n_Rizrb_NStrO7I,
 (StayFD *)&_n_Rizrb_NSumOP,
 (StayFD *)&_n_Rizrb_NSumOPI,
 (StayFD *)&_n_Rizrb_NSumO7,
 (StayFD *)&_n_Rizrb_NSumO7I,
 (StayFD *)&_n_Rizrb_NStrSP,
 (StayFD *)&_n_Rizrb_NStrSPI,
 (StayFD *)&_n_Rizrb_NStrS7,
 (StayFD *)&_n_Rizrb_NStrS7I,
 (StayFD *)&_n_Rizrb_NStrHP,
 (StayFD *)&_n_Rizrb_NStrHPI,
 (StayFD *)&_n_Rizrb_NStrH7,
 (StayFD *)&_n_Rizrb_NStrH7I,
 (StayFD *)&_n_Rizrb_VarOpt,
 (StayFD *)&_n_Rizrb_VarOptI,
 (StayFD *)&_n_Rizrb_IKS24A,
 (StayFD *)&_n_Rizrb_IKoef24A,
 (StayFD *)&_n_Rizrb_IKSI4,
 (StayFD *)&_n_Rizrb_IKoefI4,
 (StayFD *)&_n_Rizrb_IKoef44,
 (StayFD *)&_n_Rizrb_IKSNF,
 (StayFD *)&_n_Rizrb_IKoefNF,
 (StayFD *)&_n_Rizrb_IKoef1,
 (StayFD *)&_n_Rizrb_IKoef2,
 (StayFD *)&_n_Rizrb_IKNX1,
 (StayFD *)&_n_Rizrb_IKNX2,
 (StayFD *)&_n_Rizrb_IKNF1,
 (StayFD *)&_n_Rizrb_IKNF2,
 (StayFD *)&_n_Rizrb_IKNI1,
 (StayFD *)&_n_Rizrb_IKNI2,
 (StayFD *)&_n_Rizrb_IKNS1,
 (StayFD *)&_n_Rizrb_IKNFNA1,
 (StayFD *)&_n_Rizrb_IKNFNA2,
 (StayFD *)&_n_Rizrb_IKGOS1,
 (StayFD *)&_n_Rizrb_IKGOS2,
 (StayFD *)&_n_Rizrb_DtKoef1,
 (StayFD *)&_n_Rizrb_DtKoef2,
 (StayFD *)&_n_Rizrb_GdSrNXP,
 (StayFD *)&_n_Rizrb_SrNX22,
 (StayFD *)&_n_Rizrb_SrNX24,
 (StayFD *)&_n_Rizrb_SrDR24,
 (StayFD *)&_n_Rizrb_SrNX26,
 (StayFD *)&_n_Rizrb_SrNX27,
 (StayFD *)&_n_Rizrb_SrNX28,
 (StayFD *)&_n_Rizrb_SrNX29,
 (StayFD *)&_n_Rizrb_SrNXA9,
 (StayFD *)&_n_Rizrb_SrX01A,
 (StayFD *)&_n_Rizrb_SrX04A,
 (StayFD *)&_n_Rizrb_SrX07A,
 (StayFD *)&_n_Rizrb_SrX10A,
 (StayFD *)&_n_Rizrb_SrX12A,
 (StayFD *)&_n_Rizrb_SrX017,
 (StayFD *)&_n_Rizrb_SrX047,
 (StayFD *)&_n_Rizrb_SrX077,
 (StayFD *)&_n_Rizrb_SrX107,
 (StayFD *)&_n_Rizrb_SrX127,
 (StayFD *)&_n_Rizrb_SrNX20,
 (StayFD *)&_n_Rizrb_SrNX21,
 (StayFD *)&_n_Rizrb_SrNX2B,
 (StayFD *)&_n_Rizrb_SrNX2C,
 (StayFD *)&_n_Rizrb_SrNX2D,
 (StayFD *)&_n_Rizrb_SrNX2E,
 (StayFD *)&_n_Rizrb_SrNX2F,
 (StayFD *)&_n_Rizrb_SrNX44,
 (StayFD *)&_n_Rizrb_SrNX8A,
 (StayFD *)&_n_Rizrb_SrNX7N,
 (StayFD *)&_n_Rizrb_SrNX8N,
 (StayFD *)&_n_Rizrb_SrNX9N,
 (StayFD *)&_n_Rizrb_SrNXAN,
 (StayFD *)&_n_Rizrb_SrNXBN,
 (StayFD *)&_n_Rizrb_SrNXCN,
 (StayFD *)&_n_Rizrb_SrNXDN,
 (StayFD *)&_n_Rizrb_SrNXEN,
 (StayFD *)&_n_Rizrb_SrNXFN,
 (StayFD *)&_n_Rizrb_SrNXGN,
 (StayFD *)&_n_Rizrb_SrNXVC,
 (StayFD *)&_n_Rizrb_SrNXNF,
 (StayFD *)&_n_Rizrb_SrNX1,
 (StayFD *)&_n_Rizrb_SrNX2,
 (StayFD *)&_n_Rizrb_ZarNX,
 (StayFD *)&_n_Rizrb_ZarNX22,
 (StayFD *)&_n_Rizrb_ZarNX2B,
 (StayFD *)&_n_Rizrb_ZarNXIB,
 (StayFD *)&_n_Rizrb_ZarNP2B,
 (StayFD *)&_n_Rizrb_ZarNPIB,
 (StayFD *)&_n_Rizrb_ZarNX2C,
 (StayFD *)&_n_Rizrb_ZarNXIC,
 (StayFD *)&_n_Rizrb_ZarNP2C,
 (StayFD *)&_n_Rizrb_ZarNPIC,
 (StayFD *)&_n_Rizrb_ZarNX2D,
 (StayFD *)&_n_Rizrb_ZarNXID,
 (StayFD *)&_n_Rizrb_ZarNP2D,
 (StayFD *)&_n_Rizrb_ZarNPID,
 (StayFD *)&_n_Rizrb_ZarNX2E,
 (StayFD *)&_n_Rizrb_ZarNXIE,
 (StayFD *)&_n_Rizrb_ZarNP2E,
 (StayFD *)&_n_Rizrb_ZarNPIE,
 (StayFD *)&_n_Rizrb_ZarNX2F,
 (StayFD *)&_n_Rizrb_ZarNXIF,
 (StayFD *)&_n_Rizrb_ZarNP2F,
 (StayFD *)&_n_Rizrb_ZarNPIF,
 (StayFD *)&_n_Rizrb_ZarNX24,
 (StayFD *)&_n_Rizrb_ZarDR24,
 (StayFD *)&_n_Rizrb_ZarNXI4,
 (StayFD *)&_n_Rizrb_ZarNX26,
 (StayFD *)&_n_Rizrb_ZarNX27,
 (StayFD *)&_n_Rizrb_ZarNX28,
 (StayFD *)&_n_Rizrb_ZarNXI0,
 (StayFD *)&_n_Rizrb_ZarNXI1,
 (StayFD *)&_n_Rizrb_ZarNXI8,
 (StayFD *)&_n_Rizrb_ZarNX29,
 (StayFD *)&_n_Rizrb_ZarNXA9,
 (StayFD *)&_n_Rizrb_ZarNXI9,
 (StayFD *)&_n_Rizrb_ZarNXIA,
 (StayFD *)&_n_Rizrb_ZarX01A,
 (StayFD *)&_n_Rizrb_ZarX04A,
 (StayFD *)&_n_Rizrb_ZarX07A,
 (StayFD *)&_n_Rizrb_ZarX10A,
 (StayFD *)&_n_Rizrb_ZarX12A,
 (StayFD *)&_n_Rizrb_ZarX017,
 (StayFD *)&_n_Rizrb_ZarX047,
 (StayFD *)&_n_Rizrb_ZarX077,
 (StayFD *)&_n_Rizrb_ZarX107,
 (StayFD *)&_n_Rizrb_ZarX127,
 (StayFD *)&_n_Rizrb_ZarI01A,
 (StayFD *)&_n_Rizrb_ZarI04A,
 (StayFD *)&_n_Rizrb_ZarI07A,
 (StayFD *)&_n_Rizrb_ZarI10A,
 (StayFD *)&_n_Rizrb_ZarI12A,
 (StayFD *)&_n_Rizrb_ZarI017,
 (StayFD *)&_n_Rizrb_ZarI047,
 (StayFD *)&_n_Rizrb_ZarI077,
 (StayFD *)&_n_Rizrb_ZarI107,
 (StayFD *)&_n_Rizrb_ZarI127,
 (StayFD *)&_n_Rizrb_ZarX129,
 (StayFD *)&_n_Rizrb_ZarNX20,
 (StayFD *)&_n_Rizrb_ZarNX21,
 (StayFD *)&_n_Rizrb_ZarNX44,
 (StayFD *)&_n_Rizrb_ZarNX8A,
 (StayFD *)&_n_Rizrb_ZarNX7N,
 (StayFD *)&_n_Rizrb_ZarNX8N,
 (StayFD *)&_n_Rizrb_ZarNX9N,
 (StayFD *)&_n_Rizrb_ZarNXAN,
 (StayFD *)&_n_Rizrb_ZarNXBN,
 (StayFD *)&_n_Rizrb_ZarNXCN,
 (StayFD *)&_n_Rizrb_ZarNXDN,
 (StayFD *)&_n_Rizrb_ZarNXEN,
 (StayFD *)&_n_Rizrb_ZarNXFN,
 (StayFD *)&_n_Rizrb_ZarNXGN,
 (StayFD *)&_n_Rizrb_ZarNP24,
 (StayFD *)&_n_Rizrb_ZarNPI4,
 (StayFD *)&_n_Rizrb_ZarNP26,
 (StayFD *)&_n_Rizrb_ZarNP28,
 (StayFD *)&_n_Rizrb_ZarNPI8,
 (StayFD *)&_n_Rizrb_ZarNP29,
 (StayFD *)&_n_Rizrb_ZarNPA9,
 (StayFD *)&_n_Rizrb_ZarNPI0,
 (StayFD *)&_n_Rizrb_ZarNPI1,
 (StayFD *)&_n_Rizrb_ZarNPI9,
 (StayFD *)&_n_Rizrb_ZarNPIA,
 (StayFD *)&_n_Rizrb_ZarP01A,
 (StayFD *)&_n_Rizrb_ZarP04A,
 (StayFD *)&_n_Rizrb_ZarP07A,
 (StayFD *)&_n_Rizrb_ZarP10A,
 (StayFD *)&_n_Rizrb_ZarP12A,
 (StayFD *)&_n_Rizrb_ZarP017,
 (StayFD *)&_n_Rizrb_ZarP047,
 (StayFD *)&_n_Rizrb_ZarP077,
 (StayFD *)&_n_Rizrb_ZarP107,
 (StayFD *)&_n_Rizrb_ZarP127,
 (StayFD *)&_n_Rizrb_ZarP129,
 (StayFD *)&_n_Rizrb_ZarNP20,
 (StayFD *)&_n_Rizrb_ZarNP21,
 (StayFD *)&_n_Rizrb_ZarNXVC,
 (StayFD *)&_n_Rizrb_ZarNXNF,
 (StayFD *)&_n_Rizrb_ZarNX1,
 (StayFD *)&_n_Rizrb_ZarNX2,
 (StayFD *)&_n_Rizrb_RZNP27,
 (StayFD *)&_n_Rizrb_RZNX27,
 (StayFD *)&_n_Rizrb_RZNPI7,
 (StayFD *)&_n_Rizrb_RZNXI7,
 (StayFD *)&_n_Rizrb_ZarGOS1,
 (StayFD *)&_n_Rizrb_ZarGOS2,
 (StayFD *)&_n_Rizrb_ZarPK1,
 (StayFD *)&_n_Rizrb_ZarPK2,
 (StayFD *)&_n_Rizrb_ZarIK1,
 (StayFD *)&_n_Rizrb_ZarIK2,
 (StayFD *)&_n_Rizrb_Zar1321,
 (StayFD *)&_n_Rizrb_Zar1322,
 (StayFD *)&_n_Rizrb_ZNX1321,
 (StayFD *)&_n_Rizrb_ZNX1322,
 (StayFD *)&_n_Rizrb_DEZ1321,
 (StayFD *)&_n_Rizrb_DEZ1322,
 (StayFD *)&_n_Rizrb_DMZr121,
 (StayFD *)&_n_Rizrb_DMZr131,
 (StayFD *)&_n_Rizrb_DMZr141,
 (StayFD *)&_n_Rizrb_DMZr151,
 (StayFD *)&_n_Rizrb_DMZr161,
 (StayFD *)&_n_Rizrb_DMZr122,
 (StayFD *)&_n_Rizrb_DMZr132,
 (StayFD *)&_n_Rizrb_DMZr142,
 (StayFD *)&_n_Rizrb_DMZr152,
 (StayFD *)&_n_Rizrb_MaxMesN1,
 (StayFD *)&_n_Rizrb_MaxMesN2,
 (StayFD *)&_n_Rizrb_MaxMN192,
 (StayFD *)&_n_Rizrb_MaxMN292,
 (StayFD *)&_n_Rizrb_MaxNU1,
 (StayFD *)&_n_Rizrb_MaxNU2,
 (StayFD *)&_n_Rizrb_MaxMU1,
 (StayFD *)&_n_Rizrb_MaxMU2,
 (StayFD *)&_n_Rizrb_MaxZU1,
 (StayFD *)&_n_Rizrb_MaxZU2,
 (StayFD *)&_n_Rizrb_MaxZMB1,
 (StayFD *)&_n_Rizrb_MaxZMB2,
 (StayFD *)&_n_Rizrb_MaxZMB8,
 (StayFD *)&_n_Rizrb_DEndZMB1,
 (StayFD *)&_n_Rizrb_DEndZMB2,
 (StayFD *)&_n_Rizrb_MaxNMB1,
 (StayFD *)&_n_Rizrb_MaxNMB2,
 (StayFD *)&_n_Rizrb_DEndZU1,
 (StayFD *)&_n_Rizrb_DEndZU2,
 (StayFD *)&_n_Rizrb_MaxMesP,
 (StayFD *)&_n_Rizrb_MaxMesF1,
 (StayFD *)&_n_Rizrb_MaxMesF2,
 (StayFD *)&_n_Rizrb_MaxMesFF,
 (StayFD *)&_n_Rizrb_MaxM21FF,
 (StayFD *)&_n_Rizrb_MaxMF192,
 (StayFD *)&_n_Rizrb_MaxMF292,
 (StayFD *)&_n_Rizrb_MaxMF121,
 (StayFD *)&_n_Rizrb_MaxMF221,
 (StayFD *)&_n_Rizrb_MaxMesK1,
 (StayFD *)&_n_Rizrb_MaxMesK2,
 (StayFD *)&_n_Rizrb_MaxMesZF,
 (StayFD *)&_n_Rizrb_MaxMZF92,
 (StayFD *)&_n_Rizrb_MaxMZF21,
 (StayFD *)&_n_Rizrb_MaxMZFP,
 (StayFD *)&_n_Rizrb_MaxMesZK,
 (StayFD *)&_n_Rizrb_MaxNrs1,
 (StayFD *)&_n_Rizrb_MaxNrs2,
 (StayFD *)&_n_Rizrb_MNrsPZ1,
 (StayFD *)&_n_Rizrb_MNrsPZ2,
 (StayFD *)&_n_Rizrb_ZarPZ1,
 (StayFD *)&_n_Rizrb_ZarPZ2,
 (StayFD *)&_n_Rizrb_MaxNNX1,
 (StayFD *)&_n_Rizrb_MaxNNX2,
 (StayFD *)&_n_Rizrb_MaxNNF1,
 (StayFD *)&_n_Rizrb_MaxNNF2,
 (StayFD *)&_n_Rizrb_MaxNNI1,
 (StayFD *)&_n_Rizrb_MaxNNI2,
 (StayFD *)&_n_Rizrb_MaxNNS1,
 (StayFD *)&_n_Rizrb_MaxNNA1,
 (StayFD *)&_n_Rizrb_MaxNNA2,
 (StayFD *)&_n_Rizrb_MaxNNG1,
 (StayFD *)&_n_Rizrb_MaxNNG2,
 (StayFD *)&_n_Rizrb_MaxNrsF1,
 (StayFD *)&_n_Rizrb_MaxNrsF2,
 (StayFD *)&_n_Rizrb_MaxNF192,
 (StayFD *)&_n_Rizrb_MaxNF292,
 (StayFD *)&_n_Rizrb_MaxNrsP,
 (StayFD *)&_n_Rizrb_MaxNrsK1,
 (StayFD *)&_n_Rizrb_MaxNrsK2,
 (StayFD *)&_n_Rizrb_MaxNrsS,
 (StayFD *)&_n_Rizrb_DEndZK1,
 (StayFD *)&_n_Rizrb_DEndZK2,
 (StayFD *)&_n_Rizrb_DEndZKK,
 (StayFD *)&_n_Rizrb_DRabZFF,
 (StayFD *)&_n_Rizrb_DEndZF1,
 (StayFD *)&_n_Rizrb_DEndZF2,
 (StayFD *)&_n_Rizrb_DBegZ1,
 (StayFD *)&_n_Rizrb_DBegZ2,
 (StayFD *)&_n_Rizrb_DEZF192,
 (StayFD *)&_n_Rizrb_DEZF292,
 (StayFD *)&_n_Rizrb_DEndZFF,
 (StayFD *)&_n_Rizrb_DEndZ92,
 (StayFD *)&_n_Rizrb_DEndZ92P,
 (StayFD *)&_n_RStgp_DEndP,
 (StayFD *)&_n_RStgp_DEndP1,
 (StayFD *)&_n_RStgp_DEndP2,
 NULL
};
StayDataset _n_ItogZrb = {NULL,TAG_DATASET,0,0,DS_STRUCT,0,1,0,NULL,tcm_ItogZrb,NULL,
"WORK:ITOGZRB.dt",NULL,"Массив итоговых данных","ItogZrb",0};
StayDataset *ItogZrb = &_n_ItogZrb;

StayDataset _n_L_Protstg = {NULL,TAG_DATASET,0,0,DS_BLOCK,0,1,0,NULL,NULL,NULL,
NULL,NULL,"Буфер для протокола стажей","L_Protstg",0};
StayDataset *L_Protstg = &_n_L_Protstg;

static StayFD *tcm_Pstg[] =
{
 (StayFD *)&_n_Pstg_NZach,
 (StayFD *)&_n_Pstg_Kods,
 (StayFD *)&_n_Pstg_Year,
 (StayFD *)&_n_Pstg_Mon,
 (StayFD *)&_n_Pstg_Day,
 (StayFD *)&_n_Pstg_Koef,
 (StayFD *)&_n_Pstg_PYear,
 (StayFD *)&_n_Pstg_PMon,
 (StayFD *)&_n_Pstg_PDay,
 NULL
};
static BYTE ix_Pstg[] = {1,1,66,0,1};
StayDataset _n_Pstg = {NULL,TAG_DATASET,0,0,DS_QBASE,0,1,0,NULL,tcm_Pstg,NULL,
"WORK:PSTG.DT",ix_Pstg,"Массив для печати взаимных зачетов стажей","Pstg",10};
StayDataset *Pstg = &_n_Pstg;

static StayFD *tcm_PstgPodz[] =
{
 (StayFD *)&_n_PstgPodz_Nr,
 (StayFD *)&_n_PstgPodz_Kods,
 (StayFD *)&_n_PstgPodz_Year,
 (StayFD *)&_n_PstgPodz_Mon,
 (StayFD *)&_n_PstgPodz_Day,
 NULL
};
static BYTE ix_PstgPodz[] = {1,1,2,0,1};
StayDataset _n_PstgPodz = {NULL,TAG_DATASET,0,0,DS_QBASE,0,1,0,NULL,tcm_PstgPodz,NULL,
"WORK:PSTGPODZ.DT",ix_PstgPodz,"Массив для печати взаимных зачетов стажей","PstgPodz",10};
StayDataset *PstgPodz = &_n_PstgPodz;

static StayFD *tcm_Stg13[] =
{
 (StayFD *)&_n_Stg13_Code,
 (StayFD *)&_n_Stg13_Priz,
 (StayFD *)&_n_Stg13_GodV,
 (StayFD *)&_n_Stg13_MecV,
 (StayFD *)&_n_Stg13_DniV,
 (StayFD *)&_n_Stg13_God,
 (StayFD *)&_n_Stg13_Mec,
 (StayFD *)&_n_Stg13_Dni,
 (StayFD *)&_n_Stg13_Two,
 (StayFD *)&_n_Stg13_Suma,
 NULL
};
static BYTE ix_Stg13[] = {1,1,65,0};
StayDataset _n_Stg13 = {NULL,TAG_DATASET,0,0,DS_QBASE,0,1,0,NULL,tcm_Stg13,NULL,
"WORK:STG13.DT",ix_Stg13,"Массив стажей по ст.13п.б-з","Stg13",10};
StayDataset *Stg13 = &_n_Stg13;

static StayFD *tcm_RPrc[] =
{
 (StayFD *)&_n_RPrc_Code,
 (StayFD *)&_n_RPrc_CodeD,
 (StayFD *)&_n_RPrc_ProcB,
 (StayFD *)&_n_RPrc_Suma,
 (StayFD *)&_n_RPrc_One,
 (StayFD *)&_n_RPrc_Two,
 (StayFD *)&_n_RPrc_God,
 (StayFD *)&_n_RPrc_Mec,
 (StayFD *)&_n_RPrc_Dni,
 NULL
};
static BYTE ix_RPrc[] = {1,1,67,0,1,2};
StayDataset _n_RPrc = {NULL,TAG_DATASET,0,0,DS_QBASE,0,1,0,NULL,tcm_RPrc,NULL,
"WORK:RPRC.DT",ix_RPrc,"Процент начисления","RPrc",10};
StayDataset *RPrc = &_n_RPrc;

static StayFD *tcm_RPrcSv[] =
{
 (StayFD *)&_n_RPrcSv_Code,
 (StayFD *)&_n_RPrcSv_CodeD,
 (StayFD *)&_n_RPrcSv_Suma,
 (StayFD *)&_n_RPrcSv_One,
 (StayFD *)&_n_RPrcSv_Two,
 (StayFD *)&_n_RPrcSv_God,
 (StayFD *)&_n_RPrcSv_Mec,
 (StayFD *)&_n_RPrcSv_Dni,
 NULL
};
static BYTE ix_RPrcSv[] = {1,1,66,0,1};
StayDataset _n_RPrcSv = {NULL,TAG_DATASET,0,0,DS_QBASE,0,1,0,NULL,tcm_RPrcSv,NULL,
"WORK:RPRCSV.DT",ix_RPrcSv,"Процент начисления","RPrcSv",10};
StayDataset *RPrcSv = &_n_RPrcSv;

static StayFD *tcm_R_Klprof1[] =
{
 (StayFD *)&_n_Klprof1_Kod,
 (StayFD *)&_n_Klprof1_Krnam,
 (StayFD *)&_n_Klprof1_Naim,
 (StayFD *)&_n_Klprof1_Probr,
 NULL
};
static BYTE ix_R_Klprof1[] = {1,1,65,0};
StayDataset _n_R_Klprof1 = {NULL,TAG_DATASET,0,0,DS_QBASE,0,1,0,NULL,tcm_R_Klprof1,NULL,
"WORK:KLPROF1.DT",ix_R_Klprof1,"Справочник профессий - Probr=2","R_Klprof1",10};
StayDataset *R_Klprof1 = &_n_R_Klprof1;

static StayFD *tcm_R_Klprof2[] =
{
 (StayFD *)&_n_Klprof2_Kod,
 (StayFD *)&_n_Klprof2_Krnam,
 (StayFD *)&_n_Klprof2_Naim,
 (StayFD *)&_n_Klprof2_Probr,
 NULL
};
static BYTE ix_R_Klprof2[] = {1,1,65,0};
StayDataset _n_R_Klprof2 = {NULL,TAG_DATASET,0,0,DS_QBASE,0,1,0,NULL,tcm_R_Klprof2,NULL,
"WORK:KLPROF2.DT",ix_R_Klprof2,"Справочник профессий - Probr=3","R_Klprof2",10};
StayDataset *R_Klprof2 = &_n_R_Klprof2;

static StayFD *tcm_Rizrb[] =
{
 (StayFD *)&_n_Rizrb_Nrs,
 (StayFD *)&_n_Rizrb_Nr,
 (StayFD *)&_n_Rizrb_Nepol,
 (StayFD *)&_n_Rizrb_Suma,
 (StayFD *)&_n_Rizrb_SumaSp,
 (StayFD *)&_n_Rizrb_Dopl,
 (StayFD *)&_n_Rizrb_Prem,
 (StayFD *)&_n_Rizrb_Mes,
 (StayFD *)&_n_Rizrb_MesP24,
 (StayFD *)&_n_Rizrb_Day,
 (StayFD *)&_n_Rizrb_DayH,
 (StayFD *)&_n_Rizrb_DtKoef,
 (StayFD *)&_n_Rizrb_DEZOpt,
 (StayFD *)&_n_Rizrb_NDelMes,
 (StayFD *)&_n_Rizrb_DtSRNX,
 (StayFD *)&_n_Rizrb_NMesKF,
 (StayFD *)&_n_Rizrb_NMes24A,
 (StayFD *)&_n_Rizrb_NMes24I,
 (StayFD *)&_n_Rizrb_IKoef,
 (StayFD *)&_n_Rizrb_IKfPOkl,
 (StayFD *)&_n_Rizrb_IKSuma,
 (StayFD *)&_n_Rizrb_IKS22,
 (StayFD *)&_n_Rizrb_IKS24,
 (StayFD *)&_n_Rizrb_IKoef22,
 (StayFD *)&_n_Rizrb_IKoef24,
 (StayFD *)&_n_Rizrb_IKS24A,
 (StayFD *)&_n_Rizrb_IKoef24A,
 (StayFD *)&_n_Rizrb_IKSI4,
 (StayFD *)&_n_Rizrb_IKoefI4,
 (StayFD *)&_n_Rizrb_IKP24,
 (StayFD *)&_n_Rizrb_IKfP24,
 (StayFD *)&_n_Rizrb_IKPI4,
 (StayFD *)&_n_Rizrb_IKfPI4,
 (StayFD *)&_n_Rizrb_IKSNF,
 (StayFD *)&_n_Rizrb_IKoefNF,
 (StayFD *)&_n_Rizrb_PrKf56,
 (StayFD *)&_n_Rizrb_PrAuto,
 (StayFD *)&_n_Rizrb_PrGos,
 (StayFD *)&_n_Rizrb_PrZU,
 (StayFD *)&_n_Rizrb_Error,
 (StayFD *)&_n_Rizrb_SrNX,
 (StayFD *)&_n_Rizrb_SrNX20,
 (StayFD *)&_n_Rizrb_SrNX21,
 (StayFD *)&_n_Rizrb_SrNX2B,
 (StayFD *)&_n_Rizrb_SrNX2C,
 (StayFD *)&_n_Rizrb_SrNX2D,
 (StayFD *)&_n_Rizrb_SrNX2E,
 (StayFD *)&_n_Rizrb_SrNX2F,
 (StayFD *)&_n_Rizrb_SrNX22,
 (StayFD *)&_n_Rizrb_SrNX24,
 (StayFD *)&_n_Rizrb_SrNX26,
 (StayFD *)&_n_Rizrb_SrNX27,
 (StayFD *)&_n_Rizrb_SrNX28,
 (StayFD *)&_n_Rizrb_SrNX8A,
 (StayFD *)&_n_Rizrb_SrNX7N,
 (StayFD *)&_n_Rizrb_SrNX8N,
 (StayFD *)&_n_Rizrb_SrNX9N,
 (StayFD *)&_n_Rizrb_SrNXAN,
 (StayFD *)&_n_Rizrb_SrNXBN,
 (StayFD *)&_n_Rizrb_SrNXCN,
 (StayFD *)&_n_Rizrb_SrNXDN,
 (StayFD *)&_n_Rizrb_SrNXEN,
 (StayFD *)&_n_Rizrb_SrNXFN,
 (StayFD *)&_n_Rizrb_SrNXGN,
 (StayFD *)&_n_Rizrb_SrNX29,
 (StayFD *)&_n_Rizrb_SrNXA9,
 (StayFD *)&_n_Rizrb_SrNXVC,
 (StayFD *)&_n_Rizrb_SrNXNF,
 (StayFD *)&_n_Rizrb_ZarNX,
 (StayFD *)&_n_Rizrb_ZarNX22,
 (StayFD *)&_n_Rizrb_ZarNX24,
 (StayFD *)&_n_Rizrb_ZarNXI4,
 (StayFD *)&_n_Rizrb_ZarNP24,
 (StayFD *)&_n_Rizrb_ZarNP28,
 (StayFD *)&_n_Rizrb_ZarNP29,
 (StayFD *)&_n_Rizrb_ZarNPA9,
 (StayFD *)&_n_Rizrb_ZarNPI0,
 (StayFD *)&_n_Rizrb_ZarNPI1,
 (StayFD *)&_n_Rizrb_ZarNPI8,
 (StayFD *)&_n_Rizrb_ZarNPI9,
 (StayFD *)&_n_Rizrb_ZarNPIA,
 (StayFD *)&_n_Rizrb_ZarNP20,
 (StayFD *)&_n_Rizrb_ZarNP21,
 (StayFD *)&_n_Rizrb_ZarNX26,
 (StayFD *)&_n_Rizrb_ZarNX27,
 (StayFD *)&_n_Rizrb_ZarNX28,
 (StayFD *)&_n_Rizrb_ZarNX29,
 (StayFD *)&_n_Rizrb_ZarNXA9,
 (StayFD *)&_n_Rizrb_ZarNXI0,
 (StayFD *)&_n_Rizrb_ZarNXI1,
 (StayFD *)&_n_Rizrb_ZarNXI8,
 (StayFD *)&_n_Rizrb_ZarNXI9,
 (StayFD *)&_n_Rizrb_ZarNXIA,
 (StayFD *)&_n_Rizrb_ZarNX2B,
 (StayFD *)&_n_Rizrb_ZarNXIB,
 (StayFD *)&_n_Rizrb_ZarNP2B,
 (StayFD *)&_n_Rizrb_ZarNPIB,
 (StayFD *)&_n_Rizrb_ZarNX2C,
 (StayFD *)&_n_Rizrb_ZarNXIC,
 (StayFD *)&_n_Rizrb_ZarNP2C,
 (StayFD *)&_n_Rizrb_ZarNPIC,
 (StayFD *)&_n_Rizrb_ZarNX2D,
 (StayFD *)&_n_Rizrb_ZarNXID,
 (StayFD *)&_n_Rizrb_ZarNP2D,
 (StayFD *)&_n_Rizrb_ZarNPID,
 (StayFD *)&_n_Rizrb_ZarNX2E,
 (StayFD *)&_n_Rizrb_ZarNXIE,
 (StayFD *)&_n_Rizrb_ZarNP2E,
 (StayFD *)&_n_Rizrb_ZarNPIE,
 (StayFD *)&_n_Rizrb_ZarNX2F,
 (StayFD *)&_n_Rizrb_ZarNXIF,
 (StayFD *)&_n_Rizrb_ZarNP2F,
 (StayFD *)&_n_Rizrb_ZarNPIF,
 (StayFD *)&_n_Rizrb_ZarNX7N,
 (StayFD *)&_n_Rizrb_ZarNX8N,
 (StayFD *)&_n_Rizrb_ZarNX9N,
 (StayFD *)&_n_Rizrb_ZarNXAN,
 (StayFD *)&_n_Rizrb_ZarNXBN,
 (StayFD *)&_n_Rizrb_ZarNXCN,
 (StayFD *)&_n_Rizrb_ZarNXDN,
 (StayFD *)&_n_Rizrb_ZarNXEN,
 (StayFD *)&_n_Rizrb_ZarNXFN,
 (StayFD *)&_n_Rizrb_ZarNXGN,
 (StayFD *)&_n_Rizrb_ZarX01A,
 (StayFD *)&_n_Rizrb_ZarX04A,
 (StayFD *)&_n_Rizrb_ZarX07A,
 (StayFD *)&_n_Rizrb_ZarX10A,
 (StayFD *)&_n_Rizrb_ZarX12A,
 (StayFD *)&_n_Rizrb_ZarX017,
 (StayFD *)&_n_Rizrb_ZarX047,
 (StayFD *)&_n_Rizrb_ZarX077,
 (StayFD *)&_n_Rizrb_ZarX107,
 (StayFD *)&_n_Rizrb_ZarX127,
 (StayFD *)&_n_Rizrb_ZarX129,
 (StayFD *)&_n_Rizrb_ZarNX20,
 (StayFD *)&_n_Rizrb_ZarNX21,
 (StayFD *)&_n_Rizrb_ZarNX7N,
 (StayFD *)&_n_Rizrb_ZarNX8N,
 (StayFD *)&_n_Rizrb_ZarNX8A,
 (StayFD *)&_n_Rizrb_ZarNXVC,
 (StayFD *)&_n_Rizrb_ZrNXNFP,
 (StayFD *)&_n_Rizrb_RZNP27,
 (StayFD *)&_n_Rizrb_RZNX27,
 (StayFD *)&_n_Rizrb_RZNPI7,
 (StayFD *)&_n_Rizrb_RZNXI7,
 (StayFD *)&_n_Rizrb_StrSuma,
 (StayFD *)&_n_Rizrb_StrOgr22,
 (StayFD *)&_n_Rizrb_StrOgr24,
 (StayFD *)&_n_Rizrb_StrOgrNF,
 (StayFD *)&_n_Rizrb_ZRegr,
 (StayFD *)&_n_Rizrb_SrMesFt,
 (StayFD *)&_n_Rizrb_SrMesKr,
 (StayFD *)&_n_Rizrb_DBegZ,
 (StayFD *)&_n_Rizrb_DEndZ,
 (StayFD *)&_n_Rizrb_DBegDl1,
 (StayFD *)&_n_Rizrb_DEndDl1,
 (StayFD *)&_n_Rizrb_NMesDl1,
 (StayFD *)&_n_Rizrb_DBegDl2,
 (StayFD *)&_n_Rizrb_DEndDl2,
 (StayFD *)&_n_Rizrb_NMesDl2,
 (StayFD *)&_n_Rizrb_DBegDl3,
 (StayFD *)&_n_Rizrb_DEndDl3,
 (StayFD *)&_n_Rizrb_NMesDl3,
 (StayFD *)&_n_Rizrb_DBegDl4,
 (StayFD *)&_n_Rizrb_DEndDl4,
 (StayFD *)&_n_Rizrb_NMesDl4,
 (StayFD *)&_n_Rizrb_DBegDl5,
 (StayFD *)&_n_Rizrb_DEndDl5,
 (StayFD *)&_n_Rizrb_NMesDl5,
 (StayFD *)&_n_Rizrb_DBegDl6,
 (StayFD *)&_n_Rizrb_DEndDl6,
 (StayFD *)&_n_Rizrb_NMesDl6,
 (StayFD *)&_n_Rizrb_NMesDS2,
 (StayFD *)&_n_Rizrb_NMesDS4,
 (StayFD *)&_n_Rizrb_NMesDS5,
 (StayFD *)&_n_Rizrb_NMesDS6,
 (StayFD *)&_n_Rizrb_DateVZ,
 (StayFD *)&_n_Rizrb_DateVZS,
 (StayFD *)&_n_Rizrb_Date919,
 (StayFD *)&_n_Rizrb_YrSRNX,
 (StayFD *)&_n_Rizrb_Y2SRNX,
 (StayFD *)&_n_Rizrb_DSRNX,
 (StayFD *)&_n_Rizrb_D2SRNX,
 (StayFD *)&_n_Rizrb_DateCHD,
 (StayFD *)&_n_Rizrb_PMax,
 (StayFD *)&_n_Rizrb_PrZar,
 (StayFD *)&_n_Rizrb_Pr56Z,
 (StayFD *)&_n_Rizrb_Pr79Z,
 (StayFD *)&_n_Rizrb_Suma92,
 (StayFD *)&_n_Rizrb_Suma92P,
 (StayFD *)&_n_Rizrb_Suma21,
 (StayFD *)&_n_Rizrb_Suma21P,
 (StayFD *)&_n_Rizrb_NStrSP,
 (StayFD *)&_n_Rizrb_NStrHP,
 (StayFD *)&_n_Rizrb_NStrSPI,
 (StayFD *)&_n_Rizrb_NStrHPI,
 (StayFD *)&_n_Rizrb_NStrS7,
 (StayFD *)&_n_Rizrb_NStrH7,
 (StayFD *)&_n_Rizrb_NStrS7I,
 (StayFD *)&_n_Rizrb_NStrH7I,
 (StayFD *)&_n_Rizrb_NStrOP,
 (StayFD *)&_n_Rizrb_NSumOP,
 (StayFD *)&_n_Rizrb_NS79DP,
 (StayFD *)&_n_Rizrb_NS79DPI,
 (StayFD *)&_n_Rizrb_NS79D7,
 (StayFD *)&_n_Rizrb_NS79D7I,
 (StayFD *)&_n_Rizrb_NStrOP,
 (StayFD *)&_n_Rizrb_NStrOPI,
 (StayFD *)&_n_Rizrb_NStrO7,
 (StayFD *)&_n_Rizrb_NStrO7I,
 (StayFD *)&_n_Rizrb_NSumOP,
 (StayFD *)&_n_Rizrb_NSumOPI,
 (StayFD *)&_n_Rizrb_NSumO7,
 (StayFD *)&_n_Rizrb_NSumO7I,
 (StayFD *)&_n_Rizrb_NStrSP,
 (StayFD *)&_n_Rizrb_NStrSPI,
 (StayFD *)&_n_Rizrb_NStrS7,
 (StayFD *)&_n_Rizrb_NStrS7I,
 (StayFD *)&_n_Rizrb_NStrHP,
 (StayFD *)&_n_Rizrb_NStrHPI,
 (StayFD *)&_n_Rizrb_NStrH7,
 (StayFD *)&_n_Rizrb_NStrH7I,
 NULL
};
static BYTE ix_Rizrb[] = {1,1,2,0,1};
StayDataset _n_Rizrb = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_Rizrb,NULL,
"WORK:rizrb.dt",ix_Rizrb,"Массив итоговых данных","Rizrb",0};
StayDataset *Rizrb = &_n_Rizrb;

static StayFD *tcm_RizrbKf[] =
{
 (StayFD *)&_n_RizrbKf_Nr,
 (StayFD *)&_n_RizrbKf_Nrs,
 (StayFD *)&_n_RizrbKf_Dbeg,
 (StayFD *)&_n_RizrbKf_Dend,
 (StayFD *)&_n_RizrbKf_Mes,
 (StayFD *)&_n_RizrbKf_Mes25,
 (StayFD *)&_n_RizrbKf_Suma,
 (StayFD *)&_n_RizrbKf_Koef,
 (StayFD *)&_n_RizrbKf_Koef1,
 (StayFD *)&_n_RizrbKf_SumaP,
 (StayFD *)&_n_RizrbKf_SumaP1,
 (StayFD *)&_n_RizrbKf_Suma25,
 (StayFD *)&_n_RizrbKf_Sum25P,
 (StayFD *)&_n_RizrbKf_Sum25F,
 (StayFD *)&_n_RizrbKf_SrNx,
 (StayFD *)&_n_RizrbKf_SrNx1,
 NULL
};
static BYTE ix_RizrbKf[] = {1,1,3,0,1,2};
StayDataset _n_RizrbKf = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_RizrbKf,NULL,
NULL,ix_RizrbKf,"Массив осучаснення зароботков","RizrbKf",0};
StayDataset *RizrbKf = &_n_RizrbKf;

static StayFD *tcm_Rizrbs[] =
{
 (StayFD *)&_n_Rizrbs_Nrs,
 (StayFD *)&_n_Rizrbs_Nr,
 NULL
};
static BYTE ix_Rizrbs[] = {1,1,2,0,1};
StayDataset _n_Rizrbs = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_Rizrbs,NULL,
NULL,ix_Rizrbs,"Массив старых номеров расчетов данных","Rizrbs",0};
StayDataset *Rizrbs = &_n_Rizrbs;

static StayFD *tcm_Rstg[] =
{
 (StayFD *)&_n_Rstg_Num,
 (StayFD *)&_n_Rstg_Code,
 (StayFD *)&_n_Rstg_Gg,
 (StayFD *)&_n_Rstg_Mm,
 (StayFD *)&_n_Rstg_Dd,
 NULL
};
static BYTE ix_Rstg[] = {1,1,2,0,1};
StayDataset _n_Rstg = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_Rstg,NULL,
NULL,ix_Rstg,"Массив сводных стажей","Rstg",0};
StayDataset *Rstg = &_n_Rstg;

static StayFD *tcm_Rstgp[] =
{
 (StayFD *)&_n_Rstgp_Num,
 (StayFD *)&_n_Rstgp_Vtch,
 (StayFD *)&_n_Rstgp_Dend,
 (StayFD *)&_n_Rstgp_Gg,
 (StayFD *)&_n_Rstgp_Dd,
 (StayFD *)&_n_Rstgp_Mm,
 (StayFD *)&_n_Rstgp_Sezon,
 (StayFD *)&_n_Rstgp_Sever,
 (StayFD *)&_n_Rstgp_Dok,
 (StayFD *)&_n_Rstgp_Krat,
 (StayFD *)&_n_Rstgp_Lgvl,
 (StayFD *)&_n_Rstgp_Kolh,
 (StayFD *)&_n_Rstgp_Dbeg,
 (StayFD *)&_n_Rstgp_KodPr,
 (StayFD *)&_n_Rstgp_Krat24,
 (StayFD *)&_n_Rstgp_Strach,
 (StayFD *)&_n_RstgpCOK_Priz,
 (StayFD *)&_n_RstgpCOK_Dni,
 (StayFD *)&_n_RstgpCOK_Gg,
 (StayFD *)&_n_RstgpCOK_Dd,
 (StayFD *)&_n_RstgpCOK_Mm,
 NULL
};
static BYTE ix_Rstgp[] = {1,1,65,0};
StayDataset _n_Rstgp = {NULL,TAG_DATASET,0,0,DS_QBASE,0,1,0,NULL,tcm_Rstgp,NULL,
"WORK:RSTGP.DT",ix_Rstgp,"Рабочая по стажам - по периодам","Rstgp",16};
StayDataset *Rstgp = &_n_Rstgp;

static StayFD *tcm_Rstgpr[] =
{
 (StayFD *)&_n_Rstgp_Num,
 (StayFD *)&_n_Rstgp_Vtch,
 (StayFD *)&_n_Rstgp_Dend,
 (StayFD *)&_n_Rstgp_Gg,
 (StayFD *)&_n_Rstgp_Dd,
 (StayFD *)&_n_Rstgp_Mm,
 (StayFD *)&_n_Rstgp_Sezon,
 (StayFD *)&_n_Rstgp_Sever,
 (StayFD *)&_n_Rstgp_Dok,
 (StayFD *)&_n_Rstgp_Krat,
 (StayFD *)&_n_Rstgp_Lgvl,
 (StayFD *)&_n_Rstgp_Kolh,
 (StayFD *)&_n_Rstgp_Dbeg,
 (StayFD *)&_n_Rstgp_KodPr,
 (StayFD *)&_n_Rstgp_Krat24,
 (StayFD *)&_n_Rstgp_Strach,
 (StayFD *)&_n_Rstgp_GgKr,
 (StayFD *)&_n_Rstgp_DdKr,
 (StayFD *)&_n_Rstgp_MmKr,
 (StayFD *)&_n_RstgpCOK_Priz,
 (StayFD *)&_n_RstgpCOK_Dni,
 (StayFD *)&_n_RstgpCOK_Gg,
 (StayFD *)&_n_RstgpCOK_Dd,
 (StayFD *)&_n_RstgpCOK_Mm,
 NULL
};
static BYTE ix_Rstgpr[] = {1,1,65,0};
StayDataset _n_Rstgpr = {NULL,TAG_DATASET,0,0,DS_QBASE,0,1,0,NULL,tcm_Rstgpr,NULL,
"WORK:RSTGPR.DT",ix_Rstgpr,"Рабочая по стажам - по периодам (для расчетов)","Rstgpr",16};
StayDataset *Rstgpr = &_n_Rstgpr;

static StayFD *tcm_Rstgs[] =
{
 (StayFD *)&_n_Rstgs_Num,
 (StayFD *)&_n_Rstgs_Code,
 (StayFD *)&_n_Rstgs_Gg,
 (StayFD *)&_n_Rstgs_Mm,
 (StayFD *)&_n_Rstgs_Dd,
 NULL
};
static BYTE ix_Rstgs[] = {1,1,66,0,1};
StayDataset _n_Rstgs = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_Rstgs,NULL,
NULL,ix_Rstgs,"Массив старых сводных стажей","Rstgs",0};
StayDataset *Rstgs = &_n_Rstgs;

static StayFD *tcm_RstgISD[] =
{
 (StayFD *)&_n_RstgISD_ICode,
 (StayFD *)&_n_RstgISD_Gg,
 (StayFD *)&_n_RstgISD_Mm,
 (StayFD *)&_n_RstgISD_StDd,
 NULL
};
static BYTE ix_RstgISD[] = {1,1,3,0,1,2};
StayDataset _n_RstgISD = {NULL,TAG_DATASET,0,0,DS_QBASE,0,1,0,NULL,tcm_RstgISD,NULL,
"WORK:RSTGISD.DT",ix_RstgISD,"Рабочая по подтвержденних стажам","RstgISD",16};
StayDataset *RstgISD = &_n_RstgISD;

static StayFD *tcm_Rstgph[] =
{
 (StayFD *)&_n_Rstgph_Num,
 (StayFD *)&_n_Rstgph_Dbeg,
 (StayFD *)&_n_Rstgph_Dend,
 (StayFD *)&_n_Rstgph_StrSPU,
 (StayFD *)&_n_Rstgph_StrHEP,
 (StayFD *)&_n_Rstgph_S79HEP,
 NULL
};
static BYTE ix_Rstgph[] = {1,1,3,0,1,2};
StayDataset _n_Rstgph = {NULL,TAG_DATASET,0,0,DS_QBASE,0,1,0,NULL,tcm_Rstgph,NULL,
"WORK:RSTGPH.DT",ix_Rstgph,"Массив спецданних","Rstgph",16};
StayDataset *Rstgph = &_n_Rstgph;

static StayFD *tcm_Rzrbr[] =
{
 (StayFD *)&_n_Rzrbr_Nrs,
 (StayFD *)&_n_Rzrbr_Nr,
 (StayFD *)&_n_Rzrbr_Dbeg,
 (StayFD *)&_n_Rzrbr_Dend,
 (StayFD *)&_n_Rzrbr_Suma,
 (StayFD *)&_n_Rzrbr_Priz,
 NULL
};
static BYTE ix_Rzrbr[] = {1,1,3,0,1,2};
StayDataset _n_Rzrbr = {NULL,TAG_DATASET,0,0,DS_QBASE,0,1,0,NULL,tcm_Rzrbr,NULL,
"WORK:RZRBR.DT",ix_Rzrbr,"Рабочая база заработков","Rzrbr",16};
StayDataset *Rzrbr = &_n_Rzrbr;

static StayFD *tcm_Rzrb[] =
{
 (StayFD *)&_n_Rzrb_Nrs,
 (StayFD *)&_n_Rzrb_Nr,
 (StayFD *)&_n_Rzrb_Dbeg,
 (StayFD *)&_n_Rzrb_Mes,
 (StayFD *)&_n_Rzrb_Dend,
 (StayFD *)&_n_Rzrb_Suma,
 (StayFD *)&_n_Rzrb_Prem,
 (StayFD *)&_n_Rzrb_Dopl,
 (StayFD *)&_n_Rzrb_Ogr,
 (StayFD *)&_n_Rzrb_Ogr24,
 (StayFD *)&_n_Rzrb_IKf24,
 (StayFD *)&_n_Rzrb_Ogr22,
 (StayFD *)&_n_Rzrb_IKf22,
 (StayFD *)&_n_Rzrb_OgrNF,
 (StayFD *)&_n_Rzrb_IKfNF,
 (StayFD *)&_n_Rzrb_SrNX,
 (StayFD *)&_n_Rzrb_SrNX24,
 (StayFD *)&_n_Rzrb_SrNX22,
 (StayFD *)&_n_Rzrb_SumYear,
 (StayFD *)&_n_Rzrb_SrNXNF,
 (StayFD *)&_n_Rzrb_PrPer,
 (StayFD *)&_n_Rzrb_Pr919,
 (StayFD *)&_n_Rzrb_PrStrach,
 (StayFD *)&_n_Rzrb_DtStrach,
 (StayFD *)&_n_Rzrb_StrSPU,
 (StayFD *)&_n_Rzrb_NStrDel,
 (StayFD *)&_n_Rzrb_NStrDelI,
 (StayFD *)&_n_Rzrb_NStsDel,
 (StayFD *)&_n_Rzrb_NStsDelI,
 (StayFD *)&_n_Rzrb_NStrD07,
 (StayFD *)&_n_Rzrb_NStrD07I,
 (StayFD *)&_n_Rzrb_NStsD07,
 (StayFD *)&_n_Rzrb_NStsD07I,
 (StayFD *)&_n_Rzrb_StrHEP,
 (StayFD *)&_n_Rzrb_NStsHEP,
 (StayFD *)&_n_Rzrb_NStsHEPI,
 (StayFD *)&_n_Rzrb_NStsH07,
 (StayFD *)&_n_Rzrb_NStsH07I,
 (StayFD *)&_n_Rzrb_S79HEP,
 (StayFD *)&_n_Rzrb_NS79HEP,
 (StayFD *)&_n_Rzrb_NS79HEPI,
 (StayFD *)&_n_Rzrb_NS79H07,
 (StayFD *)&_n_Rzrb_NS79H07I,
 (StayFD *)&_n_Rzrb_Koef,
 (StayFD *)&_n_Rzrb_DKoef,
 (StayFD *)&_n_Rzrb_Nepol,
 (StayFD *)&_n_Rzrb_TOpt,
 (StayFD *)&_n_Rzrb_TOpti,
 (StayFD *)&_n_Rzrb_PrKf56,
 (StayFD *)&_n_Rzrb_KodPr,
 NULL
};
static BYTE ix_Rzrb[] = {1,1,3,0,1,2};
StayDataset _n_Rzrb = {NULL,TAG_DATASET,0,0,DS_QBASE,0,1,0,NULL,tcm_Rzrb,NULL,
"WORK:RZRB.DT",ix_Rzrb,"Рабочая база заработков","Rzrb",16};
StayDataset *Rzrb = &_n_Rzrb;

static StayFD *tcm_RzrbCh[] =
{
 (StayFD *)&_n_Rzrb_Nrs,
 (StayFD *)&_n_Rzrb_Nr,
 (StayFD *)&_n_Rzrb_Dbeg,
 (StayFD *)&_n_RzrbCl_Ch,
 (StayFD *)&_n_RzrbCl_Min,
 (StayFD *)&_n_RzrbCl_ChH,
 (StayFD *)&_n_RzrbCl_MinH,
 (StayFD *)&_n_RzrbCl_ChN,
 (StayFD *)&_n_RzrbCl_MinN,
 (StayFD *)&_n_RzrbCl_Kr,
 (StayFD *)&_n_RzrbCl_KrN,
 (StayFD *)&_n_RzrbCl_PcPrem,
 (StayFD *)&_n_RzrbCl_Suma,
 (StayFD *)&_n_RzrbCl_SumaTr,
 (StayFD *)&_n_RzrbCl_Suma2,
 NULL
};
static BYTE ix_RzrbCh[] = {1,1,3,0,1,2};
StayDataset _n_RzrbCh = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_RzrbCh,NULL,
NULL,ix_RzrbCh,"база расчета заработков","RzrbCh",0};
StayDataset *RzrbCh = &_n_RzrbCh;

static StayFD *tcm_RzrbNras[] =
{
 (StayFD *)&_n_Rzrb_Nras,
 (StayFD *)&_n_Rzrb_Nrod,
 (StayFD *)&_n_Nrs_Status,
 NULL
};
static BYTE ix_RzrbNras[] = {1,1,2,0,1};
StayDataset _n_RzrbNras = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_RzrbNras,NULL,
NULL,ix_RzrbNras,"База номеров расчетов","RzrbNras",0};
StayDataset *RzrbNras = &_n_RzrbNras;

static StayFD *tcm_RabBase[] =
{
 (StayFD *)&_n_DateNazI,
 (StayFD *)&_n_DateObrNaz,
 (StayFD *)&_n_DateObrNazI,
 (StayFD *)&_n_DateObrPer,
 (StayFD *)&_n_DateObrPerI,
 (StayFD *)&_n_DatePerI,
 (StayFD *)&_n_Kfn_Code,
 (StayFD *)&_n_Kfn,
 (StayFD *)&_n_kfn,
 (StayFD *)&_n_oldkfn,
 (StayFD *)&_n_Shifr,
 (StayFD *)&_n_OldOp,
 (StayFD *)&_n_DateOldOp,
 (StayFD *)&_n_DateOsob411,
 (StayFD *)&_n_DateOsob413,
 (StayFD *)&_n_RDatePVV,
 (StayFD *)&_n_RDate1000,
 (StayFD *)&_n_PrMalZar,
 (StayFD *)&_n_prputbsh,
 (StayFD *)&_n_OpCurrent,
 (StayFD *)&_n_PrKont88,
 (StayFD *)&_n_PrKont89,
 (StayFD *)&_n_PrOsob201,
 (StayFD *)&_n_pros97,
 (StayFD *)&_n_prizos97,
 NULL
};
StayDataset _n_RabBase = {NULL,TAG_DATASET,0,0,DS_STRUCT,0,1,0,NULL,tcm_RabBase,NULL,
NULL,NULL,NULL,"RabBase",0};
StayDataset *RabBase = &_n_RabBase;

static StayFD *tcm_A_Fras[] =
{
 (StayFD *)&_n_Fras_Nrod,
 (StayFD *)&_n_Fras_Fras,
 NULL
};
static BYTE ix_A_Fras[] = {1,1,1,0};
StayDataset _n_A_Fras = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_A_Fras,NULL,
NULL,ix_A_Fras,"Массив количества введенных заработков для каждого кормильца","A_Fras",0};
StayDataset *A_Fras = &_n_A_Fras;

/* End FCdataset */
/* Begin FCmenu */
/* End FCmenu */
/* Begin FCframe */
/* End FCframe */
/* Begin FCtabl */
void *NAZ_BAI[] =
 {NULL,
  &_nn_NAZ_BAI,
  &_n_Klprof1_Kod,
  &_n_Klprof1_Krnam,
  &_n_Klprof1_Naim,
  &_n_Klprof1_Probr,
  &_n_Klprof2_Kod,
  &_n_Klprof2_Krnam,
  &_n_Klprof2_Naim,
  &_n_Klprof2_Probr,
  &_n_Kol2_Day,
  &_n_Kol2_Mon,
  &_n_Kol2_Trud,
  &_n_Kol2_Year,
  &_n_Kol_Day,
  &_n_Kol_Mon,
  &_n_Kol_Trud,
  &_n_Kol_Year,
  &_n_LMax_Stg,
  &_n_Nrs_Status,
  &_n_Num_Stage,
  &_n_PstgPodz_Nr,
  &_n_PstgPodz_Kods,
  &_n_PstgPodz_Year,
  &_n_PstgPodz_Mon,
  &_n_PstgPodz_Day,
  &_n_Pstg_Day,
  &_n_Pstg_Kods,
  &_n_Pstg_Koef,
  &_n_Pstg_Mon,
  &_n_Pstg_NZach,
  &_n_Pstg_PDay,
  &_n_Pstg_PMon,
  &_n_Pstg_PYear,
  &_n_Pstg_Year,
  &_n_Stg13_Code,
  &_n_Stg13_Dni,
  &_n_Stg13_God,
  &_n_Stg13_Mec,
  &_n_Stg13_DniV,
  &_n_Stg13_GodV,
  &_n_Stg13_MecV,
  &_n_Stg13_Priz,
  &_n_Stg13_Suma,
  &_n_Stg13_Two,
  &_n_RKlOrgR_Code,
  &_n_RKlShP_All,
  &_n_RKlShP_CodeVp,
  &_n_RKlShP_KIgd,
  &_n_RKlShP_Kor,
  &_n_RKlShP_Lgt,
  &_n_RKlShP_Netr,
  &_n_RKlShP_Nr,
  &_n_RKlShP_PSKor,
  &_n_RKlShP_PoCH,
  &_n_RKlShP_PrCH,
  &_n_RKlShP_PrInv,
  &_n_RKlShP_Prof,
  &_n_RKlShP_Sex,
  &_n_RKlShP_VInv,
  &_n_RKlShP_VP,
  &_n_RPrcSv_Code,
  &_n_RPrcSv_CodeD,
  &_n_RPrcSv_Dni,
  &_n_RPrcSv_God,
  &_n_RPrcSv_Mec,
  &_n_RPrcSv_One,
  &_n_RPrcSv_Suma,
  &_n_RPrcSv_Two,
  &_n_RPrc_Code,
  &_n_RRPrc_Code,
  &_n_RPrc_CodeD,
  &_n_RPrc_Dni,
  &_n_RPrc_God,
  &_n_RPrc_Mec,
  &_n_RPrc_One,
  &_n_RPrc_ProcB,
  &_n_RPrc_Suma,
  &_n_RPrc_Two,
  &_n_RRzrbCl_Suma,
  &_n_RRzrb_Dbeg,
  &_n_RRzrb_Mes,
  &_n_RRzrb_Nr,
  &_n_RRzrb_Nrs,
  &_n_RRzrb_StrSuma,
  &_n_RRzrb_Suma,
  &_n_RStgp_DEndP,
  &_n_RStgp_DEndP1,
  &_n_RStgp_DEndP2,
  &_n_RZrb_DBStr,
  &_n_Rez,
  &_n_Rez1,
  &_n_RizrbKf_Dbeg,
  &_n_RizrbKf_Dend,
  &_n_Rizrb_DateVZ,
  &_n_Rizrb_DateVZS,
  &_n_Rizrb_Date919,
  &_n_Rizrb_DSRNX,
  &_n_Rizrb_YrSRNX,
  &_n_Rizrb_D2SRNX,
  &_n_Rizrb_Y2SRNX,
  &_n_Rizrb_NSrNX,
  &_n_RizrbKf_Koef,
  &_n_RizrbKf_Koef1,
  &_n_RizrbKf_Mes,
  &_n_RizrbKf_Mes25,
  &_n_RizrbKf_Nr,
  &_n_RizrbKf_Nrs,
  &_n_RizrbKf_SrNx,
  &_n_RizrbKf_SrNx1,
  &_n_RizrbKf_Suma,
  &_n_RizrbKf_Suma25,
  &_n_RizrbKf_Sum25P,
  &_n_RizrbKf_Sum25F,
  &_n_RizrbKf_SumaP,
  &_n_RizrbKf_SumaP1,
  &_n_Rizrb_DBegZ,
  &_n_Rizrb_DateCHD,
  &_n_Rizrb_DEZF192,
  &_n_Rizrb_DEZF292,
  &_n_Rizrb_DMZr121,
  &_n_Rizrb_DMZr131,
  &_n_Rizrb_DMZr141,
  &_n_Rizrb_DMZr151,
  &_n_Rizrb_DMZr161,
  &_n_Rizrb_DMZr122,
  &_n_Rizrb_DMZr132,
  &_n_Rizrb_DMZr142,
  &_n_Rizrb_DMZr152,
  &_n_Rizrb_DMZarR,
  &_n_Rizrb_DEndZ,
  &_n_Rizrb_DBegDl1,
  &_n_Rizrb_DEndDl1,
  &_n_Rizrb_DBegDl2,
  &_n_Rizrb_DEndDl2,
  &_n_Rizrb_DBegDl3,
  &_n_Rizrb_DEndDl3,
  &_n_Rizrb_DBegDl4,
  &_n_Rizrb_DEndDl4,
  &_n_Rizrb_DBegDl5,
  &_n_Rizrb_DEndDl5,
  &_n_Rizrb_DBegDl6,
  &_n_Rizrb_DEndDl6,
  &_n_Rizrb_DEndZ92,
  &_n_Rizrb_DEndZ92P,
  &_n_Rizrb_DBegZ1,
  &_n_Rizrb_DBegZ2,
  &_n_Rizrb_DEndZF1,
  &_n_Rizrb_DEndZF2,
  &_n_Rizrb_DEndZU1,
  &_n_Rizrb_DEndZU2,
  &_n_Rizrb_DEndZMB1,
  &_n_Rizrb_DEndZMB2,
  &_n_Rizrb_DEndZFF,
  &_n_Rizrb_DEndZK1,
  &_n_Rizrb_DEndZK2,
  &_n_Rizrb_DEndZKK,
  &_n_Rizrb_DEndZP,
  &_n_Rizrb_DRabZKK,
  &_n_Rizrb_DRabZFF,
  &_n_Rizrb_DRabZU,
  &_n_Rizrb_RabMU,
  &_n_Rizrb_Day,
  &_n_Rizrb_DayH,
  &_n_Rizrb_Dopl,
  &_n_Rizrb_NMesKF,
  &_n_Rizrb_NMesDl1,
  &_n_Rizrb_NMesDl2,
  &_n_Rizrb_NMesDS2,
  &_n_Rizrb_NMesDl3,
  &_n_Rizrb_NMesDl4,
  &_n_Rizrb_NMesDS4,
  &_n_Rizrb_NMesDl5,
  &_n_Rizrb_NMesDS5,
  &_n_Rizrb_NMesDl6,
  &_n_Rizrb_NMesDS6,
  &_n_Rizrb_NMesKF1,
  &_n_Rizrb_NMesKF2,
  &_n_Rizrb_MaxNMB1,
  &_n_Rizrb_MaxNMB2,
  &_n_Rizrb_NMes24A,
  &_n_Rizrb_NMes24I,
  &_n_Rizrb_NMes25A,
  &_n_Rizrb_NMes25I,
  &_n_Rizrb_NMes27A,
  &_n_Rizrb_NMes27I,
  &_n_Rizrb_NS79DP,
  &_n_Rizrb_NS79DPI,
  &_n_Rizrb_NS79D7,
  &_n_Rizrb_NS79D7I,
  &_n_Rizrb_NStrOP,
  &_n_Rizrb_NStrOPI,
  &_n_Rizrb_NStrO7,
  &_n_Rizrb_NStrO7I,
  &_n_Rizrb_NSumOP,
  &_n_Rizrb_NSumOPI,
  &_n_Rizrb_NSumO7,
  &_n_Rizrb_NSumO7I,
  &_n_Rizrb_NStrSP,
  &_n_Rizrb_NStrSPI,
  &_n_Rizrb_NStrS7,
  &_n_Rizrb_NStrS7I,
  &_n_Rizrb_NStrHP,
  &_n_Rizrb_NStrHPI,
  &_n_Rizrb_NStrH7,
  &_n_Rizrb_NStrH7I,
  &_n_Rizrb_VarOpt,
  &_n_Rizrb_VarOptI,
  &_n_Rizrb_IKoef1,
  &_n_Rizrb_IKoef2,
  &_n_Rizrb_IKNX1,
  &_n_Rizrb_IKNX2,
  &_n_Rizrb_IKNF1,
  &_n_Rizrb_IKNF2,
  &_n_Rizrb_IKNI1,
  &_n_Rizrb_IKNI2,
  &_n_Rizrb_IKNS1,
  &_n_Rizrb_IKNFNA1,
  &_n_Rizrb_IKNFNA2,
  &_n_Rizrb_IKGOS1,
  &_n_Rizrb_IKGOS2,
  &_n_Rizrb_IKfP24,
  &_n_Rizrb_IKfPI4,
  &_n_Rizrb_IKoef,
  &_n_Rizrb_IKoef24,
  &_n_Rizrb_IKoefI4,
  &_n_Rizrb_IKoef22,
  &_n_Rizrb_IKf245,
  &_n_Rizrb_IKf247,
  &_n_Rizrb_IKoef24A,
  &_n_Rizrb_IKoef44,
  &_n_Rizrb_IKoefNF,
  &_n_Rizrb_IKfPOkl,
  &_n_Rizrb_IKSuma,
  &_n_Rizrb_IKP24,
  &_n_Rizrb_IKS24,
  &_n_Rizrb_IKS22,
  &_n_Rizrb_IKPI4,
  &_n_Rizrb_IKSI4,
  &_n_Rizrb_IKS24A,
  &_n_Rizrb_IKS245,
  &_n_Rizrb_IKS247,
  &_n_Rizrb_IKS245A,
  &_n_Rizrb_IKS247A,
  &_n_Rizrb_IKSNF,
  &_n_Rizrb_MaxMF192,
  &_n_Rizrb_MaxMF292,
  &_n_Rizrb_MaxMF121,
  &_n_Rizrb_MaxMF221,
  &_n_Rizrb_MaxMN192,
  &_n_Rizrb_MaxMN292,
  &_n_Rizrb_MaxMZF92,
  &_n_Rizrb_MaxMZF21,
  &_n_Rizrb_MaxZU1,
  &_n_Rizrb_MaxZU2,
  &_n_Rizrb_MaxZMB1,
  &_n_Rizrb_MaxZMB2,
  &_n_Rizrb_MaxZMB8,
  &_n_Rizrb_MaxMZFP,
  &_n_Rizrb_MaxMesF1,
  &_n_Rizrb_MaxMesF2,
  &_n_Rizrb_MaxMesFF,
  &_n_Rizrb_MaxM21FF,
  &_n_Rizrb_MaxMesK1,
  &_n_Rizrb_MaxMesK2,
  &_n_Rizrb_MaxMesN1,
  &_n_Rizrb_MaxMesN2,
  &_n_Rizrb_MaxNU1,
  &_n_Rizrb_MaxNU2,
  &_n_Rizrb_MaxMU1,
  &_n_Rizrb_MaxMU2,
  &_n_Rizrb_MaxMesP,
  &_n_Rizrb_MaxMesZF,
  &_n_Rizrb_MaxMesZK,
  &_n_Rizrb_MaxNF192,
  &_n_Rizrb_MaxNF292,
  &_n_Rizrb_MaxNrs1,
  &_n_Rizrb_MaxNrs2,
  &_n_Rizrb_MaxNNX1,
  &_n_Rizrb_MaxNNX2,
  &_n_Rizrb_MaxNNF1,
  &_n_Rizrb_MaxNNF2,
  &_n_Rizrb_MaxNNI1,
  &_n_Rizrb_MaxNNI2,
  &_n_Rizrb_MaxNNS1,
  &_n_Rizrb_MaxNNA1,
  &_n_Rizrb_MaxNNA2,
  &_n_Rizrb_MaxNNG1,
  &_n_Rizrb_MaxNNG2,
  &_n_Rizrb_MaxNrsF1,
  &_n_Rizrb_MaxNrsF2,
  &_n_Rizrb_MNrsPZ1,
  &_n_Rizrb_MNrsPZ2,
  &_n_Rizrb_MaxNrsK1,
  &_n_Rizrb_MaxNrsK2,
  &_n_Rizrb_MaxNrsP,
  &_n_Rizrb_MaxNrsS,
  &_n_Rizrb_Mes,
  &_n_Rizrb_MesP24,
  &_n_Rizrb_Nr,
  &_n_Rizrb_Nrs,
  &_n_Rizrb_Error,
  &_n_Rizrb_DtSRNX,
  &_n_Rizrb_DtKoef,
  &_n_Rizrb_DtKoef1,
  &_n_Rizrb_DtKoef2,
  &_n_Rizrb_DEZOpt,
  &_n_Rizrb_NDelMes,
  &_n_Rizrb_PMax,
  &_n_Rizrb_Prem,
  &_n_Rizrb_RCoeff,
  &_n_Rizrb_Rab,
  &_n_Rizrb_Pr56Z,
  &_n_Rizrb_Pr79Z,
  &_n_Rizrb_PrZar,
  &_n_Rizrb_Rab28,
  &_n_Rizrb_Rab1,
  &_n_Rizrb_Rab12,
  &_n_Rizrb_Rab0,
  &_n_Rizrb_Rab00,
  &_n_Rizrb_RabOVsr,
  &_n_Rizrb_Rab5,
  &_n_Rizrb_Rab512,
  &_n_Rizrb_Rab56,
  &_n_Rizrb_Rab7,
  &_n_Rizrb_Rab76,
  &_n_Rizrb_Rab592,
  &_n_Rizrb_RabOtct,
  &_n_Rizrb_RabDosr,
  &_n_Rizrb_RabS291,
  &_n_Rizrb_RabS293,
  &_n_Rizrb_RabS297,
  &_n_Rizrb_RabS298,
  &_n_Rizrb_Rab808,
  &_n_Rizrb_Rab908,
  &_n_Rizrb_RabG808,
  &_n_Rizrb_RabG908,
  &_n_Rizrb_Rab991,
  &_n_Rizrb_RabG991,
  &_n_Rizrb_Rab992,
  &_n_Rizrb_RabG992,
  &_n_Rizrb_Rab993,
  &_n_Rizrb_RabG993,
  &_n_Rizrb_Rab994,
  &_n_Rizrb_RabG994,
  &_n_Rizrb_Rab995,
  &_n_Rizrb_RabG995,
  &_n_Rizrb_Rab996,
  &_n_Rizrb_RabG996,
  &_n_Rizrb_Rab997,
  &_n_Rizrb_RabG997,
  &_n_Rizrb_Rab803,
  &_n_Rizrb_RabG803,
  &_n_Rizrb_Rab804,
  &_n_Rizrb_RabG804,
  &_n_Rizrb_Rab805,
  &_n_Rizrb_RabG805,
  &_n_Rizrb_Rab806,
  &_n_Rizrb_RabG806,
  &_n_Rizrb_Rab807,
  &_n_Rizrb_RabG807,
  &_n_Rizrb_Rab816,
  &_n_Rizrb_RabG816,
  &_n_Rizrb_Rab818,
  &_n_Rizrb_RabG818,
  &_n_Rizrb_Rab819,
  &_n_Rizrb_RabG819,
  &_n_Rizrb_Rab820,
  &_n_Rizrb_RabG820,
  &_n_Rizrb_Rab821,
  &_n_Rizrb_RabG821,
  &_n_Rizrb_Rab822,
  &_n_Rizrb_RabG822,
  &_n_Rizrb_Rab823,
  &_n_Rizrb_RabG823,
  &_n_Rizrb_Rab824,
  &_n_Rizrb_RabG824,
  &_n_Rizrb_Rab825,
  &_n_Rizrb_RabG825,
  &_n_Rizrb_Rab829,
  &_n_Rizrb_RabG829,
  &_n_Rizrb_RabOS,
  &_n_Rizrb_RabGS,
  &_n_Rizrb_RabPZ1,
  &_n_Rizrb_RabPZ2,
  &_n_Rizrb_ZarPZ1,
  &_n_Rizrb_ZarPZ2,
  &_n_Rizrb_Rab817,
  &_n_Rizrb_RabG817,
  &_n_Rizrb_Rab709,
  &_n_Rizrb_RabG709,
  &_n_Rizrb_RDP709,
  &_n_Rizrb_RDP850,
  &_n_Rizrb_Rab812,
  &_n_Rizrb_Rab851,
  &_n_Rizrb_RabG851,
  &_n_Rizrb_Rab852,
  &_n_Rizrb_Rab853,
  &_n_Rizrb_RabG853,
  &_n_Rizrb_Rab814,
  &_n_Rizrb_RabG814,
  &_n_Rizrb_Rab815,
  &_n_Rizrb_RabG815,
  &_n_Rizrb_RabDPLM,
  &_n_Rizrb_RaGDPLM,
  &_n_Rizrb_RabDPLP,
  &_n_Rizrb_RaGDPLP,
  &_n_Rizrb_Rab854,
  &_n_Rizrb_RabG854,
  &_n_Rizrb_Rab854D,
  &_n_Rizrb_RaG854D,
  &_n_Rizrb_Rab855,
  &_n_Rizrb_RabG855,
  &_n_Rizrb_Rab856,
  &_n_Rizrb_RabG856,
  &_n_Rizrb_Rab857,
  &_n_Rizrb_RabG857,
  &_n_Rizrb_Rab858,
  &_n_Rizrb_RabG858,
  &_n_Rizrb_Rab826,
  &_n_Rizrb_RabG826,
  &_n_Rizrb_Rab827,
  &_n_Rizrb_Rab828,
  &_n_Rizrb_Rab890,
  &_n_Rizrb_RabG890,
  &_n_Rizrb_Rab849,
  &_n_Rizrb_RabM136,
  &_n_Rizrb_RabG136,
  &_n_Rizrb_RabM137,
  &_n_Rizrb_RabG137,
  &_n_Rizrb_Rab402,
  &_n_Rizrb_Rab462,
  &_n_Rizrb_RabGDot,
  &_n_Rizrb_RabGIND,
  &_n_Rizrb_RabGos,
  &_n_Rizrb_RabIND,
  &_n_Rizrb_RabMALOB,
  &_n_Rizrb_RabMesZF,
  &_n_Rizrb_RabZU,
  &_n_Rizrb_Sum3233,
  &_n_Rizrb_RazmOIP,
  &_n_Rizrb_ProcOIP,
  &_n_Rizrb_NIgdOIP,
  &_n_Rizrb_RabMesZK,
  &_n_Rizrb_Z132121,
  &_n_Rizrb_Zar1321,
  &_n_Rizrb_Zar1322,
  &_n_Rizrb_ZNX1321,
  &_n_Rizrb_ZNX1322,
  &_n_Rizrb_DEZ1321,
  &_n_Rizrb_DEZ1322,
  &_n_Rizrb_RabSIND,
  &_n_Rizrb_SrMesFt,
  &_n_Rizrb_SrMesKr,
  &_n_Rizrb_RZNX27,
  &_n_Rizrb_RZNP27,
  &_n_Rizrb_RZNXI7,
  &_n_Rizrb_RZNPI7,
  &_n_Rizrb_SrNX,
  &_n_Rizrb_GdSrNXP,
  &_n_Rizrb_SrNX22,
  &_n_Rizrb_SrNX24,
  &_n_Rizrb_SrDR24,
  &_n_Rizrb_SrNX26,
  &_n_Rizrb_SrNX27,
  &_n_Rizrb_SrNX28,
  &_n_Rizrb_SrNX29,
  &_n_Rizrb_SrNXA9,
  &_n_Rizrb_SrX01A,
  &_n_Rizrb_SrX04A,
  &_n_Rizrb_SrX07A,
  &_n_Rizrb_SrX10A,
  &_n_Rizrb_SrX12A,
  &_n_Rizrb_SrX017,
  &_n_Rizrb_SrX047,
  &_n_Rizrb_SrX077,
  &_n_Rizrb_SrX107,
  &_n_Rizrb_SrX127,
  &_n_Rizrb_SrNX20,
  &_n_Rizrb_SrNX21,
  &_n_Rizrb_SrNX2B,
  &_n_Rizrb_SrNX2C,
  &_n_Rizrb_SrNX2D,
  &_n_Rizrb_SrNX2E,
  &_n_Rizrb_SrNX2F,
  &_n_Rizrb_SrNX44,
  &_n_Rizrb_SrNX8A,
  &_n_Rizrb_SrNX7N,
  &_n_Rizrb_SrNX8N,
  &_n_Rizrb_SrNX9N,
  &_n_Rizrb_SrNXAN,
  &_n_Rizrb_SrNXBN,
  &_n_Rizrb_SrNXCN,
  &_n_Rizrb_SrNXDN,
  &_n_Rizrb_SrNXEN,
  &_n_Rizrb_SrNXFN,
  &_n_Rizrb_SrNXGN,
  &_n_Rizrb_SrNXVC,
  &_n_Rizrb_SrNXNF,
  &_n_Rizrb_SrNX1,
  &_n_Rizrb_SrNX2,
  &_n_Rizrb_ZarNX,
  &_n_Rizrb_ZarNX22,
  &_n_Rizrb_ZarNX2B,
  &_n_Rizrb_ZarNXIB,
  &_n_Rizrb_ZarNP2B,
  &_n_Rizrb_ZarNPIB,
  &_n_Rizrb_ZarNX2C,
  &_n_Rizrb_ZarNXIC,
  &_n_Rizrb_ZarNP2C,
  &_n_Rizrb_ZarNPIC,
  &_n_Rizrb_ZarNX2D,
  &_n_Rizrb_ZarNXID,
  &_n_Rizrb_ZarNP2D,
  &_n_Rizrb_ZarNPID,
  &_n_Rizrb_ZarNX2E,
  &_n_Rizrb_ZarNXIE,
  &_n_Rizrb_ZarNP2E,
  &_n_Rizrb_ZarNPIE,
  &_n_Rizrb_ZarNX2F,
  &_n_Rizrb_ZarNXIF,
  &_n_Rizrb_ZarNP2F,
  &_n_Rizrb_ZarNPIF,
  &_n_Rizrb_ZarNX24,
  &_n_Rizrb_ZarDR24,
  &_n_Rizrb_ZarNXI4,
  &_n_Rizrb_ZarNP24,
  &_n_Rizrb_ZarNPI4,
  &_n_Rizrb_ZarNP26,
  &_n_Rizrb_ZarNP28,
  &_n_Rizrb_ZarNPI8,
  &_n_Rizrb_ZarNP29,
  &_n_Rizrb_ZarNPA9,
  &_n_Rizrb_ZarNPI0,
  &_n_Rizrb_ZarNPI1,
  &_n_Rizrb_ZarNPI9,
  &_n_Rizrb_ZarNPIA,
  &_n_Rizrb_ZarP01A,
  &_n_Rizrb_ZarP04A,
  &_n_Rizrb_ZarP07A,
  &_n_Rizrb_ZarP10A,
  &_n_Rizrb_ZarP12A,
  &_n_Rizrb_ZarP017,
  &_n_Rizrb_ZarP047,
  &_n_Rizrb_ZarP077,
  &_n_Rizrb_ZarP107,
  &_n_Rizrb_ZarP127,
  &_n_Rizrb_ZarP129,
  &_n_Rizrb_ZarNP20,
  &_n_Rizrb_ZarNP21,
  &_n_Rizrb_ZarNX26,
  &_n_Rizrb_ZarNX27,
  &_n_Rizrb_ZarNX28,
  &_n_Rizrb_ZarNXI0,
  &_n_Rizrb_ZarNXI1,
  &_n_Rizrb_ZarNXI8,
  &_n_Rizrb_ZarNX29,
  &_n_Rizrb_ZarNXA9,
  &_n_Rizrb_ZarNXI9,
  &_n_Rizrb_ZarNXIA,
  &_n_Rizrb_ZarX01A,
  &_n_Rizrb_ZarX04A,
  &_n_Rizrb_ZarX07A,
  &_n_Rizrb_ZarX10A,
  &_n_Rizrb_ZarX12A,
  &_n_Rizrb_ZarX017,
  &_n_Rizrb_ZarX047,
  &_n_Rizrb_ZarX077,
  &_n_Rizrb_ZarX107,
  &_n_Rizrb_ZarX127,
  &_n_Rizrb_ZarI01A,
  &_n_Rizrb_ZarI04A,
  &_n_Rizrb_ZarI07A,
  &_n_Rizrb_ZarI10A,
  &_n_Rizrb_ZarI12A,
  &_n_Rizrb_ZarI017,
  &_n_Rizrb_ZarI047,
  &_n_Rizrb_ZarI077,
  &_n_Rizrb_ZarI107,
  &_n_Rizrb_ZarI127,
  &_n_Rizrb_ZarX129,
  &_n_Rizrb_ZarNX20,
  &_n_Rizrb_ZarNX21,
  &_n_Rizrb_ZarNX44,
  &_n_Rizrb_ZarNX8A,
  &_n_Rizrb_ZarNX7N,
  &_n_Rizrb_ZarNX8N,
  &_n_Rizrb_ZarNX9N,
  &_n_Rizrb_ZarNXAN,
  &_n_Rizrb_ZarNXBN,
  &_n_Rizrb_ZarNXCN,
  &_n_Rizrb_ZarNXDN,
  &_n_Rizrb_ZarNXEN,
  &_n_Rizrb_ZarNXFN,
  &_n_Rizrb_ZarNXGN,
  &_n_Rizrb_ZarNXVC,
  &_n_Rizrb_ZarNXNF,
  &_n_Rizrb_ZrNXNFP,
  &_n_Rizrb_ZarNX1,
  &_n_Rizrb_ZarNX2,
  &_n_Rizrb_ZarPK1,
  &_n_Rizrb_ZarPK2,
  &_n_Rizrb_ZarIK1,
  &_n_Rizrb_ZarIK2,
  &_n_Rizrb_ZarGOS1,
  &_n_Rizrb_ZarGOS2,
  &_n_Rpzrb_SrMesFt,
  &_n_Rpzrb_SrMesKr,
  &_n_Rpzrb_IKS24,
  &_n_Rpzrb_IKoef24,
  &_n_Rpzrb_IKSI4,
  &_n_Rpzrb_IKoefI4,
  &_n_Rpzrb_TOptim,
  &_n_Rizrb_StrSuma,
  &_n_Rizrb_StrOgr22,
  &_n_Rizrb_StrOgr24,
  &_n_Rizrb_StrOgrNF,
  &_n_Rizrb_Suma,
  &_n_Rizrb_Suma92,
  &_n_Rizrb_Suma92P,
  &_n_Rizrb_Suma21,
  &_n_Rizrb_Suma21P,
  &_n_Rizrb_SumaSp,
  &_n_Rizrb_TStr1,
  &_n_Rizrb_TStr2,
  &_n_Rizrb_TStr3,
  &_n_Rizrb_ZRegr,
  &_n_Rpzrb_ZRegr,
  &_n_Rizrbs_Nr,
  &_n_Rizrbs_Nrs,
  &_n_Rizrb_Nepol,
  &_n_Rizrb_PrKf56,
  &_n_Rizrb_PrGos,
  &_n_Rizrb_PrZU,
  &_n_Rizrb_PrAuto,
  &_n_Rstag,
  &_n_Rstg_Code,
  &_n_Rstg_Dd,
  &_n_Rstg_Gg,
  &_n_Rstg_Mm,
  &_n_Rstg_Num,
  &_n_Rstgp1_Dbeg,
  &_n_Rstgp1_Dd,
  &_n_Rstgp1_Dend,
  &_n_Rstgp1_Dok,
  &_n_Rstgp1_Gg,
  &_n_Rstgp1_KodPr,
  &_n_Rstgp1_Kolh,
  &_n_Rstgp1_Krat,
  &_n_Rstgp1_Lgvl,
  &_n_Rstgp1_Krat24,
  &_n_Rstgp1_GgKr,
  &_n_Rstgp1_MmKr,
  &_n_Rstgp1_DdKr,
  &_n_Rstgp1_Mm,
  &_n_Rstgp1_Num,
  &_n_Rstgp1_Sever,
  &_n_Rstgp1_Sezon,
  &_n_Rstgp1_Vtch,
  &_n_Rstgp1_Strach,
  &_n_Rstgp1COK_Pri,
  &_n_Rstgp1COK_Dni,
  &_n_Rstgp1COK_Gg,
  &_n_Rstgp1COK_Mm,
  &_n_Rstgp1COK_Dd,
  &_n_Rstgp2_Dbeg,
  &_n_Rstgp2_Dd,
  &_n_Rstgp2_Dend,
  &_n_Rstgp2_Dok,
  &_n_Rstgp2_Gg,
  &_n_Rstgp2_KodPr,
  &_n_Rstgp2_Kolh,
  &_n_Rstgp2_Krat,
  &_n_Rstgp2_Lgvl,
  &_n_Rstgp2_Krat24,
  &_n_Rstgp2_GgKr,
  &_n_Rstgp2_MmKr,
  &_n_Rstgp2_DdKr,
  &_n_Rstgp2_Mm,
  &_n_Rstgp2_Num,
  &_n_Rstgp2_Sever,
  &_n_Rstgp2_Sezon,
  &_n_Rstgp2_Vtch,
  &_n_Rstgp2_Strach,
  &_n_Rstgp2COK_Pri,
  &_n_Rstgp2COK_Dni,
  &_n_Rstgp2COK_Gg,
  &_n_Rstgp2COK_Mm,
  &_n_Rstgp2COK_Dd,
  &_n_RstgISD_ICode,
  &_n_RstgISD_Gg,
  &_n_RstgISD_Mm,
  &_n_RstgISD_StDd,
  &_n_RstgpCOK_Priz,
  &_n_RstgpCOK_Dni,
  &_n_RstgpCOK_Gg,
  &_n_RstgpCOK_Mm,
  &_n_RstgpCOK_Dd,
  &_n_Rstgp_Dbeg,
  &_n_Rstgp_Dd,
  &_n_Rstgp_Dend,
  &_n_Rstgp_Dok,
  &_n_Rstgp_Gg,
  &_n_Rstgp_KodPr,
  &_n_Rstgp_Kolh,
  &_n_Rstgp_Krat,
  &_n_Rstgp_Lgvl,
  &_n_Rstgp_Krat24,
  &_n_Rstgp_GgKr,
  &_n_Rstgp_MmKr,
  &_n_Rstgp_DdKr,
  &_n_Rstgp_Mm,
  &_n_Rstgp_Num,
  &_n_Rstgp_Sever,
  &_n_Rstgp_Sezon,
  &_n_Rstgp_Vtch,
  &_n_Rstgp_Strach,
  &_n_RabRstgp_Dend,
  &_n_Rstgpr_Dbeg,
  &_n_Rstgpr_Dend,
  &_n_Rstgph_Num,
  &_n_Rstgph_Dbeg,
  &_n_Rstgph_Dend,
  &_n_Rstgph_StrSPU,
  &_n_Rstgph_StrHEP,
  &_n_Rstgph_S79HEP,
  &_n_Rstgs_Code,
  &_n_Rstgs_Dd,
  &_n_Rstgs_Gg,
  &_n_Rstgs_Mm,
  &_n_Rstgs_Num,
  &_n_RzrbCl_Ch,
  &_n_RzrbCl_ChH,
  &_n_RzrbCl_ChN,
  &_n_RzrbCl_Kr,
  &_n_RzrbCl_KrN,
  &_n_RzrbCl_Min,
  &_n_RzrbCl_MinH,
  &_n_RzrbCl_MinN,
  &_n_RzrbCl_PcPrem,
  &_n_RzrbCl_Suma,
  &_n_RzrbCl_Suma2,
  &_n_RzrbCl_SumaTr,
  &_n_Rzrb_DKoef,
  &_n_Rzrb_Dbeg,
  &_n_Rzrb_Dend,
  &_n_Rzrb_Dopl,
  &_n_Rzrb_SrNX,
  &_n_Rzrb_SrNX24,
  &_n_Rzrb_SrNXNF,
  &_n_Rzrb_SrNX22,
  &_n_Rzrb_Fras,
  &_n_Rzrb_Fras1,
  &_n_Rzrb_StrSPU,
  &_n_Rzrb_NStrDel,
  &_n_Rzrb_NStrDelI,
  &_n_Rzrb_NStsDel,
  &_n_Rzrb_NStsDelI,
  &_n_Rzrb_NStrD07,
  &_n_Rzrb_NStrD07I,
  &_n_Rzrb_NStsD07,
  &_n_Rzrb_NStsD07I,
  &_n_Rzrb_StrHEP,
  &_n_Rzrb_NStsHEP,
  &_n_Rzrb_NStsHEPI,
  &_n_Rzrb_NStsH07,
  &_n_Rzrb_NStsH07I,
  &_n_Rzrb_S79HEP,
  &_n_Rzrb_NS79HEP,
  &_n_Rzrb_NS79HEPI,
  &_n_Rzrb_NS79H07,
  &_n_Rzrb_NS79H07I,
  &_n_Rzrb_Fras2,
  &_n_Rzrb_KodPr,
  &_n_Rzrb_Koef,
  &_n_Rzrb_MaxNras,
  &_n_Rzrb_Mes,
  &_n_Rzrb_Nepol,
  &_n_Rzrb_Nr,
  &_n_Rzrb_Nras,
  &_n_Rzrb_Nrod,
  &_n_Rzrb_Nrs,
  &_n_Rzrb_Ogr,
  &_n_Rzrb_Ogr24,
  &_n_Rzrb_IKf24,
  &_n_Rzrb_OgrNF,
  &_n_Rzrb_IKfNF,
  &_n_Rzrb_Ogr22,
  &_n_Rzrb_IKf22,
  &_n_Rzrb_PrStrach,
  &_n_Rzrb_DtStrach,
  &_n_Rzrb_PrProp,
  &_n_Rzrb_PrPer,
  &_n_Rzrb_Prem,
  &_n_Rzrb_Pr919,
  &_n_Rzrb_StrSuma,
  &_n_Rzrb_Suma,
  &_n_Rzrb_PrKf56,
  &_n_Rzrb_TNepol,
  &_n_Rzrb_TNras,
  &_n_Rzrb_Tkoef,
  &_n_Rzrb_TOpt,
  &_n_Rzrb_TOpti,
  &_n_Rzrb_SumYear,
  &_n_Rzrbr_Dbeg,
  &_n_Rzrbr_Dend,
  &_n_Rzrbr_Nr,
  &_n_Rzrbr_Nrs,
  &_n_Rzrbr_Suma,
  &_n_Rzrbr_Priz,
  &_n_Sezon1,
  &_n_Sezon2,
  &_n_StrSuma,
  &_n_TMax,
  &_n_T_Dok,
  &_n_T_Krat,
  &_n_T_Lgvl,
  &_n_T_Sever,
  &_n_T_Sezon,
  &_n_T_Vtch,
  &_n_T_Vtch1,
  &_n_T_SPOV,
  &_n_kfpov,
  &_n_var_day,
  &_n_var_mon,
  &_n_var_moni,
  &_n_var_year,
  &_n_Rizrb_RabPMIN,
  &_n_DateNazI,
  &_n_DateObrNaz,
  &_n_DateObrNazI,
  &_n_DateObrPer,
  &_n_DateObrPerI,
  &_n_DatePerI,
  &_n_Kfn_Code,
  &_n_Kfn,
  &_n_Shifr,
  &_n_oldkfn,
  &_n_kfn,
  &_n_OldOp,
  &_n_DateOldOp,
  &_n_DateOsob411,
  &_n_DateOsob413,
  &_n_RDatePVV,
  &_n_RDate1000,
  &_n_RDtPerLjot,
  &_n_PrMalZar,
  &_n_prputbsh,
  &_n_OpCurrent,
  &_n_PrKont88,
  &_n_PrKont89,
  &_n_PrOsob201,
  &_n_pros97,
  &_n_prizos97,
  &_n_Fras_Nrod,
  &_n_Fras_Fras,
  &_n_KlMinZar_RabS,
  (StayFD *)ItogZrb,
  (StayFD *)L_Protstg,
  (StayFD *)Pstg,
  (StayFD *)PstgPodz,
  (StayFD *)Stg13,
  (StayFD *)RPrc,
  (StayFD *)RPrcSv,
  (StayFD *)R_Klprof1,
  (StayFD *)R_Klprof2,
  (StayFD *)Rizrb,
  (StayFD *)RizrbKf,
  (StayFD *)Rizrbs,
  (StayFD *)Rstg,
  (StayFD *)Rstgp,
  (StayFD *)Rstgpr,
  (StayFD *)Rstgs,
  (StayFD *)RstgISD,
  (StayFD *)Rstgph,
  (StayFD *)Rzrbr,
  (StayFD *)Rzrb,
  (StayFD *)RzrbCh,
  (StayFD *)RzrbNras,
  (StayFD *)RabBase,
  (StayFD *)A_Fras,
  NULL};

PICMODULEEND(NAZ_BAI)

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
