/* Begin FCbegin */
//-------------------------------------------------------------------------
// STAY / W      Resource file LS_SOC.XME
//-------------------------------------------------------------------------
// Created 27\04\2018 10:45
//-------------------------------------------------------------------------

#include "LS_SOC.h"

/* End FCbegin */
/* Begin FCinclude */
/* End FCinclude */
/* Begin FChead */
PICMODULEBEG(LS_SOC)

static StayFD _nn_LS_SOC = {NULL,TAG_PIC,0,0,0,0,"LS_SOC",NULL};
/* End FChead */
/* Begin FCtypedef */
/* End FCtypedef */
/* Begin FCfield */
StayDate Atst_Data;
StayFD _n_Atst_Data = {&Atst_Data,0,0,0,CLS_Date,0,"Atst_Data","���� ���������"};
StayFD *_Atst_Data = &_n_Atst_Data;

DWORD Atst_Num;
StayFD _n_Atst_Num = {&Atst_Num,0,0,0,CLS_L,0,"Atst_Num","����� ��������� (���������)"};
StayFD *_Atst_Num = &_n_Atst_Num;

BYTE  Atst_Type;
StayFD _n_Atst_Type = {&Atst_Type,0,0,0,CLS_S,0,"Atst_Type","��� ���������"};
StayFD *_Atst_Type = &_n_Atst_Type;

BYTE  CheZp_Code;
StayFD _n_CheZp_Code = {&CheZp_Code,0,0,0,CLS_S,0,"CheZp_Code","��� ���� ������/������.(KLZON)"};
StayFD *_CheZp_Code = &_n_CheZp_Code;

StayDate CheZp_DateBeg;
StayFD _n_CheZp_DateBeg = {&CheZp_DateBeg,0,0,0,CLS_Date,0,"CheZp_DateBeg","���� ������ �������"};
StayFD *_CheZp_DateBeg = &_n_CheZp_DateBeg;

StayDate CheZp_DateEnd;
StayFD _n_CheZp_DateEnd = {&CheZp_DateEnd,0,0,0,CLS_Date,0,"CheZp_DateEnd","���� ����� �������"};
StayFD *_CheZp_DateEnd = &_n_CheZp_DateEnd;

BYTE  CheZp_Nomig;
StayFD _n_CheZp_Nomig = {&CheZp_Nomig,0,0,0,CLS_S,0,"CheZp_Nomig","����� ���������"};
StayFD *_CheZp_Nomig = &_n_CheZp_Nomig;

BYTE  CheZp_Time;
StayFD _n_CheZp_Time = {&CheZp_Time,0,0,0,CLS_S,0,"CheZp_Time","���������/���������� ������."};
StayFD *_CheZp_Time = &_n_CheZp_Time;

BYTE  Che_Chpri;
StayFD _n_Che_Chpri = {&Che_Chpri,0,0,0,CLS_S,0,"Che_Chpri","��������� ������������ � ����"};
StayFD *_Che_Chpri = &_n_Che_Chpri;

StayDate Che_Dkprav;
StayFD _n_Che_Dkprav = {&Che_Dkprav,0,0,0,CLS_Date,0,"Che_Dkprav","���� ����� �����"};
StayFD *_Che_Dkprav = &_n_Che_Dkprav;

StayDate Che_Dnprav;
StayFD _n_Che_Dnprav = {&Che_Dnprav,0,0,0,CLS_Date,0,"Che_Dnprav","���� ������ �����"};
StayFD *_Che_Dnprav = &_n_Che_Dnprav;

BYTE  Che_Dobr;
StayFD _n_Che_Dobr = {&Che_Dobr,0,0,0,CLS_S,0,"Che_Dobr","�����. ������� � ����. �� ����"};
StayFD *_Che_Dobr = &_n_Che_Dobr;

BYTE  Che_Kbl;
StayFD _n_Che_Kbl = {&Che_Kbl,0,0,0,CLS_S,0,"Che_Kbl","��� ���������� (KLBL)"};
StayFD *_Che_Kbl = &_n_Che_Kbl;

BYTE  Che_Kzp;
StayFD _n_Che_Kzp = {&Che_Kzp,0,0,0,CLS_S,0,"Che_Kzp","��� ���� ���������� (1,2,3,4)"};
StayFD *_Che_Kzp = &_n_Che_Kzp;

BYTE  Che_Kzr;
StayFD _n_Che_Kzr = {&Che_Kzr,0,0,0,CLS_S,0,"Che_Kzr","��� ���� ������(1,2,3,4-����)"};
StayFD *_Che_Kzr = &_n_Che_Kzr;

BYTE  Che_Likvid;
StayFD _n_Che_Likvid = {&Che_Likvid,0,0,0,CLS_S,0,"Che_Likvid","�������(1-����,2-�����,3-����)"};
StayFD *_Che_Likvid = &_n_Che_Likvid;

BYTE  Che_Luch;
StayFD _n_Che_Luch = {&Che_Luch,0,0,0,CLS_S,0,"Che_Luch","�����. �������. �����.�������"};
StayFD *_Che_Luch = &_n_Che_Luch;

BYTE  Che_Nomig;
StayFD _n_Che_Nomig = {&Che_Nomig,0,0,0,CLS_S,0,"Che_Nomig","����� ���������"};
StayFD *_Che_Nomig = &_n_Che_Nomig;

BYTE  Che_Prod;
StayFD _n_Che_Prod = {&Che_Prod,0,0,0,CLS_S,0,"Che_Prod","����� �� �������� �� ����.���"};
StayFD *_Che_Prod = &_n_Che_Prod;

WORD  Che_Proj;
StayFD _n_Che_Proj = {&Che_Proj,0,0,0,CLS_I,0,"Che_Proj","������� �����.�� ������.� ��"};
StayFD *_Che_Proj = &_n_Che_Proj;

WORD  Che_Ptru;
StayFD _n_Che_Ptru = {&Che_Ptru,0,0,0,CLS_I,0,"Che_Ptru","% ������ ����������������"};
StayFD *_Che_Ptru = &_n_Che_Ptru;

WORD  Che_Snig;
StayFD _n_Che_Snig = {&Che_Snig,0,0,0,CLS_I,0,"Che_Snig","�������� ����.����. (� ���.)"};
StayFD *_Che_Snig = &_n_Che_Snig;

BYTE  Che_Tpos;
StayFD _n_Che_Tpos = {&Che_Tpos,0,0,0,CLS_S,0,"Che_Tpos","��� ������������� (KLPOST)"};
StayFD *_Che_Tpos = &_n_Che_Tpos;

char Igd_Dolja_Adr[101];
StayFD _n_Igd_Dolja_Adr = {&Igd_Dolja_Adr,0,0,0,CLS_V,100,"Igd_Dolja_Adr","����� ������� ������"};
StayFD *_Igd_Dolja_Adr = &_n_Igd_Dolja_Adr;

StayDate Igd_Dolja_DBeg;
StayFD _n_Igd_Dolja_DBeg = {&Igd_Dolja_DBeg,0,0,0,CLS_Date,0,"Igd_Dolja_DBeg","���� ��������� ������� ������ �"};
StayFD *_Igd_Dolja_DBeg = &_n_Igd_Dolja_DBeg;

StayDate Igd_Dolja_DEnd;
StayFD _n_Igd_Dolja_DEnd = {&Igd_Dolja_DEnd,0,0,0,CLS_Date,0,"Igd_Dolja_DEnd","���� ��������� ���� ��"};
StayFD *_Igd_Dolja_DEnd = &_n_Igd_Dolja_DEnd;

DWORD Igd_Dolja_Nls;
StayFD _n_Igd_Dolja_Nls = {&Igd_Dolja_Nls,0,0,0,CLS_L,0,"Igd_Dolja_Nls","����� �/� � �������� - �������,� ������� - ��������"};
StayFD *_Igd_Dolja_Nls = &_n_Igd_Dolja_Nls;

BYTE  Igd_Dolja_NumP;
StayFD _n_Igd_Dolja_NumP = {&Igd_Dolja_NumP,0,0,0,CLS_S,0,"Igd_Dolja_NumP","����� ������� ������"};
StayFD *_Igd_Dolja_NumP = &_n_Igd_Dolja_NumP;

DWORD Igd_Dolja_Os;
StayFD _n_Igd_Dolja_Os = {&Igd_Dolja_Os,0,0,0,CLS_L,0,"Igd_Dolja_Os","��� ��������� �����"};
StayFD *_Igd_Dolja_Os = &_n_Igd_Dolja_Os;

BYTE  Igd_Dolja_PAdr;
StayFD _n_Igd_Dolja_PAdr = {&Igd_Dolja_PAdr,0,0,0,CLS_S,0,"Igd_Dolja_PAdr","(1)-������� ������ �� ��������� ������"};
StayFD *_Igd_Dolja_PAdr = &_n_Igd_Dolja_PAdr;

BYTE  Igd_Dolja_PrDN;
StayFD _n_Igd_Dolja_PrDN = {&Igd_Dolja_PrDN,0,0,0,CLS_S,0,"Igd_Dolja_PrDN","(1)-������� ������ �����������"};
StayFD *_Igd_Dolja_PrDN = &_n_Igd_Dolja_PrDN;

StayDate Igd_Drog;
StayFD _n_Igd_Drog = {&Igd_Drog,0,0,0,CLS_Date,0,"Igd_Drog","���� ��������"};
StayFD *_Igd_Drog = &_n_Igd_Drog;

StayDate Igd_Dso;
StayFD _n_Igd_Dso = {&Igd_Dso,0,0,0,CLS_Date,0,"Igd_Dso","���� ������ (�������)"};
StayFD *_Igd_Dso = &_n_Igd_Dso;

StayDate Igd_Dusn;
StayFD _n_Igd_Dusn = {&Igd_Dusn,0,0,0,CLS_Date,0,"Igd_Dusn","���� �����������"};
StayFD *_Igd_Dusn = &_n_Igd_Dusn;

char Igd_Fio[51];
StayFD _n_Igd_Fio = {&Igd_Fio,0,0,0,CLS_V,50,"Igd_Fio","�������, ���, ��������"};
StayFD *_Igd_Fio = &_n_Igd_Fio;

BYTE  Igd_Katnetr;
StayFD _n_Igd_Katnetr = {&Igd_Katnetr,0,0,0,CLS_S,0,"Igd_Katnetr","��������� ������������������"};
StayFD *_Igd_Katnetr = &_n_Igd_Katnetr;

BYTE  Igd_Katrod;
StayFD _n_Igd_Katrod = {&Igd_Katrod,0,0,0,CLS_S,0,"Igd_Katrod","��������� ������� (KLROD)"};
StayFD *_Igd_Katrod = &_n_Igd_Katrod;

BYTE  Igd_Nomig;
StayFD _n_Igd_Nomig = {&Igd_Nomig,0,0,0,CLS_S,0,"Igd_Nomig","����� ��������� (Igd)"};
StayFD *_Igd_Nomig = &_n_Igd_Nomig;

BYTE  Igd_Pol;
StayFD _n_Igd_Pol = {&Igd_Pol,0,0,0,CLS_S,0,"Igd_Pol","��� (1 - �, 2 - �)"};
StayFD *_Igd_Pol = &_n_Igd_Pol;

BYTE  Igd_Prab;
StayFD _n_Igd_Prab = {&Igd_Prab,0,0,0,CLS_S,0,"Igd_Prab","������� ������"};
StayFD *_Igd_Prab = &_n_Igd_Prab;

BYTE  Igd_Prdel;
StayFD _n_Igd_Prdel = {&Igd_Prdel,0,0,0,CLS_S,0,"Igd_Prdel","������� ��������"};
StayFD *_Igd_Prdel = &_n_Igd_Prdel;

BYTE  Igd_Psn;
StayFD _n_Igd_Psn = {&Igd_Psn,0,0,0,CLS_S,0,"Igd_Psn","��� ������� ������ � ������"};
StayFD *_Igd_Psn = &_n_Igd_Psn;

