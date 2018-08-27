//-------------------------------------------------------------------------
// STAY/W      Resource file LS.XME
//-------------------------------------------------------------------------
// Created 08\12\2009 09:52
//-------------------------------------------------------------------------

#include "LS.h"

PICMODULEBEG(LS)

static StayFD _nn_LS = {NULL,TAG_PIC,0,0,0,0,"LS",NULL};
StayDate Atst_Data;
StayFD _n_Atst_Data = {&Atst_Data,0,0,0,CLS_Date,0,"Atst_Data","Дата аттестата"};
pStayFD _Atst_Data = &_n_Atst_Data;

DWORD Atst_Num;
StayFD _n_Atst_Num = {&Atst_Num,0,0,0,CLS_L,0,"Atst_Num","Номер документа (исходящий)"};
pStayFD _Atst_Num = &_n_Atst_Num;

BYTE  Atst_Type;
StayFD _n_Atst_Type = {&Atst_Type,0,0,0,CLS_S,0,"Atst_Type","Тип аттестата"};
pStayFD _Atst_Type = &_n_Atst_Type;

BYTE  CheZp_Code;
StayFD _n_CheZp_Code = {&CheZp_Code,0,0,0,CLS_S,0,"CheZp_Code","Код зоны работы/прожив.(KLZON)"};
pStayFD _CheZp_Code = &_n_CheZp_Code;

StayDate CheZp_DateBeg;
StayFD _n_CheZp_DateBeg = {&CheZp_DateBeg,0,0,0,CLS_Date,0,"CheZp_DateBeg","Дата начала периода"};
pStayFD _CheZp_DateBeg = &_n_CheZp_DateBeg;

StayDate CheZp_DateEnd;
StayFD _n_CheZp_DateEnd = {&CheZp_DateEnd,0,0,0,CLS_Date,0,"CheZp_DateEnd","Дата конца периода"};
pStayFD _CheZp_DateEnd = &_n_CheZp_DateEnd;

BYTE  CheZp_Nomig;
StayFD _n_CheZp_Nomig = {&CheZp_Nomig,0,0,0,CLS_S,0,"CheZp_Nomig","Номер иждивенца"};
pStayFD _CheZp_Nomig = &_n_CheZp_Nomig;

BYTE  CheZp_Time;
StayFD _n_CheZp_Time = {&CheZp_Time,0,0,0,CLS_S,0,"CheZp_Time","Временное/постоянное пребыв."};
pStayFD _CheZp_Time = &_n_CheZp_Time;

BYTE  Che_Chpri;
StayFD _n_Che_Chpri = {&Che_Chpri,0,0,0,CLS_S,0,"Che_Chpri","Категория причастности к ЧАЭС"};
pStayFD _Che_Chpri = &_n_Che_Chpri;

StayDate Che_Dkprav;
StayFD _n_Che_Dkprav = {&Che_Dkprav,0,0,0,CLS_Date,0,"Che_Dkprav","Дата конца права"};
pStayFD _Che_Dkprav = &_n_Che_Dkprav;

StayDate Che_Dnprav;
StayFD _n_Che_Dnprav = {&Che_Dnprav,0,0,0,CLS_Date,0,"Che_Dnprav","Дата начала права"};
pStayFD _Che_Dnprav = &_n_Che_Dnprav;

BYTE  Che_Dobr;
StayFD _n_Che_Dobr = {&Che_Dobr,0,0,0,CLS_S,0,"Che_Dobr","Призн. участия в ликв. на добр"};
pStayFD _Che_Dobr = &_n_Che_Dobr;

BYTE  Che_Kbl;
StayFD _n_Che_Kbl = {&Che_Kbl,0,0,0,CLS_S,0,"Che_Kbl","Код блокировки (KLBL)"};
pStayFD _Che_Kbl = &_n_Che_Kbl;

BYTE  Che_Kzp;
StayFD _n_Che_Kzp = {&Che_Kzp,0,0,0,CLS_S,0,"Che_Kzp","Код зоны проживания (1,2,3,4)"};
pStayFD _Che_Kzp = &_n_Che_Kzp;

BYTE  Che_Kzr;
StayFD _n_Che_Kzr = {&Che_Kzr,0,0,0,CLS_S,0,"Che_Kzr","Код зоны работы(1,2,3,4-гряз)"};
pStayFD _Che_Kzr = &_n_Che_Kzr;

BYTE  Che_Likvid;
StayFD _n_Che_Likvid = {&Che_Likvid,0,0,0,CLS_S,0,"Che_Likvid","Признак(1-ликв,2-постр,3-ядер)"};
pStayFD _Che_Likvid = &_n_Che_Likvid;

BYTE  Che_Luch;
StayFD _n_Che_Luch = {&Che_Luch,0,0,0,CLS_S,0,"Che_Luch","Призн. перенес. лучев.болезни"};
pStayFD _Che_Luch = &_n_Che_Luch;

BYTE  Che_Nomig;
StayFD _n_Che_Nomig = {&Che_Nomig,0,0,0,CLS_S,0,"Che_Nomig","Номер иждивенца"};
pStayFD _Che_Nomig = &_n_Che_Nomig;

BYTE  Che_Prod;
StayFD _n_Che_Prod = {&Che_Prod,0,0,0,CLS_S,0,"Che_Prod","Право на надбавку на прод.пит"};
pStayFD _Che_Prod = &_n_Che_Prod;

WORD  Che_Proj;
StayFD _n_Che_Proj = {&Che_Proj,0,0,0,CLS_I,0,"Che_Proj","Процент повыш.за прожив.в зо"};
pStayFD _Che_Proj = &_n_Che_Proj;

WORD  Che_Ptru;
StayFD _n_Che_Ptru = {&Che_Ptru,0,0,0,CLS_I,0,"Che_Ptru","% потери трудоспособности"};
pStayFD _Che_Ptru = &_n_Che_Ptru;

WORD  Che_Snig;
StayFD _n_Che_Snig = {&Che_Snig,0,0,0,CLS_I,0,"Che_Snig","Снижение пенс.возр. (в мес.)"};
pStayFD _Che_Snig = &_n_Che_Snig;

BYTE  Che_Tpos;
StayFD _n_Che_Tpos = {&Che_Tpos,0,0,0,CLS_S,0,"Che_Tpos","Тип пострадавшего (KLPOST)"};
pStayFD _Che_Tpos = &_n_Che_Tpos;

char Igd_Dolja_Adr[101];
StayFD _n_Igd_Dolja_Adr = {&Igd_Dolja_Adr,0,0,0,CLS_V,100,"Igd_Dolja_Adr","Адрес долевой пенсии"};
pStayFD _Igd_Dolja_Adr = &_n_Igd_Dolja_Adr;

StayDate Igd_Dolja_DBeg;
StayFD _n_Igd_Dolja_DBeg = {&Igd_Dolja_DBeg,0,0,0,CLS_Date,0,"Igd_Dolja_DBeg","Дата выделения долевой пенсии с"};
pStayFD _Igd_Dolja_DBeg = &_n_Igd_Dolja_DBeg;

StayDate Igd_Dolja_DEnd;
StayFD _n_Igd_Dolja_DEnd = {&Igd_Dolja_DEnd,0,0,0,CLS_Date,0,"Igd_Dolja_DEnd","Дата выделения доли по"};
pStayFD _Igd_Dolja_DEnd = &_n_Igd_Dolja_DEnd;

DWORD Igd_Dolja_Nls;
StayFD _n_Igd_Dolja_Nls = {&Igd_Dolja_Nls,0,0,0,CLS_L,0,"Igd_Dolja_Nls","Номер Л/С в основном - долевой,в долевой - основной"};
pStayFD _Igd_Dolja_Nls = &_n_Igd_Dolja_Nls;

BYTE  Igd_Dolja_NumP;
StayFD _n_Igd_Dolja_NumP = {&Igd_Dolja_NumP,0,0,0,CLS_S,0,"Igd_Dolja_NumP","Номер долевой пенсии"};
pStayFD _Igd_Dolja_NumP = &_n_Igd_Dolja_NumP;

DWORD Igd_Dolja_Os;
StayFD _n_Igd_Dolja_Os = {&Igd_Dolja_Os,0,0,0,CLS_L,0,"Igd_Dolja_Os","Код отделения связи"};
pStayFD _Igd_Dolja_Os = &_n_Igd_Dolja_Os;

BYTE  Igd_Dolja_PAdr;
StayFD _n_Igd_Dolja_PAdr = {&Igd_Dolja_PAdr,0,0,0,CLS_S,0,"Igd_Dolja_PAdr","(1)-долевая пенсия по основному адресу"};
pStayFD _Igd_Dolja_PAdr = &_n_Igd_Dolja_PAdr;

BYTE  Igd_Dolja_PrDN;
StayFD _n_Igd_Dolja_PrDN = {&Igd_Dolja_PrDN,0,0,0,CLS_S,0,"Igd_Dolja_PrDN","(1)-долевая пенсия донозначена"};
pStayFD _Igd_Dolja_PrDN = &_n_Igd_Dolja_PrDN;

StayDate Igd_Drog;
StayFD _n_Igd_Drog = {&Igd_Drog,0,0,0,CLS_Date,0,"Igd_Drog","Дата рождения"};
pStayFD _Igd_Drog = &_n_Igd_Drog;

StayDate Igd_Dso;
StayFD _n_Igd_Dso = {&Igd_Dso,0,0,0,CLS_Date,0,"Igd_Dso","Дата смерти (отъезда)"};
pStayFD _Igd_Dso = &_n_Igd_Dso;

StayDate Igd_Dusn;
StayFD _n_Igd_Dusn = {&Igd_Dusn,0,0,0,CLS_Date,0,"Igd_Dusn","Дата усыновления"};
pStayFD _Igd_Dusn = &_n_Igd_Dusn;

char Igd_Fio[51];
StayFD _n_Igd_Fio = {&Igd_Fio,0,0,0,CLS_V,50,"Igd_Fio","Фамилия, имя, отчество"};
pStayFD _Igd_Fio = &_n_Igd_Fio;

BYTE  Igd_Katnetr;
StayFD _n_Igd_Katnetr = {&Igd_Katnetr,0,0,0,CLS_S,0,"Igd_Katnetr","Категория нетрудоспособности"};
pStayFD _Igd_Katnetr = &_n_Igd_Katnetr;

BYTE  Igd_Katrod;
StayFD _n_Igd_Katrod = {&Igd_Katrod,0,0,0,CLS_S,0,"Igd_Katrod","Категория родства (KLROD)"};
pStayFD _Igd_Katrod = &_n_Igd_Katrod;

BYTE  Igd_Nomig;
StayFD _n_Igd_Nomig = {&Igd_Nomig,0,0,0,CLS_S,0,"Igd_Nomig","Номер иждивенца (Igd)"};
pStayFD _Igd_Nomig = &_n_Igd_Nomig;

BYTE  Igd_Pol;
StayFD _n_Igd_Pol = {&Igd_Pol,0,0,0,CLS_S,0,"Igd_Pol","Пол (1 - М, 2 - Ж)"};
pStayFD _Igd_Pol = &_n_Igd_Pol;

BYTE  Igd_Prab;
StayFD _n_Igd_Prab = {&Igd_Prab,0,0,0,CLS_S,0,"Igd_Prab","Признак работы"};
pStayFD _Igd_Prab = &_n_Igd_Prab;

BYTE  Igd_Prdel;
StayFD _n_Igd_Prdel = {&Igd_Prdel,0,0,0,CLS_S,0,"Igd_Prdel","Признак удаления"};
pStayFD _Igd_Prdel = &_n_Igd_Prdel;

BYTE  Igd_Psn;
StayFD _n_Igd_Psn = {&Igd_Psn,0,0,0,CLS_S,0,"Igd_Psn","Код причины снятия с оплаты"};
pStayFD _Igd_Psn = &_n_Igd_Psn;

BYTE  Igd_Sir;
StayFD _n_Igd_Sir = {&Igd_Sir,0,0,0,CLS_S,0,"Igd_Sir","Признак   сироты"};
pStayFD _Igd_Sir = &_n_Igd_Sir;

StayDate Inv_Dkpi;
StayFD _n_Inv_Dkpi = {&Inv_Dkpi,0,0,0,CLS_Date,0,"Inv_Dkpi","Дата кон. периода инвалидности"};
pStayFD _Inv_Dkpi = &_n_Inv_Dkpi;

StayDate Inv_Dni;
StayFD _n_Inv_Dni = {&Inv_Dni,0,0,0,CLS_Date,0,"Inv_Dni","Дата наступления инвалидности"};
pStayFD _Inv_Dni = &_n_Inv_Dni;

StayDate Inv_Dnpi;
StayFD _n_Inv_Dnpi = {&Inv_Dnpi,0,0,0,CLS_Date,0,"Inv_Dnpi","Дата нач. периода инвалидности"};
pStayFD _Inv_Dnpi = &_n_Inv_Dnpi;

BYTE  Inv_Grinv;
StayFD _n_Inv_Grinv = {&Inv_Grinv,0,0,0,CLS_S,0,"Inv_Grinv","Группа инвалидности (1,2,3)"};
pStayFD _Inv_Grinv = &_n_Inv_Grinv;

BYTE  Inv_Kbl;
StayFD _n_Inv_Kbl = {&Inv_Kbl,0,0,0,CLS_S,0,"Inv_Kbl","Код блокировки (KLBL)"};
pStayFD _Inv_Kbl = &_n_Inv_Kbl;

BYTE  Inv_Kod;
StayFD _n_Inv_Kod = {&Inv_Kod,0,0,0,CLS_S,0,"Inv_Kod","Код причины инвалидн. (KLPINV)"};
pStayFD _Inv_Kod = &_n_Inv_Kod;

BYTE  Inv_Nomig;
StayFD _n_Inv_Nomig = {&Inv_Nomig,0,0,0,CLS_S,0,"Inv_Nomig","Номер иждивенца"};
pStayFD _Inv_Nomig = &_n_Inv_Nomig;

BYTE  Inv_Stag;
StayFD _n_Inv_Stag = {&Inv_Stag,0,0,0,CLS_S,0,"Inv_Stag","Стаж на момент наступ. инвалид"};
pStayFD _Inv_Stag = &_n_Inv_Stag;

StayDate Ispl_DatU;
StayFD _n_Ispl_DatU = {&Ispl_DatU,0,0,0,CLS_Date,0,"Ispl_DatU","Дата начала начислен.удержания"};
pStayFD _Ispl_DatU = &_n_Ispl_DatU;

StayDate Ispl_Datae;
StayFD _n_Ispl_Datae = {&Ispl_Datae,0,0,0,CLS_Date,0,"Ispl_Datae","Дата окончания действия %"};
pStayFD _Ispl_Datae = &_n_Ispl_Datae;

StayDate Ispl_Datar;
StayFD _n_Ispl_Datar = {&Ispl_Datar,0,0,0,CLS_Date,0,"Ispl_Datar","Дата рождения ребенка"};
pStayFD _Ispl_Datar = &_n_Ispl_Datar;

StayDate Ispl_Datast;
StayFD _n_Ispl_Datast = {&Ispl_Datast,0,0,0,CLS_Date,0,"Ispl_Datast","Дата рождения старшего"};
pStayFD _Ispl_Datast = &_n_Ispl_Datast;

StayDate Ispl_Datin;
StayFD _n_Ispl_Datin = {&Ispl_Datin,0,0,0,CLS_Date,0,"Ispl_Datin","Дата инспектора"};
pStayFD _Ispl_Datin = &_n_Ispl_Datin;

StayDate Ispl_Displ;
StayFD _n_Ispl_Displ = {&Ispl_Displ,0,0,0,CLS_Date,0,"Ispl_Displ","Дата начала удержания по докум"};
pStayFD _Ispl_Displ = &_n_Ispl_Displ;

int6 Ispl_Dolg;
StayFD _n_Ispl_Dolg = {&Ispl_Dolg,0,0,0,CLS_Hs,2,"Ispl_Dolg","Сумма перв. долга по докум."};
pStayFD _Ispl_Dolg = &_n_Ispl_Dolg;

StayDate Ispl_Dpd;
StayFD _n_Ispl_Dpd = {&Ispl_Dpd,0,0,0,CLS_Date,0,"Ispl_Dpd","Дата поступления"};
pStayFD _Ispl_Dpd = &_n_Ispl_Dpd;

StayDate Ispl_Dv;
StayFD _n_Ispl_Dv = {&Ispl_Dv,0,0,0,CLS_Date,0,"Ispl_Dv","Дата выдачи"};
pStayFD _Ispl_Dv = &_n_Ispl_Dv;

BYTE  Ispl_Gor;
StayFD _n_Ispl_Gor = {&Ispl_Gor,0,0,0,CLS_S,0,"Ispl_Gor","Признак город/село"};
pStayFD _Ispl_Gor = &_n_Ispl_Gor;

BYTE  Ispl_Kd;
StayFD _n_Ispl_Kd = {&Ispl_Kd,0,0,0,CLS_S,0,"Ispl_Kd","Код документа (KLDOUD)"};
pStayFD _Ispl_Kd = &_n_Ispl_Kd;

BYTE  Ispl_Kdp;
StayFD _n_Ispl_Kdp = {&Ispl_Kdp,0,0,0,CLS_S,0,"Ispl_Kdp","Заявл.на уд. свыше 50%"};
pStayFD _Ispl_Kdp = &_n_Ispl_Kdp;

WORD  Ispl_Kin;
StayFD _n_Ispl_Kin = {&Ispl_Kin,0,0,0,CLS_I,0,"Ispl_Kin","Код инспектора"};
pStayFD _Ispl_Kin = &_n_Ispl_Kin;

BYTE  Ispl_Kold;
StayFD _n_Ispl_Kold = {&Ispl_Kold,0,0,0,CLS_S,0,"Ispl_Kold","Количество детей взыскателя"};
pStayFD _Ispl_Kold = &_n_Ispl_Kold;

BYTE  Ispl_Ksud;
StayFD _n_Ispl_Ksud = {&Ispl_Ksud,0,0,0,CLS_S,0,"Ispl_Ksud","Код организации, выдав. докум."};
pStayFD _Ispl_Ksud = &_n_Ispl_Ksud;

BYTE  Ispl_Kud;
StayFD _n_Ispl_Kud = {&Ispl_Kud,0,0,0,CLS_S,0,"Ispl_Kud","Код удержания (KLUD)"};
pStayFD _Ispl_Kud = &_n_Ispl_Kud;

WORD  Ispl_Kvz;
StayFD _n_Ispl_Kvz = {&Ispl_Kvz,0,0,0,CLS_I,0,"Ispl_Kvz","Код взыскателя (0-физ.лицо)"};
pStayFD _Ispl_Kvz = &_n_Ispl_Kvz;

char Ispl_Nd[10];
StayFD _n_Ispl_Nd = {&Ispl_Nd,0,0,0,CLS_V,9,"Ispl_Nd","Номер  документа"};
pStayFD _Ispl_Nd = &_n_Ispl_Nd;

WORD  Ispl_Num;
StayFD _n_Ispl_Num = {&Ispl_Num,0,0,0,CLS_I,0,"Ispl_Num","Порядковый номер докум. в Ispl"};
pStayFD _Ispl_Num = &_n_Ispl_Num;

int6 Ispl_Ost;
StayFD _n_Ispl_Ost = {&Ispl_Ost,0,0,0,CLS_Hs,2,"Ispl_Ost","Остаток задол. на текущ.момент"};
pStayFD _Ispl_Ost = &_n_Ispl_Ost;

int6 Ispl_Per;
StayFD _n_Ispl_Per = {&Ispl_Per,0,0,0,CLS_Hs,2,"Ispl_Per","Процент удержания на дату рожд"};
pStayFD _Ispl_Per = &_n_Ispl_Per;

BYTE  Ispl_Per1;
StayFD _n_Ispl_Per1 = {&Ispl_Per1,0,0,0,CLS_S,0,"Ispl_Per1","Дробная часть удержания"};
pStayFD _Ispl_Per1 = &_n_Ispl_Per1;

int6 Ispl_PerSud;
StayFD _n_Ispl_PerSud = {&Ispl_PerSud,0,0,0,CLS_Hs,2,"Ispl_PerSud","Проц/cумма ежемес. уд. по док"};
pStayFD _Ispl_PerSud = &_n_Ispl_PerSud;

BYTE  Ispl_PerSud1;
StayFD _n_Ispl_PerSud1 = {&Ispl_PerSud1,0,0,0,CLS_S,0,"Ispl_PerSud1","Дробная часть удержания"};
pStayFD _Ispl_PerSud1 = &_n_Ispl_PerSud1;

int   Ispl_PostDolg;
StayFD _n_Ispl_PostDolg = {&Ispl_PostDolg,0,0,0,CLS_Ls,2,"Ispl_PostDolg","Задолженность по почт.сбору"};
pStayFD _Ispl_PostDolg = &_n_Ispl_PostDolg;

BYTE  Ispl_Rkold;
StayFD _n_Ispl_Rkold = {&Ispl_Rkold,0,0,0,CLS_S,0,"Ispl_Rkold","Кол-во близнецов"};
pStayFD _Ispl_Rkold = &_n_Ispl_Rkold;

int   Ispl_Rud;
StayFD _n_Ispl_Rud = {&Ispl_Rud,0,0,0,CLS_Ls,2,"Ispl_Rud","Проц. ежемесячных удержаний"};
pStayFD _Ispl_Rud = &_n_Ispl_Rud;

short Ispl_Rudp;
StayFD _n_Ispl_Rudp = {&Ispl_Rudp,0,0,0,CLS_Is,2,"Ispl_Rudp","Проц. удерж.на вр. погаш.долга"};
pStayFD _Ispl_Rudp = &_n_Ispl_Rudp;

int6 Ispl_SRud;
StayFD _n_Ispl_SRud = {&Ispl_SRud,0,0,0,CLS_Hs,2,"Ispl_SRud","Сумма ежемесячных удержаний"};
pStayFD _Ispl_SRud = &_n_Ispl_SRud;

BYTE  Ispl_Sp;
StayFD _n_Ispl_Sp = {&Ispl_Sp,0,0,0,CLS_S,0,"Ispl_Sp","Удержания в % или сумма (1,2)"};
pStayFD _Ispl_Sp = &_n_Ispl_Sp;

BYTE  Ispl_Spdet;
StayFD _n_Ispl_Spdet = {&Ispl_Spdet,0,0,0,CLS_S,0,"Ispl_Spdet","Способ выплат на детей"};
pStayFD _Ispl_Spdet = &_n_Ispl_Spdet;

BYTE  Ispl_Spos;
StayFD _n_Ispl_Spos = {&Ispl_Spos,0,0,0,CLS_S,0,"Ispl_Spos","Способ выплаты (п/п,плат. пор)"};
pStayFD _Ispl_Spos = &_n_Ispl_Spos;

int6 Ispl_SumUd;
StayFD _n_Ispl_SumUd = {&Ispl_SumUd,0,0,0,CLS_Hs,2,"Ispl_SumUd","Расчетная сумма,c кот.берут уд"};
pStayFD _Ispl_SumUd = &_n_Ispl_SumUd;

char Ispl_Vhn[10];
StayFD _n_Ispl_Vhn = {&Ispl_Vhn,0,0,0,CLS_V,9,"Ispl_Vhn","Входящий номер"};
pStayFD _Ispl_Vhn = &_n_Ispl_Vhn;

uint6 Kor_IdCode;
StayFD _n_Kor_IdCode = {&Kor_IdCode,0,0,0,CLS_H,0,"Kor_IdCode","Идентификационный номер кормильца"};
pStayFD _Kor_IdCode = &_n_Kor_IdCode;

StayDate Kor_Datsm;
StayFD _n_Kor_Datsm = {&Kor_Datsm,0,0,0,CLS_Date,0,"Kor_Datsm","Дата смерти"};
pStayFD _Kor_Datsm = &_n_Kor_Datsm;

StayDate Kor_Drog;
StayFD _n_Kor_Drog = {&Kor_Drog,0,0,0,CLS_Date,0,"Kor_Drog","Дата рожд. корм. пенсионера"};
pStayFD _Kor_Drog = &_n_Kor_Drog;

StayDate Kor_Dvpen;
StayFD _n_Kor_Dvpen = {&Kor_Dvpen,0,0,0,CLS_Date,0,"Kor_Dvpen","Дата выхода корм. на пенсию"};
pStayFD _Kor_Dvpen = &_n_Kor_Dvpen;

BYTE  Kor_Katk;
StayFD _n_Kor_Katk = {&Kor_Katk,0,0,0,CLS_S,0,"Kor_Katk","Категория кормильца (KLKOR)"};
pStayFD _Kor_Katk = &_n_Kor_Katk;

BYTE  Kor_Pol;
StayFD _n_Kor_Pol = {&Kor_Pol,0,0,0,CLS_S,0,"Kor_Pol","Пол"};
pStayFD _Kor_Pol = &_n_Kor_Pol;

BYTE  Kor_Prism;
StayFD _n_Kor_Prism = {&Kor_Prism,0,0,0,CLS_S,0,"Kor_Prism","Причина смерти (KLPS)"};
pStayFD _Kor_Prism = &_n_Kor_Prism;

BYTE  Kor_Vozrl;
StayFD _n_Kor_Vozrl = {&Kor_Vozrl,0,0,0,CLS_S,0,"Kor_Vozrl","Возраст на день смерти (лет)"};
pStayFD _Kor_Vozrl = &_n_Kor_Vozrl;

char Ls_Adrdom[8];
StayFD _n_Ls_Adrdom = {&Ls_Adrdom,0,0,0,CLS_V,7,"Ls_Adrdom","Номер дома"};
pStayFD _Ls_Adrdom = &_n_Ls_Adrdom;

char Ls_Adrkorp[3];
StayFD _n_Ls_Adrkorp = {&Ls_Adrkorp,0,0,0,CLS_V,2,"Ls_Adrkorp","Номер корпуса"};
pStayFD _Ls_Adrkorp = &_n_Ls_Adrkorp;

char Ls_Adrkv[5];
StayFD _n_Ls_Adrkv = {&Ls_Adrkv,0,0,0,CLS_V,4,"Ls_Adrkv","Номер квартиры"};
pStayFD _Ls_Adrkv = &_n_Ls_Adrkv;

WORD  Ls_Adrul;
StayFD _n_Ls_Adrul = {&Ls_Adrul,0,0,0,CLS_I,0,"Ls_Adrul","Код улицы (KLUL)"};
pStayFD _Ls_Adrul = &_n_Ls_Adrul;

StayDate Ls_Dnac;
StayFD _n_Ls_Dnac = {&Ls_Dnac,0,0,0,CLS_Date,0,"Ls_Dnac","Дата последнего начисления"};
pStayFD _Ls_Dnac = &_n_Ls_Dnac;

BYTE  Ls_Dolya;
StayFD _n_Ls_Dolya = {&Ls_Dolya,0,0,0,CLS_S,0,"Ls_Dolya","Выделенная доля-1"};
pStayFD _Ls_Dolya = &_n_Ls_Dolya;

BYTE  Ls_Drk;
StayFD _n_Ls_Drk = {&Ls_Drk,0,0,0,CLS_S,0,"Ls_Drk","Kорректностъ даты рождения"};
pStayFD _Ls_Drk = &_n_Ls_Drk;

StayDate Ls_Drog;
StayFD _n_Ls_Drog = {&Ls_Drog,0,0,0,CLS_Date,0,"Ls_Drog","Дата рождения"};
pStayFD _Ls_Drog = &_n_Ls_Drog;

char Ls_Fio[51];
StayFD _n_Ls_Fio = {&Ls_Fio,0,0,0,CLS_V,50,"Ls_Fio","Фамилия, имя, отчество"};
pStayFD _Ls_Fio = &_n_Ls_Fio;

BYTE  Ls_Grjd;
StayFD _n_Ls_Grjd = {&Ls_Grjd,0,0,0,CLS_S,0,"Ls_Grjd","Гражданин Украины-1(2-перес)"};
pStayFD _Ls_Grjd = &_n_Ls_Grjd;

uint6 Ls_IdCode;
StayFD _n_Ls_IdCode = {&Ls_IdCode,0,0,0,CLS_H,0,"Ls_IdCode","Идентификационный номер"};
pStayFD _Ls_IdCode = &_n_Ls_IdCode;

DWORD Ls_Indots;
StayFD _n_Ls_Indots = {&Ls_Indots,0,0,0,CLS_L,0,"Ls_Indots","Индекс отделения связи (KLI)"};
pStayFD _Ls_Indots = &_n_Ls_Indots;

WORD  Ls_Kfn;
StayFD _n_Ls_Kfn = {&Ls_Kfn,0,0,0,CLS_I,0,"Ls_Kfn","Код основной выплаты"};
pStayFD _Ls_Kfn = &_n_Ls_Kfn;

DWORD Ls_Nls;
StayFD _n_Ls_Nls = {&Ls_Nls,0,0,0,CLS_L,0,"Ls_Nls","Номер л/сч получателя пенсии"};
pStayFD _Ls_Nls = &_n_Ls_Nls;

char Ls_Ntel[8];
StayFD _n_Ls_Ntel = {&Ls_Ntel,0,0,0,CLS_V,7,"Ls_Ntel","Телефон"};
pStayFD _Ls_Ntel = &_n_Ls_Ntel;

char Ls_Pasp[15];
StayFD _n_Ls_Pasp = {&Ls_Pasp,0,0,0,CLS_V,14,"Ls_Pasp","Серия и номер паспорта"};
pStayFD _Ls_Pasp = &_n_Ls_Pasp;

BYTE  Ls_Pol;
StayFD _n_Ls_Pol = {&Ls_Pol,0,0,0,CLS_S,0,"Ls_Pol","Пол (1 - м, 2 - ж)"};
pStayFD _Ls_Pol = &_n_Ls_Pol;

BYTE  Ls_Prnp;
StayFD _n_Ls_Prnp = {&Ls_Prnp,0,0,0,CLS_S,0,"Ls_Prnp","1(2)-назнач. в 1(2) полуг."};
pStayFD _Ls_Prnp = &_n_Ls_Prnp;

BYTE  Ls_Ptk;
StayFD _n_Ls_Ptk = {&Ls_Ptk,0,0,0,CLS_S,0,"Ls_Ptk","Дело назначено ПТК(1)"};
pStayFD _Ls_Ptk = &_n_Ls_Ptk;

BYTE  Ls_Rab;
StayFD _n_Ls_Rab = {&Ls_Rab,0,0,0,CLS_S,0,"Ls_Rab","Признак работы (KLPRAB)"};
pStayFD _Ls_Rab = &_n_Ls_Rab;

WORD  Ls_Raj;
StayFD _n_Ls_Raj = {&Ls_Raj,0,0,0,CLS_I,0,"Ls_Raj","Код района"};
pStayFD _Ls_Raj = &_n_Ls_Raj;

WORD  Ls_Shifr;
StayFD _n_Ls_Shifr = {&Ls_Shifr,0,0,0,CLS_I,0,"Ls_Shifr","Шифр пенсии"};
pStayFD _Ls_Shifr = &_n_Ls_Shifr;

BYTE  Ls_Spos;
StayFD _n_Ls_Spos = {&Ls_Spos,0,0,0,CLS_S,0,"Ls_Spos","Способ выплаты (1-, 2-, 3-)"};
pStayFD _Ls_Spos = &_n_Ls_Spos;

BYTE  Ls_Ssh;
StayFD _n_Ls_Ssh = {&Ls_Ssh,0,0,0,CLS_S,0,"Ls_Ssh","Связь с сельским хоз.-1(прож)"};
pStayFD _Ls_Ssh = &_n_Ls_Ssh;

BYTE  Ls_Vbper;
StayFD _n_Ls_Vbper = {&Ls_Vbper,0,0,0,CLS_S,0,"Ls_Vbper","1-выпл.осн.спос. в ближ.период"};
pStayFD _Ls_Vbper = &_n_Ls_Vbper;

BYTE  Ls_Vid;
StayFD _n_Ls_Vid = {&Ls_Vid,0,0,0,CLS_S,0,"Ls_Vid","Вид пенсии (KLVPEN)"};
pStayFD _Ls_Vid = &_n_Ls_Vid;

BYTE  Ls_Vzvan;
StayFD _n_Ls_Vzvan = {&Ls_Vzvan,0,0,0,CLS_S,0,"Ls_Vzvan","Воинское звание (KLVZVAN)"};
pStayFD _Ls_Vzvan = &_n_Ls_Vzvan;

WORD  NUdr_Bj;
StayFD _n_NUdr_Bj = {&NUdr_Bj,0,0,0,CLS_I,0,"NUdr_Bj","Призн(4-сп,4-пер,4-т.вед,1-на"};
pStayFD _NUdr_Bj = &_n_NUdr_Bj;

StayDate NUdr_Datkvit;
StayFD _n_NUdr_Datkvit = {&NUdr_Datkvit,0,0,0,CLS_Date,0,"NUdr_Datkvit","Дата форм.квит."};
pStayFD _NUdr_Datkvit = &_n_NUdr_Datkvit;

WORD  NUdr_God;
StayFD _n_NUdr_God = {&NUdr_God,0,0,0,CLS_I,0,"NUdr_God","Год выплаты"};
pStayFD _NUdr_God = &_n_NUdr_God;

WORD  NUdr_GodF;
StayFD _n_NUdr_GodF = {&NUdr_GodF,0,0,0,CLS_I,0,"NUdr_GodF","Год начисления за кот."};
pStayFD _NUdr_GodF = &_n_NUdr_GodF;

WORD  NUdr_Godn;
StayFD _n_NUdr_Godn = {&NUdr_Godn,0,0,0,CLS_I,0,"NUdr_Godn","Год начисления"};
pStayFD _NUdr_Godn = &_n_NUdr_Godn;

WORD  NUdr_Kin;
StayFD _n_NUdr_Kin = {&NUdr_Kin,0,0,0,CLS_I,0,"NUdr_Kin","Код инсп."};
pStayFD _NUdr_Kin = &_n_NUdr_Kin;

BYTE  NUdr_Mec;
StayFD _n_NUdr_Mec = {&NUdr_Mec,0,0,0,CLS_S,0,"NUdr_Mec","Месяц выплаты"};
pStayFD _NUdr_Mec = &_n_NUdr_Mec;

BYTE  NUdr_MecF;
StayFD _n_NUdr_MecF = {&NUdr_MecF,0,0,0,CLS_S,0,"NUdr_MecF","Месяц начисления за кот."};
pStayFD _NUdr_MecF = &_n_NUdr_MecF;

BYTE  NUdr_Mecn;
StayFD _n_NUdr_Mecn = {&NUdr_Mecn,0,0,0,CLS_S,0,"NUdr_Mecn","Месяц начисления"};
pStayFD _NUdr_Mecn = &_n_NUdr_Mecn;

DWORD NUdr_NKvit;
StayFD _n_NUdr_NKvit = {&NUdr_NKvit,0,0,0,CLS_L,0,"NUdr_NKvit","Номер квит."};
pStayFD _NUdr_NKvit = &_n_NUdr_NKvit;

WORD  NUdr_NSpis;
StayFD _n_NUdr_NSpis = {&NUdr_NSpis,0,0,0,CLS_I,0,"NUdr_NSpis","Номер списка"};
pStayFD _NUdr_NSpis = &_n_NUdr_NSpis;

uint6 NUdr_Ost;
StayFD _n_NUdr_Ost = {&NUdr_Ost,0,0,0,CLS_H,2,"NUdr_Ost","Остаток суммы удержания"};
pStayFD _NUdr_Ost = &_n_NUdr_Ost;

uint6 NUdr_SNac;
StayFD _n_NUdr_SNac = {&NUdr_SNac,0,0,0,CLS_H,2,"NUdr_SNac","Сумма начисления"};
pStayFD _NUdr_SNac = &_n_NUdr_SNac;

uint6 NUdr_Sved;
StayFD _n_NUdr_Sved = {&NUdr_Sved,0,0,0,CLS_H,2,"NUdr_Sved","Сумма в ведомости"};
pStayFD _NUdr_Sved = &_n_NUdr_Sved;

WORD  Nac_Bj;
StayFD _n_Nac_Bj = {&Nac_Bj,0,0,0,CLS_I,0,"Nac_Bj","(4-сп,4-пер,4-т/вед,1-нач,1-не"};
pStayFD _Nac_Bj = &_n_Nac_Bj;

StayDate Nac_DatOp;
StayFD _n_Nac_DatOp = {&Nac_DatOp,0,0,0,CLS_Date,0,"Nac_DatOp","Дата операции"};
pStayFD _Nac_DatOp = &_n_Nac_DatOp;

StayDate Nac_DatSpis;
StayFD _n_Nac_DatSpis = {&Nac_DatSpis,0,0,0,CLS_Date,0,"Nac_DatSpis","Дата списка"};
pStayFD _Nac_DatSpis = &_n_Nac_DatSpis;

WORD  Nac_God;
StayFD _n_Nac_God = {&Nac_God,0,0,0,CLS_I,0,"Nac_God","Год начисления"};
pStayFD _Nac_God = &_n_Nac_God;

WORD  Nac_GodF;
StayFD _n_Nac_GodF = {&Nac_GodF,0,0,0,CLS_I,0,"Nac_GodF","Год начисления    --|"};
pStayFD _Nac_GodF = &_n_Nac_GodF;

WORD  Nac_Godn;
StayFD _n_Nac_Godn = {&Nac_Godn,0,0,0,CLS_I,0,"Nac_Godn","Год начисления         |вошла"};
pStayFD _Nac_Godn = &_n_Nac_Godn;

DWORD Nac_IndOts;
StayFD _n_Nac_IndOts = {&Nac_IndOts,0,0,0,CLS_L,0,"Nac_IndOts","Номер отдел.связи"};
pStayFD _Nac_IndOts = &_n_Nac_IndOts;

WORD  Nac_Kfn;
StayFD _n_Nac_Kfn = {&Nac_Kfn,0,0,0,CLS_I,0,"Nac_Kfn","Код выплаты (KLFN)"};
pStayFD _Nac_Kfn = &_n_Nac_Kfn;

WORD  Nac_Kin;
StayFD _n_Nac_Kin = {&Nac_Kin,0,0,0,CLS_I,0,"Nac_Kin","Код инспектора (оператора)"};
pStayFD _Nac_Kin = &_n_Nac_Kin;

BYTE  Nac_Mec;
StayFD _n_Nac_Mec = {&Nac_Mec,0,0,0,CLS_S,0,"Nac_Mec","Месяц начисления"};
pStayFD _Nac_Mec = &_n_Nac_Mec;

BYTE  Nac_MecF;
StayFD _n_Nac_MecF = {&Nac_MecF,0,0,0,CLS_S,0,"Nac_MecF","Месяц начисления    | за котор"};
pStayFD _Nac_MecF = &_n_Nac_MecF;

BYTE  Nac_Mecn;
StayFD _n_Nac_Mecn = {&Nac_Mecn,0,0,0,CLS_S,0,"Nac_Mecn","Месяц начисления     --|куда"};
pStayFD _Nac_Mecn = &_n_Nac_Mecn;

WORD  Nac_Npp;
StayFD _n_Nac_Npp = {&Nac_Npp,0,0,0,CLS_I,0,"Nac_Npp","Порядковый номер выпл. докумен"};
pStayFD _Nac_Npp = &_n_Nac_Npp;

WORD  Nac_Nppn;
StayFD _n_Nac_Nppn = {&Nac_Nppn,0,0,0,CLS_I,0,"Nac_Nppn","N п/п выпл. документа--|неопл"};
pStayFD _Nac_Nppn = &_n_Nac_Nppn;

WORD  Nac_Nved;
StayFD _n_Nac_Nved = {&Nac_Nved,0,0,0,CLS_I,0,"Nac_Nved","Номер ведомости"};
pStayFD _Nac_Nved = &_n_Nac_Nved;

WORD  Nac_Op;
StayFD _n_Nac_Op = {&Nac_Op,0,0,0,CLS_I,0,"Nac_Op","Код операции"};
pStayFD _Nac_Op = &_n_Nac_Op;

int6 Nac_SInd;
StayFD _n_Nac_SInd = {&Nac_SInd,0,0,0,CLS_Hs,2,"Nac_SInd","Cумма индексации"};
pStayFD _Nac_SInd = &_n_Nac_SInd;

int6 Nac_SNac;
StayFD _n_Nac_SNac = {&Nac_SNac,0,0,0,CLS_Hs,2,"Nac_SNac","Cумма начисленная --| начислен"};
pStayFD _Nac_SNac = &_n_Nac_SNac;