BYTE  Igd_Sir;
StayFD _n_Igd_Sir = {&Igd_Sir,0,0,0,CLS_S,0,"Igd_Sir","�������   ������"};
StayFD *_Igd_Sir = &_n_Igd_Sir;

StayDate Inv_Dkpi;
StayFD _n_Inv_Dkpi = {&Inv_Dkpi,0,0,0,CLS_Date,0,"Inv_Dkpi","���� ���. ������� ������������"};
StayFD *_Inv_Dkpi = &_n_Inv_Dkpi;

StayDate Inv_Dni;
StayFD _n_Inv_Dni = {&Inv_Dni,0,0,0,CLS_Date,0,"Inv_Dni","���� ����������� ������������"};
StayFD *_Inv_Dni = &_n_Inv_Dni;

StayDate Inv_Dnpi;
StayFD _n_Inv_Dnpi = {&Inv_Dnpi,0,0,0,CLS_Date,0,"Inv_Dnpi","���� ���. ������� ������������"};
StayFD *_Inv_Dnpi = &_n_Inv_Dnpi;

BYTE  Inv_Grinv;
StayFD _n_Inv_Grinv = {&Inv_Grinv,0,0,0,CLS_S,0,"Inv_Grinv","������ ������������ (1,2,3)"};
StayFD *_Inv_Grinv = &_n_Inv_Grinv;

BYTE  Inv_Kbl;
StayFD _n_Inv_Kbl = {&Inv_Kbl,0,0,0,CLS_S,0,"Inv_Kbl","��� ���������� (KLBL)"};
StayFD *_Inv_Kbl = &_n_Inv_Kbl;

BYTE  Inv_Kod;
StayFD _n_Inv_Kod = {&Inv_Kod,0,0,0,CLS_S,0,"Inv_Kod","��� ������� ��������. (KLPINV)"};
StayFD *_Inv_Kod = &_n_Inv_Kod;

BYTE  Inv_Nomig;
StayFD _n_Inv_Nomig = {&Inv_Nomig,0,0,0,CLS_S,0,"Inv_Nomig","����� ���������"};
StayFD *_Inv_Nomig = &_n_Inv_Nomig;

BYTE  Inv_Stag;
StayFD _n_Inv_Stag = {&Inv_Stag,0,0,0,CLS_S,0,"Inv_Stag","���� �� ������ ������. �������"};
StayFD *_Inv_Stag = &_n_Inv_Stag;

StayDate Ispl_DatU;
StayFD _n_Ispl_DatU = {&Ispl_DatU,0,0,0,CLS_Date,0,"Ispl_DatU","���� ������ ��������.���������"};
StayFD *_Ispl_DatU = &_n_Ispl_DatU;

StayDate Ispl_Datae;
StayFD _n_Ispl_Datae = {&Ispl_Datae,0,0,0,CLS_Date,0,"Ispl_Datae","���� ��������� �������� %"};
StayFD *_Ispl_Datae = &_n_Ispl_Datae;

StayDate Ispl_Datar;
StayFD _n_Ispl_Datar = {&Ispl_Datar,0,0,0,CLS_Date,0,"Ispl_Datar","���� �������� �������"};
StayFD *_Ispl_Datar = &_n_Ispl_Datar;

StayDate Ispl_Datast;
StayFD _n_Ispl_Datast = {&Ispl_Datast,0,0,0,CLS_Date,0,"Ispl_Datast","���� �������� ��������"};
StayFD *_Ispl_Datast = &_n_Ispl_Datast;

StayDate Ispl_Datin;
StayFD _n_Ispl_Datin = {&Ispl_Datin,0,0,0,CLS_Date,0,"Ispl_Datin","���� ����������"};
StayFD *_Ispl_Datin = &_n_Ispl_Datin;

StayDate Ispl_Displ;
StayFD _n_Ispl_Displ = {&Ispl_Displ,0,0,0,CLS_Date,0,"Ispl_Displ","���� ������ ��������� �� �����"};
StayFD *_Ispl_Displ = &_n_Ispl_Displ;

STAYI6 Ispl_Dolg;
StayFD _n_Ispl_Dolg = {&Ispl_Dolg,0,0,0,CLS_Hs,2,"Ispl_Dolg","����� ����. ����� �� �����."};
StayFD *_Ispl_Dolg = &_n_Ispl_Dolg;

StayDate Ispl_Dpd;
StayFD _n_Ispl_Dpd = {&Ispl_Dpd,0,0,0,CLS_Date,0,"Ispl_Dpd","���� �����������"};
StayFD *_Ispl_Dpd = &_n_Ispl_Dpd;

StayDate Ispl_Dv;
StayFD _n_Ispl_Dv = {&Ispl_Dv,0,0,0,CLS_Date,0,"Ispl_Dv","���� ������"};
StayFD *_Ispl_Dv = &_n_Ispl_Dv;

BYTE  Ispl_Gor;
StayFD _n_Ispl_Gor = {&Ispl_Gor,0,0,0,CLS_S,0,"Ispl_Gor","������� �����/����"};
StayFD *_Ispl_Gor = &_n_Ispl_Gor;

BYTE  Ispl_Kd;
StayFD _n_Ispl_Kd = {&Ispl_Kd,0,0,0,CLS_S,0,"Ispl_Kd","��� ��������� (KLDOUD)"};
StayFD *_Ispl_Kd = &_n_Ispl_Kd;

BYTE  Ispl_Kdp;
StayFD _n_Ispl_Kdp = {&Ispl_Kdp,0,0,0,CLS_S,0,"Ispl_Kdp","�����.�� ��. ����� 50%"};
StayFD *_Ispl_Kdp = &_n_Ispl_Kdp;

WORD  Ispl_Kin;
StayFD _n_Ispl_Kin = {&Ispl_Kin,0,0,0,CLS_I,0,"Ispl_Kin","��� ����������"};
StayFD *_Ispl_Kin = &_n_Ispl_Kin;

BYTE  Ispl_Kold;
StayFD _n_Ispl_Kold = {&Ispl_Kold,0,0,0,CLS_S,0,"Ispl_Kold","���������� ����� ����������"};
StayFD *_Ispl_Kold = &_n_Ispl_Kold;

BYTE  Ispl_Ksud;
StayFD _n_Ispl_Ksud = {&Ispl_Ksud,0,0,0,CLS_S,0,"Ispl_Ksud","��� �����������, �����. �����."};
StayFD *_Ispl_Ksud = &_n_Ispl_Ksud;

BYTE  Ispl_Kud;
StayFD _n_Ispl_Kud = {&Ispl_Kud,0,0,0,CLS_S,0,"Ispl_Kud","��� ��������� (KLUD)"};
StayFD *_Ispl_Kud = &_n_Ispl_Kud;

WORD  Ispl_Kvz;
StayFD _n_Ispl_Kvz = {&Ispl_Kvz,0,0,0,CLS_I,0,"Ispl_Kvz","��� ���������� (0-���.����)"};
StayFD *_Ispl_Kvz = &_n_Ispl_Kvz;

char Ispl_Nd[10];
StayFD _n_Ispl_Nd = {&Ispl_Nd,0,0,0,CLS_V,9,"Ispl_Nd","�����  ���������"};
StayFD *_Ispl_Nd = &_n_Ispl_Nd;

WORD  Ispl_Num;
StayFD _n_Ispl_Num = {&Ispl_Num,0,0,0,CLS_I,0,"Ispl_Num","���������� ����� �����. � Ispl"};
StayFD *_Ispl_Num = &_n_Ispl_Num;

STAYI6 Ispl_Ost;
StayFD _n_Ispl_Ost = {&Ispl_Ost,0,0,0,CLS_Hs,2,"Ispl_Ost","������� �����. �� �����.������"};
StayFD *_Ispl_Ost = &_n_Ispl_Ost;

STAYI6 Ispl_Per;
StayFD _n_Ispl_Per = {&Ispl_Per,0,0,0,CLS_Hs,2,"Ispl_Per","������� ��������� �� ���� ����"};
StayFD *_Ispl_Per = &_n_Ispl_Per;

BYTE  Ispl_Per1;
StayFD _n_Ispl_Per1 = {&Ispl_Per1,0,0,0,CLS_S,0,"Ispl_Per1","������� ����� ���������"};
StayFD *_Ispl_Per1 = &_n_Ispl_Per1;

STAYI6 Ispl_PerSud;
StayFD _n_Ispl_PerSud = {&Ispl_PerSud,0,0,0,CLS_Hs,2,"Ispl_PerSud","����/c���� ������. ��. �� ���"};
StayFD *_Ispl_PerSud = &_n_Ispl_PerSud;

BYTE  Ispl_PerSud1;
StayFD _n_Ispl_PerSud1 = {&Ispl_PerSud1,0,0,0,CLS_S,0,"Ispl_PerSud1","������� ����� ���������"};
StayFD *_Ispl_PerSud1 = &_n_Ispl_PerSud1;

long  Ispl_PostDolg;
StayFD _n_Ispl_PostDolg = {&Ispl_PostDolg,0,0,0,CLS_Ls,2,"Ispl_PostDolg","������������� �� ����.�����"};
StayFD *_Ispl_PostDolg = &_n_Ispl_PostDolg;

BYTE  Ispl_Rkold;
StayFD _n_Ispl_Rkold = {&Ispl_Rkold,0,0,0,CLS_S,0,"Ispl_Rkold","���-�� ���������"};
StayFD *_Ispl_Rkold = &_n_Ispl_Rkold;

long  Ispl_Rud;
StayFD _n_Ispl_Rud = {&Ispl_Rud,0,0,0,CLS_Ls,2,"Ispl_Rud","����. ����������� ���������"};
StayFD *_Ispl_Rud = &_n_Ispl_Rud;

short Ispl_Rudp;
StayFD _n_Ispl_Rudp = {&Ispl_Rudp,0,0,0,CLS_Is,2,"Ispl_Rudp","����. �����.�� ��. �����.�����"};
StayFD *_Ispl_Rudp = &_n_Ispl_Rudp;

STAYI6 Ispl_SRud;
StayFD _n_Ispl_SRud = {&Ispl_SRud,0,0,0,CLS_Hs,2,"Ispl_SRud","����� ����������� ���������"};
StayFD *_Ispl_SRud = &_n_Ispl_SRud;

BYTE  Ispl_Sp;
StayFD _n_Ispl_Sp = {&Ispl_Sp,0,0,0,CLS_S,0,"Ispl_Sp","��������� � % ��� ����� (1,2)"};
StayFD *_Ispl_Sp = &_n_Ispl_Sp;

BYTE  Ispl_Spdet;
StayFD _n_Ispl_Spdet = {&Ispl_Spdet,0,0,0,CLS_S,0,"Ispl_Spdet","������ ������ �� �����"};
StayFD *_Ispl_Spdet = &_n_Ispl_Spdet;

BYTE  Ispl_Spos;
StayFD _n_Ispl_Spos = {&Ispl_Spos,0,0,0,CLS_S,0,"Ispl_Spos","������ ������� (�/�,����. ���)"};
StayFD *_Ispl_Spos = &_n_Ispl_Spos;

STAYI6 Ispl_SumUd;
StayFD _n_Ispl_SumUd = {&Ispl_SumUd,0,0,0,CLS_Hs,2,"Ispl_SumUd","��������� �����,c ���.����� ��"};
StayFD *_Ispl_SumUd = &_n_Ispl_SumUd;

char Ispl_Vhn[10];
StayFD _n_Ispl_Vhn = {&Ispl_Vhn,0,0,0,CLS_V,9,"Ispl_Vhn","�������� �����"};
StayFD *_Ispl_Vhn = &_n_Ispl_Vhn;

STAYUI6 Kor_IdCode;
StayFD _n_Kor_IdCode = {&Kor_IdCode,0,0,0,CLS_H,0,"Kor_IdCode","����������������� ����� ���������"};
StayFD *_Kor_IdCode = &_n_Kor_IdCode;

StayDate Kor_Datsm;
StayFD _n_Kor_Datsm = {&Kor_Datsm,0,0,0,CLS_Date,0,"Kor_Datsm","���� ������"};
StayFD *_Kor_Datsm = &_n_Kor_Datsm;