int6 Nac_Sved;
StayFD _n_Nac_Sved = {&Nac_Sved,0,0,0,CLS_Hs,2,"Nac_Sved","Cумма в ведомости"};
pStayFD _Nac_Sved = &_n_Nac_Sved;

WORD  Nac_TVed;
StayFD _n_Nac_TVed = {&Nac_TVed,0,0,0,CLS_I,0,"Nac_TVed","доп. тип ведомости"};
pStayFD _Nac_TVed = &_n_Nac_TVed;

WORD  Nac_Tip;
StayFD _n_Nac_Tip = {&Nac_Tip,0,0,0,CLS_I,0,"Nac_Tip","Тип записи"};
pStayFD _Nac_Tip = &_n_Nac_Tip;

StayDate Nazn_Dnaz;
StayFD _n_Nazn_Dnaz = {&Nazn_Dnaz,0,0,0,CLS_Date,0,"Nazn_Dnaz","Дата назначения/перерасч. пен."};
pStayFD _Nazn_Dnaz = &_n_Nazn_Dnaz;

StayDate Nazn_Dobr;
StayFD _n_Nazn_Dobr = {&Nazn_Dobr,0,0,0,CLS_Date,0,"Nazn_Dobr","Дата обращения"};
pStayFD _Nazn_Dobr = &_n_Nazn_Dobr;

WORD  Nazn_Op;
StayFD _n_Nazn_Op = {&Nazn_Op,0,0,0,CLS_I,0,"Nazn_Op","Код операции"};
pStayFD _Nazn_Op = &_n_Nazn_Op;

int6 Nazn_Pensosn;
StayFD _n_Nazn_Pensosn = {&Nazn_Pensosn,0,0,0,CLS_Hs,5,"Nazn_Pensosn","Сумма пенсии без ограничений"};
pStayFD _Nazn_Pensosn = &_n_Nazn_Pensosn;

BYTE  Nazn_Pmax;
StayFD _n_Nazn_Pmax = {&Nazn_Pmax,0,0,0,CLS_S,0,"Nazn_Pmax","Право на повыш максимум ( 1 )"};
pStayFD _Nazn_Pmax = &_n_Nazn_Pmax;

BYTE  Nazn_Prc;
StayFD _n_Nazn_Prc = {&Nazn_Prc,0,0,0,CLS_S,0,"Nazn_Prc","Процент для определения пенсии"};
pStayFD _Nazn_Prc = &_n_Nazn_Prc;

StayDate Np_Dkprav;
StayFD _n_Np_Dkprav = {&Np_Dkprav,0,0,0,CLS_Date,0,"Np_Dkprav","Дата конца права"};
pStayFD _Np_Dkprav = &_n_Np_Dkprav;

StayDate Np_Dnprav;
StayFD _n_Np_Dnprav = {&Np_Dnprav,0,0,0,CLS_Date,0,"Np_Dnprav","Дата начала права"};
pStayFD _Np_Dnprav = &_n_Np_Dnprav;

BYTE  Np_Kbl;
StayFD _n_Np_Kbl = {&Np_Kbl,0,0,0,CLS_S,0,"Np_Kbl","Код блокировки (KLBL)"};
pStayFD _Np_Kbl = &_n_Np_Kbl;

WORD  Np_Kfn;
StayFD _n_Np_Kfn = {&Np_Kfn,0,0,0,CLS_I,0,"Np_Kfn","Код надбавки (KLFN)"};
pStayFD _Np_Kfn = &_n_Np_Kfn;

BYTE  Np_Nomig;
StayFD _n_Np_Nomig = {&Np_Nomig,0,0,0,CLS_S,0,"Np_Nomig","Номер иждивенца"};
pStayFD _Np_Nomig = &_n_Np_Nomig;

BYTE  Np_Pr;
StayFD _n_Np_Pr = {&Np_Pr,0,0,0,CLS_S,0,"Np_Pr","Признак обработки"};
pStayFD _Np_Pr = &_n_Np_Pr;

int6 Np_Snadp;
StayFD _n_Np_Snadp = {&Np_Snadp,0,0,0,CLS_Hs,2,"Np_Snadp","Размер (абсол. величина)"};
pStayFD _Np_Snadp = &_n_Np_Snadp;

WORD  Osob_Code;
StayFD _n_Osob_Code = {&Osob_Code,0,0,0,CLS_I,0,"Osob_Code","Код особенности (Kl_Osob)"};
pStayFD _Osob_Code = &_n_Osob_Code;

WORD  Osob_Priz;
StayFD _n_Osob_Priz = {&Osob_Priz,0,0,0,CLS_I,0,"Osob_Priz","Признак - INT"};
pStayFD _Osob_Priz = &_n_Osob_Priz;

BYTE  Per_CodeDoc;
StayFD _n_Per_CodeDoc = {&Per_CodeDoc,0,0,0,CLS_S,0,"Per_CodeDoc","Код документа по измен(KlDoc)"};
pStayFD _Per_CodeDoc = &_n_Per_CodeDoc;

StayDate Per_DateIz;
StayFD _n_Per_DateIz = {&Per_DateIz,0,0,0,CLS_Date,0,"Per_DateIz","Дата извещения"};
pStayFD _Per_DateIz = &_n_Per_DateIz;

StayDate Per_Datin;
StayFD _n_Per_Datin = {&Per_Datin,0,0,0,CLS_Date,0,"Per_Datin","Дата инспектора"};
pStayFD _Per_Datin = &_n_Per_Datin;

StayDate Per_Dnpen;
StayFD _n_Per_Dnpen = {&Per_Dnpen,0,0,0,CLS_Date,0,"Per_Dnpen","Дата начала выплаты (с)"};
pStayFD _Per_Dnpen = &_n_Per_Dnpen;

WORD  Per_Kfn;
StayFD _n_Per_Kfn = {&Per_Kfn,0,0,0,CLS_I,0,"Per_Kfn","Код выплаты (KLFN)"};
pStayFD _Per_Kfn = &_n_Per_Kfn;

WORD  Per_Kin;
StayFD _n_Per_Kin = {&Per_Kin,0,0,0,CLS_I,0,"Per_Kin","Код инспектора"};
pStayFD _Per_Kin = &_n_Per_Kin;

DWORD Per_NIz;
StayFD _n_Per_NIz = {&Per_NIz,0,0,0,CLS_L,0,"Per_NIz","Номер извещения"};
pStayFD _Per_NIz = &_n_Per_NIz;

WORD  Per_Op;
StayFD _n_Per_Op = {&Per_Op,0,0,0,CLS_I,0,"Per_Op","Код операции"};
pStayFD _Per_Op = &_n_Per_Op;

BYTE  Per_Prper;
StayFD _n_Per_Prper = {&Per_Prper,0,0,0,CLS_S,0,"Per_Prper","Призн.переноса зап. в NAC"};
pStayFD _Per_Prper = &_n_Per_Prper;

BYTE  Per_Psn;
StayFD _n_Per_Psn = {&Per_Psn,0,0,0,CLS_S,0,"Per_Psn","Причина снятия с оплаты(KLPSN)"};
pStayFD _Per_Psn = &_n_Per_Psn;

int6 Per_Rnaz;
StayFD _n_Per_Rnaz = {&Per_Rnaz,0,0,0,CLS_Hs,2,"Per_Rnaz","Ежемесячная сумма для кода вып"};
pStayFD _Per_Rnaz = &_n_Per_Rnaz;

WORD  PplNac_God;
StayFD _n_PplNac_God = {&PplNac_God,0,0,0,CLS_I,0,"PplNac_God","Год погашения переплаты"};
pStayFD _PplNac_God = &_n_PplNac_God;

WORD  PplNac_Mec;
StayFD _n_PplNac_Mec = {&PplNac_Mec,0,0,0,CLS_I,0,"PplNac_Mec","Месяц погашения переплаты"};
pStayFD _PplNac_Mec = &_n_PplNac_Mec;

BYTE  PplNac_Npp;
StayFD _n_PplNac_Npp = {&PplNac_Npp,0,0,0,CLS_S,0,"PplNac_Npp","Номер по порядку записи"};
pStayFD _PplNac_Npp = &_n_PplNac_Npp;

uint6 PplNac_Ost;
StayFD _n_PplNac_Ost = {&PplNac_Ost,0,0,0,CLS_H,2,"PplNac_Ost","Сумма остатка"};
pStayFD _PplNac_Ost = &_n_PplNac_Ost;

uint6 PplNac_Sum;
StayFD _n_PplNac_Sum = {&PplNac_Sum,0,0,0,CLS_H,2,"PplNac_Sum","Сумма погашения переплаты"};
pStayFD _PplNac_Sum = &_n_PplNac_Sum;

StayDate Ppl_DateObn;
StayFD _n_Ppl_DateObn = {&Ppl_DateObn,0,0,0,CLS_Date,0,"Ppl_DateObn","Дата обнаружения переплаты"};
pStayFD _Ppl_DateObn = &_n_Ppl_DateObn;

StayDate Ppl_DatePk;
StayFD _n_Ppl_DatePk = {&Ppl_DatePk,0,0,0,CLS_Date,0,"Ppl_DatePk","Дата конца переплаты"};
pStayFD _Ppl_DatePk = &_n_Ppl_DatePk;

StayDate Ppl_DatePs;
StayFD _n_Ppl_DatePs = {&Ppl_DatePs,0,0,0,CLS_Date,0,"Ppl_DatePs","Дата начала переплаты"};
pStayFD _Ppl_DatePs = &_n_Ppl_DatePs;

StayDate Ppl_DateUdr;
StayFD _n_Ppl_DateUdr = {&Ppl_DateUdr,0,0,0,CLS_Date,0,"Ppl_DateUdr","Дата начала удержаний"};
pStayFD _Ppl_DateUdr = &_n_Ppl_DateUdr;

WORD  Ppl_Kfn;
StayFD _n_Ppl_Kfn = {&Ppl_Kfn,0,0,0,CLS_I,0,"Ppl_Kfn","Вид выплаты по переплате"};
pStayFD _Ppl_Kfn = &_n_Ppl_Kfn;

BYTE  Ppl_Prizn;
StayFD _n_Ppl_Prizn = {&Ppl_Prizn,0,0,0,CLS_S,0,"Ppl_Prizn","Признак(1-раб.,2-смерть)"};
pStayFD _Ppl_Prizn = &_n_Ppl_Prizn;

int6 Ppl_Sum;
StayFD _n_Ppl_Sum = {&Ppl_Sum,0,0,0,CLS_Hs,2,"Ppl_Sum","Сумма переплаты"};
pStayFD _Ppl_Sum = &_n_Ppl_Sum;

int6 Ppl_SumMon;
StayFD _n_Ppl_SumMon = {&Ppl_SumMon,0,0,0,CLS_Hs,2,"Ppl_SumMon","Ежемесячная сумма удержания"};
pStayFD _Ppl_SumMon = &_n_Ppl_SumMon;

int6 Ppl_SumOst;
StayFD _n_Ppl_SumOst = {&Ppl_SumOst,0,0,0,CLS_Hs,2,"Ppl_SumOst","Сумма остатка"};
pStayFD _Ppl_SumOst = &_n_Ppl_SumOst;

BYTE  Ppl_Tip;
StayFD _n_Ppl_Tip = {&Ppl_Tip,0,0,0,CLS_S,0,"Ppl_Tip","Тип орг. обнаруж. переплату"};
pStayFD _Ppl_Tip = &_n_Ppl_Tip;

uint6 Prc_Code;
StayFD _n_Prc_Code = {&Prc_Code,0,0,0,CLS_H,0,"Prc_Code","Код предприятия/организации"};
pStayFD _Prc_Code = &_n_Prc_Code;

BYTE  Prc_Dni;
StayFD _n_Prc_Dni = {&Prc_Dni,0,0,0,CLS_S,0,"Prc_Dni","Кол-во дней стажа"};
pStayFD _Prc_Dni = &_n_Prc_Dni;

BYTE  Prc_God;
StayFD _n_Prc_God = {&Prc_God,0,0,0,CLS_S,0,"Prc_God","Кол-во лет стажа"};
pStayFD _Prc_God = &_n_Prc_God;

BYTE  Prc_Mec;
StayFD _n_Prc_Mec = {&Prc_Mec,0,0,0,CLS_S,0,"Prc_Mec","Кол_во месяцев стажа"};
pStayFD _Prc_Mec = &_n_Prc_Mec;

int   Prc_One;
StayFD _n_Prc_One = {&Prc_One,0,0,0,CLS_Ls,2,"Prc_One","Процент для бюджетных орг."};
pStayFD _Prc_One = &_n_Prc_One;

WORD  Prc_Priz;
StayFD _n_Prc_Priz = {&Prc_Priz,0,0,0,CLS_I,0,"Prc_Priz","Признак"};
pStayFD _Prc_Priz = &_n_Prc_Priz;

int   Prc_Two;
StayFD _n_Prc_Two = {&Prc_Two,0,0,0,CLS_Ls,2,"Prc_Two","Процент для не бюджетных орг."};
pStayFD _Prc_Two = &_n_Prc_Two;

WORD  RabPer_CodIns;
StayFD _n_RabPer_CodIns = {&RabPer_CodIns,0,0,0,CLS_I,0,"RabPer_CodIns","Код инспектора"};
pStayFD _RabPer_CodIns = &_n_RabPer_CodIns;

StayDate RabPer_Date;
StayFD _n_RabPer_Date = {&RabPer_Date,0,0,0,CLS_Date,0,"RabPer_Date","Дата начала / конца работы(1-й нераб день)"};
pStayFD _RabPer_Date = &_n_RabPer_Date;

StayDate RabPer_DateIns;
StayFD _n_RabPer_DateIns = {&RabPer_DateIns,0,0,0,CLS_Date,0,"RabPer_DateIns","Дата инспектора"};
pStayFD _RabPer_DateIns = &_n_RabPer_DateIns;

BYTE  RabPer_Pr;
StayFD _n_RabPer_Pr = {&RabPer_Pr,0,0,0,CLS_S,0,"RabPer_Pr","признак блокировки"};
pStayFD _RabPer_Pr = &_n_RabPer_Pr;

WORD  Rd_CdDoh;
StayFD _n_Rd_CdDoh = {&Rd_CdDoh,0,0,0,CLS_I,0,"Rd_CdDoh","Код категории дохода"};
pStayFD _Rd_CdDoh = &_n_Rd_CdDoh;

BYTE  Rd_Code;
StayFD _n_Rd_Code = {&Rd_Code,0,0,0,CLS_S,0,"Rd_Code","Код кат. чл.семьи (klcfam)"};
pStayFD _Rd_Code = &_n_Rd_Code;

BYTE  Rd_Kv;
StayFD _n_Rd_Kv = {&Rd_Kv,0,0,0,CLS_S,0,"Rd_Kv","Номер квартала"};
pStayFD _Rd_Kv = &_n_Rd_Kv;

BYTE  Rd_Nmes;
StayFD _n_Rd_Nmes = {&Rd_Nmes,0,0,0,CLS_S,0,"Rd_Nmes","Число месяцев"};
pStayFD _Rd_Nmes = &_n_Rd_Nmes;

BYTE  Rd_NomCode;
StayFD _n_Rd_NomCode = {&Rd_NomCode,0,0,0,CLS_S,0,"Rd_NomCode","Порядковый номер по категории"};
pStayFD _Rd_NomCode = &_n_Rd_NomCode;

int6 Rd_Suma;
StayFD _n_Rd_Suma = {&Rd_Suma,0,0,0,CLS_Hs,5,"Rd_Suma","Сумма за период (кв.)"};
pStayFD _Rd_Suma = &_n_Rd_Suma;

int6 Rd_SumaMes;
StayFD _n_Rd_SumaMes = {&Rd_SumaMes,0,0,0,CLS_Hs,5,"Rd_SumaMes","Сумма за месяц"};
pStayFD _Rd_SumaMes = &_n_Rd_SumaMes;

WORD  Rd_Year;
StayFD _n_Rd_Year = {&Rd_Year,0,0,0,CLS_I,0,"Rd_Year","Год"};
pStayFD _Rd_Year = &_n_Rd_Year;

BYTE  Rod_CodeNW;
StayFD _n_Rod_CodeNW = {&Rod_CodeNW,0,0,0,CLS_S,0,"Rod_CodeNW","Прич. не раб.(klnwork.dt)"};
pStayFD _Rod_CodeNW = &_n_Rod_CodeNW;

StayDate Rod_D1;
StayFD _n_Rod_D1 = {&Rod_D1,0,0,0,CLS_Date,0,"Rod_D1","Дата регистрации брака"};
pStayFD _Rod_D1 = &_n_Rod_D1;

StayDate Rod_D2;
StayFD _n_Rod_D2 = {&Rod_D2,0,0,0,CLS_Date,0,"Rod_D2","Дата установления отцовства"};
pStayFD _Rod_D2 = &_n_Rod_D2;

StayDate Rod_DFree;
StayFD _n_Rod_DFree = {&Rod_DFree,0,0,0,CLS_Date,0,"Rod_DFree","Дата увольнения"};
pStayFD _Rod_DFree = &_n_Rod_DFree;

StayDate Rod_DReg;
StayFD _n_Rod_DReg = {&Rod_DReg,0,0,0,CLS_Date,0,"Rod_DReg","Дата регистрации в сз"};
pStayFD _Rod_DReg = &_n_Rod_DReg;

BYTE  Rod_MaskJob;
StayFD _n_Rod_MaskJob = {&Rod_MaskJob,0,0,0,CLS_S,0,"Rod_MaskJob","Призн. наличия работы"};
pStayFD _Rod_MaskJob = &_n_Rod_MaskJob;

BYTE  Rod_Parents;
StayFD _n_Rod_Parents = {&Rod_Parents,0,0,0,CLS_S,0,"Rod_Parents","Кат. родителя   (klpar.dt)"};
pStayFD _Rod_Parents = &_n_Rod_Parents;

WORD  Rod_WorkD;
StayFD _n_Rod_WorkD = {&Rod_WorkD,0,0,0,CLS_I,0,"Rod_WorkD","К-во рабочих дней"};
pStayFD _Rod_WorkD = &_n_Rod_WorkD;

WORD  Shifr_Code;
StayFD _n_Shifr_Code = {&Shifr_Code,0,0,0,CLS_I,0,"Shifr_Code","Код нового шифра пенсии"};
pStayFD _Shifr_Code = &_n_Shifr_Code;

StayDate Shifr_DateC;
StayFD _n_Shifr_DateC = {&Shifr_DateC,0,0,0,CLS_Date,0,"Shifr_DateC","Дата с ..."};
pStayFD _Shifr_DateC = &_n_Shifr_DateC;

WORD  Shifr_InsCod;
StayFD _n_Shifr_InsCod = {&Shifr_InsCod,0,0,0,CLS_I,0,"Shifr_InsCod","Код инспектора"};
pStayFD _Shifr_InsCod = &_n_Shifr_InsCod;

StayDate Shifr_InsDat;
StayFD _n_Shifr_InsDat = {&Shifr_InsDat,0,0,0,CLS_Date,0,"Shifr_InsDat","Дата инспектора"};
pStayFD _Shifr_InsDat = &_n_Shifr_InsDat;

WORD  Shifr_Kfn;
StayFD _n_Shifr_Kfn = {&Shifr_Kfn,0,0,0,CLS_I,0,"Shifr_Kfn","Код основного KFN(Ls_Kfn)"};
pStayFD _Shifr_Kfn = &_n_Shifr_Kfn;

BYTE  Stg_Dni;
StayFD _n_Stg_Dni = {&Stg_Dni,0,0,0,CLS_S,0,"Stg_Dni","Дни"};
pStayFD _Stg_Dni = &_n_Stg_Dni;

BYTE  Stg_God;
StayFD _n_Stg_God = {&Stg_God,0,0,0,CLS_S,0,"Stg_God","Годы"};
pStayFD _Stg_God = &_n_Stg_God;

WORD  Stg_Kods;
StayFD _n_Stg_Kods = {&Stg_Kods,0,0,0,CLS_I,0,"Stg_Kods","Код стажа (KLStg)"};
pStayFD _Stg_Kods = &_n_Stg_Kods;

BYTE  Stg_Mec;
StayFD _n_Stg_Mec = {&Stg_Mec,0,0,0,CLS_S,0,"Stg_Mec","Месяцы"};
pStayFD _Stg_Mec = &_n_Stg_Mec;