StayDate Kor_Drog;
StayFD _n_Kor_Drog = {&Kor_Drog,0,0,0,CLS_Date,0,"Kor_Drog","���� ����. ����. ����������"};
StayFD *_Kor_Drog = &_n_Kor_Drog;

StayDate Kor_Dvpen;
StayFD _n_Kor_Dvpen = {&Kor_Dvpen,0,0,0,CLS_Date,0,"Kor_Dvpen","���� ������ ����. �� ������"};
StayFD *_Kor_Dvpen = &_n_Kor_Dvpen;

BYTE  Kor_Katk;
StayFD _n_Kor_Katk = {&Kor_Katk,0,0,0,CLS_S,0,"Kor_Katk","��������� ��������� (KLKOR)"};
StayFD *_Kor_Katk = &_n_Kor_Katk;

BYTE  Kor_Pol;
StayFD _n_Kor_Pol = {&Kor_Pol,0,0,0,CLS_S,0,"Kor_Pol","���"};
StayFD *_Kor_Pol = &_n_Kor_Pol;

BYTE  Kor_Prism;
StayFD _n_Kor_Prism = {&Kor_Prism,0,0,0,CLS_S,0,"Kor_Prism","������� ������ (KLPS)"};
StayFD *_Kor_Prism = &_n_Kor_Prism;

BYTE  Kor_Vozrl;
StayFD _n_Kor_Vozrl = {&Kor_Vozrl,0,0,0,CLS_S,0,"Kor_Vozrl","������� �� ���� ������ (���)"};
StayFD *_Kor_Vozrl = &_n_Kor_Vozrl;

char Ls_Adrdom[8];
StayFD _n_Ls_Adrdom = {&Ls_Adrdom,0,0,0,CLS_V,7,"Ls_Adrdom","����� ����"};
StayFD *_Ls_Adrdom = &_n_Ls_Adrdom;

char Ls_Adrkorp[3];
StayFD _n_Ls_Adrkorp = {&Ls_Adrkorp,0,0,0,CLS_V,2,"Ls_Adrkorp","����� �������"};
StayFD *_Ls_Adrkorp = &_n_Ls_Adrkorp;

char Ls_Adrkv[5];
StayFD _n_Ls_Adrkv = {&Ls_Adrkv,0,0,0,CLS_V,4,"Ls_Adrkv","����� ��������"};
StayFD *_Ls_Adrkv = &_n_Ls_Adrkv;

WORD  Ls_Adrul;
StayFD _n_Ls_Adrul = {&Ls_Adrul,0,0,0,CLS_I,0,"Ls_Adrul","��� ����� (KLUL)"};
StayFD *_Ls_Adrul = &_n_Ls_Adrul;

StayDate Ls_Dnac;
StayFD _n_Ls_Dnac = {&Ls_Dnac,0,0,0,CLS_Date,0,"Ls_Dnac","���� ���������� ����������"};
StayFD *_Ls_Dnac = &_n_Ls_Dnac;

BYTE  Ls_Dolya;
StayFD _n_Ls_Dolya = {&Ls_Dolya,0,0,0,CLS_S,0,"Ls_Dolya","���������� ����-1"};
StayFD *_Ls_Dolya = &_n_Ls_Dolya;

BYTE  Ls_Drk;
StayFD _n_Ls_Drk = {&Ls_Drk,0,0,0,CLS_S,0,"Ls_Drk","K����������� ���� ��������"};
StayFD *_Ls_Drk = &_n_Ls_Drk;

StayDate Ls_Drog;
StayFD _n_Ls_Drog = {&Ls_Drog,0,0,0,CLS_Date,0,"Ls_Drog","���� ��������"};
StayFD *_Ls_Drog = &_n_Ls_Drog;

char Ls_Fio[51];
StayFD _n_Ls_Fio = {&Ls_Fio,0,0,0,CLS_V,50,"Ls_Fio","�������, ���, ��������"};
StayFD *_Ls_Fio = &_n_Ls_Fio;

BYTE  Ls_Grjd;
StayFD _n_Ls_Grjd = {&Ls_Grjd,0,0,0,CLS_S,0,"Ls_Grjd","��������� �������-1(2-�����)"};
StayFD *_Ls_Grjd = &_n_Ls_Grjd;

STAYUI6 Ls_IdCode;
StayFD _n_Ls_IdCode = {&Ls_IdCode,0,0,0,CLS_H,0,"Ls_IdCode","����������������� �����"};
StayFD *_Ls_IdCode = &_n_Ls_IdCode;

DWORD Ls_Indots;
StayFD _n_Ls_Indots = {&Ls_Indots,0,0,0,CLS_L,0,"Ls_Indots","������ ��������� ����� (KLI)"};
StayFD *_Ls_Indots = &_n_Ls_Indots;

WORD  Ls_Kfn;
StayFD _n_Ls_Kfn = {&Ls_Kfn,0,0,0,CLS_I,0,"Ls_Kfn","��� �������� �������"};
StayFD *_Ls_Kfn = &_n_Ls_Kfn;

DWORD Ls_Nls;
StayFD _n_Ls_Nls = {&Ls_Nls,0,0,0,CLS_L,0,"Ls_Nls","����� �/�� ���������� ������"};
StayFD *_Ls_Nls = &_n_Ls_Nls;

char Ls_Ntel[8];
StayFD _n_Ls_Ntel = {&Ls_Ntel,0,0,0,CLS_V,7,"Ls_Ntel","�������"};
StayFD *_Ls_Ntel = &_n_Ls_Ntel;

char Ls_Pasp[15];
StayFD _n_Ls_Pasp = {&Ls_Pasp,0,0,0,CLS_V,14,"Ls_Pasp","����� � ����� ��������"};
StayFD *_Ls_Pasp = &_n_Ls_Pasp;

BYTE  Ls_Pol;
StayFD _n_Ls_Pol = {&Ls_Pol,0,0,0,CLS_S,0,"Ls_Pol","��� (1 - �, 2 - �)"};
StayFD *_Ls_Pol = &_n_Ls_Pol;

BYTE  Ls_Prnp;
StayFD _n_Ls_Prnp = {&Ls_Prnp,0,0,0,CLS_S,0,"Ls_Prnp","1(2)-������. � 1(2) �����."};
StayFD *_Ls_Prnp = &_n_Ls_Prnp;

BYTE  Ls_Ptk;
StayFD _n_Ls_Ptk = {&Ls_Ptk,0,0,0,CLS_S,0,"Ls_Ptk","���� ��������� ���(1)"};
StayFD *_Ls_Ptk = &_n_Ls_Ptk;

BYTE  Ls_Rab;
StayFD _n_Ls_Rab = {&Ls_Rab,0,0,0,CLS_S,0,"Ls_Rab","������� ������ (KLPRAB)"};
StayFD *_Ls_Rab = &_n_Ls_Rab;

WORD  Ls_Raj;
StayFD _n_Ls_Raj = {&Ls_Raj,0,0,0,CLS_I,0,"Ls_Raj","��� ������"};
StayFD *_Ls_Raj = &_n_Ls_Raj;

WORD  Ls_Shifr;
StayFD _n_Ls_Shifr = {&Ls_Shifr,0,0,0,CLS_I,0,"Ls_Shifr","���� ������"};
StayFD *_Ls_Shifr = &_n_Ls_Shifr;

BYTE  Ls_Spos;
StayFD _n_Ls_Spos = {&Ls_Spos,0,0,0,CLS_S,0,"Ls_Spos","������ ������� (1-, 2-, 3-)"};
StayFD *_Ls_Spos = &_n_Ls_Spos;

BYTE  Ls_Ssh;
StayFD _n_Ls_Ssh = {&Ls_Ssh,0,0,0,CLS_S,0,"Ls_Ssh","����� � �������� ���.-1(����)"};
StayFD *_Ls_Ssh = &_n_Ls_Ssh;

BYTE  Ls_Vbper;
StayFD _n_Ls_Vbper = {&Ls_Vbper,0,0,0,CLS_S,0,"Ls_Vbper","1-����.���.����. � ����.������"};
StayFD *_Ls_Vbper = &_n_Ls_Vbper;

BYTE  Ls_Vid;
StayFD _n_Ls_Vid = {&Ls_Vid,0,0,0,CLS_S,0,"Ls_Vid","��� ������ (KLVPEN)"};
StayFD *_Ls_Vid = &_n_Ls_Vid;

BYTE  Ls_Vzvan;
StayFD _n_Ls_Vzvan = {&Ls_Vzvan,0,0,0,CLS_S,0,"Ls_Vzvan","�������� ������ (KLVZVAN)"};
StayFD *_Ls_Vzvan = &_n_Ls_Vzvan;

WORD  NUdr_Bj;
StayFD _n_NUdr_Bj = {&NUdr_Bj,0,0,0,CLS_I,0,"NUdr_Bj","�����(4-��,4-���,4-�.���,1-��"};
StayFD *_NUdr_Bj = &_n_NUdr_Bj;

StayDate NUdr_Datkvit;
StayFD _n_NUdr_Datkvit = {&NUdr_Datkvit,0,0,0,CLS_Date,0,"NUdr_Datkvit","���� ����.����."};
StayFD *_NUdr_Datkvit = &_n_NUdr_Datkvit;

WORD  NUdr_God;
StayFD _n_NUdr_God = {&NUdr_God,0,0,0,CLS_I,0,"NUdr_God","��� �������"};
StayFD *_NUdr_God = &_n_NUdr_God;

WORD  NUdr_GodF;
StayFD _n_NUdr_GodF = {&NUdr_GodF,0,0,0,CLS_I,0,"NUdr_GodF","��� ���������� �� ���."};
StayFD *_NUdr_GodF = &_n_NUdr_GodF;

WORD  NUdr_Godn;
StayFD _n_NUdr_Godn = {&NUdr_Godn,0,0,0,CLS_I,0,"NUdr_Godn","��� ����������"};
StayFD *_NUdr_Godn = &_n_NUdr_Godn;

WORD  NUdr_Kin;
StayFD _n_NUdr_Kin = {&NUdr_Kin,0,0,0,CLS_I,0,"NUdr_Kin","��� ����."};
StayFD *_NUdr_Kin = &_n_NUdr_Kin;

BYTE  NUdr_Mec;
StayFD _n_NUdr_Mec = {&NUdr_Mec,0,0,0,CLS_S,0,"NUdr_Mec","����� �������"};
StayFD *_NUdr_Mec = &_n_NUdr_Mec;

BYTE  NUdr_MecF;
StayFD _n_NUdr_MecF = {&NUdr_MecF,0,0,0,CLS_S,0,"NUdr_MecF","����� ���������� �� ���."};
StayFD *_NUdr_MecF = &_n_NUdr_MecF;

BYTE  NUdr_Mecn;
StayFD _n_NUdr_Mecn = {&NUdr_Mecn,0,0,0,CLS_S,0,"NUdr_Mecn","����� ����������"};
StayFD *_NUdr_Mecn = &_n_NUdr_Mecn;

DWORD NUdr_NKvit;
StayFD _n_NUdr_NKvit = {&NUdr_NKvit,0,0,0,CLS_L,0,"NUdr_NKvit","����� ����."};
StayFD *_NUdr_NKvit = &_n_NUdr_NKvit;

WORD  NUdr_NSpis;
StayFD _n_NUdr_NSpis = {&NUdr_NSpis,0,0,0,CLS_I,0,"NUdr_NSpis","����� ������"};
StayFD *_NUdr_NSpis = &_n_NUdr_NSpis;

STAYUI6 NUdr_Ost;
StayFD _n_NUdr_Ost = {&NUdr_Ost,0,0,0,CLS_H,2,"NUdr_Ost","������� ����� ���������"};
StayFD *_NUdr_Ost = &_n_NUdr_Ost;

STAYUI6 NUdr_SNac;
StayFD _n_NUdr_SNac = {&NUdr_SNac,0,0,0,CLS_H,2,"NUdr_SNac","����� ����������"};
StayFD *_NUdr_SNac = &_n_NUdr_SNac;

STAYUI6 NUdr_Sved;
StayFD _n_NUdr_Sved = {&NUdr_Sved,0,0,0,CLS_H,2,"NUdr_Sved","����� � ���������"};
StayFD *_NUdr_Sved = &_n_NUdr_Sved;

WORD  Nac_Bj;
StayFD _n_Nac_Bj = {&Nac_Bj,0,0,0,CLS_I,0,"Nac_Bj","(4-��,4-���,4-�/���,1-���,1-��"};
StayFD *_Nac_Bj = &_n_Nac_Bj;

StayDate Nac_DatOp;
StayFD _n_Nac_DatOp = {&Nac_DatOp,0,0,0,CLS_Date,0,"Nac_DatOp","���� ��������"};
StayFD *_Nac_DatOp = &_n_Nac_DatOp;

StayDate Nac_DatSpis;
StayFD _n_Nac_DatSpis = {&Nac_DatSpis,0,0,0,CLS_Date,0,"Nac_DatSpis","���� ������"};
StayFD *_Nac_DatSpis = &_n_Nac_DatSpis;

WORD  Nac_God;
StayFD _n_Nac_God = {&Nac_God,0,0,0,CLS_I,0,"Nac_God","��� ����������"};
StayFD *_Nac_God = &_n_Nac_God;

WORD  Nac_GodF;
StayFD _n_Nac_GodF = {&Nac_GodF,0,0,0,CLS_I,0,"Nac_GodF","��� ����������    --|"};
StayFD *_Nac_GodF = &_n_Nac_GodF;

WORD  Nac_Godn;
StayFD _n_Nac_Godn = {&Nac_Godn,0,0,0,CLS_I,0,"Nac_Godn","��� ����������         |�����"};
StayFD *_Nac_Godn = &_n_Nac_Godn;

DWORD Nac_IndOts;
StayFD _n_Nac_IndOts = {&Nac_IndOts,0,0,0,CLS_L,0,"Nac_IndOts","����� �����.�����"};
StayFD *_Nac_IndOts = &_n_Nac_IndOts;

WORD  Nac_Kfn;
StayFD _n_Nac_Kfn = {&Nac_Kfn,0,0,0,CLS_I,0,"Nac_Kfn","��� ������� (KLFN)"};
StayFD *_Nac_Kfn = &_n_Nac_Kfn;

WORD  Nac_Kin;
StayFD _n_Nac_Kin = {&Nac_Kin,0,0,0,CLS_I,0,"Nac_Kin","��� ���������� (���������)"};
StayFD *_Nac_Kin = &_n_Nac_Kin;

BYTE  Nac_Mec;
StayFD _n_Nac_Mec = {&Nac_Mec,0,0,0,CLS_S,0,"Nac_Mec","����� ����������"};
StayFD *_Nac_Mec = &_n_Nac_Mec;

BYTE  Nac_MecF;
StayFD _n_Nac_MecF = {&Nac_MecF,0,0,0,CLS_S,0,"Nac_MecF","����� ����������    | �� �����"};
StayFD *_Nac_MecF = &_n_Nac_MecF;

BYTE  Nac_Mecn;
StayFD _n_Nac_Mecn = {&Nac_Mecn,0,0,0,CLS_S,0,"Nac_Mecn","����� ����������     --|����"};
StayFD *_Nac_Mecn = &_n_Nac_Mecn;

WORD  Nac_Npp;
StayFD _n_Nac_Npp = {&Nac_Npp,0,0,0,CLS_I,0,"Nac_Npp","���������� ����� ����. �������"};
StayFD *_Nac_Npp = &_n_Nac_Npp;

WORD  Nac_Nppn;
StayFD _n_Nac_Nppn = {&Nac_Nppn,0,0,0,CLS_I,0,"Nac_Nppn","N �/� ����. ���������--|�����"};
StayFD *_Nac_Nppn = &_n_Nac_Nppn;

WORD  Nac_Nved;
StayFD _n_Nac_Nved = {&Nac_Nved,0,0,0,CLS_I,0,"Nac_Nved","����� ���������"};
StayFD *_Nac_Nved = &_n_Nac_Nved;

WORD  Nac_Op;
StayFD _n_Nac_Op = {&Nac_Op,0,0,0,CLS_I,0,"Nac_Op","��� ��������"};
StayFD *_Nac_Op = &_n_Nac_Op;

STAYI6 Nac_SInd;
StayFD _n_Nac_SInd = {&Nac_SInd,0,0,0,CLS_Hs,2,"Nac_SInd","C���� ����������"};
StayFD *_Nac_SInd = &_n_Nac_SInd;

STAYI6 Nac_SNac;
StayFD _n_Nac_SNac = {&Nac_SNac,0,0,0,CLS_Hs,2,"Nac_SNac","C���� ����������� --| ��������"};
StayFD *_Nac_SNac = &_n_Nac_SNac;

STAYI6 Nac_Sved;
StayFD _n_Nac_Sved = {&Nac_Sved,0,0,0,CLS_Hs,2,"Nac_Sved","C���� � ���������"};
StayFD *_Nac_Sved = &_n_Nac_Sved;

WORD  Nac_TVed;
StayFD _n_Nac_TVed = {&Nac_TVed,0,0,0,CLS_I,0,"Nac_TVed","���. ��� ���������"};
StayFD *_Nac_TVed = &_n_Nac_TVed;

WORD  Nac_Tip;
StayFD _n_Nac_Tip = {&Nac_Tip,0,0,0,CLS_I,0,"Nac_Tip","��� ������"};
StayFD *_Nac_Tip = &_n_Nac_Tip;

StayDate Nazn_Dnaz;
StayFD _n_Nazn_Dnaz = {&Nazn_Dnaz,0,0,0,CLS_Date,0,"Nazn_Dnaz","���� ����������/��������. ���."};
StayFD *_Nazn_Dnaz = &_n_Nazn_Dnaz;

StayDate Nazn_Dobr;
StayFD _n_Nazn_Dobr = {&Nazn_Dobr,0,0,0,CLS_Date,0,"Nazn_Dobr","���� ���������"};
StayFD *_Nazn_Dobr = &_n_Nazn_Dobr;

WORD  Nazn_Op;
StayFD _n_Nazn_Op = {&Nazn_Op,0,0,0,CLS_I,0,"Nazn_Op","��� ��������"};
StayFD *_Nazn_Op = &_n_Nazn_Op;

STAYI6 Nazn_Pensosn;
StayFD _n_Nazn_Pensosn = {&Nazn_Pensosn,0,0,0,CLS_Hs,5,"Nazn_Pensosn","����� ������ ��� �����������"};
StayFD *_Nazn_Pensosn = &_n_Nazn_Pensosn;

BYTE  Nazn_Pmax;
StayFD _n_Nazn_Pmax = {&Nazn_Pmax,0,0,0,CLS_S,0,"Nazn_Pmax","����� �� ����� �������� ( 1 )"};
StayFD *_Nazn_Pmax = &_n_Nazn_Pmax;

BYTE  Nazn_Prc;
StayFD _n_Nazn_Prc = {&Nazn_Prc,0,0,0,CLS_S,0,"Nazn_Prc","������� ��� ����������� ������"};
StayFD *_Nazn_Prc = &_n_Nazn_Prc;

StayDate Np_Dkprav;
StayFD _n_Np_Dkprav = {&Np_Dkprav,0,0,0,CLS_Date,0,"Np_Dkprav","���� ����� �����"};
StayFD *_Np_Dkprav = &_n_Np_Dkprav;

StayDate Np_Dnprav;
StayFD _n_Np_Dnprav = {&Np_Dnprav,0,0,0,CLS_Date,0,"Np_Dnprav","���� ������ �����"};
StayFD *_Np_Dnprav = &_n_Np_Dnprav;

BYTE  Np_Kbl;
StayFD _n_Np_Kbl = {&Np_Kbl,0,0,0,CLS_S,0,"Np_Kbl","��� ���������� (KLBL)"};
StayFD *_Np_Kbl = &_n_Np_Kbl;

WORD  Np_Kfn;
StayFD _n_Np_Kfn = {&Np_Kfn,0,0,0,CLS_I,0,"Np_Kfn","��� �������� (KLFN)"};
StayFD *_Np_Kfn = &_n_Np_Kfn;

BYTE  Np_Nomig;
StayFD _n_Np_Nomig = {&Np_Nomig,0,0,0,CLS_S,0,"Np_Nomig","����� ���������"};
StayFD *_Np_Nomig = &_n_Np_Nomig;

BYTE  Np_Pr;
StayFD _n_Np_Pr = {&Np_Pr,0,0,0,CLS_S,0,"Np_Pr","������� ���������"};
StayFD *_Np_Pr = &_n_Np_Pr;

STAYI6 Np_Snadp;
StayFD _n_Np_Snadp = {&Np_Snadp,0,0,0,CLS_Hs,2,"Np_Snadp","������ (�����. ��������)"};
StayFD *_Np_Snadp = &_n_Np_Snadp;

WORD  Osob_Code;
StayFD _n_Osob_Code = {&Osob_Code,0,0,0,CLS_I,0,"Osob_Code","��� ����������� (Kl_Osob)"};
StayFD *_Osob_Code = &_n_Osob_Code;

WORD  Osob_Priz;
StayFD _n_Osob_Priz = {&Osob_Priz,0,0,0,CLS_I,0,"Osob_Priz","������� - INT"};
StayFD *_Osob_Priz = &_n_Osob_Priz;

BYTE  Per_CodeDoc;
StayFD _n_Per_CodeDoc = {&Per_CodeDoc,0,0,0,CLS_S,0,"Per_CodeDoc","��� ��������� �� �����(KlDoc)"};
StayFD *_Per_CodeDoc = &_n_Per_CodeDoc;

StayDate Per_DateIz;
StayFD _n_Per_DateIz = {&Per_DateIz,0,0,0,CLS_Date,0,"Per_DateIz","���� ���������"};
StayFD *_Per_DateIz = &_n_Per_DateIz;

StayDate Per_Datin;
StayFD _n_Per_Datin = {&Per_Datin,0,0,0,CLS_Date,0,"Per_Datin","���� ����������"};
StayFD *_Per_Datin = &_n_Per_Datin;

StayDate Per_Dnpen;
StayFD _n_Per_Dnpen = {&Per_Dnpen,0,0,0,CLS_Date,0,"Per_Dnpen","���� ������ ������� (�)"};
StayFD *_Per_Dnpen = &_n_Per_Dnpen;

WORD  Per_Kfn;
StayFD _n_Per_Kfn = {&Per_Kfn,0,0,0,CLS_I,0,"Per_Kfn","��� ������� (KLFN)"};
StayFD *_Per_Kfn = &_n_Per_Kfn;

WORD  Per_Kin;
StayFD _n_Per_Kin = {&Per_Kin,0,0,0,CLS_I,0,"Per_Kin","��� ����������"};
StayFD *_Per_Kin = &_n_Per_Kin;

DWORD Per_NIz;
StayFD _n_Per_NIz = {&Per_NIz,0,0,0,CLS_L,0,"Per_NIz","����� ���������"};
StayFD *_Per_NIz = &_n_Per_NIz;

WORD  Per_Op;
StayFD _n_Per_Op = {&Per_Op,0,0,0,CLS_I,0,"Per_Op","��� ��������"};
StayFD *_Per_Op = &_n_Per_Op;

BYTE  Per_Prper;
StayFD _n_Per_Prper = {&Per_Prper,0,0,0,CLS_S,0,"Per_Prper","�����.�������� ���. � NAC"};
StayFD *_Per_Prper = &_n_Per_Prper;

BYTE  Per_Psn;
StayFD _n_Per_Psn = {&Per_Psn,0,0,0,CLS_S,0,"Per_Psn","������� ������ � ������(KLPSN)"};
StayFD *_Per_Psn = &_n_Per_Psn;

STAYI6 Per_Rnaz;
StayFD _n_Per_Rnaz = {&Per_Rnaz,0,0,0,CLS_Hs,2,"Per_Rnaz","����������� ����� ��� ���� ���"};
StayFD *_Per_Rnaz = &_n_Per_Rnaz;