StayDate Stg_DEnd;
StayFD _n_Stg_DEnd = {&Stg_DEnd,0,0,0,CLS_Date,0,"Stg_DEnd","Дата последнего стажа"};
pStayFD _Stg_DEnd = &_n_Stg_DEnd;

StayDate Stgp_Dbeg;
StayFD _n_Stgp_Dbeg = {&Stgp_Dbeg,0,0,0,CLS_Date,0,"Stgp_Dbeg","Дата начала"};
pStayFD _Stgp_Dbeg = &_n_Stgp_Dbeg;

BYTE  Stgp_Dd;
StayFD _n_Stgp_Dd = {&Stgp_Dd,0,0,0,CLS_S,0,"Stgp_Dd","Число дней"};
pStayFD _Stgp_Dd = &_n_Stgp_Dd;

StayDate Stgp_Dend;
StayFD _n_Stgp_Dend = {&Stgp_Dend,0,0,0,CLS_Date,0,"Stgp_Dend","Дата конца"};
pStayFD _Stgp_Dend = &_n_Stgp_Dend;

BYTE  Stgp_Dok;
StayFD _n_Stgp_Dok = {&Stgp_Dok,0,0,0,CLS_S,0,"Stgp_Dok","Признак свид. показаний"};
pStayFD _Stgp_Dok = &_n_Stgp_Dok;

BYTE  Stgp_Gg;
StayFD _n_Stgp_Gg = {&Stgp_Gg,0,0,0,CLS_S,0,"Stgp_Gg","Число лет"};
pStayFD _Stgp_Gg = &_n_Stgp_Gg;

WORD  Stgp_Kolh;
StayFD _n_Stgp_Kolh = {&Stgp_Kolh,0,0,0,CLS_I,0,"Stgp_Kolh","Число трудодней в периоде"};
pStayFD _Stgp_Kolh = &_n_Stgp_Kolh;

uint6 Stgp_KodPr;
StayFD _n_Stgp_KodPr = {&Stgp_KodPr,0,0,0,CLS_H,0,"Stgp_KodPr","Код предприятия"};
pStayFD _Stgp_KodPr = &_n_Stgp_KodPr;

BYTE  Stgp_Krat;
StayFD _n_Stgp_Krat = {&Stgp_Krat,0,0,0,CLS_S,0,"Stgp_Krat","Код исчисления стажа"};
pStayFD _Stgp_Krat = &_n_Stgp_Krat;

WORD  Stgp_Lgvl;
StayFD _n_Stgp_Lgvl = {&Stgp_Lgvl,0,0,0,CLS_I,0,"Stgp_Lgvl","Код льготного стажа"};
pStayFD _Stgp_Lgvl = &_n_Stgp_Lgvl;

BYTE  Stgp_Mm;
StayFD _n_Stgp_Mm = {&Stgp_Mm,0,0,0,CLS_S,0,"Stgp_Mm","Число месяцев"};
pStayFD _Stgp_Mm = &_n_Stgp_Mm;

BYTE  Stgp_Sever;
StayFD _n_Stgp_Sever = {&Stgp_Sever,0,0,0,CLS_S,0,"Stgp_Sever","Признак работы в рай.Севера"};
pStayFD _Stgp_Sever = &_n_Stgp_Sever;

BYTE  Stgp_Sezon;
StayFD _n_Stgp_Sezon = {&Stgp_Sezon,0,0,0,CLS_S,0,"Stgp_Sezon","Признак сезонных работ"};
pStayFD _Stgp_Sezon = &_n_Stgp_Sezon;

WORD  Stgp_Vtch;
StayFD _n_Stgp_Vtch = {&Stgp_Vtch,0,0,0,CLS_I,0,"Stgp_Vtch","Признак налич стажа в том чис"};
pStayFD _Stgp_Vtch = &_n_Stgp_Vtch;

BYTE  Sv1_Du;
StayFD _n_Sv1_Du = {&Sv1_Du,0,0,0,CLS_S,0,"Sv1_Du","Доставочный участок"};
pStayFD _Sv1_Du = &_n_Sv1_Du;

BYTE  Sv1_Dvipl;
StayFD _n_Sv1_Dvipl = {&Sv1_Dvipl,0,0,0,CLS_S,0,"Sv1_Dvipl","Дата выплаты (день)"};
pStayFD _Sv1_Dvipl = &_n_Sv1_Dvipl;

BYTE  Sv1_Kus;
StayFD _n_Sv1_Kus = {&Sv1_Kus,0,0,0,CLS_S,0,"Sv1_Kus","Код узла связи"};
pStayFD _Sv1_Kus = &_n_Sv1_Kus;

DWORD Sv1_Os;
StayFD _n_Sv1_Os = {&Sv1_Os,0,0,0,CLS_L,0,"Sv1_Os","Отделение связи"};
pStayFD _Sv1_Os = &_n_Sv1_Os;

WORD  Sv2_Ncsbb;
StayFD _n_Sv2_Ncsbb = {&Sv2_Ncsbb,0,0,0,CLS_I,0,"Sv2_Ncsbb","ЦСВ"};
pStayFD _Sv2_Ncsbb = &_n_Sv2_Ncsbb;

WORD  Sv2_Npsbb;
StayFD _n_Sv2_Npsbb = {&Sv2_Npsbb,0,0,0,CLS_I,0,"Sv2_Npsbb","РСВ"};
pStayFD _Sv2_Npsbb = &_n_Sv2_Npsbb;

char Sv2_Vklad[26];
StayFD _n_Sv2_Vklad = {&Sv2_Vklad,0,0,0,CLS_V,25,"Sv2_Vklad","Номер вклада"};
pStayFD _Sv2_Vklad = &_n_Sv2_Vklad;

char Sv3_Adr[101];
StayFD _n_Sv3_Adr = {&Sv3_Adr,0,0,0,CLS_V,100,"Sv3_Adr","Адрес для 3 способа"};
pStayFD _Sv3_Adr = &_n_Sv3_Adr;

DWORD Sv3_Indots;
StayFD _n_Sv3_Indots = {&Sv3_Indots,0,0,0,CLS_L,0,"Sv3_Indots","Индекс отделения связи (KLI)"};
pStayFD _Sv3_Indots = &_n_Sv3_Indots;

BYTE  Sv3_Tar;
StayFD _n_Sv3_Tar = {&Sv3_Tar,0,0,0,CLS_S,0,"Sv3_Tar","Код тарифа почтового сбора"};
pStayFD _Sv3_Tar = &_n_Sv3_Tar;

char Ud2_Abank[51];
StayFD _n_Ud2_Abank = {&Ud2_Abank,0,0,0,CLS_V,50,"Ud2_Abank","Адрес банка"};
pStayFD _Ud2_Abank = &_n_Ud2_Abank;

StayDate Ud2_Dpd;
StayFD _n_Ud2_Dpd = {&Ud2_Dpd,0,0,0,CLS_Date,0,"Ud2_Dpd","Дата поступления документа"};
pStayFD _Ud2_Dpd = &_n_Ud2_Dpd;

char Ud2_Fio[51];
StayFD _n_Ud2_Fio = {&Ud2_Fio,0,0,0,CLS_V,50,"Ud2_Fio","ФИО взыскателя"};
pStayFD _Ud2_Fio = &_n_Ud2_Fio;

DWORD Ud2_Indots;
StayFD _n_Ud2_Indots = {&Ud2_Indots,0,0,0,CLS_L,0,"Ud2_Indots","Индекс почт. отделения (KLI)"};
pStayFD _Ud2_Indots = &_n_Ud2_Indots;

BYTE  Ud2_Kud;
StayFD _n_Ud2_Kud = {&Ud2_Kud,0,0,0,CLS_S,0,"Ud2_Kud","Код удержания (KLUD)"};
pStayFD _Ud2_Kud = &_n_Ud2_Kud;

char Ud2_Nbank[41];
StayFD _n_Ud2_Nbank = {&Ud2_Nbank,0,0,0,CLS_V,40,"Ud2_Nbank","Наименование банка"};
pStayFD _Ud2_Nbank = &_n_Ud2_Nbank;

WORD  Ud2_Ncsbb;
StayFD _n_Ud2_Ncsbb = {&Ud2_Ncsbb,0,0,0,CLS_I,0,"Ud2_Ncsbb","Номер СБ"};
pStayFD _Ud2_Ncsbb = &_n_Ud2_Ncsbb;

WORD  Ud2_Npsbb;
StayFD _n_Ud2_Npsbb = {&Ud2_Npsbb,0,0,0,CLS_I,0,"Ud2_Npsbb","Номер подотчетного СБ"};
pStayFD _Ud2_Npsbb = &_n_Ud2_Npsbb;

char Ud2_Vhn[10];
StayFD _n_Ud2_Vhn = {&Ud2_Vhn,0,0,0,CLS_V,9,"Ud2_Vhn","Входящий номер документа"};
pStayFD _Ud2_Vhn = &_n_Ud2_Vhn;

char Ud2_Vklad[26];
StayFD _n_Ud2_Vklad = {&Ud2_Vklad,0,0,0,CLS_V,25,"Ud2_Vklad","Номер вклада"};
pStayFD _Ud2_Vklad = &_n_Ud2_Vklad;

char Ud3_Adom[101];
StayFD _n_Ud3_Adom = {&Ud3_Adom,0,0,0,CLS_V,100,"Ud3_Adom","Улица, дом, корпус, квартира"};
pStayFD _Ud3_Adom = &_n_Ud3_Adom;

StayDate Ud3_Dpd;
StayFD _n_Ud3_Dpd = {&Ud3_Dpd,0,0,0,CLS_Date,0,"Ud3_Dpd","Дата поступления документа"};
pStayFD _Ud3_Dpd = &_n_Ud3_Dpd;

char Ud3_Fio[51];
StayFD _n_Ud3_Fio = {&Ud3_Fio,0,0,0,CLS_V,50,"Ud3_Fio","ФИО взыскателя"};
pStayFD _Ud3_Fio = &_n_Ud3_Fio;

DWORD Ud3_Indots;
StayFD _n_Ud3_Indots = {&Ud3_Indots,0,0,0,CLS_L,0,"Ud3_Indots","Индекс отделения связи"};
pStayFD _Ud3_Indots = &_n_Ud3_Indots;

BYTE  Ud3_Kud;
StayFD _n_Ud3_Kud = {&Ud3_Kud,0,0,0,CLS_S,0,"Ud3_Kud","Код удержания (KLUD)"};
pStayFD _Ud3_Kud = &_n_Ud3_Kud;

char Ud3_Vhn[10];
StayFD _n_Ud3_Vhn = {&Ud3_Vhn,0,0,0,CLS_V,9,"Ud3_Vhn","Входящий номер документа"};
pStayFD _Ud3_Vhn = &_n_Ud3_Vhn;

StayDate Ud_Dso;
StayFD _n_Ud_Dso = {&Ud_Dso,0,0,0,CLS_Date,0,"Ud_Dso","Дата снятия удержаний"};
pStayFD _Ud_Dso = &_n_Ud_Dso;

BYTE  Ud_Psn;
StayFD _n_Ud_Psn = {&Ud_Psn,0,0,0,CLS_S,0,"Ud_Psn","Код причины снятия удержаний"};
pStayFD _Ud_Psn = &_n_Ud_Psn;

char Umer_Adr[101];
StayFD _n_Umer_Adr = {&Umer_Adr,0,0,0,CLS_V,100,"Umer_Adr","Адрес заявителя"};
pStayFD _Umer_Adr = &_n_Umer_Adr;

StayDate Umer_DatPoh;
StayFD _n_Umer_DatPoh = {&Umer_DatPoh,0,0,0,CLS_Date,0,"Umer_DatPoh","Дата похорон"};
pStayFD _Umer_DatPoh = &_n_Umer_DatPoh;

StayDate Umer_DatPos;
StayFD _n_Umer_DatPos = {&Umer_DatPos,0,0,0,CLS_Date,0,"Umer_DatPos","Дата начисления пособия"};
pStayFD _Umer_DatPos = &_n_Umer_DatPos;

StayDate Umer_DatSm;
StayFD _n_Umer_DatSm = {&Umer_DatSm,0,0,0,CLS_Date,0,"Umer_DatSm","Дата смерти"};
pStayFD _Umer_DatSm = &_n_Umer_DatSm;

StayDate Umer_DatSp;
StayFD _n_Umer_DatSp = {&Umer_DatSp,0,0,0,CLS_Date,0,"Umer_DatSp","Дата списка"};
pStayFD _Umer_DatSp = &_n_Umer_DatSp;

StayDate Umer_DatZap;
StayFD _n_Umer_DatZap = {&Umer_DatZap,0,0,0,CLS_Date,0,"Umer_DatZap","Дата записи"};
pStayFD _Umer_DatZap = &_n_Umer_DatZap;

char Umer_Fio[51];
StayFD _n_Umer_Fio = {&Umer_Fio,0,0,0,CLS_V,50,"Umer_Fio","ФИО заявителя"};
pStayFD _Umer_Fio = &_n_Umer_Fio;

WORD  Umer_God;
StayFD _n_Umer_God = {&Umer_God,0,0,0,CLS_I,0,"Umer_God","Год нач.недоп.пенс.умершего"};
pStayFD _Umer_God = &_n_Umer_God;

BYTE  Umer_Mec;
StayFD _n_Umer_Mec = {&Umer_Mec,0,0,0,CLS_S,0,"Umer_Mec","Месяц нач.недоп.пенс.умершего"};
pStayFD _Umer_Mec = &_n_Umer_Mec;

BYTE  Umer_Nomig;
StayFD _n_Umer_Nomig = {&Umer_Nomig,0,0,0,CLS_S,0,"Umer_Nomig","номер иждивенца(0-владелец ЛС)"};
pStayFD _Umer_Nomig = &_n_Umer_Nomig;

WORD  Umer_Npp;
StayFD _n_Umer_Npp = {&Umer_Npp,0,0,0,CLS_I,0,"Umer_Npp","Порядк.N нач.недоп.пенс.умершего"};
pStayFD _Umer_Npp = &_n_Umer_Npp;

char Umer_Pasp[16];
StayFD _n_Umer_Pasp = {&Umer_Pasp,0,0,0,CLS_V,15,"Umer_Pasp","Паспорт"};
pStayFD _Umer_Pasp = &_n_Umer_Pasp;

int6 Umer_Pos;
StayFD _n_Umer_Pos = {&Umer_Pos,0,0,0,CLS_Hs,2,"Umer_Pos","Размер похоронного пособия"};
pStayFD _Umer_Pos = &_n_Umer_Pos;

WORD  Umer_Spis;
StayFD _n_Umer_Spis = {&Umer_Spis,0,0,0,CLS_I,0,"Umer_Spis","Номер списка"};
pStayFD _Umer_Spis = &_n_Umer_Spis;

char Umer_Vidan[41];
StayFD _n_Umer_Vidan = {&Umer_Vidan,0,0,0,CLS_V,40,"Umer_Vidan","Кем выдан"};
pStayFD _Umer_Vidan = &_n_Umer_Vidan;

DWORD Umer_Zap;
StayFD _n_Umer_Zap = {&Umer_Zap,0,0,0,CLS_L,0,"Umer_Zap","N записи"};
pStayFD _Umer_Zap = &_n_Umer_Zap;

WORD  Zarab_CodIns;
StayFD _n_Zarab_CodIns = {&Zarab_CodIns,0,0,0,CLS_I,0,"Zarab_CodIns","Код инспектора"};
pStayFD _Zarab_CodIns = &_n_Zarab_CodIns;

StayDate Zarab_DateIns;
StayFD _n_Zarab_DateIns = {&Zarab_DateIns,0,0,0,CLS_Date,0,"Zarab_DateIns","Дата инспектора"};
pStayFD _Zarab_DateIns = &_n_Zarab_DateIns;

BYTE  Zarab_Month;
StayFD _n_Zarab_Month = {&Zarab_Month,0,0,0,CLS_S,0,"Zarab_Month","Месяц заработка"};
pStayFD _Zarab_Month = &_n_Zarab_Month;

DWORD Zarab_SumInd;
StayFD _n_Zarab_SumInd = {&Zarab_SumInd,0,0,0,CLS_L,2,"Zarab_SumInd","Сумма индексации"};
pStayFD _Zarab_SumInd = &_n_Zarab_SumInd;

WORD  Zarab_Year;
StayFD _n_Zarab_Year = {&Zarab_Year,0,0,0,CLS_I,0,"Zarab_Year","Год заработка"};
pStayFD _Zarab_Year = &_n_Zarab_Year;

DWORD Zarab_Zarp;
StayFD _n_Zarab_Zarp = {&Zarab_Zarp,0,0,0,CLS_L,2,"Zarab_Zarp","Сумма заработка"};
pStayFD _Zarab_Zarp = &_n_Zarab_Zarp;

DWORD Zarab_ZarpInd;
StayFD _n_Zarab_ZarpInd = {&Zarab_ZarpInd,0,0,0,CLS_L,2,"Zarab_ZarpInd","Поpиндексиp.сумма заpоботка"};
pStayFD _Zarab_ZarpInd = &_n_Zarab_ZarpInd;

WORD  Zp_Alim;
StayFD _n_Zp_Alim = {&Zp_Alim,0,0,0,CLS_I,0,"Zp_Alim","Кол-во оплаченных дней"};
pStayFD _Zp_Alim = &_n_Zp_Alim;

StayDate Zp_DateB;
StayFD _n_Zp_DateB = {&Zp_DateB,0,0,0,CLS_Date,0,"Zp_DateB","Дата начала выпрлаты"};
pStayFD _Zp_DateB = &_n_Zp_DateB;

StayDate Zp_DateE;
StayFD _n_Zp_DateE = {&Zp_DateE,0,0,0,CLS_Date,0,"Zp_DateE","Дата конца выплаты"};
pStayFD _Zp_DateE = &_n_Zp_DateE;

int6 Zp_Razm;
StayFD _n_Zp_Razm = {&Zp_Razm,0,0,0,CLS_Hs,5,"Zp_Razm","Размер зарплаты"};
pStayFD _Zp_Razm = &_n_Zp_Razm;

BYTE  Zrb_DKoef;
StayFD _n_Zrb_DKoef = {&Zrb_DKoef,0,0,0,CLS_S,0,"Zrb_DKoef","Признак зар. за неполн. мес."};
pStayFD _Zrb_DKoef = &_n_Zrb_DKoef;

StayDate Zrb_Dbeg;
StayFD _n_Zrb_Dbeg = {&Zrb_Dbeg,0,0,0,CLS_Date,0,"Zrb_Dbeg","Дата начала"};
pStayFD _Zrb_Dbeg = &_n_Zrb_Dbeg;

StayDate Zrb_Dend;
StayFD _n_Zrb_Dend = {&Zrb_Dend,0,0,0,CLS_Date,0,"Zrb_Dend","Дата конца"};
pStayFD _Zrb_Dend = &_n_Zrb_Dend;

uint6 Zrb_KodPr;
StayFD _n_Zrb_KodPr = {&Zrb_KodPr,0,0,0,CLS_H,0,"Zrb_KodPr","Код предприятия"};
pStayFD _Zrb_KodPr = &_n_Zrb_KodPr;

WORD  Zrb_Koef;
StayFD _n_Zrb_Koef = {&Zrb_Koef,0,0,0,CLS_I,2,"Zrb_Koef","Доп.коэф. коррегирования"};
pStayFD _Zrb_Koef = &_n_Zrb_Koef;

BYTE  Zrb_Nepol;
StayFD _n_Zrb_Nepol = {&Zrb_Nepol,0,0,0,CLS_S,0,"Zrb_Nepol","Признак зар. за неполн. мес."};
pStayFD _Zrb_Nepol = &_n_Zrb_Nepol;

BYTE  Zrb_Nr;
StayFD _n_Zrb_Nr = {&Zrb_Nr,0,0,0,CLS_S,0,"Zrb_Nr","Номер родителя"};
pStayFD _Zrb_Nr = &_n_Zrb_Nr;

BYTE  Zrb_Nrs;
StayFD _n_Zrb_Nrs = {&Zrb_Nrs,0,0,0,CLS_S,0,"Zrb_Nrs","Номер расчета заработка"};
pStayFD _Zrb_Nrs = &_n_Zrb_Nrs;

int6 Zrb_Suma;
StayFD _n_Zrb_Suma = {&Zrb_Suma,0,0,0,CLS_Hs,5,"Zrb_Suma","Сумма заработка"};
pStayFD _Zrb_Suma = &_n_Zrb_Suma;

StayDate Zrbs_Dendz;
StayFD _n_Zrbs_Dendz = {&Zrbs_Dendz,0,0,0,CLS_Date,0,"Zrbs_Dendz","Дата последнего заработка (кон"};
pStayFD _Zrbs_Dendz = &_n_Zrbs_Dendz;

BYTE  Zrbs_Mes;
StayFD _n_Zrbs_Mes = {&Zrbs_Mes,0,0,0,CLS_S,0,"Zrbs_Mes","Кол-во месяцев"};
pStayFD _Zrbs_Mes = &_n_Zrbs_Mes;

BYTE  Zrbs_Nepol;
StayFD _n_Zrbs_Nepol = {&Zrbs_Nepol,0,0,0,CLS_S,0,"Zrbs_Nepol","Вид заработка"};
pStayFD _Zrbs_Nepol = &_n_Zrbs_Nepol;

BYTE  Zrbs_Nr;
StayFD _n_Zrbs_Nr = {&Zrbs_Nr,0,0,0,CLS_S,0,"Zrbs_Nr","Номер родителя"};
pStayFD _Zrbs_Nr = &_n_Zrbs_Nr;

BYTE  Zrbs_Nrs;
StayFD _n_Zrbs_Nrs = {&Zrbs_Nrs,0,0,0,CLS_S,0,"Zrbs_Nrs","Номер расчета заработка"};
pStayFD _Zrbs_Nrs = &_n_Zrbs_Nrs;

int6 Zrbs_Zar;
StayFD _n_Zrbs_Zar = {&Zrbs_Zar,0,0,0,CLS_Hs,5,"Zrbs_Zar","Среднемесячный заработок"};
pStayFD _Zrbs_Zar = &_n_Zrbs_Zar;

int6 Zrbs_Zregr;
StayFD _n_Zrbs_Zregr = {&Zrbs_Zregr,0,0,0,CLS_Hs,5,"Zrbs_Zregr","Заработок для примен. регрес."};
pStayFD _Zrbs_Zregr = &_n_Zrbs_Zregr;

WORD  VidOs_Code;
StayFD _n_VidOs_Code = {&VidOs_Code,0,0,0,CLS_I,0,"VidOs_Code","Код особенности (Kl_Osob)"};
pStayFD _VidOs_Code = &_n_VidOs_Code;

StayDate VidOs_DateB;
StayFD _n_VidOs_DateB = {&VidOs_DateB,0,0,0,CLS_Date,0,"VidOs_DateB","Дата начала действия"};
pStayFD _VidOs_DateB = &_n_VidOs_DateB;

StayDate VidOs_DateE;
StayFD _n_VidOs_DateE = {&VidOs_DateE,0,0,0,CLS_Date,0,"VidOs_DateE","Дата окончания действия"};
pStayFD _VidOs_DateE = &_n_VidOs_DateE;

WORD  VidOs_Priz;
StayFD _n_VidOs_Priz = {&VidOs_Priz,0,0,0,CLS_I,0,"VidOs_Priz","Признак"};
pStayFD _VidOs_Priz = &_n_VidOs_Priz;

int   VidOs_Sum;
StayFD _n_VidOs_Sum = {&VidOs_Sum,0,0,0,CLS_Ls,2,"VidOs_Sum","Значение"};
pStayFD _VidOs_Sum = &_n_VidOs_Sum;

BYTE  Stag_Nr;
StayFD _n_Stag_Nr = {&Stag_Nr,0,0,0,CLS_S,0,"Stag_Nr",""};
pStayFD _Stag_Nr = &_n_Stag_Nr;

BYTE  Stag_Dni;
StayFD _n_Stag_Dni = {&Stag_Dni,0,0,0,CLS_S,0,"Stag_Dni","Дни"};
pStayFD _Stag_Dni = &_n_Stag_Dni;

BYTE  Stag_God;
StayFD _n_Stag_God = {&Stag_God,0,0,0,CLS_S,0,"Stag_God","Годы"};
pStayFD _Stag_God = &_n_Stag_God;

WORD  Stag_Kods;
StayFD _n_Stag_Kods = {&Stag_Kods,0,0,0,CLS_I,0,"Stag_Kods","Код стажа (KLStg)"};
pStayFD _Stag_Kods = &_n_Stag_Kods;

BYTE  Stag_Mec;
StayFD _n_Stag_Mec = {&Stag_Mec,0,0,0,CLS_S,0,"Stag_Mec","Месяцы"};
pStayFD _Stag_Mec = &_n_Stag_Mec;

StayDate Stag_DEnd;
StayFD _n_Stag_DEnd = {&Stag_DEnd,0,0,0,CLS_Date,0,"Stag_DEnd","Дата последнего стажа"};
pStayFD _Stag_DEnd = &_n_Stag_DEnd;

BYTE  Stagp_Nr;
StayFD _n_Stagp_Nr = {&Stagp_Nr,0,0,0,CLS_S,0,"Stagp_Nr",""};
pStayFD _Stagp_Nr = &_n_Stagp_Nr;

StayDate Stagp_Dbeg;
StayFD _n_Stagp_Dbeg = {&Stagp_Dbeg,0,0,0,CLS_Date,0,"Stagp_Dbeg","Дата начала"};
pStayFD _Stagp_Dbeg = &_n_Stagp_Dbeg;

BYTE  Stagp_Dd;
StayFD _n_Stagp_Dd = {&Stagp_Dd,0,0,0,CLS_S,0,"Stagp_Dd","Число дней"};
pStayFD _Stagp_Dd = &_n_Stagp_Dd;

StayDate Stagp_Dend;
StayFD _n_Stagp_Dend = {&Stagp_Dend,0,0,0,CLS_Date,0,"Stagp_Dend","Дата конца"};
pStayFD _Stagp_Dend = &_n_Stagp_Dend;

BYTE  Stagp_Dok;
StayFD _n_Stagp_Dok = {&Stagp_Dok,0,0,0,CLS_S,0,"Stagp_Dok","Признак свид. показаний"};
pStayFD _Stagp_Dok = &_n_Stagp_Dok;

BYTE  Stagp_Gg;
StayFD _n_Stagp_Gg = {&Stagp_Gg,0,0,0,CLS_S,0,"Stagp_Gg","Число лет"};
pStayFD _Stagp_Gg = &_n_Stagp_Gg;

WORD  Stagp_Kolh;
StayFD _n_Stagp_Kolh = {&Stagp_Kolh,0,0,0,CLS_I,0,"Stagp_Kolh","Число трудодней в периоде"};
pStayFD _Stagp_Kolh = &_n_Stagp_Kolh;

uint6 Stagp_KodPr;
StayFD _n_Stagp_KodPr = {&Stagp_KodPr,0,0,0,CLS_H,0,"Stagp_KodPr","Код предприятия"};
pStayFD _Stagp_KodPr = &_n_Stagp_KodPr;

BYTE  Stagp_Krat;
StayFD _n_Stagp_Krat = {&Stagp_Krat,0,0,0,CLS_S,0,"Stagp_Krat","Код исчисления стажа"};
pStayFD _Stagp_Krat = &_n_Stagp_Krat;

WORD  Stagp_Lgvl;
StayFD _n_Stagp_Lgvl = {&Stagp_Lgvl,0,0,0,CLS_I,0,"Stagp_Lgvl","Код льготного стажа"};
pStayFD _Stagp_Lgvl = &_n_Stagp_Lgvl;

BYTE  Stagp_Mm;
StayFD _n_Stagp_Mm = {&Stagp_Mm,0,0,0,CLS_S,0,"Stagp_Mm","Число месяцев"};
pStayFD _Stagp_Mm = &_n_Stagp_Mm;

BYTE  Stagp_Sever;
StayFD _n_Stagp_Sever = {&Stagp_Sever,0,0,0,CLS_S,0,"Stagp_Sever","Признак работы в рай.Севера"};
pStayFD _Stagp_Sever = &_n_Stagp_Sever;

BYTE  Stagp_Sezon;
StayFD _n_Stagp_Sezon = {&Stagp_Sezon,0,0,0,CLS_S,0,"Stagp_Sezon","Признак сезонных работ"};
pStayFD _Stagp_Sezon = &_n_Stagp_Sezon;

WORD  Stagp_Vtch;
StayFD _n_Stagp_Vtch = {&Stagp_Vtch,0,0,0,CLS_I,0,"Stagp_Vtch","Признак налич стажа в том чис"};
pStayFD _Stagp_Vtch = &_n_Stagp_Vtch;

BYTE  Stagp_Krat24;
StayFD _n_Stagp_Krat24 = {&Stagp_Krat24,0,0,0,CLS_S,0,"Stagp_Krat24","Кратн.с 2004"};
pStayFD _Stagp_Krat24 = &_n_Stagp_Krat24;

BYTE  Stagp_GgKr;
StayFD _n_Stagp_GgKr = {&Stagp_GgKr,0,0,0,CLS_S,0,"Stagp_GgKr","Годи   - Кратн.с 2004"};
pStayFD _Stagp_GgKr = &_n_Stagp_GgKr;

BYTE  Stagp_MmKr;
StayFD _n_Stagp_MmKr = {&Stagp_MmKr,0,0,0,CLS_S,0,"Stagp_MmKr","Месяци - Кратн.с 2004"};
pStayFD _Stagp_MmKr = &_n_Stagp_MmKr;

BYTE  Stagp_DdKr;
StayFD _n_Stagp_DdKr = {&Stagp_DdKr,0,0,0,CLS_S,0,"Stagp_DdKr","Дни    - Кратн.с 2004"};
pStayFD _Stagp_DdKr = &_n_Stagp_DdKr;

BYTE  Stagp_COKPriz;
StayFD _n_Stagp_COKPriz = {&Stagp_COKPriz,0,0,0,CLS_S,0,"Stagp_COKPriz",""};
pStayFD _Stagp_COKPriz = &_n_Stagp_COKPriz;

BYTE  Stagp_COKDni;
StayFD _n_Stagp_COKDni = {&Stagp_COKDni,0,0,0,CLS_S,0,"Stagp_COKDni",""};
pStayFD _Stagp_COKDni = &_n_Stagp_COKDni;

BYTE  Stagp_COKGg;
StayFD _n_Stagp_COKGg = {&Stagp_COKGg,0,0,0,CLS_S,0,"Stagp_COKGg",""};
pStayFD _Stagp_COKGg = &_n_Stagp_COKGg;

BYTE  Stagp_COKMm;
StayFD _n_Stagp_COKMm = {&Stagp_COKMm,0,0,0,CLS_S,0,"Stagp_COKMm",""};
pStayFD _Stagp_COKMm = &_n_Stagp_COKMm;

BYTE  Stagp_COKDd;
StayFD _n_Stagp_COKDd = {&Stagp_COKDd,0,0,0,CLS_S,0,"Stagp_COKDd",""};
pStayFD _Stagp_COKDd = &_n_Stagp_COKDd;

BYTE  Kr_Num;
StayFD _n_Kr_Num = {&Kr_Num,0,0,0,CLS_S,0,"Kr_Num","Номер кормильца"};
pStayFD _Kr_Num = &_n_Kr_Num;

BYTE  Kr_Code;
StayFD _n_Kr_Code = {&Kr_Code,0,0,0,CLS_S,0,"Kr_Code","Код категории кормильца"};
pStayFD _Kr_Code = &_n_Kr_Code;

BYTE  Kr_Age;
StayFD _n_Kr_Age = {&Kr_Age,0,0,0,CLS_S,0,"Kr_Age","Возраст кормильца"};
pStayFD _Kr_Age = &_n_Kr_Age;

StayDate Kr_DateP;
StayFD _n_Kr_DateP = {&Kr_DateP,0,0,0,CLS_Date,0,"Kr_DateP","Дата вихода на пенсию"};
pStayFD _Kr_DateP = &_n_Kr_DateP;

StayDate Kr_DateR;
StayFD _n_Kr_DateR = {&Kr_DateR,0,0,0,CLS_Date,0,"Kr_DateR","Дата рождения кормильца"};
pStayFD _Kr_DateR = &_n_Kr_DateR;

StayDate Kr_DateSm;
StayFD _n_Kr_DateSm = {&Kr_DateSm,0,0,0,CLS_Date,0,"Kr_DateSm","Дата смерти кормильца"};
pStayFD _Kr_DateSm = &_n_Kr_DateSm;

BYTE  Kr_DieCode;
StayFD _n_Kr_DieCode = {&Kr_DieCode,0,0,0,CLS_S,0,"Kr_DieCode","Код причини смерти"};
pStayFD _Kr_DieCode = &_n_Kr_DieCode;

WORD  Kr_Sex;
StayFD _n_Kr_Sex = {&Kr_Sex,0,0,0,CLS_I,0,"Kr_Sex","Пол"};
pStayFD _Kr_Sex = &_n_Kr_Sex;

char Kr_Fio[51];
StayFD _n_Kr_Fio = {&Kr_Fio,0,0,0,CLS_V,50,"Kr_Fio","ФИО"};
pStayFD _Kr_Fio = &_n_Kr_Fio;

BYTE  Kr_VZvan;
StayFD _n_Kr_VZvan = {&Kr_VZvan,0,0,0,CLS_S,0,"Kr_VZvan","Воинское звание"};
pStayFD _Kr_VZvan = &_n_Kr_VZvan;

uint6 Kr_IdCode;
StayFD _n_Kr_IdCode = {&Kr_IdCode,0,0,0,CLS_H,0,"Kr_IdCode","Идентиф.код"};
pStayFD _Kr_IdCode = &_n_Kr_IdCode;

BYTE  Kr_Pen0124;
StayFD _n_Kr_Pen0124 = {&Kr_Pen0124,0,0,0,CLS_S,0,"Kr_Pen0124",""};
pStayFD _Kr_Pen0124 = &_n_Kr_Pen0124;

BYTE  Kr_Type;
StayFD _n_Kr_Type = {&Kr_Type,0,0,0,CLS_S,0,"Kr_Type",""};
pStayFD _Kr_Type = &_n_Kr_Type;

BYTE  Kr_Tpos;
StayFD _n_Kr_Tpos = {&Kr_Tpos,0,0,0,CLS_S,0,"Kr_Tpos",""};
pStayFD _Kr_Tpos = &_n_Kr_Tpos;

BYTE  Kr_Grinv;
StayFD _n_Kr_Grinv = {&Kr_Grinv,0,0,0,CLS_S,0,"Kr_Grinv",""};
pStayFD _Kr_Grinv = &_n_Kr_Grinv;

WORD  Kr_Ptru;
StayFD _n_Kr_Ptru = {&Kr_Ptru,0,0,0,CLS_I,0,"Kr_Ptru",""};
pStayFD _Kr_Ptru = &_n_Kr_Ptru;

BYTE  Kr_PrSmShax;
StayFD _n_Kr_PrSmShax = {&Kr_PrSmShax,0,0,0,CLS_S,0,"Kr_PrSmShax",""};
pStayFD _Kr_PrSmShax = &_n_Kr_PrSmShax;

BYTE  Kr_PrSmShPZ;
StayFD _n_Kr_PrSmShPZ = {&Kr_PrSmShPZ,0,0,0,CLS_S,0,"Kr_PrSmShPZ",""};
pStayFD _Kr_PrSmShPZ = &_n_Kr_PrSmShPZ;

WORD  Kr_MaskOsb;
StayFD _n_Kr_MaskOsb = {&Kr_MaskOsb,0,0,0,CLS_I,0,"Kr_MaskOsb",""};
pStayFD _Kr_MaskOsb = &_n_Kr_MaskOsb;

int6 Kr_DPStgInv;
StayFD _n_Kr_DPStgInv = {&Kr_DPStgInv,0,0,0,CLS_Hs,2,"Kr_DPStgInv",""};
pStayFD _Kr_DPStgInv = &_n_Kr_DPStgInv;

int6 Kr_DPStgVsr;
StayFD _n_Kr_DPStgVsr = {&Kr_DPStgVsr,0,0,0,CLS_Hs,2,"Kr_DPStgVsr",""};
pStayFD _Kr_DPStgVsr = &_n_Kr_DPStgVsr;

WORD  Kr_Razv1;
StayFD _n_Kr_Razv1 = {&Kr_Razv1,0,0,0,CLS_I,0,"Kr_Razv1","Развитие"};
pStayFD _Kr_Razv1 = &_n_Kr_Razv1;

WORD  Kr_Razv2;
StayFD _n_Kr_Razv2 = {&Kr_Razv2,0,0,0,CLS_I,0,"Kr_Razv2","Развитие"};
pStayFD _Kr_Razv2 = &_n_Kr_Razv2;

StayDate Kr_Razv3;
StayFD _n_Kr_Razv3 = {&Kr_Razv3,0,0,0,CLS_Date,0,"Kr_Razv3","Развитие"};
pStayFD _Kr_Razv3 = &_n_Kr_Razv3;

DWORD Ar1_Code;
StayFD _n_Ar1_Code = {&Ar1_Code,0,0,0,CLS_L,0,"Ar1_Code",""};
pStayFD _Ar1_Code = &_n_Ar1_Code;

WORD  Ar1_Priz;
StayFD _n_Ar1_Priz = {&Ar1_Priz,0,0,0,CLS_I,0,"Ar1_Priz","Признак"};
pStayFD _Ar1_Priz = &_n_Ar1_Priz;

WORD  Ar1_Priz1;
StayFD _n_Ar1_Priz1 = {&Ar1_Priz1,0,0,0,CLS_I,0,"Ar1_Priz1","Признак1"};
pStayFD _Ar1_Priz1 = &_n_Ar1_Priz1;

StayDate Ar1_Date;
StayFD _n_Ar1_Date = {&Ar1_Date,0,0,0,CLS_Date,0,"Ar1_Date",""};
pStayFD _Ar1_Date = &_n_Ar1_Date;

StayDate Ar1_Date1;
StayFD _n_Ar1_Date1 = {&Ar1_Date1,0,0,0,CLS_Date,0,"Ar1_Date1",""};
pStayFD _Ar1_Date1 = &_n_Ar1_Date1;

StayDate Ar1_Date2;
StayFD _n_Ar1_Date2 = {&Ar1_Date2,0,0,0,CLS_Date,0,"Ar1_Date2",""};
pStayFD _Ar1_Date2 = &_n_Ar1_Date2;

int   Ar1_Sum;
StayFD _n_Ar1_Sum = {&Ar1_Sum,0,0,0,CLS_Ls,2,"Ar1_Sum","Значение"};
pStayFD _Ar1_Sum = &_n_Ar1_Sum;

int   Ar1_Ind;
StayFD _n_Ar1_Ind = {&Ar1_Ind,0,0,0,CLS_Ls,5,"Ar1_Ind","Значение"};
pStayFD _Ar1_Ind = &_n_Ar1_Ind;

DWORD Ar1_PrUI4;
StayFD _n_Ar1_PrUI4 = {&Ar1_PrUI4,0,0,0,CLS_L,0,"Ar1_PrUI4",""};
pStayFD _Ar1_PrUI4 = &_n_Ar1_PrUI4;

WORD  Ar1_PrUI2;
StayFD _n_Ar1_PrUI2 = {&Ar1_PrUI2,0,0,0,CLS_I,0,"Ar1_PrUI2",""};
pStayFD _Ar1_PrUI2 = &_n_Ar1_PrUI2;

WORD  Ar1_Pr1UI2;
StayFD _n_Ar1_Pr1UI2 = {&Ar1_Pr1UI2,0,0,0,CLS_I,0,"Ar1_Pr1UI2",""};
pStayFD _Ar1_Pr1UI2 = &_n_Ar1_Pr1UI2;

DWORD Ar2_Code;
StayFD _n_Ar2_Code = {&Ar2_Code,0,0,0,CLS_L,0,"Ar2_Code",""};
pStayFD _Ar2_Code = &_n_Ar2_Code;

WORD  Ar2_Priz;
StayFD _n_Ar2_Priz = {&Ar2_Priz,0,0,0,CLS_I,0,"Ar2_Priz","Признак"};
pStayFD _Ar2_Priz = &_n_Ar2_Priz;