WORD  PplNac_God;
StayFD _n_PplNac_God = {&PplNac_God,0,0,0,CLS_I,0,"PplNac_God","��� ��������� ���������"};
StayFD *_PplNac_God = &_n_PplNac_God;

WORD  PplNac_Mec;
StayFD _n_PplNac_Mec = {&PplNac_Mec,0,0,0,CLS_I,0,"PplNac_Mec","����� ��������� ���������"};
StayFD *_PplNac_Mec = &_n_PplNac_Mec;

BYTE  PplNac_Npp;
StayFD _n_PplNac_Npp = {&PplNac_Npp,0,0,0,CLS_S,0,"PplNac_Npp","����� �� ������� ������"};
StayFD *_PplNac_Npp = &_n_PplNac_Npp;

STAYUI6 PplNac_Ost;
StayFD _n_PplNac_Ost = {&PplNac_Ost,0,0,0,CLS_H,2,"PplNac_Ost","����� �������"};
StayFD *_PplNac_Ost = &_n_PplNac_Ost;

STAYUI6 PplNac_Sum;
StayFD _n_PplNac_Sum = {&PplNac_Sum,0,0,0,CLS_H,2,"PplNac_Sum","����� ��������� ���������"};
StayFD *_PplNac_Sum = &_n_PplNac_Sum;

StayDate Ppl_DateObn;
StayFD _n_Ppl_DateObn = {&Ppl_DateObn,0,0,0,CLS_Date,0,"Ppl_DateObn","���� ����������� ���������"};
StayFD *_Ppl_DateObn = &_n_Ppl_DateObn;

StayDate Ppl_DatePk;
StayFD _n_Ppl_DatePk = {&Ppl_DatePk,0,0,0,CLS_Date,0,"Ppl_DatePk","���� ����� ���������"};
StayFD *_Ppl_DatePk = &_n_Ppl_DatePk;

StayDate Ppl_DatePs;
StayFD _n_Ppl_DatePs = {&Ppl_DatePs,0,0,0,CLS_Date,0,"Ppl_DatePs","���� ������ ���������"};
StayFD *_Ppl_DatePs = &_n_Ppl_DatePs;

StayDate Ppl_DateUdr;
StayFD _n_Ppl_DateUdr = {&Ppl_DateUdr,0,0,0,CLS_Date,0,"Ppl_DateUdr","���� ������ ���������"};
StayFD *_Ppl_DateUdr = &_n_Ppl_DateUdr;

WORD  Ppl_Kfn;
StayFD _n_Ppl_Kfn = {&Ppl_Kfn,0,0,0,CLS_I,0,"Ppl_Kfn","��� ������� �� ���������"};
StayFD *_Ppl_Kfn = &_n_Ppl_Kfn;

BYTE  Ppl_Prizn;
StayFD _n_Ppl_Prizn = {&Ppl_Prizn,0,0,0,CLS_S,0,"Ppl_Prizn","�������(1-���.,2-������)"};
StayFD *_Ppl_Prizn = &_n_Ppl_Prizn;

STAYI6 Ppl_Sum;
StayFD _n_Ppl_Sum = {&Ppl_Sum,0,0,0,CLS_Hs,2,"Ppl_Sum","����� ���������"};
StayFD *_Ppl_Sum = &_n_Ppl_Sum;

STAYI6 Ppl_SumMon;
StayFD _n_Ppl_SumMon = {&Ppl_SumMon,0,0,0,CLS_Hs,2,"Ppl_SumMon","����������� ����� ���������"};
StayFD *_Ppl_SumMon = &_n_Ppl_SumMon;

STAYI6 Ppl_SumOst;
StayFD _n_Ppl_SumOst = {&Ppl_SumOst,0,0,0,CLS_Hs,2,"Ppl_SumOst","����� �������"};
StayFD *_Ppl_SumOst = &_n_Ppl_SumOst;

BYTE  Ppl_Tip;
StayFD _n_Ppl_Tip = {&Ppl_Tip,0,0,0,CLS_S,0,"Ppl_Tip","��� ���. �������. ���������"};
StayFD *_Ppl_Tip = &_n_Ppl_Tip;

STAYUI6 Prc_Code;
StayFD _n_Prc_Code = {&Prc_Code,0,0,0,CLS_H,0,"Prc_Code","��� �����������/�����������"};
StayFD *_Prc_Code = &_n_Prc_Code;

BYTE  Prc_Dni;
StayFD _n_Prc_Dni = {&Prc_Dni,0,0,0,CLS_S,0,"Prc_Dni","���-�� ���� �����"};
StayFD *_Prc_Dni = &_n_Prc_Dni;

BYTE  Prc_God;
StayFD _n_Prc_God = {&Prc_God,0,0,0,CLS_S,0,"Prc_God","���-�� ��� �����"};
StayFD *_Prc_God = &_n_Prc_God;

BYTE  Prc_Mec;
StayFD _n_Prc_Mec = {&Prc_Mec,0,0,0,CLS_S,0,"Prc_Mec","���_�� ������� �����"};
StayFD *_Prc_Mec = &_n_Prc_Mec;

long  Prc_One;
StayFD _n_Prc_One = {&Prc_One,0,0,0,CLS_Ls,2,"Prc_One","������� ��� ��������� ���."};
StayFD *_Prc_One = &_n_Prc_One;

WORD  Prc_Priz;
StayFD _n_Prc_Priz = {&Prc_Priz,0,0,0,CLS_I,0,"Prc_Priz","�������"};
StayFD *_Prc_Priz = &_n_Prc_Priz;

long  Prc_Two;
StayFD _n_Prc_Two = {&Prc_Two,0,0,0,CLS_Ls,2,"Prc_Two","������� ��� �� ��������� ���."};
StayFD *_Prc_Two = &_n_Prc_Two;

WORD  RabPer_CodIns;
StayFD _n_RabPer_CodIns = {&RabPer_CodIns,0,0,0,CLS_I,0,"RabPer_CodIns","��� ����������"};
StayFD *_RabPer_CodIns = &_n_RabPer_CodIns;

StayDate RabPer_Date;
StayFD _n_RabPer_Date = {&RabPer_Date,0,0,0,CLS_Date,0,"RabPer_Date","���� ������ / ����� ������(1-� ����� ����)"};
StayFD *_RabPer_Date = &_n_RabPer_Date;

StayDate RabPer_DateIns;
StayFD _n_RabPer_DateIns = {&RabPer_DateIns,0,0,0,CLS_Date,0,"RabPer_DateIns","���� ����������"};
StayFD *_RabPer_DateIns = &_n_RabPer_DateIns;

BYTE  RabPer_Pr;
StayFD _n_RabPer_Pr = {&RabPer_Pr,0,0,0,CLS_S,0,"RabPer_Pr","������� ����������"};
StayFD *_RabPer_Pr = &_n_RabPer_Pr;

WORD  Rd_CdDoh;
StayFD _n_Rd_CdDoh = {&Rd_CdDoh,0,0,0,CLS_I,0,"Rd_CdDoh","��� ��������� ������"};
StayFD *_Rd_CdDoh = &_n_Rd_CdDoh;

BYTE  Rd_Code;
StayFD _n_Rd_Code = {&Rd_Code,0,0,0,CLS_S,0,"Rd_Code","��� ���. ��.����� (klcfam)"};
StayFD *_Rd_Code = &_n_Rd_Code;

BYTE  Rd_Kv;
StayFD _n_Rd_Kv = {&Rd_Kv,0,0,0,CLS_S,0,"Rd_Kv","����� ��������"};
StayFD *_Rd_Kv = &_n_Rd_Kv;

BYTE  Rd_Nmes;
StayFD _n_Rd_Nmes = {&Rd_Nmes,0,0,0,CLS_S,0,"Rd_Nmes","����� �������"};
StayFD *_Rd_Nmes = &_n_Rd_Nmes;

BYTE  Rd_NomCode;
StayFD _n_Rd_NomCode = {&Rd_NomCode,0,0,0,CLS_S,0,"Rd_NomCode","���������� ����� �� ���������"};
StayFD *_Rd_NomCode = &_n_Rd_NomCode;

STAYI6 Rd_Suma;
StayFD _n_Rd_Suma = {&Rd_Suma,0,0,0,CLS_Hs,5,"Rd_Suma","����� �� ������ (��.)"};
StayFD *_Rd_Suma = &_n_Rd_Suma;

STAYI6 Rd_SumaMes;
StayFD _n_Rd_SumaMes = {&Rd_SumaMes,0,0,0,CLS_Hs,5,"Rd_SumaMes","����� �� �����"};
StayFD *_Rd_SumaMes = &_n_Rd_SumaMes;

WORD  Rd_Year;
StayFD _n_Rd_Year = {&Rd_Year,0,0,0,CLS_I,0,"Rd_Year","���"};
StayFD *_Rd_Year = &_n_Rd_Year;

BYTE  Rod_CodeNW;
StayFD _n_Rod_CodeNW = {&Rod_CodeNW,0,0,0,CLS_S,0,"Rod_CodeNW","����. �� ���.(klnwork.dt)"};
StayFD *_Rod_CodeNW = &_n_Rod_CodeNW;

StayDate Rod_D1;
StayFD _n_Rod_D1 = {&Rod_D1,0,0,0,CLS_Date,0,"Rod_D1","���� ����������� �����"};
StayFD *_Rod_D1 = &_n_Rod_D1;

StayDate Rod_D2;
StayFD _n_Rod_D2 = {&Rod_D2,0,0,0,CLS_Date,0,"Rod_D2","���� ������������ ���������"};
StayFD *_Rod_D2 = &_n_Rod_D2;

StayDate Rod_DFree;
StayFD _n_Rod_DFree = {&Rod_DFree,0,0,0,CLS_Date,0,"Rod_DFree","���� ����������"};
StayFD *_Rod_DFree = &_n_Rod_DFree;

StayDate Rod_DReg;
StayFD _n_Rod_DReg = {&Rod_DReg,0,0,0,CLS_Date,0,"Rod_DReg","���� ����������� � ��"};
StayFD *_Rod_DReg = &_n_Rod_DReg;

BYTE  Rod_MaskJob;
StayFD _n_Rod_MaskJob = {&Rod_MaskJob,0,0,0,CLS_S,0,"Rod_MaskJob","�����. ������� ������"};
StayFD *_Rod_MaskJob = &_n_Rod_MaskJob;

BYTE  Rod_Parents;
StayFD _n_Rod_Parents = {&Rod_Parents,0,0,0,CLS_S,0,"Rod_Parents","���. ��������   (klpar.dt)"};
StayFD *_Rod_Parents = &_n_Rod_Parents;

WORD  Rod_WorkD;
StayFD _n_Rod_WorkD = {&Rod_WorkD,0,0,0,CLS_I,0,"Rod_WorkD","�-�� ������� ����"};
StayFD *_Rod_WorkD = &_n_Rod_WorkD;

WORD  Shifr_Code;
StayFD _n_Shifr_Code = {&Shifr_Code,0,0,0,CLS_I,0,"Shifr_Code","��� ������ ����� ������"};
StayFD *_Shifr_Code = &_n_Shifr_Code;

StayDate Shifr_DateC;
StayFD _n_Shifr_DateC = {&Shifr_DateC,0,0,0,CLS_Date,0,"Shifr_DateC","���� � ..."};
StayFD *_Shifr_DateC = &_n_Shifr_DateC;

WORD  Shifr_InsCod;
StayFD _n_Shifr_InsCod = {&Shifr_InsCod,0,0,0,CLS_I,0,"Shifr_InsCod","��� ����������"};
StayFD *_Shifr_InsCod = &_n_Shifr_InsCod;

StayDate Shifr_InsDat;
StayFD _n_Shifr_InsDat = {&Shifr_InsDat,0,0,0,CLS_Date,0,"Shifr_InsDat","���� ����������"};
StayFD *_Shifr_InsDat = &_n_Shifr_InsDat;