StayDate Ar2_Date1;
StayFD _n_Ar2_Date1 = {&Ar2_Date1,0,0,0,CLS_Date,0,"Ar2_Date1",""};
pStayFD _Ar2_Date1 = &_n_Ar2_Date1;

StayDate Ar2_Date2;
StayFD _n_Ar2_Date2 = {&Ar2_Date2,0,0,0,CLS_Date,0,"Ar2_Date2",""};
pStayFD _Ar2_Date2 = &_n_Ar2_Date2;

int   Ar2_Sum;
StayFD _n_Ar2_Sum = {&Ar2_Sum,0,0,0,CLS_Ls,2,"Ar2_Sum","Значение"};
pStayFD _Ar2_Sum = &_n_Ar2_Sum;

int   Ar2_Ind;
StayFD _n_Ar2_Ind = {&Ar2_Ind,0,0,0,CLS_Ls,5,"Ar2_Ind","Значение"};
pStayFD _Ar2_Ind = &_n_Ar2_Ind;

DWORD Ar2_PrUI4;
StayFD _n_Ar2_PrUI4 = {&Ar2_PrUI4,0,0,0,CLS_L,0,"Ar2_PrUI4",""};
pStayFD _Ar2_PrUI4 = &_n_Ar2_PrUI4;

WORD  Ar2_PrUI2;
StayFD _n_Ar2_PrUI2 = {&Ar2_PrUI2,0,0,0,CLS_I,0,"Ar2_PrUI2",""};
pStayFD _Ar2_PrUI2 = &_n_Ar2_PrUI2;

WORD  Pd_Num;
StayFD _n_Pd_Num = {&Pd_Num,0,0,0,CLS_I,0,"Pd_Num","номер кормильца"};
pStayFD _Pd_Num = &_n_Pd_Num;

char Pd_Fam[51];
StayFD _n_Pd_Fam = {&Pd_Fam,0,0,0,CLS_V,50,"Pd_Fam","Пр_звище"};
pStayFD _Pd_Fam = &_n_Pd_Fam;

char Pd_Name[51];
StayFD _n_Pd_Name = {&Pd_Name,0,0,0,CLS_V,50,"Pd_Name","_м\'я"};
pStayFD _Pd_Name = &_n_Pd_Name;

char Pd_Otch[51];
StayFD _n_Pd_Otch = {&Pd_Otch,0,0,0,CLS_V,50,"Pd_Otch","По-батьков_"};
pStayFD _Pd_Otch = &_n_Pd_Otch;

uint6 Pd_IdCd;
StayFD _n_Pd_IdCd = {&Pd_IdCd,0,0,0,CLS_H,0,"Pd_IdCd","_дентиф_кац_йний номер пенс_онера"};
pStayFD _Pd_IdCd = &_n_Pd_IdCd;

extern StayDataset _n_B_Ls;
extern StayDataset _n_B_Ppl;
extern StayDataset _n_B_PplNac;
extern StayDataset _n_B_Zrbs;
extern StayDataset _n_B_Sv1;
extern StayDataset _n_B_Sv2;
extern StayDataset _n_B_Sv3;
extern StayDataset _n_B_Per;
extern StayDataset _n_B_Np;
extern StayDataset _n_B_Prc;
extern StayDataset _n_B_Nac;
extern StayDataset _n_B_NacOp;
extern StayDataset _n_B_NacKfn;
extern StayDataset _n_B_Stg;
extern StayDataset _n_B_Stgp;
extern StayDataset _n_B_Zrb;
extern StayDataset _n_B_Kor;
extern StayDataset _n_B_Igd;
extern StayDataset _n_B_Dolja;
extern StayDataset _n_B_Inv;
extern StayDataset _n_B_Che;
extern StayDataset _n_B_CheZp;
extern StayDataset _n_B_Nazn;
extern StayDataset _n_B_Osob;
extern StayDataset _n_B_Atst;
extern StayDataset _n_B_Umer;
extern StayDataset _n_B_Ispl;
extern StayDataset _n_B_Ud;
extern StayDataset _n_B_Det;
extern StayDataset _n_B_NUdr;
extern StayDataset _n_B_UdMec;
extern StayDataset _n_B_Ud2;
extern StayDataset _n_B_Ud3;
extern StayDataset _n_B_Rd;
extern StayDataset _n_B_Rod;
extern StayDataset _n_B_RabPer;
extern StayDataset _n_B_Zarab;
extern StayDataset _n_B_Zp;
extern StayDataset _n_B_Shifr;
extern StayDataset _n_B_VidOs;
extern StayDataset _n_B_Kr;
extern StayDataset _n_B_Stag;
extern StayDataset _n_B_Stagp;
extern StayDataset _n_B_Ar1;
extern StayDataset _n_B_Ar2;
extern StayDataset _n_B_Pd;
static pStayFD tcm_B_Ls[] =
{
 (StayFD *)&_n_Ls_Nls,
 (StayFD *)&_n_Ls_Spos,
 (StayFD *)&_n_Ls_Fio,
 (StayFD *)&_n_Ls_Indots,
 (StayFD *)&_n_Ls_Shifr,
 (StayFD *)&_n_Ls_Vid,
 (StayFD *)&_n_Ls_Kfn,
 (StayFD *)&_n_Ls_Pol,
 (StayFD *)&_n_Ls_Drog,
 (StayFD *)&_n_Ls_Pasp,
 (StayFD *)&_n_Ls_Ntel,
 (StayFD *)&_n_Ls_Adrul,
 (StayFD *)&_n_Ls_Adrdom,
 (StayFD *)&_n_Ls_Adrkorp,
 (StayFD *)&_n_Ls_Adrkv,
 (StayFD *)&_n_Ls_Grjd,
 (StayFD *)&_n_Ls_Vzvan,
 (StayFD *)&_n_Ls_Dolya,
 (StayFD *)&_n_Ls_Ssh,
 (StayFD *)&_n_Ls_Rab,
 (StayFD *)&_n_Ls_Prnp,
 (StayFD *)&_n_Ls_Drk,
 (StayFD *)&_n_Ls_Raj,
 (StayFD *)&_n_Ls_Ptk,
 (StayFD *)&_n_Ls_Vbper,
 (StayFD *)&_n_Ls_Dnac,
 (StayFD *)&_n_Ls_IdCode,
 (StayFD *)&_n_B_Ppl,
 (StayFD *)&_n_B_Zrbs,
 (StayFD *)&_n_B_Sv1,
 (StayFD *)&_n_B_Sv2,
 (StayFD *)&_n_B_Sv3,
 (StayFD *)&_n_B_Per,
 (StayFD *)&_n_B_Np,
 (StayFD *)&_n_B_Prc,
 (StayFD *)&_n_B_Nac,
 (StayFD *)&_n_B_Stg,
 (StayFD *)&_n_B_Stgp,
 (StayFD *)&_n_B_Zrb,
 (StayFD *)&_n_B_Kor,
 (StayFD *)&_n_B_Igd,
 (StayFD *)&_n_B_Inv,
 (StayFD *)&_n_B_Che,
 (StayFD *)&_n_B_CheZp,
 (StayFD *)&_n_B_Nazn,
 (StayFD *)&_n_B_Osob,
 (StayFD *)&_n_B_Atst,
 (StayFD *)&_n_B_Umer,
 (StayFD *)&_n_B_Ispl,
 (StayFD *)&_n_B_Rd,
 (StayFD *)&_n_B_Rod,
 (StayFD *)&_n_B_RabPer,
 (StayFD *)&_n_B_Zarab,
 (StayFD *)&_n_B_Zp,
 (StayFD *)&_n_B_Shifr,
 (StayFD *)&_n_B_VidOs,
 (StayFD *)&_n_B_Kr,
 (StayFD *)&_n_B_Stag,
 (StayFD *)&_n_B_Stagp,
 (StayFD *)&_n_B_Ar1,
 (StayFD *)&_n_B_Ar2,
 (StayFD *)&_n_B_Pd,
 NULL
};
static BYTE ix_B_Ls[] = {3,1,1,0,2,65,1,3,65,130,10};
StayDataset _n_B_Ls = {NULL,TAG_DATASET,0,0,DS_BBASE,0,1,0,NULL,tcm_B_Ls,NULL,
           "LS:LS.DT",ix_B_Ls,"База особових рахунків","B_Ls",100};
pStayDataset B_Ls = &_n_B_Ls;

static pStayFD tcm_B_Ppl[] =
{
 (StayFD *)&_n_Ppl_Prizn,
 (StayFD *)&_n_Ppl_DatePs,
 (StayFD *)&_n_Ppl_DatePk,
 (StayFD *)&_n_Ppl_DateUdr,
 (StayFD *)&_n_Ppl_Kfn,
 (StayFD *)&_n_Ppl_Sum,
 (StayFD *)&_n_Ppl_SumMon,
 (StayFD *)&_n_Ppl_SumOst,
 (StayFD *)&_n_Ppl_Tip,
 (StayFD *)&_n_Ppl_DateObn,
 (StayFD *)&_n_B_PplNac,
 NULL
};
static BYTE ix_B_Ppl[] = {1,1,2,0,1};
StayDataset _n_B_Ppl = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_Ppl,NULL,
           NULL,ix_B_Ppl,"Масив відрахувань переплат","B_Ppl",0};
pStayDataset B_Ppl = &_n_B_Ppl;

static pStayFD tcm_B_PplNac[] =
{
 (StayFD *)&_n_PplNac_God,
 (StayFD *)&_n_PplNac_Mec,
 (StayFD *)&_n_PplNac_Npp,
 (StayFD *)&_n_PplNac_Sum,
 (StayFD *)&_n_PplNac_Ost,
 NULL
};
static BYTE ix_B_PplNac[] = {1,1,3,0,1,2};
StayDataset _n_B_PplNac = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_PplNac,NULL,
           NULL,ix_B_PplNac,NULL,"B_PplNac",0};
pStayDataset B_PplNac = &_n_B_PplNac;

static pStayFD tcm_B_Zrbs[] =
{
 (StayFD *)&_n_Zrbs_Nr,
 (StayFD *)&_n_Zrbs_Nrs,
 (StayFD *)&_n_Zrbs_Zregr,
 (StayFD *)&_n_Zrbs_Zar,
 (StayFD *)&_n_Zrbs_Dendz,
 (StayFD *)&_n_Zrbs_Mes,
 (StayFD *)&_n_Zrbs_Nepol,
 NULL
};
static BYTE ix_B_Zrbs[] = {1,1,2,0,1};
StayDataset _n_B_Zrbs = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_Zrbs,NULL,
           NULL,ix_B_Zrbs,"Масив зведених даних про заробітки","B_Zrbs",0};
pStayDataset B_Zrbs = &_n_B_Zrbs;

static pStayFD tcm_B_Sv1[] =
{
 (StayFD *)&_n_Sv1_Kus,
 (StayFD *)&_n_Sv1_Os,
 (StayFD *)&_n_Sv1_Du,
 (StayFD *)&_n_Sv1_Dvipl,
 NULL
};
StayDataset _n_B_Sv1 = {NULL,TAG_DATASET,0,0,DS_STRUCT,0,1,0,NULL,tcm_B_Sv1,NULL,
           NULL,NULL,"Реквізити 1-го спос.виплати","B_Sv1",0};
pStayDataset B_Sv1 = &_n_B_Sv1;

static pStayFD tcm_B_Sv2[] =
{
 (StayFD *)&_n_Sv2_Ncsbb,
 (StayFD *)&_n_Sv2_Npsbb,
 (StayFD *)&_n_Sv2_Vklad,
 NULL
};
StayDataset _n_B_Sv2 = {NULL,TAG_DATASET,0,0,DS_STRUCT,0,1,0,NULL,tcm_B_Sv2,NULL,
           NULL,NULL,"Реквізити 2-го спос.виплати","B_Sv2",0};
pStayDataset B_Sv2 = &_n_B_Sv2;

static pStayFD tcm_B_Sv3[] =
{
 (StayFD *)&_n_Sv3_Indots,
 (StayFD *)&_n_Sv3_Adr,
 (StayFD *)&_n_Sv3_Tar,
 NULL
};
StayDataset _n_B_Sv3 = {NULL,TAG_DATASET,0,0,DS_STRUCT,0,1,0,NULL,tcm_B_Sv3,NULL,
           NULL,NULL,"Реквізити 3-го спос.виплати","B_Sv3",0};
pStayDataset B_Sv3 = &_n_B_Sv3;

static pStayFD tcm_B_Per[] =
{
 (StayFD *)&_n_Per_Kfn,
 (StayFD *)&_n_Per_Dnpen,
 (StayFD *)&_n_Per_Op,
 (StayFD *)&_n_Per_Rnaz,
 (StayFD *)&_n_Per_Prper,
 (StayFD *)&_n_Per_Psn,
 (StayFD *)&_n_Per_Kin,
 (StayFD *)&_n_Per_Datin,
 (StayFD *)&_n_Per_NIz,
 (StayFD *)&_n_Per_DateIz,
 (StayFD *)&_n_Per_CodeDoc,
 NULL
};
static BYTE ix_B_Per[] = {1,1,3,0,1,2};
StayDataset _n_B_Per = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_Per,NULL,
           NULL,ix_B_Per,"Масив перерахувань","B_Per",0};
pStayDataset B_Per = &_n_B_Per;

static pStayFD tcm_B_Np[] =
{
 (StayFD *)&_n_Np_Nomig,
 (StayFD *)&_n_Np_Kfn,
 (StayFD *)&_n_Np_Dnprav,
 (StayFD *)&_n_Np_Dkprav,
 (StayFD *)&_n_Np_Snadp,
 (StayFD *)&_n_Np_Kbl,
 (StayFD *)&_n_Np_Pr,
 NULL
};
static BYTE ix_B_Np[] = {1,1,3,0,1,2};
StayDataset _n_B_Np = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_Np,NULL,
           NULL,ix_B_Np,"Масив підвищень","B_Np",0};
pStayDataset B_Np = &_n_B_Np;

static pStayFD tcm_B_Prc[] =
{
 (StayFD *)&_n_Prc_Code,
 (StayFD *)&_n_Prc_One,
 (StayFD *)&_n_Prc_Two,
 (StayFD *)&_n_Prc_Priz,
 (StayFD *)&_n_Prc_God,
 (StayFD *)&_n_Prc_Mec,
 (StayFD *)&_n_Prc_Dni,
 NULL
};
static BYTE ix_B_Prc[] = {1,1,1,0};
StayDataset _n_B_Prc = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_Prc,NULL,
           NULL,ix_B_Prc,"Відсоток нарахування","B_Prc",0};
pStayDataset B_Prc = &_n_B_Prc;

static pStayFD tcm_B_Nac[] =
{
 (StayFD *)&_n_Nac_God,
 (StayFD *)&_n_Nac_Mec,
 (StayFD *)&_n_Nac_Npp,
 (StayFD *)&_n_Nac_Sved,
 (StayFD *)&_n_Nac_Nved,
 (StayFD *)&_n_Nac_DatSpis,
 (StayFD *)&_n_Nac_Bj,
 (StayFD *)&_n_Nac_IndOts,
 (StayFD *)&_n_Nac_Mecn,
 (StayFD *)&_n_Nac_Godn,
 (StayFD *)&_n_Nac_Nppn,
 (StayFD *)&_n_Nac_Tip,
 (StayFD *)&_n_Nac_TVed,
 (StayFD *)&_n_B_NacOp,
 NULL
};
static BYTE ix_B_Nac[] = {1,1,3,0,1,2};
StayDataset _n_B_Nac = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_Nac,NULL,
           NULL,ix_B_Nac,"Масив нарахувань","B_Nac",0};
pStayDataset B_Nac = &_n_B_Nac;

static pStayFD tcm_B_NacOp[] =
{
 (StayFD *)&_n_Nac_Op,
 (StayFD *)&_n_Nac_DatOp,
 (StayFD *)&_n_Nac_Kin,
 (StayFD *)&_n_B_NacKfn,
 NULL
};
static BYTE ix_B_NacOp[] = {1,1,2,0,1};
StayDataset _n_B_NacOp = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_NacOp,NULL,
           NULL,ix_B_NacOp,NULL,"B_NacOp",0};
pStayDataset B_NacOp = &_n_B_NacOp;

static pStayFD tcm_B_NacKfn[] =
{
 (StayFD *)&_n_Nac_Kfn,
 (StayFD *)&_n_Nac_GodF,
 (StayFD *)&_n_Nac_MecF,
 (StayFD *)&_n_Nac_SNac,
 (StayFD *)&_n_Nac_SInd,
 NULL
};
static BYTE ix_B_NacKfn[] = {1,1,3,0,1,2};
StayDataset _n_B_NacKfn = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_NacKfn,NULL,
           NULL,ix_B_NacKfn,NULL,"B_NacKfn",0};
pStayDataset B_NacKfn = &_n_B_NacKfn;

static pStayFD tcm_B_Stg[] =
{
 (StayFD *)&_n_Stg_Kods,
 (StayFD *)&_n_Stg_Dni,
 (StayFD *)&_n_Stg_Mec,
 (StayFD *)&_n_Stg_God,
 (StayFD *)&_n_Stg_DEnd,
 NULL
};
static BYTE ix_B_Stg[] = {1,1,1,0};
StayDataset _n_B_Stg = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_Stg,NULL,
           NULL,ix_B_Stg,"Масив відомостей про стаж","B_Stg",0};
pStayDataset B_Stg = &_n_B_Stg;

static pStayFD tcm_B_Stgp[] =
{
 (StayFD *)&_n_Stgp_Dbeg,
 (StayFD *)&_n_Stgp_Dend,
 (StayFD *)&_n_Stgp_Lgvl,
 (StayFD *)&_n_Stgp_Krat,
 (StayFD *)&_n_Stgp_Vtch,
 (StayFD *)&_n_Stgp_Dok,
 (StayFD *)&_n_Stgp_Sever,
 (StayFD *)&_n_Stgp_Sezon,
 (StayFD *)&_n_Stgp_Gg,
 (StayFD *)&_n_Stgp_Mm,
 (StayFD *)&_n_Stgp_Dd,
 (StayFD *)&_n_Stgp_Kolh,
 (StayFD *)&_n_Stgp_KodPr,
 NULL
};
static BYTE ix_B_Stgp[] = {1,1,5,0,1,2,3,4};
StayDataset _n_B_Stgp = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_Stgp,NULL,
           NULL,ix_B_Stgp,"Масив стажів по періодах","B_Stgp",0};
pStayDataset B_Stgp = &_n_B_Stgp;

static pStayFD tcm_B_Zrb[] =
{
 (StayFD *)&_n_Zrb_Nr,
 (StayFD *)&_n_Zrb_Nrs,
 (StayFD *)&_n_Zrb_Dbeg,
 (StayFD *)&_n_Zrb_Dend,
 (StayFD *)&_n_Zrb_Suma,
 (StayFD *)&_n_Zrb_Koef,
 (StayFD *)&_n_Zrb_DKoef,
 (StayFD *)&_n_Zrb_Nepol,
 (StayFD *)&_n_Zrb_KodPr,
 NULL
};
static BYTE ix_B_Zrb[] = {1,1,4,0,1,2,3};
StayDataset _n_B_Zrb = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_Zrb,NULL,
           NULL,ix_B_Zrb,"Масив заробітків по періодах","B_Zrb",0};
pStayDataset B_Zrb = &_n_B_Zrb;

static pStayFD tcm_B_Kor[] =
{
 (StayFD *)&_n_Kor_Katk,
 (StayFD *)&_n_Kor_Vozrl,
 (StayFD *)&_n_Kor_Pol,
 (StayFD *)&_n_Kor_Prism,
 (StayFD *)&_n_Kor_Datsm,
 (StayFD *)&_n_Kor_Drog,
 (StayFD *)&_n_Kor_Dvpen,
 (StayFD *)&_n_Kor_IdCode,
 NULL
};
static BYTE ix_B_Kor[] = {1,1,1,0};
StayDataset _n_B_Kor = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_Kor,NULL,
           NULL,ix_B_Kor,"Масив відомостей про годувальників","B_Kor",0};
pStayDataset B_Kor = &_n_B_Kor;

static pStayFD tcm_B_Igd[] =
{
 (StayFD *)&_n_Igd_Nomig,
 (StayFD *)&_n_Igd_Katrod,
 (StayFD *)&_n_Igd_Katnetr,
 (StayFD *)&_n_Igd_Fio,
 (StayFD *)&_n_Igd_Drog,
 (StayFD *)&_n_Igd_Pol,
 (StayFD *)&_n_Igd_Psn,
 (StayFD *)&_n_Igd_Sir,
 (StayFD *)&_n_Igd_Dso,
 (StayFD *)&_n_Igd_Prab,
 (StayFD *)&_n_Igd_Prdel,
 (StayFD *)&_n_Igd_Dusn,
 (StayFD *)&_n_B_Dolja,
 NULL
};
static BYTE ix_B_Igd[] = {1,1,1,0};
StayDataset _n_B_Igd = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_Igd,NULL,
           NULL,ix_B_Igd,"Масив відомостей про утриманців","B_Igd",0};
pStayDataset B_Igd = &_n_B_Igd;

static pStayFD tcm_B_Dolja[] =
{
 (StayFD *)&_n_Igd_Dolja_DBeg,
 (StayFD *)&_n_Igd_Dolja_DEnd,
 (StayFD *)&_n_Igd_Dolja_NumP,
 (StayFD *)&_n_Igd_Dolja_PAdr,
 (StayFD *)&_n_Igd_Dolja_Os,
 (StayFD *)&_n_Igd_Dolja_Adr,
 (StayFD *)&_n_Igd_Dolja_Nls,
 (StayFD *)&_n_Igd_Dolja_PrDN,
 NULL
};
static BYTE ix_B_Dolja[] = {1,1,2,0,1};
StayDataset _n_B_Dolja = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_Dolja,NULL,
           NULL,ix_B_Dolja,"Дольова пенсія","B_Dolja",0};
pStayDataset B_Dolja = &_n_B_Dolja;

static pStayFD tcm_B_Inv[] =
{
 (StayFD *)&_n_Inv_Nomig,
 (StayFD *)&_n_Inv_Dnpi,
 (StayFD *)&_n_Inv_Dkpi,
 (StayFD *)&_n_Inv_Kod,
 (StayFD *)&_n_Inv_Dni,
 (StayFD *)&_n_Inv_Stag,
 (StayFD *)&_n_Inv_Kbl,
 (StayFD *)&_n_Inv_Grinv,
 NULL
};
static BYTE ix_B_Inv[] = {1,1,2,0,1};
StayDataset _n_B_Inv = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_Inv,NULL,
           NULL,ix_B_Inv,"Масив відомостей про інвалідність","B_Inv",0};
pStayDataset B_Inv = &_n_B_Inv;

static pStayFD tcm_B_Che[] =
{
 (StayFD *)&_n_Che_Nomig,
 (StayFD *)&_n_Che_Dnprav,
 (StayFD *)&_n_Che_Dkprav,
 (StayFD *)&_n_Che_Dobr,
 (StayFD *)&_n_Che_Kbl,
 (StayFD *)&_n_Che_Kzp,
 (StayFD *)&_n_Che_Kzr,
 (StayFD *)&_n_Che_Chpri,
 (StayFD *)&_n_Che_Likvid,
 (StayFD *)&_n_Che_Luch,
 (StayFD *)&_n_Che_Ptru,
 (StayFD *)&_n_Che_Prod,
 (StayFD *)&_n_Che_Proj,
 (StayFD *)&_n_Che_Snig,
 (StayFD *)&_n_Che_Tpos,
 NULL
};
static BYTE ix_B_Che[] = {1,1,2,0,1};
StayDataset _n_B_Che = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_Che,NULL,
           NULL,ix_B_Che,"Масив відомостей про ЧАЕС","B_Che",0};
pStayDataset B_Che = &_n_B_Che;

static pStayFD tcm_B_CheZp[] =
{
 (StayFD *)&_n_CheZp_Nomig,
 (StayFD *)&_n_CheZp_Code,
 (StayFD *)&_n_CheZp_DateBeg,
 (StayFD *)&_n_CheZp_DateEnd,
 (StayFD *)&_n_CheZp_Time,
 NULL
};
static BYTE ix_B_CheZp[] = {1,1,3,0,1,2};
StayDataset _n_B_CheZp = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_CheZp,NULL,
           NULL,ix_B_CheZp,"Масив періодів","B_CheZp",0};
pStayDataset B_CheZp = &_n_B_CheZp;

static pStayFD tcm_B_Nazn[] =
{
 (StayFD *)&_n_Nazn_Op,
 (StayFD *)&_n_Nazn_Dnaz,
 (StayFD *)&_n_Nazn_Dobr,
 (StayFD *)&_n_Nazn_Prc,
 (StayFD *)&_n_Nazn_Pensosn,
 (StayFD *)&_n_Nazn_Pmax,
 NULL
};
static BYTE ix_B_Nazn[] = {1,1,2,0,1};
StayDataset _n_B_Nazn = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_Nazn,NULL,
           NULL,ix_B_Nazn,"Масив відомостей про призначення","B_Nazn",0};
pStayDataset B_Nazn = &_n_B_Nazn;

static pStayFD tcm_B_Osob[] =
{
 (StayFD *)&_n_Osob_Code,
 (StayFD *)&_n_Osob_Priz,
 NULL
};
static BYTE ix_B_Osob[] = {1,1,1,0};
StayDataset _n_B_Osob = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_Osob,NULL,
           NULL,ix_B_Osob,"Масив особливостей","B_Osob",0};
pStayDataset B_Osob = &_n_B_Osob;

static pStayFD tcm_B_Atst[] =
{
 (StayFD *)&_n_Atst_Type,
 (StayFD *)&_n_Atst_Num,
 (StayFD *)&_n_Atst_Data,
 NULL
};
static BYTE ix_B_Atst[] = {1,1,2,0,1};
StayDataset _n_B_Atst = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_Atst,NULL,
           NULL,ix_B_Atst,"Масив відомостей про атестати","B_Atst",0};
pStayDataset B_Atst = &_n_B_Atst;

static pStayFD tcm_B_Umer[] =
{
 (StayFD *)&_n_Umer_Nomig,
 (StayFD *)&_n_Umer_DatSm,
 (StayFD *)&_n_Umer_DatZap,
 (StayFD *)&_n_Umer_Zap,
 (StayFD *)&_n_Umer_DatPos,
 (StayFD *)&_n_Umer_Fio,
 (StayFD *)&_n_Umer_Adr,
 (StayFD *)&_n_Umer_Pasp,
 (StayFD *)&_n_Umer_Vidan,
 (StayFD *)&_n_Umer_Pos,
 (StayFD *)&_n_Umer_Spis,
 (StayFD *)&_n_Umer_DatSp,
 (StayFD *)&_n_Umer_DatPoh,
 (StayFD *)&_n_Umer_God,
 (StayFD *)&_n_Umer_Mec,
 (StayFD *)&_n_Umer_Npp,
 NULL
};
static BYTE ix_B_Umer[] = {1,1,1,0};
StayDataset _n_B_Umer = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_Umer,NULL,
           NULL,ix_B_Umer,"Масив відомостей про померлих","B_Umer",0};
pStayDataset B_Umer = &_n_B_Umer;

static pStayFD tcm_B_Ispl[] =
{
 (StayFD *)&_n_Ispl_Kud,
 (StayFD *)&_n_Ispl_Num,
 (StayFD *)&_n_Ispl_Dpd,
 (StayFD *)&_n_Ispl_Vhn,
 (StayFD *)&_n_Ispl_Kd,
 (StayFD *)&_n_Ispl_Nd,
 (StayFD *)&_n_Ispl_Dv,
 (StayFD *)&_n_Ispl_Ksud,
 (StayFD *)&_n_Ispl_Kvz,
 (StayFD *)&_n_Ispl_Kold,
 (StayFD *)&_n_Ispl_Datast,
 (StayFD *)&_n_Ispl_PostDolg,
 (StayFD *)&_n_Ispl_Dolg,
 (StayFD *)&_n_Ispl_Sp,
 (StayFD *)&_n_Ispl_SumUd,
 (StayFD *)&_n_Ispl_SRud,
 (StayFD *)&_n_Ispl_PerSud,
 (StayFD *)&_n_Ispl_PerSud1,
 (StayFD *)&_n_Ispl_DatU,
 (StayFD *)&_n_Ispl_Displ,
 (StayFD *)&_n_Ispl_Spos,
 (StayFD *)&_n_Ispl_Kdp,
 (StayFD *)&_n_Ispl_Ost,
 (StayFD *)&_n_Ispl_Rudp,
 (StayFD *)&_n_Ispl_Rud,
 (StayFD *)&_n_Ispl_Gor,
 (StayFD *)&_n_Ispl_Kin,
 (StayFD *)&_n_Ispl_Datin,
 (StayFD *)&_n_B_Ud,
 (StayFD *)&_n_B_Det,
 (StayFD *)&_n_B_NUdr,
 (StayFD *)&_n_B_Ud2,
 (StayFD *)&_n_B_Ud3,
 NULL
};
static BYTE ix_B_Ispl[] = {1,1,2,0,1};
StayDataset _n_B_Ispl = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_Ispl,NULL,
           NULL,ix_B_Ispl,"Масив відомостей про утримання","B_Ispl",0};
pStayDataset B_Ispl = &_n_B_Ispl;

static pStayFD tcm_B_Ud[] =
{
 (StayFD *)&_n_Ud_Psn,
 (StayFD *)&_n_Ud_Dso,
 NULL
};
StayDataset _n_B_Ud = {NULL,TAG_DATASET,0,0,DS_STRUCT,0,1,0,NULL,tcm_B_Ud,NULL,
           NULL,NULL,"Відомості про блокування виконавч.листів","B_Ud",0};
pStayDataset B_Ud = &_n_B_Ud;

static pStayFD tcm_B_Det[] =
{
 (StayFD *)&_n_Ispl_Datar,
 (StayFD *)&_n_Ispl_Datae,
 (StayFD *)&_n_Ispl_Spdet,
 (StayFD *)&_n_Ispl_Per,
 (StayFD *)&_n_Ispl_Per1,
 (StayFD *)&_n_Ispl_Rkold,
 NULL
};
static BYTE ix_B_Det[] = {1,1,1,0};
StayDataset _n_B_Det = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_Det,NULL,
           NULL,ix_B_Det,"Відомості про дітей","B_Det",0};
pStayDataset B_Det = &_n_B_Det;

static pStayFD tcm_B_NUdr[] =
{
 (StayFD *)&_n_NUdr_God,
 (StayFD *)&_n_NUdr_Mec,
 (StayFD *)&_n_NUdr_Kin,
 (StayFD *)&_n_NUdr_Sved,
 (StayFD *)&_n_NUdr_NSpis,
 (StayFD *)&_n_NUdr_Datkvit,
 (StayFD *)&_n_NUdr_NKvit,
 (StayFD *)&_n_NUdr_Bj,
 (StayFD *)&_n_NUdr_Ost,
 (StayFD *)&_n_NUdr_Mecn,
 (StayFD *)&_n_NUdr_Godn,
 (StayFD *)&_n_B_UdMec,
 NULL
};
static BYTE ix_B_NUdr[] = {1,1,3,0,1,2};
StayDataset _n_B_NUdr = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_NUdr,NULL,
           NULL,ix_B_NUdr,"Масив нарахувань по утриманням","B_NUdr",0};
pStayDataset B_NUdr = &_n_B_NUdr;

static pStayFD tcm_B_UdMec[] =
{
 (StayFD *)&_n_NUdr_GodF,
 (StayFD *)&_n_NUdr_MecF,
 (StayFD *)&_n_NUdr_SNac,
 NULL
};
static BYTE ix_B_UdMec[] = {1,1,2,0,1};
StayDataset _n_B_UdMec = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_UdMec,NULL,
           NULL,ix_B_UdMec,NULL,"B_UdMec",0};
pStayDataset B_UdMec = &_n_B_UdMec;

static pStayFD tcm_B_Ud2[] =
{
 (StayFD *)&_n_Ud2_Kud,
 (StayFD *)&_n_Ud2_Vhn,
 (StayFD *)&_n_Ud2_Dpd,
 (StayFD *)&_n_Ud2_Ncsbb,
 (StayFD *)&_n_Ud2_Npsbb,
 (StayFD *)&_n_Ud2_Vklad,
 (StayFD *)&_n_Ud2_Fio,
 (StayFD *)&_n_Ud2_Indots,
 (StayFD *)&_n_Ud2_Abank,
 (StayFD *)&_n_Ud2_Nbank,
 NULL
};
StayDataset _n_B_Ud2 = {NULL,TAG_DATASET,0,0,DS_STRUCT,0,1,0,NULL,tcm_B_Ud2,NULL,
           NULL,NULL,"Реквізити 2-го способу для утримань","B_Ud2",0};
pStayDataset B_Ud2 = &_n_B_Ud2;

static pStayFD tcm_B_Ud3[] =
{
 (StayFD *)&_n_Ud3_Kud,
 (StayFD *)&_n_Ud3_Vhn,
 (StayFD *)&_n_Ud3_Dpd,
 (StayFD *)&_n_Ud3_Indots,
 (StayFD *)&_n_Ud3_Adom,
 (StayFD *)&_n_Ud3_Fio,
 NULL
};
StayDataset _n_B_Ud3 = {NULL,TAG_DATASET,0,0,DS_STRUCT,0,1,0,NULL,tcm_B_Ud3,NULL,
           NULL,NULL,"Реквізити 3-го способу для утримань","B_Ud3",0};
pStayDataset B_Ud3 = &_n_B_Ud3;

static pStayFD tcm_B_Rd[] =
{
 (StayFD *)&_n_Rd_Year,
 (StayFD *)&_n_Rd_Kv,
 (StayFD *)&_n_Rd_Code,
 (StayFD *)&_n_Rd_NomCode,
 (StayFD *)&_n_Rd_CdDoh,
 (StayFD *)&_n_Rd_Suma,
 (StayFD *)&_n_Rd_Nmes,
 (StayFD *)&_n_Rd_SumaMes,
 NULL
};
static BYTE ix_B_Rd[] = {1,1,5,0,1,2,3,4};
StayDataset _n_B_Rd = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_Rd,NULL,
           NULL,ix_B_Rd,"Масив сукупного доходу сімї","B_Rd",0};
pStayDataset B_Rd = &_n_B_Rd;

static pStayFD tcm_B_Rod[] =
{
 (StayFD *)&_n_Rod_Parents,
 (StayFD *)&_n_Rod_MaskJob,
 (StayFD *)&_n_Rod_CodeNW,
 (StayFD *)&_n_Rod_DFree,
 (StayFD *)&_n_Rod_DReg,
 (StayFD *)&_n_Rod_D1,
 (StayFD *)&_n_Rod_D2,
 (StayFD *)&_n_Rod_WorkD,
 NULL
};
static BYTE ix_B_Rod[] = {1,1,1,0};
StayDataset _n_B_Rod = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_Rod,NULL,
           NULL,ix_B_Rod,"Масив відомостей про батьків","B_Rod",0};
pStayDataset B_Rod = &_n_B_Rod;

static pStayFD tcm_B_RabPer[] =
{
 (StayFD *)&_n_RabPer_Date,
 (StayFD *)&_n_RabPer_Pr,
 (StayFD *)&_n_RabPer_CodIns,
 (StayFD *)&_n_RabPer_DateIns,
 NULL
};
static BYTE ix_B_RabPer[] = {1,1,1,0};
StayDataset _n_B_RabPer = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_RabPer,NULL,
           NULL,ix_B_RabPer,"Масив періодів роботи","B_RabPer",0};
pStayDataset B_RabPer = &_n_B_RabPer;

static pStayFD tcm_B_Zarab[] =
{
 (StayFD *)&_n_Zarab_Year,
 (StayFD *)&_n_Zarab_Month,
 (StayFD *)&_n_Zarab_CodIns,
 (StayFD *)&_n_Zarab_DateIns,
 (StayFD *)&_n_Zarab_Zarp,
 (StayFD *)&_n_Zarab_ZarpInd,
 (StayFD *)&_n_Zarab_SumInd,
 NULL
};
static BYTE ix_B_Zarab[] = {1,1,2,0,1};
StayDataset _n_B_Zarab = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_Zarab,NULL,
           NULL,ix_B_Zarab,"Масив заробітків","B_Zarab",0};
pStayDataset B_Zarab = &_n_B_Zarab;

static pStayFD tcm_B_Zp[] =
{
 (StayFD *)&_n_Zp_DateB,
 (StayFD *)&_n_Zp_DateE,
 (StayFD *)&_n_Zp_Razm,
 (StayFD *)&_n_Zp_Alim,
 NULL
};
static BYTE ix_B_Zp[] = {1,1,2,0,1};
StayDataset _n_B_Zp = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_Zp,NULL,
           NULL,ix_B_Zp,"Масив зарплати(аліментів)","B_Zp",0};
pStayDataset B_Zp = &_n_B_Zp;

static pStayFD tcm_B_Shifr[] =
{
 (StayFD *)&_n_Shifr_DateC,
 (StayFD *)&_n_Shifr_Code,
 (StayFD *)&_n_Shifr_Kfn,
 (StayFD *)&_n_Shifr_InsCod,
 (StayFD *)&_n_Shifr_InsDat,
 NULL
};
static BYTE ix_B_Shifr[] = {1,1,1,0};
StayDataset _n_B_Shifr = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_Shifr,NULL,
           NULL,ix_B_Shifr,"Масив відомостей про шифри","B_Shifr",0};
pStayDataset B_Shifr = &_n_B_Shifr;

static pStayFD tcm_B_VidOs[] =
{
 (StayFD *)&_n_VidOs_Code,
 (StayFD *)&_n_VidOs_DateB,
 (StayFD *)&_n_VidOs_DateE,
 (StayFD *)&_n_VidOs_Priz,
 (StayFD *)&_n_VidOs_Sum,
 NULL
};
static BYTE ix_B_VidOs[] = {1,1,2,0,1};
StayDataset _n_B_VidOs = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_VidOs,NULL,
           NULL,ix_B_VidOs,"Масив особливостей з датами","B_VidOs",0};
pStayDataset B_VidOs = &_n_B_VidOs;

static pStayFD tcm_B_Kr[] =
{
 (StayFD *)&_n_Kr_Num,
 (StayFD *)&_n_Kr_Code,
 (StayFD *)&_n_Kr_Age,
 (StayFD *)&_n_Kr_DateP,
 (StayFD *)&_n_Kr_DateR,
 (StayFD *)&_n_Kr_DateSm,
 (StayFD *)&_n_Kr_DieCode,
 (StayFD *)&_n_Kr_Sex,
 (StayFD *)&_n_Kr_Fio,
 (StayFD *)&_n_Kr_VZvan,
 (StayFD *)&_n_Kr_IdCode,
 (StayFD *)&_n_Kr_Pen0124,
 (StayFD *)&_n_Kr_Type,
 (StayFD *)&_n_Kr_Tpos,
 (StayFD *)&_n_Kr_Grinv,
 (StayFD *)&_n_Kr_Ptru,
 (StayFD *)&_n_Kr_PrSmShax,
 (StayFD *)&_n_Kr_PrSmShPZ,
 (StayFD *)&_n_Kr_MaskOsb,
 (StayFD *)&_n_Kr_DPStgInv,
 (StayFD *)&_n_Kr_DPStgVsr,
 (StayFD *)&_n_Kr_Razv1,
 (StayFD *)&_n_Kr_Razv2,
 (StayFD *)&_n_Kr_Razv3,
 NULL
};
static BYTE ix_B_Kr[] = {1,1,1,0};
StayDataset _n_B_Kr = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_Kr,NULL,
           NULL,ix_B_Kr,"Масив відомостей про годувальників(2)","B_Kr",0};
pStayDataset B_Kr = &_n_B_Kr;

static pStayFD tcm_B_Stag[] =
{
 (StayFD *)&_n_Stag_Nr,
 (StayFD *)&_n_Stag_Kods,
 (StayFD *)&_n_Stag_Dni,
 (StayFD *)&_n_Stag_Mec,
 (StayFD *)&_n_Stag_God,
 (StayFD *)&_n_Stag_DEnd,
 NULL
};
static BYTE ix_B_Stag[] = {1,1,2,0,1};
StayDataset _n_B_Stag = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_Stag,NULL,
           NULL,ix_B_Stag,"Масив відомостей про стаж(2)","B_Stag",0};
pStayDataset B_Stag = &_n_B_Stag;