WORD  Shifr_Kfn;
StayFD _n_Shifr_Kfn = {&Shifr_Kfn,0,0,0,CLS_I,0,"Shifr_Kfn","��� ��������� KFN(Ls_Kfn)"};
StayFD *_Shifr_Kfn = &_n_Shifr_Kfn;

BYTE  Stg_Dni;
StayFD _n_Stg_Dni = {&Stg_Dni,0,0,0,CLS_S,0,"Stg_Dni","���"};
StayFD *_Stg_Dni = &_n_Stg_Dni;

BYTE  Stg_God;
StayFD _n_Stg_God = {&Stg_God,0,0,0,CLS_S,0,"Stg_God","����"};
StayFD *_Stg_God = &_n_Stg_God;

WORD  Stg_Kods;
StayFD _n_Stg_Kods = {&Stg_Kods,0,0,0,CLS_I,0,"Stg_Kods","��� ����� (KLStg)"};
StayFD *_Stg_Kods = &_n_Stg_Kods;

BYTE  Stg_Mec;
StayFD _n_Stg_Mec = {&Stg_Mec,0,0,0,CLS_S,0,"Stg_Mec","������"};
StayFD *_Stg_Mec = &_n_Stg_Mec;

StayDate Stg_DEnd;
StayFD _n_Stg_DEnd = {&Stg_DEnd,0,0,0,CLS_Date,0,"Stg_DEnd","���� ���������� �����"};
StayFD *_Stg_DEnd = &_n_Stg_DEnd;

StayDate Stgp_Dbeg;
StayFD _n_Stgp_Dbeg = {&Stgp_Dbeg,0,0,0,CLS_Date,0,"Stgp_Dbeg","���� ������"};
StayFD *_Stgp_Dbeg = &_n_Stgp_Dbeg;

BYTE  Stgp_Dd;
StayFD _n_Stgp_Dd = {&Stgp_Dd,0,0,0,CLS_S,0,"Stgp_Dd","����� ����"};
StayFD *_Stgp_Dd = &_n_Stgp_Dd;

StayDate Stgp_Dend;
StayFD _n_Stgp_Dend = {&Stgp_Dend,0,0,0,CLS_Date,0,"Stgp_Dend","���� �����"};
StayFD *_Stgp_Dend = &_n_Stgp_Dend;

BYTE  Stgp_Dok;
StayFD _n_Stgp_Dok = {&Stgp_Dok,0,0,0,CLS_S,0,"Stgp_Dok","������� ����. ���������"};
StayFD *_Stgp_Dok = &_n_Stgp_Dok;

BYTE  Stgp_Gg;
StayFD _n_Stgp_Gg = {&Stgp_Gg,0,0,0,CLS_S,0,"Stgp_Gg","����� ���"};
StayFD *_Stgp_Gg = &_n_Stgp_Gg;

WORD  Stgp_Kolh;
StayFD _n_Stgp_Kolh = {&Stgp_Kolh,0,0,0,CLS_I,0,"Stgp_Kolh","����� ��������� � �������"};
StayFD *_Stgp_Kolh = &_n_Stgp_Kolh;

STAYUI6 Stgp_KodPr;
StayFD _n_Stgp_KodPr = {&Stgp_KodPr,0,0,0,CLS_H,0,"Stgp_KodPr","��� �����������"};
StayFD *_Stgp_KodPr = &_n_Stgp_KodPr;

BYTE  Stgp_Krat;
StayFD _n_Stgp_Krat = {&Stgp_Krat,0,0,0,CLS_S,0,"Stgp_Krat","��� ���������� �����"};
StayFD *_Stgp_Krat = &_n_Stgp_Krat;

WORD  Stgp_Lgvl;
StayFD _n_Stgp_Lgvl = {&Stgp_Lgvl,0,0,0,CLS_I,0,"Stgp_Lgvl","��� ��������� �����"};
StayFD *_Stgp_Lgvl = &_n_Stgp_Lgvl;

BYTE  Stgp_Mm;
StayFD _n_Stgp_Mm = {&Stgp_Mm,0,0,0,CLS_S,0,"Stgp_Mm","����� �������"};
StayFD *_Stgp_Mm = &_n_Stgp_Mm;

BYTE  Stgp_Sever;
StayFD _n_Stgp_Sever = {&Stgp_Sever,0,0,0,CLS_S,0,"Stgp_Sever","������� ������ � ���.������"};
StayFD *_Stgp_Sever = &_n_Stgp_Sever;

BYTE  Stgp_Sezon;
StayFD _n_Stgp_Sezon = {&Stgp_Sezon,0,0,0,CLS_S,0,"Stgp_Sezon","������� �������� �����"};
StayFD *_Stgp_Sezon = &_n_Stgp_Sezon;

WORD  Stgp_Vtch;
StayFD _n_Stgp_Vtch = {&Stgp_Vtch,0,0,0,CLS_I,0,"Stgp_Vtch","������� ����� ����� � ��� ���"};
StayFD *_Stgp_Vtch = &_n_Stgp_Vtch;

BYTE  Sv1_Du;
StayFD _n_Sv1_Du = {&Sv1_Du,0,0,0,CLS_S,0,"Sv1_Du","����������� �������"};
StayFD *_Sv1_Du = &_n_Sv1_Du;

BYTE  Sv1_Dvipl;
StayFD _n_Sv1_Dvipl = {&Sv1_Dvipl,0,0,0,CLS_S,0,"Sv1_Dvipl","���� ������� (����)"};
StayFD *_Sv1_Dvipl = &_n_Sv1_Dvipl;

BYTE  Sv1_Kus;
StayFD _n_Sv1_Kus = {&Sv1_Kus,0,0,0,CLS_S,0,"Sv1_Kus","��� ���� �����"};
StayFD *_Sv1_Kus = &_n_Sv1_Kus;

DWORD Sv1_Os;
StayFD _n_Sv1_Os = {&Sv1_Os,0,0,0,CLS_L,0,"Sv1_Os","��������� �����"};
StayFD *_Sv1_Os = &_n_Sv1_Os;

WORD  Sv2_Ncsbb;
StayFD _n_Sv2_Ncsbb = {&Sv2_Ncsbb,0,0,0,CLS_I,0,"Sv2_Ncsbb","���"};
StayFD *_Sv2_Ncsbb = &_n_Sv2_Ncsbb;

WORD  Sv2_Npsbb;
StayFD _n_Sv2_Npsbb = {&Sv2_Npsbb,0,0,0,CLS_I,0,"Sv2_Npsbb","���"};
StayFD *_Sv2_Npsbb = &_n_Sv2_Npsbb;

char Sv2_Vklad[26];
StayFD _n_Sv2_Vklad = {&Sv2_Vklad,0,0,0,CLS_V,25,"Sv2_Vklad","����� ������"};
StayFD *_Sv2_Vklad = &_n_Sv2_Vklad;

char Sv3_Adr[101];
StayFD _n_Sv3_Adr = {&Sv3_Adr,0,0,0,CLS_V,100,"Sv3_Adr","����� ��� 3 �������"};
StayFD *_Sv3_Adr = &_n_Sv3_Adr;

DWORD Sv3_Indots;
StayFD _n_Sv3_Indots = {&Sv3_Indots,0,0,0,CLS_L,0,"Sv3_Indots","������ ��������� ����� (KLI)"};
StayFD *_Sv3_Indots = &_n_Sv3_Indots;

BYTE  Sv3_Tar;
StayFD _n_Sv3_Tar = {&Sv3_Tar,0,0,0,CLS_S,0,"Sv3_Tar","��� ������ ��������� �����"};
StayFD *_Sv3_Tar = &_n_Sv3_Tar;

char Ud2_Abank[51];
StayFD _n_Ud2_Abank = {&Ud2_Abank,0,0,0,CLS_V,50,"Ud2_Abank","����� �����"};
StayFD *_Ud2_Abank = &_n_Ud2_Abank;

StayDate Ud2_Dpd;
StayFD _n_Ud2_Dpd = {&Ud2_Dpd,0,0,0,CLS_Date,0,"Ud2_Dpd","���� ����������� ���������"};
StayFD *_Ud2_Dpd = &_n_Ud2_Dpd;

char Ud2_Fio[51];
StayFD _n_Ud2_Fio = {&Ud2_Fio,0,0,0,CLS_V,50,"Ud2_Fio","��� ����������"};
StayFD *_Ud2_Fio = &_n_Ud2_Fio;

DWORD Ud2_Indots;
StayFD _n_Ud2_Indots = {&Ud2_Indots,0,0,0,CLS_L,0,"Ud2_Indots","������ ����. ��������� (KLI)"};
StayFD *_Ud2_Indots = &_n_Ud2_Indots;

BYTE  Ud2_Kud;
StayFD _n_Ud2_Kud = {&Ud2_Kud,0,0,0,CLS_S,0,"Ud2_Kud","��� ��������� (KLUD)"};
StayFD *_Ud2_Kud = &_n_Ud2_Kud;

char Ud2_Nbank[41];
StayFD _n_Ud2_Nbank = {&Ud2_Nbank,0,0,0,CLS_V,40,"Ud2_Nbank","������������ �����"};
StayFD *_Ud2_Nbank = &_n_Ud2_Nbank;

WORD  Ud2_Ncsbb;
StayFD _n_Ud2_Ncsbb = {&Ud2_Ncsbb,0,0,0,CLS_I,0,"Ud2_Ncsbb","����� ��"};
StayFD *_Ud2_Ncsbb = &_n_Ud2_Ncsbb;

WORD  Ud2_Npsbb;
StayFD _n_Ud2_Npsbb = {&Ud2_Npsbb,0,0,0,CLS_I,0,"Ud2_Npsbb","����� ������������ ��"};
StayFD *_Ud2_Npsbb = &_n_Ud2_Npsbb;

char Ud2_Vhn[10];
StayFD _n_Ud2_Vhn = {&Ud2_Vhn,0,0,0,CLS_V,9,"Ud2_Vhn","�������� ����� ���������"};
StayFD *_Ud2_Vhn = &_n_Ud2_Vhn;

char Ud2_Vklad[26];
StayFD _n_Ud2_Vklad = {&Ud2_Vklad,0,0,0,CLS_V,25,"Ud2_Vklad","����� ������"};
StayFD *_Ud2_Vklad = &_n_Ud2_Vklad;

char Ud3_Adom[101];
StayFD _n_Ud3_Adom = {&Ud3_Adom,0,0,0,CLS_V,100,"Ud3_Adom","�����, ���, ������, ��������"};
StayFD *_Ud3_Adom = &_n_Ud3_Adom;

StayDate Ud3_Dpd;
StayFD _n_Ud3_Dpd = {&Ud3_Dpd,0,0,0,CLS_Date,0,"Ud3_Dpd","���� ����������� ���������"};
StayFD *_Ud3_Dpd = &_n_Ud3_Dpd;

char Ud3_Fio[51];
StayFD _n_Ud3_Fio = {&Ud3_Fio,0,0,0,CLS_V,50,"Ud3_Fio","��� ����������"};
StayFD *_Ud3_Fio = &_n_Ud3_Fio;

DWORD Ud3_Indots;
StayFD _n_Ud3_Indots = {&Ud3_Indots,0,0,0,CLS_L,0,"Ud3_Indots","������ ��������� �����"};
StayFD *_Ud3_Indots = &_n_Ud3_Indots;

BYTE  Ud3_Kud;
StayFD _n_Ud3_Kud = {&Ud3_Kud,0,0,0,CLS_S,0,"Ud3_Kud","��� ��������� (KLUD)"};
StayFD *_Ud3_Kud = &_n_Ud3_Kud;

char Ud3_Vhn[10];
StayFD _n_Ud3_Vhn = {&Ud3_Vhn,0,0,0,CLS_V,9,"Ud3_Vhn","�������� ����� ���������"};
StayFD *_Ud3_Vhn = &_n_Ud3_Vhn;

StayDate Ud_Dso;
StayFD _n_Ud_Dso = {&Ud_Dso,0,0,0,CLS_Date,0,"Ud_Dso","���� ������ ���������"};
StayFD *_Ud_Dso = &_n_Ud_Dso;