static pStayFD tcm_B_Stagp[] =
{
 (StayFD *)&_n_Stagp_Nr,
 (StayFD *)&_n_Stagp_Dbeg,
 (StayFD *)&_n_Stagp_Dend,
 (StayFD *)&_n_Stagp_Lgvl,
 (StayFD *)&_n_Stagp_Krat,
 (StayFD *)&_n_Stagp_Vtch,
 (StayFD *)&_n_Stagp_Dok,
 (StayFD *)&_n_Stagp_Sever,
 (StayFD *)&_n_Stagp_Sezon,
 (StayFD *)&_n_Stagp_Gg,
 (StayFD *)&_n_Stagp_Mm,
 (StayFD *)&_n_Stagp_Dd,
 (StayFD *)&_n_Stagp_Kolh,
 (StayFD *)&_n_Stagp_KodPr,
 (StayFD *)&_n_Stagp_Krat24,
 (StayFD *)&_n_Stagp_GgKr,
 (StayFD *)&_n_Stagp_MmKr,
 (StayFD *)&_n_Stagp_DdKr,
 (StayFD *)&_n_Stagp_COKPriz,
 (StayFD *)&_n_Stagp_COKDni,
 (StayFD *)&_n_Stagp_COKGg,
 (StayFD *)&_n_Stagp_COKMm,
 (StayFD *)&_n_Stagp_COKDd,
 NULL
};
static BYTE ix_B_Stagp[] = {1,1,6,0,1,2,3,4,5};
StayDataset _n_B_Stagp = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_Stagp,NULL,
           NULL,ix_B_Stagp,"Масив стажів по періодах(2)","B_Stagp",0};
pStayDataset B_Stagp = &_n_B_Stagp;

static pStayFD tcm_B_Ar1[] =
{
 (StayFD *)&_n_Ar1_Code,
 (StayFD *)&_n_Ar1_Priz,
 (StayFD *)&_n_Ar1_Priz1,
 (StayFD *)&_n_Ar1_Date,
 (StayFD *)&_n_Ar1_Date1,
 (StayFD *)&_n_Ar1_Date2,
 (StayFD *)&_n_Ar1_Sum,
 (StayFD *)&_n_Ar1_Ind,
 (StayFD *)&_n_Ar1_PrUI4,
 (StayFD *)&_n_Ar1_PrUI2,
 (StayFD *)&_n_Ar1_Pr1UI2,
 NULL
};
static BYTE ix_B_Ar1[] = {1,1,3,0,1,2};
StayDataset _n_B_Ar1 = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_Ar1,NULL,
           NULL,ix_B_Ar1,"Массив 1","B_Ar1",};
pStayDataset B_Ar1 = &_n_B_Ar1;

static pStayFD tcm_B_Ar2[] =
{
 (StayFD *)&_n_Ar2_Code,
 (StayFD *)&_n_Ar2_Date1,
 (StayFD *)&_n_Ar2_Date2,
 (StayFD *)&_n_Ar2_Priz,
 (StayFD *)&_n_Ar2_Sum,
 (StayFD *)&_n_Ar2_Ind,
 (StayFD *)&_n_Ar2_PrUI4,
 (StayFD *)&_n_Ar2_PrUI2,
 NULL
};
static BYTE ix_B_Ar2[] = {1,1,3,0,1,2};
StayDataset _n_B_Ar2 = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_Ar2,NULL,
           NULL,ix_B_Ar2,"Массив 2","B_Ar2",};
pStayDataset B_Ar2 = &_n_B_Ar2;

static pStayFD tcm_B_Pd[] =
{
 (StayFD *)&_n_Pd_Num,
 (StayFD *)&_n_Pd_Fam,
 (StayFD *)&_n_Pd_Name,
 (StayFD *)&_n_Pd_Otch,
 (StayFD *)&_n_Pd_IdCd,
 NULL
};
static BYTE ix_B_Pd[] = {1,1,1,0};
StayDataset _n_B_Pd = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_Pd,NULL,
           NULL,ix_B_Pd,"База подопечных","B_Pd",};
pStayDataset B_Pd = &_n_B_Pd;

void *LS[] =
 {NULL,
  &_nn_LS,
  &_n_Atst_Data,
  &_n_Atst_Num,
  &_n_Atst_Type,
  &_n_CheZp_Code,
  &_n_CheZp_DateBeg,
  &_n_CheZp_DateEnd,
  &_n_CheZp_Nomig,
  &_n_CheZp_Time,
  &_n_Che_Chpri,
  &_n_Che_Dkprav,
  &_n_Che_Dnprav,
  &_n_Che_Dobr,
  &_n_Che_Kbl,
  &_n_Che_Kzp,
  &_n_Che_Kzr,
  &_n_Che_Likvid,
  &_n_Che_Luch,
  &_n_Che_Nomig,
  &_n_Che_Prod,
  &_n_Che_Proj,
  &_n_Che_Ptru,
  &_n_Che_Snig,
  &_n_Che_Tpos,
  &_n_Igd_Dolja_Adr,
  &_n_Igd_Dolja_DBeg,
  &_n_Igd_Dolja_DEnd,
  &_n_Igd_Dolja_Nls,
  &_n_Igd_Dolja_NumP,
  &_n_Igd_Dolja_Os,
  &_n_Igd_Dolja_PAdr,
  &_n_Igd_Dolja_PrDN,
  &_n_Igd_Drog,
  &_n_Igd_Dso,
  &_n_Igd_Dusn,
  &_n_Igd_Fio,
  &_n_Igd_Katnetr,
  &_n_Igd_Katrod,
  &_n_Igd_Nomig,
  &_n_Igd_Pol,
  &_n_Igd_Prab,
  &_n_Igd_Prdel,
  &_n_Igd_Psn,
  &_n_Igd_Sir,
  &_n_Inv_Dkpi,
  &_n_Inv_Dni,
  &_n_Inv_Dnpi,
  &_n_Inv_Grinv,
  &_n_Inv_Kbl,
  &_n_Inv_Kod,
  &_n_Inv_Nomig,
  &_n_Inv_Stag,
  &_n_Ispl_DatU,
  &_n_Ispl_Datae,
  &_n_Ispl_Datar,
  &_n_Ispl_Datast,
  &_n_Ispl_Datin,
  &_n_Ispl_Displ,
  &_n_Ispl_Dolg,
  &_n_Ispl_Dpd,
  &_n_Ispl_Dv,
  &_n_Ispl_Gor,
  &_n_Ispl_Kd,
  &_n_Ispl_Kdp,
  &_n_Ispl_Kin,
  &_n_Ispl_Kold,
  &_n_Ispl_Ksud,
  &_n_Ispl_Kud,
  &_n_Ispl_Kvz,
  &_n_Ispl_Nd,
  &_n_Ispl_Num,
  &_n_Ispl_Ost,
  &_n_Ispl_Per,
  &_n_Ispl_Per1,
  &_n_Ispl_PerSud,
  &_n_Ispl_PerSud1,
  &_n_Ispl_PostDolg,
  &_n_Ispl_Rkold,
  &_n_Ispl_Rud,
  &_n_Ispl_Rudp,
  &_n_Ispl_SRud,
  &_n_Ispl_Sp,
  &_n_Ispl_Spdet,
  &_n_Ispl_Spos,
  &_n_Ispl_SumUd,
  &_n_Ispl_Vhn,
  &_n_Kor_IdCode,
  &_n_Kor_Datsm,
  &_n_Kor_Drog,
  &_n_Kor_Dvpen,
  &_n_Kor_Katk,
  &_n_Kor_Pol,
  &_n_Kor_Prism,
  &_n_Kor_Vozrl,
  &_n_Ls_Adrdom,
  &_n_Ls_Adrkorp,
  &_n_Ls_Adrkv,
  &_n_Ls_Adrul,
  &_n_Ls_Dnac,
  &_n_Ls_Dolya,
  &_n_Ls_Drk,
  &_n_Ls_Drog,
  &_n_Ls_Fio,
  &_n_Ls_Grjd,
  &_n_Ls_IdCode,
  &_n_Ls_Indots,
  &_n_Ls_Kfn,
  &_n_Ls_Nls,
  &_n_Ls_Ntel,
  &_n_Ls_Pasp,
  &_n_Ls_Pol,
  &_n_Ls_Prnp,
  &_n_Ls_Ptk,
  &_n_Ls_Rab,
  &_n_Ls_Raj,
  &_n_Ls_Shifr,
  &_n_Ls_Spos,
  &_n_Ls_Ssh,
  &_n_Ls_Vbper,
  &_n_Ls_Vid,
  &_n_Ls_Vzvan,
  &_n_NUdr_Bj,
  &_n_NUdr_Datkvit,
  &_n_NUdr_God,
  &_n_NUdr_GodF,
  &_n_NUdr_Godn,
  &_n_NUdr_Kin,
  &_n_NUdr_Mec,
  &_n_NUdr_MecF,
  &_n_NUdr_Mecn,
  &_n_NUdr_NKvit,
  &_n_NUdr_NSpis,
  &_n_NUdr_Ost,
  &_n_NUdr_SNac,
  &_n_NUdr_Sved,
  &_n_Nac_Bj,
  &_n_Nac_DatOp,
  &_n_Nac_DatSpis,
  &_n_Nac_God,
  &_n_Nac_GodF,
  &_n_Nac_Godn,
  &_n_Nac_IndOts,
  &_n_Nac_Kfn,
  &_n_Nac_Kin,
  &_n_Nac_Mec,
  &_n_Nac_MecF,
  &_n_Nac_Mecn,
  &_n_Nac_Npp,
  &_n_Nac_Nppn,
  &_n_Nac_Nved,
  &_n_Nac_Op,
  &_n_Nac_SInd,
  &_n_Nac_SNac,
  &_n_Nac_Sved,
  &_n_Nac_TVed,
  &_n_Nac_Tip,
  &_n_Nazn_Dnaz,
  &_n_Nazn_Dobr,
  &_n_Nazn_Op,
  &_n_Nazn_Pensosn,
  &_n_Nazn_Pmax,
  &_n_Nazn_Prc,
  &_n_Np_Dkprav,
  &_n_Np_Dnprav,
  &_n_Np_Kbl,
  &_n_Np_Kfn,
  &_n_Np_Nomig,
  &_n_Np_Pr,
  &_n_Np_Snadp,
  &_n_Osob_Code,
  &_n_Osob_Priz,
  &_n_Per_CodeDoc,
  &_n_Per_DateIz,
  &_n_Per_Datin,
  &_n_Per_Dnpen,
  &_n_Per_Kfn,
  &_n_Per_Kin,
  &_n_Per_NIz,
  &_n_Per_Op,
  &_n_Per_Prper,
  &_n_Per_Psn,
  &_n_Per_Rnaz,
  &_n_PplNac_God,
  &_n_PplNac_Mec,
  &_n_PplNac_Npp,
  &_n_PplNac_Ost,
  &_n_PplNac_Sum,
  &_n_Ppl_DateObn,
  &_n_Ppl_DatePk,
  &_n_Ppl_DatePs,
  &_n_Ppl_DateUdr,
  &_n_Ppl_Kfn,
  &_n_Ppl_Prizn,
  &_n_Ppl_Sum,
  &_n_Ppl_SumMon,
  &_n_Ppl_SumOst,
  &_n_Ppl_Tip,
  &_n_Prc_Code,
  &_n_Prc_Dni,
  &_n_Prc_God,
  &_n_Prc_Mec,
  &_n_Prc_One,
  &_n_Prc_Priz,
  &_n_Prc_Two,
  &_n_RabPer_CodIns,
  &_n_RabPer_Date,
  &_n_RabPer_DateIns,
  &_n_RabPer_Pr,
  &_n_Rd_CdDoh,
  &_n_Rd_Code,
  &_n_Rd_Kv,
  &_n_Rd_Nmes,
  &_n_Rd_NomCode,
  &_n_Rd_Suma,
  &_n_Rd_SumaMes,
  &_n_Rd_Year,
  &_n_Rod_CodeNW,
  &_n_Rod_D1,
  &_n_Rod_D2,
  &_n_Rod_DFree,
  &_n_Rod_DReg,
  &_n_Rod_MaskJob,
  &_n_Rod_Parents,
  &_n_Rod_WorkD,
  &_n_Shifr_Code,
  &_n_Shifr_DateC,
  &_n_Shifr_InsCod,
  &_n_Shifr_InsDat,
  &_n_Shifr_Kfn,
  &_n_Stg_Dni,
  &_n_Stg_God,
  &_n_Stg_Kods,
  &_n_Stg_Mec,
  &_n_Stg_DEnd,
  &_n_Stgp_Dbeg,
  &_n_Stgp_Dd,
  &_n_Stgp_Dend,
  &_n_Stgp_Dok,
  &_n_Stgp_Gg,
  &_n_Stgp_Kolh,
  &_n_Stgp_KodPr,
  &_n_Stgp_Krat,
  &_n_Stgp_Lgvl,
  &_n_Stgp_Mm,
  &_n_Stgp_Sever,
  &_n_Stgp_Sezon,
  &_n_Stgp_Vtch,
  &_n_Sv1_Du,
  &_n_Sv1_Dvipl,
  &_n_Sv1_Kus,
  &_n_Sv1_Os,
  &_n_Sv2_Ncsbb,
  &_n_Sv2_Npsbb,
  &_n_Sv2_Vklad,
  &_n_Sv3_Adr,
  &_n_Sv3_Indots,
  &_n_Sv3_Tar,
  &_n_Ud2_Abank,
  &_n_Ud2_Dpd,
  &_n_Ud2_Fio,
  &_n_Ud2_Indots,
  &_n_Ud2_Kud,
  &_n_Ud2_Nbank,
  &_n_Ud2_Ncsbb,
  &_n_Ud2_Npsbb,
  &_n_Ud2_Vhn,
  &_n_Ud2_Vklad,
  &_n_Ud3_Adom,
  &_n_Ud3_Dpd,
  &_n_Ud3_Fio,
  &_n_Ud3_Indots,
  &_n_Ud3_Kud,
  &_n_Ud3_Vhn,
  &_n_Ud_Dso,
  &_n_Ud_Psn,
  &_n_Umer_Adr,
  &_n_Umer_DatPoh,
  &_n_Umer_DatPos,
  &_n_Umer_DatSm,
  &_n_Umer_DatSp,
  &_n_Umer_DatZap,
  &_n_Umer_Fio,
  &_n_Umer_God,
  &_n_Umer_Mec,
  &_n_Umer_Nomig,
  &_n_Umer_Npp,
  &_n_Umer_Pasp,
  &_n_Umer_Pos,
  &_n_Umer_Spis,
  &_n_Umer_Vidan,
  &_n_Umer_Zap,
  &_n_Zarab_CodIns,
  &_n_Zarab_DateIns,
  &_n_Zarab_Month,
  &_n_Zarab_SumInd,
  &_n_Zarab_Year,
  &_n_Zarab_Zarp,
  &_n_Zarab_ZarpInd,
  &_n_Zp_Alim,
  &_n_Zp_DateB,
  &_n_Zp_DateE,
  &_n_Zp_Razm,
  &_n_Zrb_DKoef,
  &_n_Zrb_Dbeg,
  &_n_Zrb_Dend,
  &_n_Zrb_KodPr,
  &_n_Zrb_Koef,
  &_n_Zrb_Nepol,
  &_n_Zrb_Nr,
  &_n_Zrb_Nrs,
  &_n_Zrb_Suma,
  &_n_Zrbs_Dendz,
  &_n_Zrbs_Mes,
  &_n_Zrbs_Nepol,
  &_n_Zrbs_Nr,
  &_n_Zrbs_Nrs,
  &_n_Zrbs_Zar,
  &_n_Zrbs_Zregr,
  &_n_VidOs_Code,
  &_n_VidOs_DateB,
  &_n_VidOs_DateE,
  &_n_VidOs_Priz,
  &_n_VidOs_Sum,
  &_n_Stag_Nr,
  &_n_Stag_Dni,
  &_n_Stag_God,
  &_n_Stag_Kods,
  &_n_Stag_Mec,
  &_n_Stag_DEnd,
  &_n_Stagp_Nr,
  &_n_Stagp_Dbeg,
  &_n_Stagp_Dd,
  &_n_Stagp_Dend,
  &_n_Stagp_Dok,
  &_n_Stagp_Gg,
  &_n_Stagp_Kolh,
  &_n_Stagp_KodPr,
  &_n_Stagp_Krat,
  &_n_Stagp_Lgvl,
  &_n_Stagp_Mm,
  &_n_Stagp_Sever,
  &_n_Stagp_Sezon,
  &_n_Stagp_Vtch,
  &_n_Stagp_Krat24,
  &_n_Stagp_GgKr,
  &_n_Stagp_MmKr,
  &_n_Stagp_DdKr,
  &_n_Stagp_COKPriz,
  &_n_Stagp_COKDni,
  &_n_Stagp_COKGg,
  &_n_Stagp_COKMm,
  &_n_Stagp_COKDd,
  &_n_Kr_Num,
  &_n_Kr_Code,
  &_n_Kr_Age,
  &_n_Kr_DateP,
  &_n_Kr_DateR,
  &_n_Kr_DateSm,
  &_n_Kr_DieCode,
  &_n_Kr_Sex,
  &_n_Kr_Fio,
  &_n_Kr_VZvan,
  &_n_Kr_IdCode,
  &_n_Kr_Pen0124,
  &_n_Kr_Type,
  &_n_Kr_Tpos,
  &_n_Kr_Grinv,
  &_n_Kr_Ptru,
  &_n_Kr_PrSmShax,
  &_n_Kr_PrSmShPZ,
  &_n_Kr_MaskOsb,
  &_n_Kr_DPStgInv,
  &_n_Kr_DPStgVsr,
  &_n_Kr_Razv1,
  &_n_Kr_Razv2,
  &_n_Kr_Razv3,
  &_n_Ar1_Code,
  &_n_Ar1_Priz,
  &_n_Ar1_Priz1,
  &_n_Ar1_Date,
  &_n_Ar1_Date1,
  &_n_Ar1_Date2,
  &_n_Ar1_Sum,
  &_n_Ar1_Ind,
  &_n_Ar1_PrUI4,
  &_n_Ar1_PrUI2,
  &_n_Ar1_Pr1UI2,
  &_n_Ar2_Code,
  &_n_Ar2_Priz,
  &_n_Ar2_Date1,
  &_n_Ar2_Date2,
  &_n_Ar2_Sum,
  &_n_Ar2_Ind,
  &_n_Ar2_PrUI4,
  &_n_Ar2_PrUI2,
  &_n_Pd_Num,
  &_n_Pd_Fam,
  &_n_Pd_Name,
  &_n_Pd_Otch,
  &_n_Pd_IdCd,
  (StayFD *)B_Ls,
  (StayFD *)B_Ppl,
  (StayFD *)B_PplNac,
  (StayFD *)B_Zrbs,
  (StayFD *)B_Sv1,
  (StayFD *)B_Sv2,
  (StayFD *)B_Sv3,
  (StayFD *)B_Per,
  (StayFD *)B_Np,
  (StayFD *)B_Prc,
  (StayFD *)B_Nac,
  (StayFD *)B_NacOp,
  (StayFD *)B_NacKfn,
  (StayFD *)B_Stg,
  (StayFD *)B_Stgp,
  (StayFD *)B_Zrb,
  (StayFD *)B_Kor,
  (StayFD *)B_Igd,
  (StayFD *)B_Dolja,
  (StayFD *)B_Inv,
  (StayFD *)B_Che,
  (StayFD *)B_CheZp,
  (StayFD *)B_Nazn,
  (StayFD *)B_Osob,
  (StayFD *)B_Atst,
  (StayFD *)B_Umer,
  (StayFD *)B_Ispl,
  (StayFD *)B_Ud,
  (StayFD *)B_Det,
  (StayFD *)B_NUdr,
  (StayFD *)B_UdMec,
  (StayFD *)B_Ud2,
  (StayFD *)B_Ud3,
  (StayFD *)B_Rd,
  (StayFD *)B_Rod,
  (StayFD *)B_RabPer,
  (StayFD *)B_Zarab,
  (StayFD *)B_Zp,
  (StayFD *)B_Shifr,
  (StayFD *)B_VidOs,
  (StayFD *)B_Kr,
  (StayFD *)B_Stag,
  (StayFD *)B_Stagp,
  (StayFD *)B_Ar1,
  (StayFD *)B_Ar2,
  (StayFD *)B_Pd,
  NULL};

PICMODULEEND(LS)