BYTE  Ud_Psn;
StayFD _n_Ud_Psn = {&Ud_Psn,0,0,0,CLS_S,0,"Ud_Psn","��� ������� ������ ���������"};
StayFD *_Ud_Psn = &_n_Ud_Psn;

char Umer_Adr[101];
StayFD _n_Umer_Adr = {&Umer_Adr,0,0,0,CLS_V,100,"Umer_Adr","����� ���������"};
StayFD *_Umer_Adr = &_n_Umer_Adr;

StayDate Umer_DatPoh;
StayFD _n_Umer_DatPoh = {&Umer_DatPoh,0,0,0,CLS_Date,0,"Umer_DatPoh","���� �������"};
StayFD *_Umer_DatPoh = &_n_Umer_DatPoh;

StayDate Umer_DatPos;
StayFD _n_Umer_DatPos = {&Umer_DatPos,0,0,0,CLS_Date,0,"Umer_DatPos","���� ���������� �������"};
StayFD *_Umer_DatPos = &_n_Umer_DatPos;

StayDate Umer_DatSm;
StayFD _n_Umer_DatSm = {&Umer_DatSm,0,0,0,CLS_Date,0,"Umer_DatSm","���� ������"};
StayFD *_Umer_DatSm = &_n_Umer_DatSm;

StayDate Umer_DatSp;
StayFD _n_Umer_DatSp = {&Umer_DatSp,0,0,0,CLS_Date,0,"Umer_DatSp","���� ������"};
StayFD *_Umer_DatSp = &_n_Umer_DatSp;

StayDate Umer_DatZap;
StayFD _n_Umer_DatZap = {&Umer_DatZap,0,0,0,CLS_Date,0,"Umer_DatZap","���� ������"};
StayFD *_Umer_DatZap = &_n_Umer_DatZap;

char Umer_Fio[51];
StayFD _n_Umer_Fio = {&Umer_Fio,0,0,0,CLS_V,50,"Umer_Fio","��� ���������"};
StayFD *_Umer_Fio = &_n_Umer_Fio;

WORD  Umer_God;
StayFD _n_Umer_God = {&Umer_God,0,0,0,CLS_I,0,"Umer_God","��� ���.�����.����.��������"};
StayFD *_Umer_God = &_n_Umer_God;

BYTE  Umer_Mec;
StayFD _n_Umer_Mec = {&Umer_Mec,0,0,0,CLS_S,0,"Umer_Mec","����� ���.�����.����.��������"};
StayFD *_Umer_Mec = &_n_Umer_Mec;

BYTE  Umer_Nomig;
StayFD _n_Umer_Nomig = {&Umer_Nomig,0,0,0,CLS_S,0,"Umer_Nomig","����� ���������(0-�������� ��)"};
StayFD *_Umer_Nomig = &_n_Umer_Nomig;

WORD  Umer_Npp;
StayFD _n_Umer_Npp = {&Umer_Npp,0,0,0,CLS_I,0,"Umer_Npp","������.N ���.�����.����.��������"};
StayFD *_Umer_Npp = &_n_Umer_Npp;

char Umer_Pasp[16];
StayFD _n_Umer_Pasp = {&Umer_Pasp,0,0,0,CLS_V,15,"Umer_Pasp","�������"};
StayFD *_Umer_Pasp = &_n_Umer_Pasp;

STAYI6 Umer_Pos;
StayFD _n_Umer_Pos = {&Umer_Pos,0,0,0,CLS_Hs,2,"Umer_Pos","������ ����������� �������"};
StayFD *_Umer_Pos = &_n_Umer_Pos;

WORD  Umer_Spis;
StayFD _n_Umer_Spis = {&Umer_Spis,0,0,0,CLS_I,0,"Umer_Spis","����� ������"};
StayFD *_Umer_Spis = &_n_Umer_Spis;

char Umer_Vidan[41];
StayFD _n_Umer_Vidan = {&Umer_Vidan,0,0,0,CLS_V,40,"Umer_Vidan","��� �����"};
StayFD *_Umer_Vidan = &_n_Umer_Vidan;

DWORD Umer_Zap;
StayFD _n_Umer_Zap = {&Umer_Zap,0,0,0,CLS_L,0,"Umer_Zap","N ������"};
StayFD *_Umer_Zap = &_n_Umer_Zap;

WORD  Zarab_CodIns;
StayFD _n_Zarab_CodIns = {&Zarab_CodIns,0,0,0,CLS_I,0,"Zarab_CodIns","��� ����������"};
StayFD *_Zarab_CodIns = &_n_Zarab_CodIns;

StayDate Zarab_DateIns;
StayFD _n_Zarab_DateIns = {&Zarab_DateIns,0,0,0,CLS_Date,0,"Zarab_DateIns","���� ����������"};
StayFD *_Zarab_DateIns = &_n_Zarab_DateIns;

BYTE  Zarab_Month;
StayFD _n_Zarab_Month = {&Zarab_Month,0,0,0,CLS_S,0,"Zarab_Month","����� ���������"};
StayFD *_Zarab_Month = &_n_Zarab_Month;

DWORD Zarab_SumInd;
StayFD _n_Zarab_SumInd = {&Zarab_SumInd,0,0,0,CLS_L,2,"Zarab_SumInd","����� ����������"};
StayFD *_Zarab_SumInd = &_n_Zarab_SumInd;

WORD  Zarab_Year;
StayFD _n_Zarab_Year = {&Zarab_Year,0,0,0,CLS_I,0,"Zarab_Year","��� ���������"};
StayFD *_Zarab_Year = &_n_Zarab_Year;

DWORD Zarab_Zarp;
StayFD _n_Zarab_Zarp = {&Zarab_Zarp,0,0,0,CLS_L,2,"Zarab_Zarp","����� ���������"};
StayFD *_Zarab_Zarp = &_n_Zarab_Zarp;

DWORD Zarab_ZarpInd;
StayFD _n_Zarab_ZarpInd = {&Zarab_ZarpInd,0,0,0,CLS_L,2,"Zarab_ZarpInd","��p�������p.����� ��p������"};
StayFD *_Zarab_ZarpInd = &_n_Zarab_ZarpInd;

WORD  Zp_Alim;
StayFD _n_Zp_Alim = {&Zp_Alim,0,0,0,CLS_I,0,"Zp_Alim","���-�� ���������� ����"};
StayFD *_Zp_Alim = &_n_Zp_Alim;

StayDate Zp_DateB;
StayFD _n_Zp_DateB = {&Zp_DateB,0,0,0,CLS_Date,0,"Zp_DateB","���� ������ ��������"};
StayFD *_Zp_DateB = &_n_Zp_DateB;

StayDate Zp_DateE;
StayFD _n_Zp_DateE = {&Zp_DateE,0,0,0,CLS_Date,0,"Zp_DateE","���� ����� �������"};
StayFD *_Zp_DateE = &_n_Zp_DateE;

STAYI6 Zp_Razm;
StayFD _n_Zp_Razm = {&Zp_Razm,0,0,0,CLS_Hs,5,"Zp_Razm","������ ��������"};
StayFD *_Zp_Razm = &_n_Zp_Razm;

BYTE  Zrb_DKoef;
StayFD _n_Zrb_DKoef = {&Zrb_DKoef,0,0,0,CLS_S,0,"Zrb_DKoef","������� ���. �� ������. ���."};
StayFD *_Zrb_DKoef = &_n_Zrb_DKoef;

StayDate Zrb_Dbeg;
StayFD _n_Zrb_Dbeg = {&Zrb_Dbeg,0,0,0,CLS_Date,0,"Zrb_Dbeg","���� ������"};
StayFD *_Zrb_Dbeg = &_n_Zrb_Dbeg;

StayDate Zrb_Dend;
StayFD _n_Zrb_Dend = {&Zrb_Dend,0,0,0,CLS_Date,0,"Zrb_Dend","���� �����"};
StayFD *_Zrb_Dend = &_n_Zrb_Dend;

STAYUI6 Zrb_KodPr;
StayFD _n_Zrb_KodPr = {&Zrb_KodPr,0,0,0,CLS_H,0,"Zrb_KodPr","��� �����������"};
StayFD *_Zrb_KodPr = &_n_Zrb_KodPr;

WORD  Zrb_Koef;
StayFD _n_Zrb_Koef = {&Zrb_Koef,0,0,0,CLS_I,2,"Zrb_Koef","���.����. ��������������"};
StayFD *_Zrb_Koef = &_n_Zrb_Koef;

BYTE  Zrb_Nepol;
StayFD _n_Zrb_Nepol = {&Zrb_Nepol,0,0,0,CLS_S,0,"Zrb_Nepol","������� ���. �� ������. ���."};
StayFD *_Zrb_Nepol = &_n_Zrb_Nepol;

BYTE  Zrb_Nr;
StayFD _n_Zrb_Nr = {&Zrb_Nr,0,0,0,CLS_S,0,"Zrb_Nr","����� ��������"};
StayFD *_Zrb_Nr = &_n_Zrb_Nr;

BYTE  Zrb_Nrs;
StayFD _n_Zrb_Nrs = {&Zrb_Nrs,0,0,0,CLS_S,0,"Zrb_Nrs","����� ������� ���������"};
StayFD *_Zrb_Nrs = &_n_Zrb_Nrs;

STAYI6 Zrb_Suma;
StayFD _n_Zrb_Suma = {&Zrb_Suma,0,0,0,CLS_Hs,5,"Zrb_Suma","����� ���������"};
StayFD *_Zrb_Suma = &_n_Zrb_Suma;

StayDate Zrbs_Dendz;
StayFD _n_Zrbs_Dendz = {&Zrbs_Dendz,0,0,0,CLS_Date,0,"Zrbs_Dendz","���� ���������� ��������� (���"};
StayFD *_Zrbs_Dendz = &_n_Zrbs_Dendz;

BYTE  Zrbs_Mes;
StayFD _n_Zrbs_Mes = {&Zrbs_Mes,0,0,0,CLS_S,0,"Zrbs_Mes","���-�� �������"};
StayFD *_Zrbs_Mes = &_n_Zrbs_Mes;

BYTE  Zrbs_Nepol;
StayFD _n_Zrbs_Nepol = {&Zrbs_Nepol,0,0,0,CLS_S,0,"Zrbs_Nepol","��� ���������"};
StayFD *_Zrbs_Nepol = &_n_Zrbs_Nepol;

BYTE  Zrbs_Nr;
StayFD _n_Zrbs_Nr = {&Zrbs_Nr,0,0,0,CLS_S,0,"Zrbs_Nr","����� ��������"};
StayFD *_Zrbs_Nr = &_n_Zrbs_Nr;

BYTE  Zrbs_Nrs;
StayFD _n_Zrbs_Nrs = {&Zrbs_Nrs,0,0,0,CLS_S,0,"Zrbs_Nrs","����� ������� ���������"};
StayFD *_Zrbs_Nrs = &_n_Zrbs_Nrs;

STAYI6 Zrbs_Zar;
StayFD _n_Zrbs_Zar = {&Zrbs_Zar,0,0,0,CLS_Hs,5,"Zrbs_Zar","�������������� ���������"};
StayFD *_Zrbs_Zar = &_n_Zrbs_Zar;

STAYI6 Zrbs_Zregr;
StayFD _n_Zrbs_Zregr = {&Zrbs_Zregr,0,0,0,CLS_Hs,5,"Zrbs_Zregr","��������� ��� ������. ������."};
StayFD *_Zrbs_Zregr = &_n_Zrbs_Zregr;

WORD  VidOs_Code;
StayFD _n_VidOs_Code = {&VidOs_Code,0,0,0,CLS_I,0,"VidOs_Code","��� ����������� (Kl_Osob)"};
StayFD *_VidOs_Code = &_n_VidOs_Code;

StayDate VidOs_DateB;
StayFD _n_VidOs_DateB = {&VidOs_DateB,0,0,0,CLS_Date,0,"VidOs_DateB","���� ������ ��������"};
StayFD *_VidOs_DateB = &_n_VidOs_DateB;

StayDate VidOs_DateE;
StayFD _n_VidOs_DateE = {&VidOs_DateE,0,0,0,CLS_Date,0,"VidOs_DateE","���� ��������� ��������"};
StayFD *_VidOs_DateE = &_n_VidOs_DateE;

WORD  VidOs_Priz;
StayFD _n_VidOs_Priz = {&VidOs_Priz,0,0,0,CLS_I,0,"VidOs_Priz","�������"};
StayFD *_VidOs_Priz = &_n_VidOs_Priz;

long  VidOs_Sum;
StayFD _n_VidOs_Sum = {&VidOs_Sum,0,0,0,CLS_Ls,2,"VidOs_Sum","��������"};
StayFD *_VidOs_Sum = &_n_VidOs_Sum;

/* End FCfield */
/* Begin FCextern */
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
/* End FCextern */
/* Begin FCdataset */
static StayFD *tcm_B_Ls[] =
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
 NULL
};
static BYTE ix_B_Ls[] = {3,1,1,0,2,65,1,3,65,130,10};
StayDataset _n_B_Ls = {NULL,TAG_DATASET,0,0,DS_BBASE,0,1,0,NULL,tcm_B_Ls,NULL,
"LS:LS.DT",ix_B_Ls,"���� �������� �������","B_Ls",100};
StayDataset *B_Ls = &_n_B_Ls;

static StayFD *tcm_B_Ppl[] =
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
NULL,ix_B_Ppl,"����� ���������� ��������","B_Ppl",0};
StayDataset *B_Ppl = &_n_B_Ppl;

static StayFD *tcm_B_PplNac[] =
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
StayDataset *B_PplNac = &_n_B_PplNac;

static StayFD *tcm_B_Zrbs[] =
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
NULL,ix_B_Zrbs,"����� �������� ����� ��� ��������","B_Zrbs",0};
StayDataset *B_Zrbs = &_n_B_Zrbs;

static StayFD *tcm_B_Sv1[] =
{
 (StayFD *)&_n_Sv1_Kus,
 (StayFD *)&_n_Sv1_Os,
 (StayFD *)&_n_Sv1_Du,
 (StayFD *)&_n_Sv1_Dvipl,
 NULL
};
StayDataset _n_B_Sv1 = {NULL,TAG_DATASET,0,0,DS_STRUCT,0,1,0,NULL,tcm_B_Sv1,NULL,
NULL,NULL,"�������� 1-�� ����.�������","B_Sv1",0};
StayDataset *B_Sv1 = &_n_B_Sv1;

static StayFD *tcm_B_Sv2[] =
{
 (StayFD *)&_n_Sv2_Ncsbb,
 (StayFD *)&_n_Sv2_Npsbb,
 (StayFD *)&_n_Sv2_Vklad,
 NULL
};
StayDataset _n_B_Sv2 = {NULL,TAG_DATASET,0,0,DS_STRUCT,0,1,0,NULL,tcm_B_Sv2,NULL,
NULL,NULL,"�������� 2-�� ����.�������","B_Sv2",0};
StayDataset *B_Sv2 = &_n_B_Sv2;

static StayFD *tcm_B_Sv3[] =
{
 (StayFD *)&_n_Sv3_Indots,
 (StayFD *)&_n_Sv3_Adr,
 (StayFD *)&_n_Sv3_Tar,
 NULL
};
StayDataset _n_B_Sv3 = {NULL,TAG_DATASET,0,0,DS_STRUCT,0,1,0,NULL,tcm_B_Sv3,NULL,
NULL,NULL,"�������� 3-�� ����.�������","B_Sv3",0};
StayDataset *B_Sv3 = &_n_B_Sv3;

static StayFD *tcm_B_Per[] =
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
NULL,ix_B_Per,"����� ������������","B_Per",0};
StayDataset *B_Per = &_n_B_Per;

static StayFD *tcm_B_Np[] =
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
NULL,ix_B_Np,"����� ��������","B_Np",0};
StayDataset *B_Np = &_n_B_Np;

static StayFD *tcm_B_Prc[] =
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
NULL,ix_B_Prc,"³������ �����������","B_Prc",0};
StayDataset *B_Prc = &_n_B_Prc;

static StayFD *tcm_B_Nac[] =
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
NULL,ix_B_Nac,"����� ����������","B_Nac",0};
StayDataset *B_Nac = &_n_B_Nac;

static StayFD *tcm_B_NacOp[] =
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
StayDataset *B_NacOp = &_n_B_NacOp;

static StayFD *tcm_B_NacKfn[] =
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
StayDataset *B_NacKfn = &_n_B_NacKfn;

static StayFD *tcm_B_Stg[] =
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
NULL,ix_B_Stg,"����� ��������� ��� ����","B_Stg",0};
StayDataset *B_Stg = &_n_B_Stg;

static StayFD *tcm_B_Stgp[] =
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
NULL,ix_B_Stgp,"����� ����� �� �������","B_Stgp",0};
StayDataset *B_Stgp = &_n_B_Stgp;

static StayFD *tcm_B_Zrb[] =
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
NULL,ix_B_Zrb,"����� �������� �� �������","B_Zrb",0};
StayDataset *B_Zrb = &_n_B_Zrb;

static StayFD *tcm_B_Kor[] =
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
NULL,ix_B_Kor,"����� ��������� ��� ������������","B_Kor",0};
StayDataset *B_Kor = &_n_B_Kor;

static StayFD *tcm_B_Igd[] =
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
NULL,ix_B_Igd,"����� ��������� ��� ����������","B_Igd",0};
StayDataset *B_Igd = &_n_B_Igd;

static StayFD *tcm_B_Dolja[] =
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
NULL,ix_B_Dolja,"������� �����","B_Dolja",0};
StayDataset *B_Dolja = &_n_B_Dolja;

static StayFD *tcm_B_Inv[] =
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
NULL,ix_B_Inv,"����� ��������� ��� ����������","B_Inv",0};
StayDataset *B_Inv = &_n_B_Inv;

static StayFD *tcm_B_Che[] =
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
NULL,ix_B_Che,"����� ��������� ��� ����","B_Che",0};
StayDataset *B_Che = &_n_B_Che;

static StayFD *tcm_B_CheZp[] =
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
NULL,ix_B_CheZp,"����� ������","B_CheZp",0};
StayDataset *B_CheZp = &_n_B_CheZp;

static StayFD *tcm_B_Nazn[] =
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
NULL,ix_B_Nazn,"����� ��������� ��� �����������","B_Nazn",0};
StayDataset *B_Nazn = &_n_B_Nazn;

static StayFD *tcm_B_Osob[] =
{
 (StayFD *)&_n_Osob_Code,
 (StayFD *)&_n_Osob_Priz,
 NULL
};
static BYTE ix_B_Osob[] = {1,1,1,0};
StayDataset _n_B_Osob = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_Osob,NULL,
NULL,ix_B_Osob,"����� ������������","B_Osob",0};
StayDataset *B_Osob = &_n_B_Osob;

static StayFD *tcm_B_Atst[] =
{
 (StayFD *)&_n_Atst_Type,
 (StayFD *)&_n_Atst_Num,
 (StayFD *)&_n_Atst_Data,
 NULL
};
static BYTE ix_B_Atst[] = {1,1,2,0,1};
StayDataset _n_B_Atst = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_Atst,NULL,
NULL,ix_B_Atst,"����� ��������� ��� ��������","B_Atst",0};
StayDataset *B_Atst = &_n_B_Atst;

static StayFD *tcm_B_Umer[] =
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
NULL,ix_B_Umer,"����� ��������� ��� ��������","B_Umer",0};
StayDataset *B_Umer = &_n_B_Umer;

static StayFD *tcm_B_Ispl[] =
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
NULL,ix_B_Ispl,"����� ��������� ��� ���������","B_Ispl",0};
StayDataset *B_Ispl = &_n_B_Ispl;

static StayFD *tcm_B_Ud[] =
{
 (StayFD *)&_n_Ud_Psn,
 (StayFD *)&_n_Ud_Dso,
 NULL
};
StayDataset _n_B_Ud = {NULL,TAG_DATASET,0,0,DS_STRUCT,0,1,0,NULL,tcm_B_Ud,NULL,
NULL,NULL,"³������ ��� ���������� ��������.�����","B_Ud",0};
StayDataset *B_Ud = &_n_B_Ud;

static StayFD *tcm_B_Det[] =
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
NULL,ix_B_Det,"³������ ��� ����","B_Det",0};
StayDataset *B_Det = &_n_B_Det;

static StayFD *tcm_B_NUdr[] =
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
NULL,ix_B_NUdr,"����� ���������� �� ����������","B_NUdr",0};
StayDataset *B_NUdr = &_n_B_NUdr;

static StayFD *tcm_B_UdMec[] =
{
 (StayFD *)&_n_NUdr_GodF,
 (StayFD *)&_n_NUdr_MecF,
 (StayFD *)&_n_NUdr_SNac,
 NULL
};
static BYTE ix_B_UdMec[] = {1,1,2,0,1};
StayDataset _n_B_UdMec = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_UdMec,NULL,
NULL,ix_B_UdMec,NULL,"B_UdMec",0};
StayDataset *B_UdMec = &_n_B_UdMec;

static StayFD *tcm_B_Ud2[] =
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
NULL,NULL,"�������� 2-�� ������� ��� ��������","B_Ud2",0};
StayDataset *B_Ud2 = &_n_B_Ud2;

static StayFD *tcm_B_Ud3[] =
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
NULL,NULL,"�������� 3-�� ������� ��� ��������","B_Ud3",0};
StayDataset *B_Ud3 = &_n_B_Ud3;

static StayFD *tcm_B_Rd[] =
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
NULL,ix_B_Rd,"����� ��������� ������ ��","B_Rd",0};
StayDataset *B_Rd = &_n_B_Rd;

static StayFD *tcm_B_Rod[] =
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
NULL,ix_B_Rod,"����� ��������� ��� ������","B_Rod",0};
StayDataset *B_Rod = &_n_B_Rod;

static StayFD *tcm_B_RabPer[] =
{
 (StayFD *)&_n_RabPer_Date,
 (StayFD *)&_n_RabPer_Pr,
 (StayFD *)&_n_RabPer_CodIns,
 (StayFD *)&_n_RabPer_DateIns,
 NULL
};
static BYTE ix_B_RabPer[] = {1,1,1,0};
StayDataset _n_B_RabPer = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_RabPer,NULL,
NULL,ix_B_RabPer,"����� ������ ������","B_RabPer",0};
StayDataset *B_RabPer = &_n_B_RabPer;

static StayFD *tcm_B_Zarab[] =
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
NULL,ix_B_Zarab,"����� ��������","B_Zarab",0};
StayDataset *B_Zarab = &_n_B_Zarab;

static StayFD *tcm_B_Zp[] =
{
 (StayFD *)&_n_Zp_DateB,
 (StayFD *)&_n_Zp_DateE,
 (StayFD *)&_n_Zp_Razm,
 (StayFD *)&_n_Zp_Alim,
 NULL
};
static BYTE ix_B_Zp[] = {1,1,2,0,1};
StayDataset _n_B_Zp = {NULL,TAG_DATASET,0,0,DS_ARRAY,0,1,0,NULL,tcm_B_Zp,NULL,
NULL,ix_B_Zp,"����� ��������(�������)","B_Zp",0};
StayDataset *B_Zp = &_n_B_Zp;

static StayFD *tcm_B_Shifr[] =
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
NULL,ix_B_Shifr,"����� ��������� ��� �����","B_Shifr",0};
StayDataset *B_Shifr = &_n_B_Shifr;

static StayFD *tcm_B_VidOs[] =
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
NULL,ix_B_VidOs,"����� ������������ � ������","B_VidOs",0};
StayDataset *B_VidOs = &_n_B_VidOs;

/* End FCdataset */
/* Begin FCmenu */
/* End FCmenu */
/* Begin FCframe */
/* End FCframe */
/* Begin FCtabl */
void *LS_SOC[] =
 {NULL,
  &_nn_LS_SOC,
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
  NULL};

PICMODULEEND(LS_SOC)

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
