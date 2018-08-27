///raj:D:\WORK\BASE\BASE2608\ /obl:D:\WORK\BASE\BASE2600\ D:\WORK\ASOPDW\NPEN_PK\fw.dll
//--------------------------------------
// Программа для поиска л/с
//--------------------------------------
#include <iostream>
//#include <stdio.h>
//#include <typeinfo>
#include <algorithm>
#include <vector>
//#include <set>
#include <string>
#include "klovr.h"
#include "xstay.h"
#include "interface.h"
#include "common.h"
#include "mat.hpp"
#include "ls_soc.h"
#include "lsext.h"
#include "mas_smp.h"
#include "okno.h"
#include "singleton.h"
#include "kldopvsr.h"
#include "woomen22.h"
#include "delay.h"
#include "NAZ_PEL.h"
#include "NAZ_PEN.h"
#include "NAZ_BAI.h"
#include "akt102017.h"
#include <stdlib.h>
#include "fw.h"
#include "socket.h"
#include "nsiupload.h"

using namespace std;
using std::string;

StayEventProc  BOSForm1;

USETOOLS;USESHELL;USETECH;USECNG; 
void far Otchet(int param);
void far FindAndWrite();
uint4 sizeBase = 0; //indicator
char textIndicator[50]; //indicator
char res[512];

bool GetKolvoIgd0512(int & kolvoIgd, StayDate & dateAddIgd);
bool Is857(StayDate date857);
bool EqualFIO();
bool IsEmptyNpNazn();
bool FindVidOsCode();
bool Umenshen827();
bool ZarabYear();
bool TestPartSize();
bool Invalid();
bool IsClosed22();
uint2 Frm_StgDopVsrWom(uint2 DopSnigVsr);
void GetWoomRnaz();
void PutBWoomen(bool kand);
void GetWoomRnazAfter();
void ModifyBWoomen();
bool Is133_08_12();
bool IsSRNX();
bool IsPravoYearBefore();
bool IsNaukaSRNX();
bool IsTrudKalika();
bool IsSirotaAndSemisirota();
bool NewZarab();
bool IsLsShifr130();
bool IsArticle39();
void WriteArticle39();
bool IsOsnKfn(unsigned short kfn);
bool ClosedOsnKfn(StayDate dnPen);
bool is708();
bool IsDPI(StayDate dt, unsigned char &dpiProc);
void Ldd_Rab1(StayDate dt);
void WriteVidOsDolja();
void DeleteCheDopl();
void CheckDatin(unsigned short perKfn, StayDate perDnpen);
bool CheckModify171();
StayDate GetDateLastMove();
bool IsClose21();
void Close21();
bool IsVidstrochka();
bool IsOsob75();
int NoTax();
void PutOsob1050(int priznak);
bool IsNoClosedAccount(StayDate dateBeg);
StayDate GetBirthDate();
int GetBelongSign();
void GetSumPerRnazOld(StayDate dateCalc, int withIndex = 0);
void GetSumPerRnaz(StayDate dateCalc, FD * SumRnaz, unsigned short kfn = 0, unsigned short psn = 0);
void GetSumPer_All_Osn_995_835(StayDate dateCalc, FD * SumRnaz, FD * SumOsn, FD * Sum995, FD * Sum835, unsigned short psn);
void DeleteOsob1050();
bool Is709KfnOpen(StayDate dt);
bool IsWoomenDosr11131();
void Rewrite11131();
bool IsWoomenDosr11135();
void Rewrite11135();
bool Find857_50();
bool CalcStg();
bool CalcStgKorm(int stgNeed, int nomKor);
void Stg_Norm(unsigned char *year,unsigned char *mon,unsigned char *day, short kf, char algor);
bool LddKoefDolja857_2(int priz);
unsigned short GetStringHash(char *str, int len);
bool CheckStg();
bool IsUmer(StayDate dtCcheck);
bool IsVeteran();
bool IsWommenInv56_61();
bool FindZarab(unsigned char nomZar, bool pk);
bool FindNoWorkWithIndex();
bool IsVidOs55AndPriz();
bool CalcTimeDelay();
bool IsShifrNTTD(unsigned short shifr);
unsigned char GetPerPsn(StayDate dt);
bool CheckPsnCode(vector<unsigned char> & psnCodes, StayDate dt);
void FindDelta(FD * delta);
bool WriteKandidatMp();
bool FindDiffBDop();
bool Rewrite995AfterMP();
bool Rewrite104NpAfterMP();
int GetPrRab(StayDate Dt);//FRB_Work
void GetPrRabHarakter(StayDate Dt, int kod, int & rab);//FRB_Work
StayDate GetDateTrud(StayDate dtUvol, int together = 0);//FRB_Work
bool Invalid(StayDate dt);
void GetSumPer_All_154(StayDate dateCalc, FD * SumRnaz, FD * SumOsn, FD * Sum995, FD * Sum835, FD * SumOsn2, unsigned short psn);
bool IsDoRecalc();
bool SkipCondition(StayDate dtMas);
bool isMas(StayDate dt);
bool checkDateZrb();

bool IsNotClosedInv();
void CloseInvBPer(StayDate dtCloseInv);
//для обратной миграции
char* substr_char(char* arr, int begin, int len);
void PutKorNomig(FD * nomigPPVP);
void PutIgdNomig(FD * nomigPPVP, FD * idPPVP);
int GetPrizPutIgd(FD * nomigPPVP);
bool GetPrizPut(FD * PPVPnls);
int GetPrizPutKor(FD * nomigPPVP);
void DeleteLsOracle();
int SetBj(int neop, int tved, int spos);
void ReverseMigration_BLs(string strTxtFilePath);
void ReverseMigration_BKor(string strTxtFilePath);
void ReverseMigration_BIgd(string strTxtFilePath);
void ReverseMigration_BNp(string strTxtFilePath);
void ReverseMigration_BPer(string strTxtFilePath);
void ReverseMigration_BShifr(string strTxtFilePath);
void ReverseMigration_BChe(string strTxtFilePath);
void ReverseMigration_BCheZp(string strTxtFilePath);
void ReverseMigration_BInv(string strTxtFilePath);
void ReverseMigration_BNazn(string strTxtFilePath);
void ReverseMigration_BNac(string strTxtFilePath);
void ReverseMigration_BOsob(string strTxtFilePath);
void ReverseMigration_BStg(string strTxtFilePath);
void ReverseMigration_BStgp(string strTxtFilePath);
void ReverseMigration_BSv1(string strTxtFilePath);
void ReverseMigration_BSv2(string strTxtFilePath);
void ReverseMigration_BAtst(string strTxtFilePath);
void ReverseMigration_BUmer(string strTxtFilePath);
void ReverseMigration_BZp(string strTxtFilePath);
void ReverseMigration_BZrb(string strTxtFilePath);
void ReverseMigration_BZrbs(string strTxtFilePath);
void ReverseMigration_BIspl(string strTxtFilePath);
void ReverseMigration_BUd(string strTxtFilePath);
void ReverseMigration_BUd2(string strTxtFilePath);
void ReverseMigration_BUd3(string strTxtFilePath);
void ReverseMigration_BDet(string strTxtFilePath);
void ReverseMigration_BNUdr(string strTxtFilePath);
void ReverseMigration_BUdMec(string strTxtFilePath);
void ReverseMigration_BPpl(string strTxtFilePath);
void ReverseMigration_Total(string strTxtFilePath);
void ReverseMigration_NSI_KLUL(string strTxtFilePath);
void ReverseMigration_KL_KLUL(string strTxtFilePath);
void CommaToDot(char * str);
void Put16RabPer();

/*
void GetStringField(char * cur, char * c512_1, char * c512_2, char * field, unsigned short length);
void GetDateField(char * cur, char * c512_1, char * c512_2, char * c512_3, FD * field);
void GetNumberField(char * cur, char * c512_1, char * c512_2, FD * field);
*/

    int6 rab1;
    StayFD _n_rab1 = {&rab1,0,0,0,CLS_Hs,2,"rab1",""};
    pStayFD _rab1 = &_n_rab1;
    int6 rab2;
    StayFD _n_rab2 = {&rab2,0,0,0,CLS_Hs,2,"rab2",""}; //копія rab1 до ДПІ
    pStayFD _rab2 = &_n_rab2;
    unsigned char dpi_proc = 100;

    struct Row{
        int sec;
        int ls;
        int sum_time;        
        int optim;
    };

ASOPDMAIN("Головна програма");

int main (int argc, char** argv)
{

 INITTOOLS();INITSHELL();INITTECH();INITCNG();
 SetDateDelim ('.');
 Initiate();
 //создание экземпляра класса глобальных переменных
 Singleton &glb = Singleton::getInstance();

 if(!StartProcSet(&glb.insCode,NULL,glb.insFio,NULL))
 {
     glb.rayon = 2608;
     glb.uzel = 2608;
     glb.insCode = 107;
     //StrCpy (glb.insFIO, " ");
     glb.prSpov = 0;

 }
 else
 {
     glb.rayon = fGetTech ("район");
     glb.uzel = fGetTech ("узел");
     glb.prSpov = fGetTech ("персонификация");
     glb.mejdunar = fGetTech ("международный");
 }

 OpenCreate( B_Ls, RDWR|ANRDWR );
 //B_MP->file = "Mp:Mp0517.dt";
 //OpenCreate(B_MP,RDWR);
 //SetIndex(B_MP, 1);
 OpenCreate( B_Woomen, RDWR|ANRDWR );
 Open(B_KlDopVsr, RD|ANRD);
 Open(B_KlUl, RDWR|ANRD);
 Open(B_KlKatUl, RD|ANRD); 
 Create( B_LSExt, RDWR|ANRDWR );

 SetBegin(B_Ls);
 GetNext(B_Ls);
 Clrd(_RajName);
 Open(B_KlOSZ, RD|ANRDWR);
 KlOSZ_Code = Ls_Raj;
 if(GetKey(B_KlOSZ))
 {
     StrNCpy(RajName,KlOSZ_Name,45);
 }
 else
 {
     KlOSZ_Code = glb.rayon;
      if(GetKey(B_KlOSZ))
          StrNCpy(RajName,KlOSZ_Name,45);
 }
 if(B_KlOSZ->bs)
     Close(B_KlOSZ);

 //char recBuf[512];
 //char errorMsg[100];
 //errorMsg[0] = '\0';
 //Socket *Soc = new Socket("10.0.8.181","9000");
 //Soc->MakeSocket();
 //Soc->SendData("Some Text \r\n\0");
 //Sleep(1000);//10000
 //Soc->ShutdownSocket();
 //Soc->ReceiveData();
 //if(!Soc->IsError())
	// StrForm(recBuf, 512, Soc->recvbufAll);
 //else
	// StrForm(errorMsg, 100, Soc->errMsg);
 //delete Soc;

 Display (Form1, BOSForm1);

 Close(B_LSExt);
 Close(B_KlKatUl);
 Close(B_KlUl);
 Close(B_KlDopVsr);
 Close(B_Woomen);
 Close(B_Ls);
 //Close(B_MP);
 Terminate();
 TERMTOOLS();TERMSHELL();TERMTECH();TERMCNG();
 return 0; 
}
//****************************************************************************
void far FindAndWrite()
{
 //получить ссылку на созданый класс глобальных переменных 
 Singleton &glb = Singleton::getInstance();
 //StrForm(stgZrbFile,30,"LS:STZR%d.dt", Glb_OsoCode);
 //string pathCsv = "d:\\work\\base\\oracle\\6501\\";

 char s[5];
 StrForm(s,5,"%d", glb.rayon);
 std::string strRaj(s);
 std::string tableName = "";

 string pathCsv = "d:\\work\\base\\oracle\\" + strRaj;
 pathCsv +=  "\\";
 if(B_Ls->bs)
	 Close(B_Ls);
 B_Ls->file = "LS:ls_oracle.dt";
 Create( B_Ls, RDWR|ANRDWR );
 SetIndex(B_Ls, 1);

 Destroy(B_LSExt);
 SetIndex(B_LSExt, 1);

 strcpy(textIndicator,"Таблиць сформовано "); //indicator
 IndicatorOpen(30,textIndicator,NULL,0);
 //Destroy(B_KlUl);
 //ReverseMigration_KL_KLUL(pathCsv + "klul.txt");
 ReverseMigration_BLs(pathCsv + "ls.txt");
 IndicatorGo(textIndicator,1);
 ReverseMigration_BKor(pathCsv + "kor.txt");
 IndicatorGo(textIndicator,1);
 ReverseMigration_BIgd(pathCsv + "igd.txt");
 IndicatorGo(textIndicator,1);
 ReverseMigration_BNp(pathCsv + "np.txt");
 IndicatorGo(textIndicator,1);
 ReverseMigration_BPer(pathCsv + "per.txt");
 IndicatorGo(textIndicator,1); //5
 ReverseMigration_BShifr(pathCsv + "shifr.txt");
 IndicatorGo(textIndicator,1);
 ReverseMigration_BChe(pathCsv + "che.txt");
 IndicatorGo(textIndicator,1);
 ReverseMigration_BCheZp(pathCsv + "chezp.txt");
 IndicatorGo(textIndicator,1);
 ReverseMigration_BInv(pathCsv + "inv.txt");
 IndicatorGo(textIndicator,1);
 ReverseMigration_BNazn(pathCsv + "nazn.txt");
 IndicatorGo(textIndicator,1);//10
 ReverseMigration_BNac(pathCsv + "nac.txt");
 IndicatorGo(textIndicator,1);
 ReverseMigration_BOsob(pathCsv + "osob.txt");
 IndicatorGo(textIndicator,1);
 ReverseMigration_BStg(pathCsv + "stg.txt");
 IndicatorGo(textIndicator,1);
 ReverseMigration_BStgp(pathCsv + "stgp.txt");
 IndicatorGo(textIndicator,1);
 ReverseMigration_BSv1(pathCsv + "sv1.txt");
 IndicatorGo(textIndicator,1);//15
 ReverseMigration_BSv2(pathCsv + "sv2.txt");
 IndicatorGo(textIndicator,1);
 ReverseMigration_BAtst(pathCsv + "atst.txt");
 IndicatorGo(textIndicator,1);
 ReverseMigration_BUmer(pathCsv + "umer.txt");
 IndicatorGo(textIndicator,1);
 ReverseMigration_BZp(pathCsv + "zp.txt");
 IndicatorGo(textIndicator,1);
 ReverseMigration_BZrb(pathCsv + "zrb.txt");
 IndicatorGo(textIndicator,1);//20
 ReverseMigration_BZrbs(pathCsv + "zrbs.txt");
 IndicatorGo(textIndicator,1);
 ReverseMigration_BIspl(pathCsv + "ispl.txt");
 IndicatorGo(textIndicator,1);
 ReverseMigration_BUd(pathCsv + "ud.txt");
 IndicatorGo(textIndicator,1);
 ReverseMigration_BUd2(pathCsv + "ud2.txt");
 IndicatorGo(textIndicator,1);
 ReverseMigration_BUd3(pathCsv + "ud3.txt");
 IndicatorGo(textIndicator,1);//25
 ReverseMigration_BDet(pathCsv + "det.txt");
 IndicatorGo(textIndicator,1);
 ReverseMigration_BNUdr(pathCsv + "nudr.txt");
 IndicatorGo(textIndicator,1);
 ReverseMigration_BUdMec(pathCsv + "nudr.txt");
 IndicatorGo(textIndicator,1);
 ReverseMigration_BPpl(pathCsv + "ppl.txt");
 IndicatorGo(textIndicator,1);
 ReverseMigration_Total(pathCsv + "total.txt");
 IndicatorGo(textIndicator,1);//30
 ReverseMigration_NSI_KLUL(pathCsv + "klul.txt");

 IndicatorClose();
 if(B_Ls->bs)
	 Close(B_Ls);
 B_Ls->file = "LS:ls.dt";
 OpenCreate( B_Ls, RDWR|ANRDWR );
 SetIndex(B_Ls, 1);
 MsgBox("","Міграція закінчена.");
}
void far Otchet(int param)
{
	return;
    //CreateRpt("VLS:REPORT_U\\razpor_U.rep");
    //получить ссылку на созданый класс глобальных переменных 
    Singleton &glb = Singleton::getInstance();
    int raj = glb.rayon; //просто демонстрация
    SetBegin(B_Ls);
    GetNext(B_Ls);
    raj = Ls_Raj;
	unsigned long oldIndots = 0;
    //StrForm (Woom_titul, 49, "О/Р в яких оброблено доплату за проживання (ст.39). Р-н:%ld",raj);
    switch(param)
    {
    case 1:
        StrForm (Woom_titul, 65, "О/Р які закриті по даті закінч. інв.,О/Р. Р-н:%ld",raj);
        CreateRpt("REPORT_U\\closeinv2.rep");
        SetIndex(B_Woomen,2);
        SetBegin(B_Woomen);
        break;
    case 2:
        StrForm (Woom_titul, 65, "О/Р які закриті по даті закінч. інв.,відділ.зв. Р-н:%ld",raj);
        CreateRpt("REPORT_U\\closeinv1.rep");
        SetIndex(B_Woomen,1);
        SetBegin(B_Woomen);
        break;
    case 3:
        StrForm (Woom_titul, 65, "О/Р без розподілу стажу по підпр.,О/Р. Р-н:%ld",raj);
        CreateRpt("REPORT_U\\naukastg3.rep");
        SetIndex(B_Woomen,2); //по О/Р
        SetBegin(B_Woomen);
        break;
    case 4:
        StrForm (Woom_titul, 65, "О/Р без розподілу стажу по підпр.,відділ.зв. Р-н:%ld",raj);
        CreateRpt("REPORT_U\\naukastg4.rep");
        SetIndex(B_Woomen,1);
        SetBegin(B_Woomen);
        break;
    case 5:
        StrForm (Woom_titul, 65, "Кандидати з розм.пенсії більше 3654 грн,О/Р. Р-н:%ld",raj);
        CreateRpt("REPORT_U\\notax5.rep");
        SetIndex(B_Woomen,2);
        SetBegin(B_Woomen);
        break;
    case 6:
        StrForm (Woom_titul, 65, "Кандидати з розм.пенсії більше 3654 грн,відділ.зв. Р-н:%ld",raj);
        CreateRpt("REPORT_U\\notax6.rep");
        SetIndex(B_Woomen,1);
        SetBegin(B_Woomen);
        break;
    default:
        break;
    }
    unsigned long woomIndots = 0;
    Clrd(_Ttl_Kolvo);
    Clrd(_Total_Kolvo);
    bool detail3 = true;
    while(GetNext(B_Woomen))
    {
		if(oldIndots != Woom_Indots) {
			Clrd(_Total_Kolvo);
			oldIndots = Woom_Indots;
		}
        //if(param < 3 && Woom_Kand)
            //continue;
        if(param > 2)// && !Woom_Kand)
            continue;
        Ttl_Kolvo++;
        Total_Kolvo++;
        Ls_Nls = Woom_Nls;
        GetKey(B_Ls);
		DetailRpt('1');
        if(param > 2)
            if(DetailRpt('1'))
                detail3 = false;
    }
    if(Ttl_Kolvo)
        if(DetailRpt('2'))
            detail3 = false;
    if(detail3)
        DetailRpt('3');
    char pathFileRpt[100];                 
    StrCpy( (fchar *)pathFileRpt, GetFileRpt());
    CloseRpt(Woom_titul);
    DsplRpt(pathFileRpt);
}
int STAYPROC BOSForm1( StayEvent s, StayEvent id )
{
    //AvailableChoice( Menu1, SEL504, OFF );
	switch(s)
	{
	case SEL501:
		  FindAndWrite();
		break;
	case SEL511:
		  Otchet(1);
		break;
	case SEL512:
		  Otchet(2);
		break;
	case SEL513:
		  Otchet(3);
		break;
	case SEL514:
		  Otchet(4);
		break;
	case SEL515:
		  Otchet(5);
		break;
	case SEL516:
		  Otchet(6);
		break;
	case SEL503:
		  Exit(_Ok);
		break;
    case _Esc:
          Exit(_Ok);
        break;
	}
	return 0;
}

//**************************************************************
//функции условий поиска
//**************************************************************
bool GetKolvoIgd0512(int & kolvoIgd, StayDate & dateAddIgd)
{
    bool result = false; //небыло изменения кол-ва иждевенцев с 01.05.2012 или стало меньше
    kolvoIgd = 0;
    dateAddIgd = 0;
    int shifr2zn = 0;
    SetEnd(B_Shifr);
    while(GetPrior(B_Shifr))
    {
        shifr2zn = int(Shifr_Code/10) - int(Shifr_Code/100)*10;
        if(!kolvoIgd)
            kolvoIgd = shifr2zn;
        if(kolvoIgd != shifr2zn)
        {
            if(kolvoIgd > shifr2zn) //появился иждевенец после 1.5.12
            {
                result = true;
                dateAddIgd = Shifr_DateC;
            }
            kolvoIgd = shifr2zn;
        }
        if(Shifr_DateC < DatePack(1,5,2012))
            break;
    }
    return result;
}
bool Is857(StayDate date857)
{
    bool result = false;
    Per_Kfn = 857;
    Part(B_Per,1);
    if(Size(B_Per))
    {
        SetEnd(B_Per);
        GetPrior(B_Per);
        if(Per_Dnpen >= date857)
            result = true;
    }
    Part(B_Per,0);
    return result;
}

bool EqualFIO()
{
    bool result = false;
    int sum = 0;
    int min = 0;
    int max = 0;
    string s;
    /*
    SetEnd(B_Igd);
    while(GetPrior(B_Igd))
    {
        if(Igd_Nomig < 101)
            break;
        s = Igd_Fio;

        for(int i = 0;;i++)
        {
            if(Igd_Fio[i] == '\0')
                break;
            if(Igd_Fio[i] == ' ')
                continue;
            sum = sum + Igd_Fio[i] + (50-i)*50;
            sum = Igd_Fio[i];
            if(min > sum || !min)
                min = sum;
            if(max < sum)
                max = sum;

        }

        size_t pos = s.find("ЛЕБЕДЄВ ЮРІЙ");
        if (pos != std::string::npos)
            result = true;
    }
    */
    s = Ls_Fio;
    size_t pos = s.find("ВАЛЬЯНОВИЧ");
    if (pos != std::string::npos)
    {
        pos = s.find("БОРИС");
        if (pos != std::string::npos)
            result = true;
    }
    return result;
}
/*
функция для поиска л/с в которых затерты базы B_Np и B_Nazn в результате перерасчета
по трудоустройству/увольнению.
Дата трудоустройства/увольнения  - до 18.12.97
Дата первичного назначения меньше даты трудоустройства/увольнения
*/
bool IsEmptyNpNazn()
{
    bool found = false;
    StayDate cheZpDateBeg = 0;
    if(Size(B_CheZp))
    {
        CheZp_Nomig = 0;
        CheZp_Code = 16;//працевлаштування/звільнення
        Part(B_CheZp,2);
        if(Size(B_CheZp))
        {
            SetBegin(B_CheZp);
            while(GetNext(B_CheZp))
            {
                if(CheZp_DateBeg <= DatePack(18,12,1997) && CheZp_DateEnd > DatePack(7,12,2012))
                {
                    found = true;
                    cheZpDateBeg = CheZp_DateBeg;
                }
                else
                    found = false;
            }
            if(found)
            {
                SetBegin(B_Nazn);
                while(GetNext(B_Nazn))
                {
                    if(Nazn_Op == 1000 && (Nazn_Dnaz > DatePack(18,12,1997) || Nazn_Dnaz > cheZpDateBeg))
                    {
                        found = false;
                        break;
                    }
                }
            }
            if(found)
            {
                SetBegin(B_Np);
                while(GetNext(B_Np))
                {
                    if(
                        ((Np_Kfn >= 101 && Np_Kfn <=110) || (Np_Kfn >= 121 && Np_Kfn <= 135)) &&
                        (Np_Dnprav < DatePack(7,12,2012))
                        )
                    {
                        found = false;
                        break;
                    }
                }
            }
        }//if Size(B_CheZp) Part 16
        Part(B_CheZp,0);
    }//if Size(B_CheZp)    
    return found;
}
bool FindVidOsCode()
{
    bool result = false;
    SetBegin(B_VidOs);
    while(GetNext(B_VidOs))
    {
        switch (VidOs_Code)
        {
        case 322:
            result = true;
            break;
        }
        if(result)
            break;
    }
    return result;
}
bool Umenshen827()
{
    bool result = false;
    SetEnd(B_Per);
    StackReset();
    while(GetPrior(B_Per))
    {
        if(Per_Kfn == 827 && Per_Dnpen != MonthBeg(Per_Dnpen))
        {
            Ldd(_Per_Rnaz);
            GetPrior(B_Per);
            if(Per_Kfn == 827)
            {
                Ldd(_Per_Rnaz);
                if(Cmp() < 0)
                    result = true;
            }
            else
                StackReset();
        }
    }
    return result;
}
bool ZarabYear()
{
    bool result = false;
    SetBegin(B_Zrb);
    while(GetNext(B_Zrb))
    {
        switch(Zrb_Nepol)
        {
        case 4:
        case 5:
        case 10:
            result = true;
            break;
        }
        if(result)
            break;
    }
    return result;
}
bool NewZarab()
{
    bool result = false;
    SetBegin(B_Zrb);
    while(GetNext(B_Zrb))
    {
        switch(Zrb_Nepol)
        {
        case 14:
            result = true;
            break;
        }
        if(result)
            break;
    }
    return result;
}
bool TestPartSize()
{
    bool result = false;
    int size1 = Size(B_Ls);
    int size2 = 0;
    int size3 = 0;
    SetIndex(B_Ls,3);
    for(SetBegin(B_Ls);GetNext(B_Ls);)
    {
        size2 = 0;
        Mark(B_Ls,1);
        Part(B_Ls,1);
        SetBegin(B_Ls);
        while(GetNext(B_Ls))
            size2++;
        size3 = Size(B_Ls);
        if(size2 != size3)
            result = true;
        Part(B_Ls,0);
        GetMark(B_Ls,1);
    }
    return result;
}
bool Invalid()
{
    bool result = false;
    if(Size(B_Inv))
    {
        SetBegin(B_Inv);
        while(GetNext(B_Inv))
        {
            if(Inv_Nomig > 0)
                result = true;
        }
    }
    return result;
}
bool IsClosed22()
{
    bool result = false;
    unsigned short perOp = 0;
    StayDate datePensVozr = 0;
    unsigned short dopStg = 0;
    StayDate lastDateZakr22 = 0;

    if(Ls_Pol == 2 && Ls_Drog >= DatePack(30,9,1956))
    {
        //закрыт ли 22 причиной и код последней открытой записи
        SetEnd(B_Per);
        while(GetPrior(B_Per))
        {
            if(Per_Kfn != 171)
                continue;
            if(!result && Per_Psn == 22)
            {
                result = true;
                lastDateZakr22 = Per_Dnpen;
            }
            if(!result)
                break;
            if(!Per_Psn)
            {
                perOp = Per_Op; //код последней открытой записи
                break;
            }
        }
        //дата достижения пенсионного возраста
        if(!result)
            return result;
        Clear(B_Woomen);
        Singleton &glb = Singleton::getInstance();
        dopStg = Frm_StgDopVsrWom(0);
        datePensVozr = GoMonth(Ls_Drog, (660 + dopStg));
        Woom_PenVoz = datePensVozr + 1;
        //открытие записей с даты достижения п.в.
        int kolvoModify = 0;
        SetEnd(B_Per);
        while(GetPrior(B_Per))
        {
            if(Per_Dnpen >= datePensVozr && Per_Psn == 22)
            {
                Per_Op = perOp;
                Per_Psn = 0;
                Per_Datin = GetSysDate();
                Per_Kin = glb.insCode;
                Modify(B_Per);
                kolvoModify++;
            }
        }
        //если нет записи с даты достижения пенс. возраста и позже, то добавляю новые записи с даты п.в.
        if(!kolvoModify && lastDateZakr22 < datePensVozr)
        {
            unsigned short perKfn = 0;
            SetEnd(B_Per);
            while(GetPrior(B_Per))
            {
                if(perKfn != Per_Kfn)
                {
                    perKfn = Per_Kfn;
                    if(Per_Psn == 22)
                    {
                        Per_Dnpen = datePensVozr + 1;
                        Per_Op = perOp;
                        Per_Psn = 0;
                        Per_Datin = GetSysDate();
                        Per_Kin = glb.insCode;
                        Put(B_Per);
                    }
                }
            }
        }
    }
    return result;
}
uint2 Frm_StgDopVsrWom(uint2 DopSnigVsr)
{
    uint2 retdopvsr = 0;
    SetBegin(B_KlDopVsr);
    while(GetNext(B_KlDopVsr))
    {
        if(GoMonth(Ls_Drog, (0 - DopSnigVsr)) >= KlDopVsr_DBeg &&
            GoMonth(Ls_Drog, (0 - DopSnigVsr)) <= KlDopVsr_DEnd)
        {
            retdopvsr = KlDopVsr_DV;
            break;
        }
    }
    return retdopvsr;
}
void GetWoomRnaz()
{
    //CheckDatin(unsigned short perKfn, StayDate perDnpen)
    unsigned short perKfn = 0;
    Clrd(_Woom_Rnaz);
    SetEnd(B_Per);
    while(GetPrior(B_Per))
    {
        if(Per_Kfn == 821)
            continue;
        if(perKfn != Per_Kfn && Per_Dnpen <= DatePack(1,4,2015))
        {
            CheckDatin(Per_Kfn, Per_Dnpen);
            perKfn = Per_Kfn;
            if(!Per_Psn)
            {
                Ldd(_Woom_Rnaz);
                Ldd(_Per_Rnaz);
                Add();
                Std(_Woom_Rnaz);
                if(Per_Kfn == 995 || Per_Kfn == 854 || Per_Kfn == 856)
                {
                    Ldd(_Per_Rnaz);
                    Std(_Woom_Dot1);
                    //Woom_Kand = 1;
                }
                if(Per_Kfn == 823)
                {
                    Ldd(_Per_Rnaz);
                    Ldi(0,0);
                    if(Cmp() < 0)
                        Woom_Kand = 2;
                }
            }
        }
    }
    Ldd(_Woom_Rnaz);
    Ldd(_Woom_Dot1);
    Sub();
    Std(_Woom_Delta1);
}
void PutBWoomen(bool kand)
{
	Singleton &glb = Singleton::getInstance();
    Clear(B_Woomen);
    Woom_Raj = Ls_Raj;
    Woom_Nls = Ls_Nls;
    Woom_Rab = Ls_Rab;
    Woom_Drog = Ls_Drog;
    Woom_Spos = Ls_Spos;
    Woom_Shifr = Ls_Shifr;
    Woom_Indots = Ls_Indots;
	Woom_DtLast = glb.dtClosedInv;
    Woom_Kand = 0;
    if(!kand)
        Woom_Kand = 1;
    Woom_Nauka = 0;

    //Печать адреса вместо ФИО
	/*
    char dom_buf[ 12 ]  = "д.",
        korp_buf[ 10 ] = "корп.",
        kv_buf[ 10 ]   = "кв.";
    StrCat( dom_buf,  Ls_Adrdom  );
    StrCat( korp_buf, Ls_Adrkorp );
    StrCat( kv_buf,   Ls_Adrkv   );
    GetNameKlUl(Ls_Raj, Ls_Adrul);
    StrForm(Woom_Fio, 51, "%-s %-s %-s %-s",
        Ul_Str,
        StrLen( Ls_Adrdom  ) ? dom_buf  : "",
        StrLen( Ls_Adrkorp ) ? korp_buf : "",
        StrLen( Ls_Adrkv   ) ? kv_buf   : "" );
		*/

    StrForm(Woom_Fio, 51, "%s", Ls_Fio);
	StayDate dt0418 = DatePack(1,4,2018);
	//GetSumPerRnaz(dt0418, _Glb_Rab1);
	//Cpy2(_Woom_Rnaz, _Glb_Rab1);

    //GetWoomRnaz();
    //GetSumPerRnazOld(DatePack(1,7,2016), 1);
    //получить ссылку на созданый класс глобальных переменных 
    //Singleton &glb = Singleton::getInstance();
    //if(glb.kand)
        //Woom_pr829 = 1;
    Put(B_Woomen);
}
void GetWoomRnazAfter()
{
    unsigned short perKfn = 0;
    Clrd(_Woom_Rnaz2);
    Woom_prNo829 = 1;
    SetEnd(B_Per);
    while(GetPrior(B_Per))
    {
        if(Per_Kfn == 821)
            continue;
        if(perKfn != Per_Kfn && Per_Dnpen <= DatePack(1,4,2015))
        {
            CheckDatin(Per_Kfn, Per_Dnpen);
            perKfn = Per_Kfn;
            if(!Per_Psn)
            {
                Ldd(_Woom_Rnaz2);
                Ldd(_Per_Rnaz);
                Add();
                Std(_Woom_Rnaz2);
                if(Per_Kfn == 995 || Per_Kfn == 854 || Per_Kfn == 856)
                {
                    Ldd(_Per_Rnaz);
                    Std(_Woom_Dot2);
                    Woom_Kand = 1;
                }
                if(Per_Kfn == 858)
                {
                    Ldd(_Per_Rnaz);
                    Std(_Woom_829);
                    Woom_pr829 = 1;
                    Woom_prNo829 = 0;
                }
            }
        }
    }
    Ldd(_Woom_Rnaz2);
    Ldd(_Woom_Dot2);
    Sub();
    Ldd(_Woom_829);
    Sub();
    Std(_Woom_Delta2);
    Ldd(_Woom_Delta2);
    Ldi(0,0);
    if(Cmp() > 0)
    {
        Ldd(_Woom_Delta2);
        Ldi(949,0);
        if(Cmp() < 0)
            Woom_Kand = 1;
    }
}
void ModifyBWoomen()
{
    GetWoomRnazAfter();
    Modify(B_Woomen);
}
bool Is133_08_12()
{
    bool result = false;
    bool pr0308 = false;
    bool pr0512 = false;
    bool pr0313 = false;
    Np_Nomig = 0;
    Np_Kfn = 133;
    Part(B_Np,2);
    if(Size(B_Np))
    {
        SetBegin(B_Np);
        while(GetNext(B_Np))
        {
            if(Np_Dnprav == DatePack(1,3,2008))
                pr0308 = true;
            if(Np_Dnprav == DatePack(1,5,2012))
            {
                pr0512 = true;
            }
            if(Np_Dnprav == DatePack(1,3,2013))
            {
                pr0313 = true;
                break;
            }
        }
        if(pr0308 && pr0512 && pr0313)
            result = true;
    }
    Part(B_Np,0);
    return result;
}
bool IsSRNX() //Год средней прописка
{
    bool result = false;
    SetBegin(B_VidOs);
    while(GetNext(B_VidOs))
    {
        switch(VidOs_Code)
        {
        case 213:
            Woom_213 = VidOs_Priz;
            break;
        case 227:
            Woom_227 = VidOs_Priz;
            break;
        }
    }
    if(Woom_213 || Woom_227)
        result = true;

    return result;
}
bool IsPravoYearBefore()
{
    //возвращает истину если дата обращения в текущем году, а дата права в предыдущем
    bool result = false;
    unsigned short y1,m1,d1;
    unsigned short y2,m2,d2;
    SetBegin(B_Nazn);
    while(GetNext(B_Nazn))
    {
        if(Nazn_Op == 1000)
        {
            DateUnpack(Nazn_Dobr,&d1,&m1,&y1);
            DateUnpack(Nazn_Dnaz,&d2,&m2,&y2);
            if((y1 == 2014) && ((y1-1) == y2))
                result = true;
            break;
        }
    }
    return result;
}
bool IsNaukaSRNX()
{
    bool result = false;
    unsigned short y213 = 0;
    unsigned short y227 = 0;
    switch(Ls_Shifr)
    {
    case 136: case 137: case 139: case 512:
    case 522: case 532: case 147:
        result = true;
        break;
    }
    if(result)
    {
        SetBegin(B_VidOs);
        while(GetNext(B_VidOs))
        {
            if(VidOs_Code == 213)
                y213 = VidOs_Priz;
            if(VidOs_Code == 227)
                y227 = VidOs_Priz;
        }
        if(y213 != y227)
            result = false;
    }
    if(result)
    {
        SetIndex(B_Nazn,1);
        Nazn_Op = 3250;
        Part(B_Nazn,1);
        if(Size(B_Nazn))
        {
            SetEnd(B_Nazn);
            GetPrior(B_Nazn);
            if(Nazn_Dnaz >= DatePack(1,10,2011))
                result = false;
        }
        else
            result = false;
        Part(B_Nazn,0);
    }
    return result;
}
bool IsTrudKalika()
{
    bool result = false;
    switch(Ls_Shifr)
    {
    case 513:
    case 523:
        result = true;
        break;
    }
    return result;
}
bool IsSirotaAndSemisirota()
{
    bool result = false;
    bool sirota = false;
    bool semisirota = false;
    if(Size(B_Igd))
    {
        SetBegin(B_Igd);
        while(GetNext(B_Igd))
        {
            if(Igd_Nomig < 90 && Igd_Psn != 6)
            {
                if(Igd_Sir == 1)
                    sirota = true;
                if(Igd_Sir == 21)
                    semisirota = true;
                if(Igd_Sir == 22)
                    semisirota = true;
            }
        }
        if(sirota && semisirota)
            result = true;
    }
    return result;
}
bool IsLsShifr130()
{
    bool result = false;
    StayDate dateNow = GetSysDate();
    if(Ls_Shifr == 130)
    {
        SetBegin(B_Per);
        while(GetNext(B_Per))
        {
            if(Per_Kfn == 154)
            {
                if(Per_Dnpen > dateNow)
                {
                    result = true;
                }
                break;
            }
        }
    }
    return result;
}
bool IsArticle39()
{
    //получить ссылку на созданый класс глобальных переменных 
    Singleton &glb = Singleton::getInstance();

    bool result = false;
    bool closed = false;
    bool article39 = false;
    unsigned short kfn = Ls_Kfn;
    glb.kfn = Ls_Kfn;
    if(Size(B_Shifr))
    {
        SetEnd(B_Shifr);
        while(GetPrior(B_Shifr))
        {
            if(Shifr_DateC < DatePack(1,1,2015))
                break;
        }
        kfn = Shifr_Kfn;
        glb.kfn = Shifr_Kfn;
    }
    Per_Kfn = kfn;
    Part(B_Per,1);
    SetEnd(B_Per);
    while(GetPrior(B_Per))
    {
        if(Per_Dnpen <= DatePack(1,1,2015))
        {
            if(Per_Psn != 0)
                closed = true;
            break;
        }
    }
    Part(B_Per,0);
    if(closed && kfn != Ls_Kfn)
    {
        Per_Kfn = Ls_Kfn;
        Part(B_Per,1);
        SetEnd(B_Per);
        while(GetPrior(B_Per))
        {
            if(Per_Dnpen <= DatePack(1,1,2015))
            {
                if(Per_Psn == 0)
                    closed = false;
                break;
            }
        }
        Part(B_Per,0);
    }
    SetBegin(B_Np);
    while(GetNext(B_Np))
    {
        if(Np_Kfn == 262 || Np_Kfn == 263 || Np_Kfn == 264)
        {
            if(Np_Dnprav <= DatePack(1,1,2015) && Np_Dkprav > DatePack(1,1,2015))
            {
                article39 = true;
                break;
            }
        }
    }
    result = (article39 && !closed);

    return result;
}
void WriteArticle39()
{
    StayDate dtLastMove = GetDateLastMove();
    if(dtLastMove > DatePack(1,1,2015))
    {
        Osob_Code = 405;
        if(GetKey(B_Osob))
        {
            Osob_Priz = DatePack(1,1,2015);
            Modify(B_Osob);
        }
        else
        {
            Osob_Priz = DatePack(1,1,2015);
            Put(B_Osob);
        }
        Woom_Kand = 1;
        Woom_DtLast = dtLastMove;
        Modify(B_Woomen);
        return;
    }
    //получить ссылку на созданый класс глобальных переменных 
    Singleton &glb = Singleton::getInstance();
    bool is_995_854 = false;
//    unsigned char dpi_proc = 100;
    dpi_proc = 100;
    bool dpi = IsDPI(DatePack(1,1,2015), dpi_proc);
    //int6 rab1;
    //StayFD _n_rab1 = {&rab1,0,0,0,CLS_Hs,2,"rab1",""};
    //pStayFD _rab1 = &_n_rab1;
    Clrd(_rab1);
    //int6 rab2;
    //StayFD _n_rab2 = {&rab2,0,0,0,CLS_Hs,2,"rab2",""}; //копія rab1 до ДПІ
    //pStayFD _rab2 = &_n_rab2;
    Clrd(_rab2);

    unsigned short oldKfn = 0;
    unsigned short kfnDot = 0; //995 856 854
    if(!is708())
    {
        SetEnd(B_Per);
        while(GetPrior(B_Per))
        {
            if(Per_Kfn == 995 || Per_Kfn == 854 || Per_Kfn == 856)
            {
                if(Per_Dnpen <= DatePack(1,1,2015) && Per_Kfn != oldKfn)
                {
                    if(Per_Psn == 0)
                    {
                        is_995_854 = true;
                        kfnDot = Per_Kfn;
                        break;
                    }
                    oldKfn = Per_Kfn;
                }
            }
        }
    }
    SetBegin(B_Np);
    while(GetNext(B_Np))
    {
        if(Np_Kfn == 262 || Np_Kfn == 263 || Np_Kfn == 264)
        {
            if(Np_Dnprav <= DatePack(1,1,2015) && Np_Dkprav > DatePack(1,1,2015))
            {
                if(!is_995_854)
                {
                    Mark(B_Np,5);
                    Np_Dnprav = DatePack(1,1,2015);
                    if(Np_Kfn == 262)
                        Np_Kfn = 11262;
                    if(Np_Kfn == 263)
                        Np_Kfn = 11263;
                    if(Np_Kfn == 264)
                        Np_Kfn = 11264;
                    Put(B_Np);
                    GetMark(B_Np,5);
                }
                if(Np_Dnprav == DatePack(1,1,2015))
                {
                    Ldd(_Np_Snadp);
                    Std(_rab1);
                    Delete(B_Np);
                }
                else
                {
                    Np_Dkprav = DatePack(31,12,2014);
                    Modify(B_Np);
                    //summa
                    Ldd(_Np_Snadp);
                    Ldd(_rab1);
                    Add();
                    Std(_rab1);
                }
            }
            if(Np_Dnprav > DatePack(1,1,2015) && Np_Dkprav > Np_Dnprav)
            {
                if(!is_995_854)
                {
                    Mark(B_Np,9);
                    if(Np_Kfn == 262)
                        Np_Kfn = 11262;
                    if(Np_Kfn == 263)
                        Np_Kfn = 11263;
                    if(Np_Kfn == 264)
                        Np_Kfn = 11264;
                    Put(B_Np);
                    GetMark(B_Np,9);
                }
                Delete(B_Np);
            }
        }
    }
    if(is_995_854 && dpi)
    {
        SetBegin(B_Np);
        while(GetNext(B_Np))
        {
            if(Np_Kfn == (Ls_Kfn + 30))
            {
                if(Np_Dnprav < DatePack(1,1,2015) && Np_Dkprav > DatePack(1,1,2015))
                {
                    Mark(B_Np, 5);
                    Np_Dnprav = DatePack(1,1,2015);
                    Put(B_Np);
                    GetMark(B_Np, 5);
                    Np_Dkprav = DatePack(31,12,2014);
                    Modify(B_Np);
                }
                if(Np_Dnprav >= DatePack(1,1,2015) && Np_Dkprav > Np_Dnprav)
                {
                    Ldd(_Np_Snadp);
                    Ldd(_rab1);
                    Sub();
                    Std(_Np_Snadp);
                    Modify(B_Np);
                }
            }
        }
    }
/*
    Clrd(_rab1);
    //1
    SetBegin(B_Np);
    while(GetNext(B_Np))
    {
        if(is_995_854)
        {
        }
        else
        {
        if((Np_Kfn == 11262 || Np_Kfn == 11263 || Np_Kfn == 11264) &&
            Np_Dnprav == DatePack(1,1,2015))
        {
            Ldd(_Np_Snadp);
            Ldd(_rab1);
            Add();
            Std(_rab1);
        }
        }
    }
    */
    Ldd(_rab1);
    Std(_rab2);
    if(dpi && dpi_proc < 100)
    {
        Ldd(_rab1);
        Ldi(dpi_proc,2);
        Mul();
        Std(_rab1);
    }
    StayDate lastPerDnpen = DATE_MAX;//для исключения обработки второй записи с совпадающей датой и меньшей датой инспектора
    if(is_995_854)
    {
        //2
        SetEnd(B_Per);
        while(GetPrior(B_Per))
        {
            //if(Per_Kfn == 995 || Per_Kfn == 854 || Per_Kfn == 856)
            if(Per_Kfn == kfnDot)
            {
                if(Per_Dnpen > DatePack(1,1,2015) && Per_Dnpen < lastPerDnpen)
                {
                    CheckDatin(Per_Kfn, Per_Dnpen);
                    Ldd(_Per_Rnaz);
                    Ldd_Rab1(Per_Dnpen);
                    Add();
                    Std(_Per_Rnaz);
                    Per_Datin = GetSysDate();
                    Per_Kin = glb.insCode;
                    Modify(B_Per);
                    lastPerDnpen = Per_Dnpen;
                }
                if(Per_Dnpen == DatePack(1,1,2015))
                {
                    if(Per_Psn == 0  && Per_Dnpen < lastPerDnpen)
                    {
                        CheckDatin(Per_Kfn, Per_Dnpen);
                        Ldd(_Per_Rnaz);
                        Ldd(_rab1);
                        Add();
                        Std(_Per_Rnaz);
                        Per_Datin = GetSysDate();
                        Per_Kin = glb.insCode;
                        if(Per_Op == 1020 || Per_Op == 1000)
                        {
                            Per_Op = 3900;
                            Put(B_Per);
                        }
                        else
                        {
                            Per_Op = 3900;
                            Modify(B_Per);
                        }
                        lastPerDnpen = Per_Dnpen;
                    }
                    break;
                }
                if(Per_Dnpen < DatePack(1,1,2015))
                {
                    if(Per_Psn == 0 && Per_Dnpen < lastPerDnpen)
                    {
                        CheckDatin(Per_Kfn, Per_Dnpen);
                        Ldd(_Per_Rnaz);
                        Ldd(_rab1);
                        Add();
                        Std(_Per_Rnaz);
                        Per_Op = 3900;
                        Per_Datin = GetSysDate();
                        Per_Kin = glb.insCode;
                        Per_Dnpen = DatePack(1,1,2015);
                        Put(B_Per);
                        lastPerDnpen = Per_Dnpen;
                    }
                    break;
                }
            }
        }
    }
    else
    {
        //2
        Ldd(_rab1);
        Ldi(0,0);
        if(Cmp() > 0)
        {
            Per_Kfn = 829;
            Per_Dnpen = DatePack(1,1,2015);
            Per_Op = 3900;
            Ldd(_rab1);
            Std(_Per_Rnaz);
            Per_Prper = 0;
            Per_Psn = 0;
            Per_CodeDoc = 0;
            Per_NIz = 0;
            Per_DateIz = 0;
            Per_Datin = GetSysDate();
            Per_Kin = glb.insCode;
            Put(B_Per);
        }
    }
    //3
    lastPerDnpen = DATE_MAX;
    SetEnd(B_Per);
    unsigned short kfn = 0;
    while(GetPrior(B_Per))
    {
        if(!IsOsnKfn(Per_Kfn) && Per_Kfn != 171)
            continue;
        if(Per_Kfn == kfn)
            continue;
        if(Per_Psn == 0 && CheckModify171())
            continue;
        if(Per_Dnpen > DatePack(1,1,2015))
        {
            Ldd(_Per_Rnaz);
            Ldd_Rab1(Per_Dnpen);
            if(Cmp() > 0)
            {
                Ldd(_Per_Rnaz);
                Ldd_Rab1(Per_Dnpen);
                Sub();
                Std(_Per_Rnaz);
                Per_Datin = GetSysDate();
                Per_Kin = glb.insCode;
                Modify(B_Per);
                if(Per_Psn && !is_995_854 && ClosedOsnKfn(Per_Dnpen))
                {
                    //close 829
                    Mark(B_Per,5);
                    Per_Kfn = 829;
                    Ldd(_rab1);
                    Std(_Per_Rnaz);
                    Per_Datin = GetSysDate();
                    Per_Kin = glb.insCode;
                    Put(B_Per);
                    GetMark(B_Per,5);
                }
                //else ???
                if(IsDPI(Per_Dnpen, dpi_proc) && !is_995_854)
                {
                    //modify 829
                    Mark(B_Per,5);
                    Per_Kfn = 829;
                    Part(B_Per, 2);

                    SetBegin(B_Per);
                    if(Size(B_Per))
                    {
                        while(GetNext(B_Per))
                        {
                            Ldd_Rab1(Per_Dnpen);
                            Std(_Per_Rnaz);
                            Modify(B_Per);
                        }
                    }
                    else
                    {
                        Per_Kfn = 829;
                        //Per_Dnpen = DatePack(1,1,2015);
                        Per_Op = 3900;
                        Ldd_Rab1(Per_Dnpen);
                        Std(_Per_Rnaz);
                        Per_Prper = 0;
                        Per_Psn = 0;
                        Per_CodeDoc = 0;
                        Per_NIz = 0;
                        Per_DateIz = 0;
                        Per_Datin = GetSysDate();
                        Per_Kin = glb.insCode;
                        Put(B_Per);
                    }

                    Part(B_Per, 0);
                    GetMark(B_Per,5);
                }
            }
        }
        if(Per_Dnpen == DatePack(1,1,2015) && Per_Psn == 0)
        {
            Ldd(_Per_Rnaz);
            Ldd(_rab1);
            if(Cmp() > 0)
            {
                Ldd(_Per_Rnaz);
                Ldd(_rab1);
                Sub();
                Std(_Per_Rnaz);
                Per_Datin = GetSysDate();
                Per_Kin = glb.insCode;
                if(Per_Op == 1020 || Per_Op == 1000)
                {
                    Per_Op = 3900;
                    Put(B_Per);
                }
                else
                {
                    Per_Op = 3900;
                    Modify(B_Per);
                }
            }
            break;
        }
        if(Per_Dnpen < DatePack(1,1,2015) && Per_Psn == 0 && Per_Dnpen < lastPerDnpen)
        {
            CheckDatin(Per_Kfn, Per_Dnpen);
            Ldd(_Per_Rnaz);
            Ldd(_rab1);
            Sub();
            Std(_Per_Rnaz);
            Per_Op = 3900;
            Per_Datin = GetSysDate();
            Per_Kin = glb.insCode;
            Per_Dnpen = DatePack(1,1,2015);
            Put(B_Per);
            lastPerDnpen = Per_Dnpen;
            break;
        }
        if(Per_Dnpen <= DatePack(1,1,2015) && Per_Psn != 0)
        {
            kfn = Per_Kfn; //для пропуска
        }
    }
    WriteVidOsDolja();//прописка долевых иждевенцев
}
bool IsOsnKfn(unsigned short kfn)
{
    bool result = false;
    if(Ls_Kfn == kfn)
    {
        result = true;
        return result;
    }
    SetEnd(B_Shifr);
    while(GetPrior(B_Shifr))
    {
        if(Shifr_Kfn == kfn)
        {
            result = true;
            break;
        }
    }
    return result;
}
bool ClosedOsnKfn(StayDate dnPen)
{
    bool result = true;
    if(!Per_Psn)
        result = false;
    Mark(B_Per, 6);
    SetBegin(B_Per);
    while(GetNext(B_Per))
    {
        if(Per_Dnpen == dnPen && IsOsnKfn(Per_Kfn))
        {
            if(Per_Psn == 0)
            {
                result = false;
                break;
            }
        }
    }
    GetMark(B_Per, 6);
    return result;
}
bool is708()
{
    bool result = false;
    bool condition1 = false;
    bool condition2 = false;
    bool condition3 = false;
    bool condition4 = false;
    //condition1
    SetEnd(B_Per);
    while(GetPrior(B_Per))
    {
        if(Per_Kfn == 708)
        {
            if(Per_Dnpen <= DatePack(1,1,2015))
            {
                if(Per_Psn == 0)
                {
                    Ldi(418,1);//41.80
                    Ldd(_Per_Rnaz);
                    if(Cmp() == 1)
                        condition1 = true;
                }
                break;
            }
        }
    }
    //condition2
    if(Ls_Vid == 5)
        condition2 = true;
    //condition3
    switch(Ls_Shifr)
    {
    case 311: case 313: case 317: case 318:
    case 321: case 323: case 327: case 328:
    case 331: case 333: case 337: case 338:
    case 513: case 523: case 533: case 543: case 553: case 563: case 573: case 583: case 593:
    case 514: case 524: case 534: case 544: case 554: case 564: case 574: case 584: case 594:
        condition3 = true;
        break;
    }
    //condition4
    Osob_Code = 45;
    if(GetKey(B_Osob))
        condition4 = true;
    result = condition1 && (condition2 || (condition3 && condition4));
    return result;
}
bool IsDPI(StayDate dt, unsigned char &dpiProc)
{
    bool result = false;
    CheZp_Nomig = 0;
    Part(B_CheZp, 1);
    SetBegin(B_CheZp);
    if(Size(B_CheZp))
    {
        while(GetNext(B_CheZp))
        {
            if(CheZp_Code == 10)
            {
                if(dt >= CheZp_DateBeg && ((CheZp_DateEnd && dt <= CheZp_DateEnd) || !CheZp_DateEnd))
                {
                    result = true;
                }
            }
            if(CheZp_Code == 11)
            {
                if(dt >= CheZp_DateBeg && dt <= CheZp_DateEnd)
                    result = false;
            }
        }
    }
    Part(B_CheZp,0);
    if(result)
    {
        Mark(B_Np,1);
        Np_Nomig  = 0;
        Np_Kfn = Ls_Kfn + 30;
        Part(B_Np,2);
        SetBegin(B_Np);
        while(GetNext(B_Np))
        {
            if(Np_Dnprav <= dt && Np_Dkprav > dt)
            {
                if(Np_Pr)
                    dpiProc = Np_Pr;
            }
        }
        Part(B_Np,0);
        GetMark(B_Np,1);
    }
    return result;
}
void Ldd_Rab1(StayDate dt)
{
    if(IsDPI(dt, dpi_proc))
    {
        Ldd(_rab2);
        Ldi(dpi_proc,2);
        Mul();
    }
    else
    {
        Ldd(_rab2);
    }
}
void WriteVidOsDolja()
{
    unsigned short nomerDoli = 0;
    if(Ls_Dolya > 0)
    {
        DeleteCheDopl();
        if(Ls_Dolya == 2)
        {
            Osob_Code = 29;
            if(GetKey(B_Osob))
                nomerDoli = Osob_Priz;
        }
        SetBegin(B_Igd);
        while(GetNext(B_Igd))
        {
            if(Igd_Psn != 6 && (!Igd_Dso || Igd_Dso > DatePack(1,1,2015)) && !Igd_Prab)
            {
                if(Size(B_Dolja))
                {
                    SetEnd(B_Dolja);
                    GetPrior(B_Dolja);
                    if(Igd_Dolja_NumP != nomerDoli)
                    {
                        SetBegin(B_Che);
                        while(GetNext(B_Che))
                        {
                            if(Igd_Nomig == Che_Nomig)
                            {
                                switch(Che_Kzp)
                                {
                                case 2:
                                    VidOs_Code = 215;
                                    VidOs_DateB = DatePack(1,1,1900) + Che_Nomig;
                                    VidOs_DateE = DatePack(1,1,2015);
                                    VidOs_Priz = DATE_MAX;
                                    Ldi(132,1);
                                    Std(_VidOs_Sum);
                                    Put(B_VidOs);
                                    break;
                                case 3:
                                    VidOs_Code = 216;
                                    VidOs_DateB = DatePack(1,1,1900) + Che_Nomig;
                                    VidOs_DateE = DatePack(1,1,2015);
                                    VidOs_Priz = DATE_MAX;
                                    Ldi(105,1);
                                    Std(_VidOs_Sum);
                                    Put(B_VidOs);
                                    break;
                                case 4:
                                    VidOs_Code = 217;
                                    VidOs_DateB = DatePack(1,1,1900) + Che_Nomig;
                                    VidOs_DateE = DatePack(1,1,2015);
                                    VidOs_Priz = DATE_MAX;
                                    Ldi(52,1);
                                    Std(_VidOs_Sum);
                                    Put(B_VidOs);
                                    break;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
void DeleteCheDopl()
{
    VidOs_Code = 215;//262 надбавка
    Part(B_VidOs,1);
    SetBegin(B_VidOs);
    while(GetNext(B_VidOs))
    {
        Delete(B_VidOs);
    }
    VidOs_Code = 216;//263 надбавка
    Part(B_VidOs,1);
    SetBegin(B_VidOs);
    while(GetNext(B_VidOs))
    {
        Delete(B_VidOs);
    }
    VidOs_Code = 217;//264 надбавка
    Part(B_VidOs,1);
    SetBegin(B_VidOs);
    while(GetNext(B_VidOs))
    {
        Delete(B_VidOs);
    }
    Part(B_VidOs,0);
}
//если есть несколько записей с одной датой, то установить позицию на запись с
//максимальной датой инспектора. Внешний цикл GetPrior
void CheckDatin(unsigned short perKfn, StayDate perDnpen)
{
    StayDate perDatin = Per_Datin;
    Mark(B_Per, 4);
    while(GetPrior(B_Per))
    {
        if(Per_Kfn == perKfn && perDnpen == Per_Dnpen)
        {
            if(Per_Datin > perDatin)
            {
                perDatin = Per_Datin;
                Mark(B_Per, 4);
            }
        }
        else
            break;
    }
    GetMark(B_Per, 4);
}
void GetSumPer_All_Osn_995_835(StayDate dateCalc, FD * SumRnaz, FD * SumOsn, FD * Sum995, FD * Sum835, unsigned short psn)
{
    unsigned short perKfn = 0;
    Clrd(SumRnaz);
	Clrd(SumOsn);
	Clrd(Sum995);
	Clrd(Sum835);
    SetEnd(B_Per);
    while(GetPrior(B_Per))
    {
        if(Per_Kfn == 821)
            continue;
        if(perKfn != Per_Kfn && Per_Dnpen <= dateCalc)
        {
            CheckDatin(Per_Kfn, Per_Dnpen);
            perKfn = Per_Kfn;
            if(Per_Psn == psn)
            {
                Ldd(SumRnaz);
                Ldd(_Per_Rnaz);
                Add();
                Std(SumRnaz);
				if(Per_Kfn == 171)
					Cpy2(SumOsn, _Per_Rnaz);
				if(Per_Kfn == 995)
					Cpy2(Sum995, _Per_Rnaz);
				if(Per_Kfn == 835)
					Cpy2(Sum835, _Per_Rnaz);
            }
        }
    }
}
void GetSumPer_All_154(StayDate dateCalc, FD * SumRnaz, FD * SumOsn, FD * Sum995, FD * Sum835, FD * SumOsn2, unsigned short psn)
{
    unsigned short perKfn = 0;
    Clrd(SumRnaz);
	Clrd(SumOsn);
	Clrd(SumOsn2);
	Clrd(Sum995);
	Clrd(Sum835);
    SetEnd(B_Per);
    while(GetPrior(B_Per))
    {
        if(Per_Kfn == 821)
            continue;
        if(perKfn != Per_Kfn && Per_Dnpen <= dateCalc)
        {
            CheckDatin(Per_Kfn, Per_Dnpen);
            perKfn = Per_Kfn;
            if(Per_Psn == psn)
            {
                Ldd(SumRnaz);
                Ldd(_Per_Rnaz);
                Add();
                Std(SumRnaz);
				if(Per_Kfn == 171 || Per_Kfn == 154)
					Sum(SumOsn, _Per_Rnaz);
				if(Per_Kfn == 154)
					Cpy2(SumOsn2, _Per_Rnaz);
				if(Per_Kfn == 995)
					Cpy2(Sum995, _Per_Rnaz);
				if(Per_Kfn == 835)
					Cpy2(Sum835, _Per_Rnaz);
            }
        }
    }
}
bool CheckModify171()
{
    bool result = false;
    StayDate perDnpen = 0;
    if(Per_Kfn != 171)
    {
        perDnpen = Per_Dnpen;
        Mark(B_Per, 3);
        while(GetNext(B_Per) && Per_Kfn <= 171)
        {
            if(Per_Kfn == 171 && Per_Dnpen == perDnpen && Per_Datin == GetSysDate())
            {
                result = true;
            }
        }
        GetMark(B_Per, 3);
    }
    return result;
}
StayDate GetDateLastMove()
{
    StayDate DateLastMove = 0;
	SetBegin(B_Nazn);
    while(GetNext(B_Nazn))
    {
        if ( DateLastMove <  Nazn_Dnaz && Nazn_Op != 3100 && Nazn_Op != 3900 && Nazn_Op != 3190
            && Nazn_Op != 3800 && Nazn_Op != 3180){
                {
                    DateLastMove = Nazn_Dnaz;
                }
            }
    }
    return DateLastMove;
}
bool IsClose21()
{
    //получить ссылку на созданый класс глобальных переменных 
    Singleton &glb = Singleton::getInstance();
    bool result = false;
    bool closed = false;
    StayDate dateBeg = 0;

    VidOs_Code = 1096;
    Part(B_VidOs,1);
    if(Size(B_VidOs))
    {
        SetBegin(B_VidOs);
        GetNext(B_VidOs);
        dateBeg = VidOs_DateB;
        result = true;
    }
    Part(B_VidOs,0);
    glb.dateBeg = dateBeg;

    unsigned short kfn = Ls_Kfn;
    glb.kfn = Ls_Kfn;
    if(Size(B_Shifr))
    {
        SetEnd(B_Shifr);
        while(GetPrior(B_Shifr))
        {
            if(Shifr_DateC < dateBeg)
                break;
        }
        kfn = Shifr_Kfn;
        glb.kfn = Shifr_Kfn;
    }
    Per_Kfn = kfn;
    Part(B_Per,1);
    SetEnd(B_Per);
    while(GetPrior(B_Per))
    {
        if(Per_Dnpen <= dateBeg)
        {
            if(Per_Psn != 0)
                closed = true;
            break;
        }
    }
    Part(B_Per,0);
    if(closed && kfn != Ls_Kfn)
    {
        Per_Kfn = Ls_Kfn;
        Part(B_Per,1);
        SetEnd(B_Per);
        while(GetPrior(B_Per))
        {
            if(Per_Dnpen <= dateBeg)
            {
                CheckDatin(Per_Kfn, Per_Dnpen);
                if(Per_Psn == 0)
                    closed = false;
                break;
            }
        }
        Part(B_Per,0);
    }
    return (result && !closed);
}
void Close21()
{
    //получить ссылку на созданый класс глобальных переменных 
    Singleton &glb = Singleton::getInstance();

    dpi_proc = 100;
    bool dpi = IsDPI(glb.dateBeg, dpi_proc);

    int istFin = int(Ls_Nls/100000);
    bool close162 = false;
    switch(Ls_Shifr)
    {
    case 136: case 137: case 139: case 512:
    case 522: case 532: case 147:
        close162 = true;
        break;
    }
    if(istFin == 2)
        close162 = false;
    if(close162)
    {
        Woom_Nauka = 1;
        Modify(B_Woomen);
    }

    //closing
    StayDate lastPerDnpen = DATE_MAX;
    unsigned short oldKfn = 0;
    bool closed = false;
    SetEnd(B_Per);
    //glb.dateBeg = DatePack(1,4,2015); //ttt

    while(GetPrior(B_Per))
    {
        if(close162 && !(Per_Kfn == 162 || Per_Kfn == 857 || Per_Kfn == 823))
            continue;
        if(close162 && Per_Kfn == 823)
        {
            Ldd(_Per_Rnaz);
            Ldi(0,0);
            if(Cmp() >= 0)
                continue;
        }
        if(Per_Kfn != oldKfn)
        {
            lastPerDnpen = DATE_MAX;
            closed = false;
            oldKfn = Per_Kfn;
        }
        if(Per_Dnpen > glb.dateBeg && Per_Dnpen < lastPerDnpen)
        {
            CheckDatin(Per_Kfn, Per_Dnpen);
            if(Per_Psn == 0)
            {
                Per_Datin = DatePack(1,4,2015);//GetSysDate() - 1;
                Per_Kin = glb.insCode;
                Per_Psn = 21;
                Per_Op = 2210;
                Put(B_Per);
            }
            lastPerDnpen = Per_Dnpen;
        }
        if(Per_Dnpen == glb.dateBeg && Per_Dnpen < lastPerDnpen)
        {
            CheckDatin(Per_Kfn, Per_Dnpen);
            if(Per_Psn == 0)
            {
                Per_Datin = DatePack(1,4,2015);//GetSysDate() - 1;
                Per_Kin = glb.insCode;
                Per_Psn = 21;
                Per_Op = 2210;
                Put(B_Per);
            }
            lastPerDnpen = Per_Dnpen;
            closed = true;
        }
        if(Per_Dnpen < glb.dateBeg && !closed)
        {
            CheckDatin(Per_Kfn, Per_Dnpen);
            if(Per_Psn == 0)
            {
                CheckDatin(Per_Kfn, Per_Dnpen);
                Per_Datin = DatePack(1,4,2015);//GetSysDate() - 1;
                Per_Kin = glb.insCode;
                Per_Psn = 21;
                Per_Op = 2210;
                Per_Dnpen = glb.dateBeg;
                Put(B_Per);
            }
            closed = true;
            lastPerDnpen = Per_Dnpen;
        }
    }
}
bool IsVidstrochka()
{
    bool result = false;
    SetBegin(B_Nazn);
    while(GetNext(B_Nazn))
    {
        if(Nazn_Op == 1010)
        {
            result = true;
            break;
        }
    }
    return result;
}
bool IsOsob75()
{
    bool result = false;
    Osob_Code = 75;
    if(GetKey(B_Osob))
        result = true;
    return result;
}
int NoTax()
{
    int result = 0;
    StayDate dtNoTax = DatePack(1,7,2016);
    StayDate dtBirth = Ls_Drog;
    if(IsNoClosedAccount(dtNoTax))
    {
         int priznak = GetBelongSign();
         if(priznak)
         {
             result = priznak;
         }
    }
    return result;
}
void PutOsob1050(int priznak)
{
    Osob_Code = 1050;
    if(!GetKey(B_Osob))
    {
        Osob_Priz = static_cast<unsigned short>(priznak);
        Put(B_Osob);

        VidOs_Code = 1050;
        VidOs_DateB = DatePack(1,7,2016);
        VidOs_DateE = DATE_MAX;
        Clrd(_VidOs_Sum);
        VidOs_Priz = static_cast<unsigned short>(priznak);
        Put(B_VidOs);
    }
}
int GetBelongSign()
{
    //получить ссылку на созданый класс глобальных переменных 
    Singleton &glb = Singleton::getInstance();
    glb.kfnPidv = 0;
    int result = 0;
    int no_ubd_result = 0;
    unsigned short no_ubd_kfn = 0;
    StayDate dtWrite = DatePack(1,7,2016);
    bool is709kfn = Is709KfnOpen(dtWrite);
    SetBegin(B_Np);
    while(GetNext(B_Np))
    {
        if(Np_Dnprav <= dtWrite && Np_Dkprav >= dtWrite)
        {
            switch(Np_Kfn)
            {
                /*
            case 216: case 217: case 218: case 219: case 220:
            case 221: case 242: case 243: case 244: case 2217: case 2218:
                no_ubd_result = 7;
                no_ubd_kfn = Np_Kfn;
                //result = 7;
                //glb.kfnPidv = Np_Kfn;
                break;
            case 239: case 240: case 241: case 251: case 252: case 253: case 254: case 258:
                no_ubd_result = 10;
                no_ubd_kfn = Np_Kfn;
                //result = 10;
                //glb.kfnPidv = Np_Kfn;
                break;
            case 246: case 247: case 248: case 2247: case 2248:
                if(is709kfn)
                {
                    no_ubd_result = 7;
                    no_ubd_kfn = Np_Kfn;
                }
                break;
                */
            case 230: case 231:
                result = 5;
                glb.kfnPidv = Np_Kfn;
                break;
            case 229: case 2229:
                result = 5;
                glb.kfnPidv = Np_Kfn;
                break;
            case 245: case 2245:
                if(is709kfn)
                {
                    result = 5;
                    glb.kfnPidv = Np_Kfn;
                }
                break;
            }
        }
    }
    /*
    if(no_ubd_result)
    {
        glb.kfnPidv = no_ubd_kfn;
        if(result == 6)
            result = no_ubd_result;//10;//61;
        else
            result = no_ubd_result;
    }
    */
    return result;
}
bool IsNoClosedAccount(StayDate dateBeg)
{
    //получить ссылку на созданый класс глобальных переменных 
    Singleton &glb = Singleton::getInstance();
    bool closed = false;
    glb.dateBeg = dateBeg;

    unsigned short kfn = Ls_Kfn;
    glb.kfn = Ls_Kfn;
    if(Size(B_Shifr))
    {
        SetEnd(B_Shifr);
        while(GetPrior(B_Shifr))
        {
            if(Shifr_DateC < dateBeg)
                break;
        }
        kfn = Shifr_Kfn;
        glb.kfn = Shifr_Kfn;
    }
    Per_Kfn = kfn;
    Part(B_Per,1);
    SetEnd(B_Per);
    while(GetPrior(B_Per))
    {
        if(Per_Dnpen <= dateBeg)
        {
            if(Per_Psn != 0)
                closed = true;
            break;
        }
    }
    Part(B_Per,0);
    if(closed && kfn != Ls_Kfn)
    {
        Per_Kfn = Ls_Kfn;
        Part(B_Per,1);
        SetEnd(B_Per);
        while(GetPrior(B_Per))
        {
            if(Per_Dnpen <= dateBeg)
            {
                CheckDatin(Per_Kfn, Per_Dnpen);
                if(Per_Psn == 0)
                    closed = false;
                break;
            }
        }
        Part(B_Per,0);
    }
    return (!closed);
}
StayDate GetBirthDate()
{
    StayDate dtBirth = Ls_Drog;
    Osob_Code = 13;
    if(GetKey(B_Osob))
    {
        if(Size(B_Igd))
        {
            SetBegin(B_Igd);
            while(GetNext(B_Igd))
            {
                if(Igd_Nomig == 1)
                {
                    dtBirth = Igd_Drog;
                    break;
                }
            }
        }
    }
    return dtBirth;
}
void GetSumPerRnazOld(StayDate dateCalc, int withIndex)
{
    //CheckDatin(unsigned short perKfn, StayDate perDnpen)
    unsigned short perKfn = 0;
    Clrd(_Woom_Rnaz);
    SetEnd(B_Per);
    while(GetPrior(B_Per))
    {
        if(Per_Kfn == 821)
            continue;
        if(perKfn != Per_Kfn && Per_Dnpen <= DatePack(1,4,2015))
        {
            CheckDatin(Per_Kfn, Per_Dnpen);
            perKfn = Per_Kfn;
            if(!Per_Psn)
            {
                Ldd(_Woom_Rnaz);
                Ldd(_Per_Rnaz);
                Add();
                Std(_Woom_Rnaz);
            }
        }
    }
    if(withIndex) //з індексацією
    {
        VidOs_Code = 2124;
        VidOs_DateB = dateCalc;
        if(GetKey(B_VidOs))
        {
            Ldd(_VidOs_Sum);
            Ldd(_Woom_Rnaz);
            Add();
            Std(_Woom_Rnaz);
        }
    }
}
void DeleteOsob1050()
{
    VidOs_Code = 1050;
    Part(B_VidOs,1);
    while(GetNext(B_VidOs))
        Delete(B_VidOs);
    Part(B_VidOs,0);

    Osob_Code = 1050;
    if(GetKey(B_Osob))
        Delete(B_Osob);
}
bool Is709KfnOpen(StayDate dt)
{
    bool result = false;
    Per_Kfn = 709;
    Part(B_Per,1);
    SetEnd(B_Per);
    while(GetPrior(B_Per))
    {
        if(Per_Dnpen <= dt)
        {
            if(Per_Psn == 0)
                result = true;
            break;
        }
    }
    Part(B_Per,0);
    return result;
}
bool IsWoomenDosr11131()
{
    bool result = false;
    StayDate dtCalc = DatePack(1,9,2015);
    Osob_Code = 82; 
    if(GetKey(B_Osob) && Ls_Rab == 6 && Ls_Pol == 2)
    {
        SetEnd(B_Np);
        Clrd(_rab1);
        Clrd(_rab2);
        while(GetPrior(B_Np))
        {
            if(Np_Kfn < 11131 || Np_Kfn > 11132)
                continue;
            if(Np_Dnprav <= dtCalc && Np_Dkprav > dtCalc)
            {
                Ldd(_Np_Snadp);
                if(Np_Kfn == 11131)
                    Std(_rab1);
                else
                    Std(_rab2);
            }
        }
        Ldd(_rab1);
        Ldi(0,0);
        if(Cmp() != 0) //есть значение
        {
            Ldd(_rab1);
            Ldd(_rab2);
            Sub();
            if(Test() < 0) 
                Inv();
            Ldi(1,2);
            if(Cmp() <= 0)
                result = true;
        }
        
    }
    return result;
}
void Rewrite11131()
{
    StayDate dateEnd11131 = 0;
    SetEnd(B_Np);
    while(GetPrior(B_Np))
    {
        if(Np_Kfn != 11131)
            continue;
        if(!dateEnd11131)
            dateEnd11131 = Np_Dkprav;
        if(Np_Dnprav >= DatePack(1,9,2015))
            Delete(B_Np);
        if(Np_Dnprav < DatePack(1,9,2015))
        {
            Np_Dkprav = dateEnd11131;
            Modify(B_Np);
            break;
        }
    }
}
bool IsWoomenDosr11135()
{
    bool result = false;
    StayDate dtCalc = DatePack(1,9,2015);
    bool razm11132 = true; //проверка на 0, 0 - true
    Osob_Code = 82; 
    if(GetKey(B_Osob) && Ls_Rab == 6 && Ls_Pol == 2)
    {
        SetEnd(B_Np);
        Clrd(_rab1);
        Clrd(_rab2);
        while(GetPrior(B_Np))
        {
            if(Np_Kfn < 11131 || Np_Kfn > 11135)
                continue;
            if(Np_Dnprav <= dtCalc && Np_Dkprav > dtCalc)
            {
                
                if(Np_Kfn == 11131)
                {
                    Ldd(_Np_Snadp);
                    Std(_rab1);
                }
                if(Np_Kfn == 11135)
                {
                    Ldd(_Np_Snadp);
                    Std(_rab2);
                }
                if(Np_Kfn == 11132)
                {
                    razm11132 = false;
                    Ldd(_Np_Snadp);
                    Ldi(0,0);
                    if(Cmp() == 0)
                        razm11132 = true;
                }
            }
        }
        Ldd(_rab1);
        Ldi(0,0);
        if(Cmp() != 0) //есть значение
        {
            Ldd(_rab1);
            Ldd(_rab2);
            Sub();
            if(Test() < 0) 
                Inv();
            Ldi(1,2);
            if(Cmp() <= 0)
                result = true;
        }
        
    }
    if(!razm11132)
        result = false;
    return result;
}
void Rewrite11135()
{
    StayDate date0915 = DatePack(1,9,2015);
    SetBegin(B_Np);
    Clrd(_rab1);
    Clrd(_rab2);
    while(GetNext(B_Np))
    {
        if(Np_Kfn == 135 && Np_Dnprav <= date0915 && Np_Dkprav >= date0915)
        {
            Ldd(_Np_Snadp);
            Std(_rab1);
        }
        if(Np_Kfn == 11135 && Np_Dnprav == DatePack(1,9,2015))
        {
            if(Np_Pr)
            {
                Ldd(_Np_Pr);
                Ldi(2,0);
                Div();
                Ldd(_rab1);
                Mul();
                Ldi(100,0);
                Div();
                Inv();
                Round(2);
                Std(_Np_Snadp);
                Modify(B_Np);
            }
            break;
        }
    }
}
bool Find857_50()
{
    bool result = false;
    if(IsUmer(GetSysDate()))
        return result;
    SetBegin(B_Per);
    while(GetNext(B_Per))
    {
        if(Per_Kfn >= 151 && Per_Kfn <= 171 && Per_Dnpen >= DatePack(1,5,2012) && Per_Op == 3050)
                break;
        if(Per_Kfn == 857 && Per_Dnpen == DatePack(1,5,2012))
        {
            Ldi(50,0);
            Ldd(_Per_Rnaz);
            if(Ls_Dolya)
            {
                if(LddKoefDolja857_2(0))
                    Mul();
                Dup();
                Std(_rab1);
            }
            if(Cmp() >= 0)
            {
                result = true;
                break;
            }
            break;
        }
    }
    return result;
}
bool CalcStg()
{
    bool result = false;
    int stgNeed = Ls_Pol == 2 ? 20 : 25;
    int stgNeed2 = 0;
    int kolvoKorm = 0;
    if(Size(B_Kor))
    {
        SetBegin(B_Kor);
        while(GetNext(B_Kor))
        {
            kolvoKorm++;
            if(kolvoKorm == 1)
                stgNeed = Kor_Pol == 2 ? 20 : 25;
            else
                stgNeed2 = Kor_Pol == 2 ? 20 : 25;
        }
    }
    if(kolvoKorm < 2)
        result = CalcStgKorm(stgNeed, 1);
    else
        result = CalcStgKorm(stgNeed, 1) || CalcStgKorm(stgNeed2, 2);
    return result;
}
bool CalcStgKorm(int stgNeed, int nomKor)
{
    //получить ссылку на созданый класс глобальных переменных 
    Singleton &glb = Singleton::getInstance();
    glb.kand = 0;
    bool result = false;
    unsigned char sum_day = 0;
    unsigned char sum_mon = 0;
    unsigned char sum_year = 0;
    unsigned char stg_year1 = 0;
    int stgCode = 0;
    bool stgKods2 = false;
    bool checkStg = CheckStg();
    if(Size(B_Kor))
        checkStg = true; //для ПК стаж не меняется
    glb.kand = checkStg ? 0 : 1;
    SetBegin(B_Stg);
    while(GetNext(B_Stg))
    {
        if(nomKor == 1 || (nomKor == 2 && ((Stg_Kods >= 100 && Stg_Kods < 216) || (Stg_Kods >= 316 && Stg_Kods < 416) || (Stg_Kods > 999))))
        {
            stgCode = Stg_Kods;
            if(nomKor == 2)
                stgCode = Stg_Kods - 100;

            if(stgCode == 1)
            {                
                if(checkStg && Stg_God >= stgNeed)
                {
                    result = false;
                    break;
                }
                else
                {
                    stg_year1 = Stg_God;
                }
            }
            switch(stgCode)
            {
            case 2: case 4: case 5: case 6: case 7:
            case 21: case 22: case 26: case 29:
            case 31: case 34: case 58: case 40:
            case 219: case 231: case 233: case 234:
            case 235: case 236: case 237:
            case 250: case 253: case 254:
            case 38: case 39: case 238: case 239:
                if(stgCode == 2)
                    stgKods2 = true;
                if(!stgKods2 || (stgKods2 && stgCode != 40))
                {
                    sum_year += Stg_God;
                    sum_mon += Stg_Mec;
                    sum_day += Stg_Dni;
                    Stg_Norm(&sum_year, &sum_mon, &sum_day, 100, 1);
                }
                break;
            }
        }
    }
    if(sum_year && ((stg_year1 + sum_year) > stgNeed))
        result = true;
    return result;
}
bool CheckStg()
{
    bool result = true;
    SetBegin(B_Per);
    while(GetNext(B_Per))
    {
        if(Per_Op == 3030 && Per_Dnpen >= DatePack(1,5,2012))
        {
            result = false;
            break;
        }
    }
    if(result)
    {
        SetEnd(B_Stgp);
        if(GetPrior(B_Stgp))
        {
            if(Stgp_Dbeg >= DatePack(1,5,2012))
                result = false;
        }
    }
    return result;
}
void Stg_Norm(unsigned char *year,unsigned char *mon,unsigned char *day, short kf, char algor)
{
  short varb = 0;
  long var, kff;
  kff = kf;
  var = *year * kff / 1;
  *year = *year * kff / 100 ;
  var -= *year * 100;
  kff = (algor >= 2 ) ? kff : 100;
  var = *mon * kff + var * 12;
  *mon = *mon * kff / 100;
  var -= *mon * 100;
  if ( var >= 100 )
   {
   varb = var / 100;
   *mon += varb;
   var -= varb * 100;
   }
  kff = (algor == 3 ) ? kff : 100;
  *day = (*day * kff  + var * 30) / 100;

  if ( (unsigned char)(*day) >= 30 )
    {
    varb = *day / 30;
    *day -= varb * 30;
    *mon += varb;
    }
  if ( *mon >=12 )
    {
    varb = *mon / 12;
    *mon -= varb * 12;
    *year += varb;
    }
}
//загрузить в стек коэффициент пропорциональный кол-ву иждевенцев в деле
//для расчета долевых сумм из полной суммы (priz = 1)
//загрузить в стек коэффициент пропорциональный кол-ву иждевенцев в деле
//для расчета полной суммы из доли (priz = 0)
bool LddKoefDolja857_2(int priz)
{
    bool result = true;
    int igdInDolja0512Now = 0;
    int allIgd0512Now = 0;
    unsigned short hash = 0;
    unsigned short hash6 = 0;
    bool found = false;
    StayDate date857 = DatePack(1,5,2012);
    bool inVidos = false;
    std::vector<int> hashes;//для хранения хэшей
    bool glbOldDolja = false;
    unsigned short PerpNMDolja = 0;
    unsigned short GlbNmDolja = 0;
    unsigned short Glb_OldDolja = 1;

    if(Ls_Dolya == 2)
    {
        Osob_Code = 29;
        if(GetKey(B_Osob))
        {
            PerpNMDolja = GlbNmDolja = Osob_Priz;
        }
    }

    VidOs_Code = 372;
    Part(B_VidOs,1);
    hashes.clear();
    std::vector<int>::iterator it;//для поиска в векторе

    SetBegin(B_Igd);
    while(GetNext(B_Igd))
    {
        if(Igd_Nomig < 90 &&
           //Wigd_Psn != 6 &&
            (date857 <= Igd_Dso || !Igd_Dso) &&
            (Igd_Katnetr != 9 || (Igd_Katnetr == 9 && date857 <= GoYear(Igd_Drog,8))) &&
            (Igd_Katnetr != 12 || (Igd_Katnetr == 12 && (date857 <= GoYear(Igd_Drog,23) || glbOldDolja)))) //9 -догляд за дитиною до 8 років
        {
            hash = GetStringHash(Igd_Fio, 50);
            //14.01.14 begin
            //поиск незакрытого иждевенца с теми же ФИО
            if(Igd_Psn == 6)
            {
                if(Glb_OldDolja && !Size(B_Dolja))
                    continue;
                Mark(B_Igd,2);
                hash6 = 0;
                while(GetNext(B_Igd))
                {
                    hash6 = 0;
                    if(Igd_Nomig >= 90)
                        break;
                    hash6 = GetStringHash(Igd_Fio, 50);
                    if(hash == hash6)
                        break;
                }
                GetMark(B_Igd,2);
                if(hash == hash6)
                    continue;
            }
            //14.01.14 end
            it = find(hashes.begin(), hashes.end(), hash);
            if(it != hashes.end())
            {
                continue; //найдено, т.е. этот иждевенец уже был
            }
            else
            {
                hashes.push_back(hash); //не найдено, сохранить
            }
            SetBegin(B_VidOs);
            found = false;
            inVidos = false; 
            while(GetNext(B_VidOs))
            {
                if(VidOs_Priz == hash)
                {
                    inVidos = true;
                    if(VidOs_DateE <= DatePack(1,5,2012))
                        found = true;
                    break;
                }
            }
		if(Igd_Psn == 6 && (priz || !glbOldDolja))
                continue; //A_Wigd
		if(!inVidos) //нет записи с датой появления в A_WvidOs, значит на 1.5.12 был
                found = true;
            if(found)
            {
                allIgd0512Now++;
                if(1)
                {
                    SetEnd(B_Dolja);
                    if(GetPrior(B_Dolja))
                    {
                        if(!priz)
                        {
                            if(PerpNMDolja == 0 && GlbNmDolja > 0)
                            {
                                if(Igd_Dolja_NumP == GlbNmDolja)
                                {
                                    igdInDolja0512Now++;
                                }
                            }
                            else
                            {
                                if(Igd_Dolja_NumP == PerpNMDolja)
                                {
                                    igdInDolja0512Now++;
                                }
                            }
                        }
                        else
                        {
                            if(Igd_Dolja_NumP == PerpNMDolja)
                            {
                                igdInDolja0512Now++;
                            }
                        }
                    }
                }
                else //не доля
                {
                    igdInDolja0512Now = allIgd0512Now;
                }
            }
        }
    }

    Part(B_VidOs,0);

    if(igdInDolja0512Now)
    {
        Ldi(allIgd0512Now,0);
        Ldi(igdInDolja0512Now,0);
        Div();
    }
    else
    {
        result = false;
        //Ldi(0,0);
    }
    return result;
}
unsigned short GetStringHash(char *str, int len)
{
    //вернуть хэш строки
    unsigned short hash = 0; 
    unsigned short sum = 0;
    if(len > 50)
        len = 50; //хэшировать первые 50 символлов
    for(int i = 0; i <= len; i++)
    {
        if(str[i] == '\0')
            break;
        sum = str[i];
        if(sum > 100)
        {
            sum -= 100;
            hash = hash + sum + (len-i)*20;
        }
    }
    return hash;
}
bool IsUmer(StayDate dtCheck)
{
    bool result = false;
    SetEnd(B_Per);
    while(GetPrior(B_Per))
    {
        if(Per_Kfn >= 151 && Per_Kfn <= 171)
        {
            if(Per_Dnpen < dtCheck && Per_Psn)
            {
                switch(Per_Psn)
                {
                case 2: case 4: case 8: case 9:
                    result = true;
                    break;
                }
                if(result)
                    break;
            }
        }
    }
    return result;
}
bool IsVeteran()
{
    bool result = false;
    bool checkSumPens = false;
    StayDate dtCalc = DatePack(1,12,2015);
    SetBegin(B_Np);
    while(GetNext(B_Np))
    {
        if((Np_Kfn == 221 || Np_Kfn == 217) && Np_Dnprav <= dtCalc && Np_Dkprav >= dtCalc)
        {
            result = true;
            break;
        }
        if(Np_Kfn >= 101 && Np_Kfn <= 131 && Np_Dnprav <= dtCalc && Np_Dkprav >= dtCalc)
        {
            Ldi(1074,0);
            Ldd(_Np_Snadp);
            if(Cmp() == 1)
                checkSumPens = true;
        }
    }

    return (result && checkSumPens);
}
bool IsWommenInv56_61()
{
    bool result = false;
    if(Ls_Pol == 2 && Size(B_Inv) && Ls_Drog >= DatePack(1,10,1956) && Ls_Drog <= DatePack(31,3,1958) && Ls_Vid == 2)
    {
        SetEnd(B_Inv);
        GetPrior(B_Inv);
        if(Inv_Dkpi < DatePack(1,2,2016))
            result = true;
    }
    return result;
}
bool FindZarab(unsigned char nomZar, bool pk)
{
    bool result = false;
    if(Ls_Shifr != 513)
        return result;
    SetBegin(B_Zrb);
    while(GetNext(B_Zrb))
    {
        if(Zrb_Nepol == nomZar)
        {
            result = true;
            break;
        }
    }
    if(pk && !Size(B_Kor))
        result = false;
    if(!pk && Size(B_Kor))
        result = false;
    return result;
}
bool FindNoWorkWithIndex(){
    bool result = false;
    if(!Size(B_Kor))
    {
        Per_Kfn = 827;
        Part(B_Per, 1);
        SetEnd(B_Per);
        while(GetPrior(B_Per))
        {
            if(Per_Dnpen >= DatePack(1,5,2016))
                continue;
            if(Per_Kfn == 827 && !Per_Psn)
                result = true;
            break;
        }
        Part(B_Per, 0);
    }
    if(result)
    {
        VidOs_Code = 124;
        VidOs_DateB = DatePack(1,5,2016);
        if(!GetKey(B_VidOs))
            result = false;
    }
    return result;
}
bool IsVidOs55AndPriz(){
    bool result = false;
    VidOs_Code = 55;
    VidOs_DateB = DatePack(1,1,1900);
    if(GetKey(B_VidOs) &&  VidOs_Priz > 0/* && Ls_Pol == 2*/)
        result = true;
    return result;
}
bool CalcTimeDelay(){
    int times[] = {0,2000,5000,10000,20000,30000,60000,600000,1000000};
    std::vector<Row> table;
    int sizeArray = (sizeof(times)) / (sizeof(times[0]));
    for(int i = 0; i < sizeArray; i++){
        Row row;
        row.sec = times[i];
        row.ls = 0;
        row.sum_time = 0;
        row.optim = 0;
        table.push_back(row);
    }
    Open(B_DelayLs, RD|ANRD);
    SetIndex(B_DelayLs, 4);
    SetBegin(B_DelayLs);
    while(GetNext(B_DelayLs))
    {
        if(D_Delta2 == 0)
            D_Delta2 = D_Delta1;
        table[0].ls = table[0].ls + 1;
        //table[0].sum_time = table[0].sum_time + (D_Delta2 / 1000);
        table[0].sum_time = table[0].sum_time + D_Delta2;
        for(int i = 0; i < sizeArray; i++)
        {
            if(D_Delta2 < times[i])
            {
                table[i].ls = table[i].ls + 1;
                //table[i].sum_time = table[i].sum_time + (D_Delta2 / 1000);
                table[i].sum_time = table[i].sum_time + D_Delta2;
                if(D_Delta1 != D_Delta2 && ((D_Delta1*100)/D_Delta2 > 80))
                    table[i].optim = table[i].optim + 1;
                break;
            }
        }
    }
    Close(B_DelayLs);
    OpenCreate(B_Sum, RDWR|ANRDWR);
    Destroy(B_Sum);
    for(int i = 0; i < sizeArray; i++)
    {
        s_sec = table[i].sec;
        s_ls = table[i].ls;
        s_sum = table[i].sum_time;
        s_optim = table[i].optim;
        table[i].sum_time = table[i].sum_time / 1000;
        Ldl(table[i].sum_time,0);
        Dup();
        Std(_s_hour);
        Ldi(3600,0);
        Div();
        Std(_s_hour);
        Put(B_Sum);
    }
    Close(B_Sum);
    return true;
}
bool IsShifrNTTD(unsigned short shifr) //науково-технічна діяльність
{
    bool result = false;
    switch(shifr){
        case 136: case 137: case 512: case 522: case 532: case 139: case 147:
            result = true;
            break;
        default:
            result = false;
            break;
    }
    return (result);
}
unsigned char GetPerPsn(StayDate dt)
{
    //получить ссылку на созданый класс глобальных переменных 
    unsigned char perPsn = 0;
    Singleton &glb = Singleton::getInstance();
    glb.dateBeg = dt;
    unsigned short kfn = Ls_Kfn;
    glb.kfn = Ls_Kfn;
    if(Size(B_Shifr))
    {
        SetEnd(B_Shifr);
        while(GetPrior(B_Shifr))
        {
            if(Shifr_DateC < dt)
                break;
        }
        kfn = Shifr_Kfn;
        glb.kfn = Shifr_Kfn;
    }
    Per_Kfn = kfn;
    Part(B_Per,1);
    SetEnd(B_Per);
    while(GetPrior(B_Per))
    {
        if(Per_Dnpen <= dt)
        {
            perPsn = Per_Psn;
            break;
        }
    }
    Part(B_Per,0);
    if(perPsn > 0 && kfn != Ls_Kfn)
    {
        Per_Kfn = Ls_Kfn;
        Part(B_Per,1);
        SetEnd(B_Per);
        while(GetPrior(B_Per))
        {
            if(Per_Dnpen <= dt)
            {
                CheckDatin(Per_Kfn, Per_Dnpen);
                if(Per_Psn == 0)
                    perPsn = 0;
                break;
            }
        }
        Part(B_Per,0);
    }
    return (perPsn);
}
bool CheckPsnCode(vector<unsigned char> & psnCodes, StayDate dt)
{
    bool result = true;
    unsigned char psn = GetPerPsn(dt);
    vector<unsigned char>::iterator it;
    it = find(psnCodes.begin(), psnCodes.end(), psn);
    if(it != psnCodes.end())
        result = false;
    return (result);
}
void FindDelta(FD * delta)
{
    Clrd(delta);
    SetBegin(B_Prc);
    while(GetNext(B_Prc))
    {
        Sum(delta, _Prc_One);
        Sum(delta, _Prc_Two);
    }
    Ldi(100,0);
    Ldd(delta);
    Sub();
    Std(delta);
}
//**************************************************************************
//  Поиск наименования улицы
//--------------------------------------------------------------------------
//  Вход: unsigned int far        code  - код района
//        unsigned int far        adrul - код улицы
// Выход: MSG                           - код возврата
//**************************************************************************
StayEvent GetNameKlUl( uint2 code, uint2 adrul )
{
//--------------------------------------------------------------------------
int2 ret=0;
//--------------------------------------------------------------------------
 SetIndex( B_KlUl, 1 );

 KlUl_CodeRn = code;
 KlUl_CodeUl = adrul;

 ret = GetKey( B_KlUl );
 if( ret )  {
    KlKatUl_Code = KlUl_CodeKUl;
    ret = GetKey( B_KlKatUl );
    if( ret )
	StrForm( Ul_Str, 36, "%-7.7s %-28.28s", KlKatUl_Name, KlUl_Name );
 }
 return( ret );
}
bool WriteKandidatMp() {
    bool writeMp = false;
    //MP_Nls = Ls_Nls;
    //MP_Code = 1;
    bool result = false;
    SetIndex(B_Woomen, 2);
    SetBegin(B_Ls);
    while(GetNext(B_Ls)) {
        Woom_Nls = Ls_Nls;
        if(!GetKey(B_Woomen))
            Delete(B_Ls);
        /*
        if(MP_PrizD > 99) {
            if(writeMp) {
                Clear(B_Woomen);
                Woom_Raj = Ls_Raj;
                Woom_Nls = MP_Nls;
                Woom_Rab = Ls_Rab;
                Woom_Drog = Ls_Drog;
                Woom_Spos = Ls_Spos;
                Woom_Shifr = Ls_Shifr;
                Woom_Indots = Ls_Indots;
                Woom_Kand = 1;
                Woom_Nauka = 0;
                Put(B_Woomen);
            }
            else {
                Clear(B_Woomen);
                Woom_Raj = Ls_Raj;
                Woom_Nls = MP_Nls;
                Woom_Rab = Ls_Rab;
                Woom_Drog = Ls_Drog;
                Woom_Spos = Ls_Spos;
                Woom_Shifr = Ls_Shifr;
                Woom_Indots = Ls_Indots;
                Woom_Kand = 1;
                Woom_Nauka = 0;
                if(GetKey(B_Woomen))
                    Delete(B_Woomen);
            }
        }
        */
    }
    return result;
}
bool FindDiffBDop() {
	int oldNls = 0;
	Open(B_Dop, RD|ANRD);
	SetIndex(B_Dop, 2);
	SetBegin(B_Dop);
	while(GetNext(B_Dop)) {
		if(!oldNls) {
			oldNls = Dop_Nls;
			continue;
		}
		if(Dop_Nls != oldNls) {
			MsgBox("Неспівпадає", "о/р %d", oldNls);
			oldNls = Dop_Nls;
			continue;
		}
		if(Dop_Nls == oldNls) {
			oldNls = 0;
		}
	}
	if(oldNls)
		MsgBox("Неспівпадає", "о/р %d", oldNls);
	if(B_Dop->bs)
		Close(B_Dop);
	return (true); 
}
bool Rewrite995AfterMP() {
	Singleton &glb = Singleton::getInstance();
	StayDate dt1017 = DatePack(1,10,2017);
	StayDate dtInsp = 0;
	bool madeMP = false;
	bool closedOsnKfn = false;
	int proMin = 1373;
	if(!Size(B_Kor) && //не потеря
		Ls_Kfn == 171 && //обычная
		GetPrRab(dt1017)) { //работает
		//проведен массовый
		SetEnd(B_Per);
		while(GetPrior(B_Per)) {
			if(Per_Kfn != 171)
				continue;
			CheckDatin(Per_Kfn, Per_Dnpen);
			if(Per_Dnpen > dt1017 && Per_Psn) {
				Mark(B_Per, 2);
				closedOsnKfn = true;
				continue;
			}
			if(Per_Op == 3900 && Per_Dnpen > dt1017 && !Per_Psn) {
				dtInsp = Per_Datin;
				Cpy2(_Glb_Rab1, _Per_Rnaz);
				continue;
			}
			if(Per_Op == 3900 && Per_Dnpen == dt1017 && !Per_Psn) {
				if(!dtInsp || (dtInsp && dtInsp == Per_Datin && Cmp2(_Glb_Rab1, _Per_Rnaz) == 0)) {
					madeMP = true;
					Mark(B_Per, 1);
				}
			}
			break;
		}
		if(!madeMP)
			return false;
		GetSumPer_All_Osn_995_835(dt1017, _Glb_Rab1, _Glb_Rab2, _Glb_Rab3, _Glb_Rab4, 0);
		if(Cmp2(_Glb_Rab3, 0) == 0) {// нет 995
			Ldd(_Glb_Rab1); //all
			Ldd(_Glb_Rab2); //171
			Sub();
			Ldd(_Glb_Rab4);//835
			Sub();
			Ldi(0,0);
			if(Cmp() == 0) { //171+835 == all
				if(Invalid(dt1017))
					proMin = 1452;
				else
					proMin = 1373;
				Ldi(proMin,0);
				Ldd(_Glb_Rab2);
				if(Cmp() > 0) {
					//сохранить старые значения
					Clear(B_Woomen);
					Woom_Raj = Ls_Raj;
					Woom_Nls = Ls_Nls;
					Woom_Rab = Ls_Rab;
					Woom_Drog = Ls_Drog;
					Woom_Spos = Ls_Spos;
					Woom_Shifr = Ls_Shifr;
					Woom_Indots = Ls_Indots;
					Woom_Kand = 0;
					if(proMin == 1452)
						Woom_Kand = 1;
					Woom_Nauka = 0;
					StrForm(Woom_Fio, 51, "%s", Ls_Fio);
					GetSumPer_All_Osn_995_835(dt1017, _Glb_Rab1, _Glb_Rab2, _Glb_Rab3, _Glb_Rab4, 0);
					Cpy2(_Woom_Rnaz, _Glb_Rab1);
					Cpy2(_Woom_Delta1, _Glb_Rab2);
					Cpy2(_Woom_Dot1, _Glb_Rab4);
					Put(B_Woomen);
					//сформировать 995 и уменьшить 835
					Ldi(proMin,0);
					Ldd(_Glb_Rab2);
					Sub();
					Std(_Glb_Rab3);//995
					Ldd(_Glb_Rab4);
					Ldd(_Glb_Rab3);
					Sub();//835-995
					Std(_Glb_Rab4);
					Ldd(_Glb_Rab4);
					Ldi(0,0);
					if(Cmp() < 0)
						Clrd(_Glb_Rab4);
					//записать
					GetMark(B_Per, 1);
					Per_Kfn = 995;
					Per_Dnpen = dt1017;
					Per_Op = 3900;
					Per_Psn = 0;
					Cpy2(_Per_Rnaz, _Glb_Rab3);
					Per_Datin = GetSysDate();
					Per_Kin = glb.insCode;
					Put(B_Per);
					if(closedOsnKfn) {
						GetMark(B_Per, 2);
						Per_Kfn = 995;
						Cpy2(_Per_Rnaz, _Glb_Rab3);
						Per_Datin = GetSysDate();
						Per_Kin = glb.insCode;
						Put(B_Per);
					}
					//уменьшить или удалить 835
					SetEnd(B_Per);
					while(GetPrior(B_Per)) {
						if(Per_Kfn != 835)
							continue;
						CheckDatin(Per_Kfn, Per_Dnpen);
						Ldd(_Glb_Rab4);
						Ldi(0,0);
						if(Cmp() > 0) {
							Cpy2(_Per_Rnaz, _Glb_Rab4);
							Per_Datin = GetSysDate();
							Per_Kin = glb.insCode;
							Modify(B_Per);
						}
						else {
							Delete(B_Per);
						}
					}
					//сохранить новые значения
					GetSumPer_All_Osn_995_835(dt1017, _Glb_Rab1, _Glb_Rab2, _Glb_Rab3, _Glb_Rab4, 0);
					Cpy2(_Woom_Rnaz2, _Glb_Rab1);
					Cpy2(_Woom_Delta2, _Glb_Rab2);
					Cpy2(_Woom_Dot2, _Glb_Rab4);
					Cpy2(_Woom_829, _Glb_Rab3);
					Modify(B_Woomen);
					return true;
				}
			}
		}
	}
		return false;
}
bool Rewrite104NpAfterMP() {
	Singleton &glb = Singleton::getInstance();
	StayDate dt1017 = DatePack(1,10,2017);
	bool madeMP = false;
	unsigned short shifrKfn = Ls_Kfn;
	SetEnd(B_Shifr);
	if(shifrKfn == 171 && GetPrior(B_Shifr))
		shifrKfn = Shifr_Kfn;
	if(!Size(B_Kor) && //не потеря
		shifrKfn == 154) { //спецпенсия
			//проведен массовый
			SetEnd(B_Per);
			while(GetPrior(B_Per)) {
				if(Per_Kfn == 171 || Per_Kfn == 154) {
					CheckDatin(Per_Kfn, Per_Dnpen);
					if(Per_Dnpen > dt1017 && Per_Psn)
						continue;
					if((Per_Op == 3900 || Per_Op == 3190) && Per_Dnpen == dt1017 && !Per_Psn)
						madeMP = true;
					break;
				}
			}
		if(!madeMP)
			return false;
		GetSumPer_All_154(dt1017, _Glb_Rab1, _Glb_Rab2, _Glb_Rab3, _Glb_Rab4, _Glb_Rab5, 0);
		if(shifrKfn == 154 && Cmp2(_Glb_Rab5,0) == 0)
			GetSumPerRnaz(dt1017, _Glb_Rab5, 154, 21);
		if(Cmp2(_Glb_Rab5, 0) > 0 && Cmp2(_Glb_Rab4, 0) > 0) {
			//записать
			SetBegin(B_Np);
			while(GetNext(B_Np)) {
				if(Np_Kfn != 104)
					continue;
				if(Np_Dnprav == dt1017) {
					Ldd(_Np_Snadp);
					Ldd(_Glb_Rab4);
					Sub();
					Ldd(_Glb_Rab5);
					if(Cmp() == 0) {
						Ldd(_Glb_Rab5);
						Std(_Np_Snadp);
						Modify(B_Np);
						//сохранить старые значения
						Clear(B_Woomen);
						Woom_Raj = Ls_Raj;
						Woom_Nls = Ls_Nls;
						Woom_Rab = Ls_Rab;
						Woom_Drog = Ls_Drog;
						Woom_Spos = Ls_Spos;
						Woom_Shifr = Ls_Shifr;
						Woom_Indots = Ls_Indots;
						Woom_Kand = 2;
						Woom_Nauka = 0;
						StrForm(Woom_Fio, 51, "%s", Ls_Fio);
						Cpy2(_Woom_Rnaz, _Glb_Rab1);
						Cpy2(_Woom_Delta1, _Glb_Rab2);
						Cpy2(_Woom_Dot1, _Glb_Rab4);
						Put(B_Woomen);
						Cpy2(_Woom_Rnaz2, _Glb_Rab1);
						Cpy2(_Woom_Delta2, _Glb_Rab2);
						Cpy2(_Woom_Dot2, _Glb_Rab4);
						Cpy2(_Woom_829, _Glb_Rab3);
						Modify(B_Woomen);
						return true;
					}
				}
			}
		}
	}
		return false;
}
//вход: дата
//выход:
//характеристика работы (0 - не работает,14,16,19,20)
int GetPrRab(StayDate Dt)
{
    int result = 0;
    int harakter = 0;
    //27.05.16 begin
    bool existRecordRab = false;
    SetBegin(B_CheZp);
    while(GetNext(B_CheZp))
    {
        if(CheZp_Code == 16)
        {
            existRecordRab = true;
            break;
        }
    }
    if(!existRecordRab)
    {
        if(Wls_Rab == 1 || Wls_Rab == 11)
            return 16;
        else
            return 0;
    }
    //end
    GetPrRabHarakter(Dt, 16, result);
    if(result)
    {
        harakter = 16;
        GetPrRabHarakter(Dt, 14, result);
        if(result)
        {
            harakter = 14;
        }
        else
        {
            GetPrRabHarakter(Dt, 19, result);
            if(result)
            {
                harakter = 19;
            }
            else
            {
                GetPrRabHarakter(Dt, 20, result);
                if(result)
                {
                    harakter = 20;
                }
            }
        }
        result = 1;
    }
    result = (result ? harakter : 0);
    return result;
}
void GetPrRabHarakter(StayDate Dt, int kod, int & rab)
{
    StayDate dtTrud = 0;
    rab = 0;
    Part(B_CheZp,0);
    SetIndex(B_CheZp,1);
    //CheZp_Nomig = 0;
    //CheZp_Code = kod;
    //Part(B_CheZp,2);
    SetBegin(B_CheZp);
    while(GetNext(B_CheZp))
    {
        if(CheZp_Code != kod)
            continue;
        if(CheZp_Time == 2){
            Mark(B_CheZp,1);
            dtTrud = GetDateTrud(CheZp_DateBeg);
            GetMark(B_CheZp,1);
            if(dtTrud == 0 || dtTrud == CheZp_DateBeg){
                if(Dt <= CheZp_DateBeg)
                    rab = 1;
            }
        }
        if(CheZp_DateBeg <= Dt)
        {
            rab = (CheZp_Time == 1 ? 1 : 0);
            if(rab == 0 && CheZp_DateBeg == Dt) //дата звільнення робочій день
                rab = 1;
        }
        else
            break;
    }
    Part(B_CheZp,0);
}
//получить дату трудоустройства по дате увольнения
//together - необязателльный параметр, если не 0 и даты увольнения/зачисления
//идут подряд, то дата трудоустройства - дата трудоустройства из первого периода
StayDate GetDateTrud(StayDate dtUvol, int together)
{
    StayDate dateTrud = 0;//dtUvol;
    SetIndex(B_CheZp,1);
    Part(B_CheZp,0);
    CheZp_Code = 16;
    CheZp_Nomig = 0;
    Part(B_CheZp,2);
    SetEnd(B_CheZp);
    while(GetPrior(B_CheZp))
    {
        if(CheZp_DateBeg <= dtUvol && CheZp_Time == 1)
        {
            dateTrud = CheZp_DateBeg;
            if(together && GetPrior(B_CheZp) && CheZp_Time == 2 && CheZp_DateBeg == dateTrud - 1)
                continue;
            else
                break;
        }
    }
    Part(B_CheZp,0);
    return dateTrud;
}
bool Invalid(StayDate dt) {
	bool result = false;
	SetBegin(B_Inv);
	while(GetNext(B_Inv)) {
		if(Inv_Dnpi <= dt && Inv_Dkpi >= dt) {
			result = true;
			break;
		}
	}
	return result;
}
void GetSumPerRnaz(StayDate dateCalc, FD * SumRnaz, unsigned short kfn, unsigned short psn) {
    unsigned short perKfn = 0;
    Clrd(SumRnaz);
    SetEnd(B_Per);
    while(GetPrior(B_Per))
    {
		if(kfn && kfn != Per_Kfn)
			continue;
        if(Per_Kfn == 821)
            continue;
        if(perKfn != Per_Kfn && Per_Dnpen <= dateCalc)
        {
            CheckDatin(Per_Kfn, Per_Dnpen);
            perKfn = Per_Kfn;
            if(Per_Psn == psn)
            {
                Ldd(SumRnaz);
                Ldd(_Per_Rnaz);
                Add();
                Std(SumRnaz);
            }
        }
    }
}

bool IsDoRecalc() {
	Singleton &glb = Singleton::getInstance();
	StayDate dt = DatePack(1,1,2018);
	unsigned short needStg = 30;
	unsigned short allStg = 0;
	if(Ls_Pol == 1)
		needStg = 35;
	bool ageStg = false;
	bool is131 = false;
	bool is101_103 = false;
	for(unsigned short i = 180; i < 182; i++) {
		Osob_Code = i;
		if(GetKey(B_Osob))
			return false;
	}
	if(Ls_Drog <= DatePack(1,1,1953)) {
		SetBegin(B_Stg);
		while(GetNext(B_Stg)) {
			if(Stg_Kods == 1)
				 allStg = Stg_God;
			if(Stg_Kods > 1 && Stg_Kods < 900)
				ageStg = true;
		}
		if(allStg >= needStg)
			ageStg = true;
	}
	Clrd(_Glb_Rab11);
	if(!Size(B_Kor) && ageStg) {
		SetBegin(B_Np);
		while(GetNext(B_Np)) {
			if(Np_Dnprav <= dt && Np_Dkprav >= dt) {
				if(Np_Kfn == 135) {
					return true;
				}
				if(Np_Kfn == 131) {
					is131 = true;
					Ldd(_Glb_Rab11);
					Ldd(_Np_Snadp);
					Add();
					Ldi(14892,1);
					if(Cmp() <= 0)
						return true;
				}
				if(Np_Kfn >= 101 && Np_Kfn <= 103) {
					if(Np_Kfn == 101)
						Cpy2(_Glb_Rab11, _Np_Snadp);
					Ldd(_Np_Snadp);
					Ldi(14892,1);
					if(Cmp() <= 0)
						is101_103 = true;
				}
			}
		}
		if(!is131 && is101_103)
			return true;
	}
	int kolDol = 0;
	if(Ls_Dolya) {

		bool usl[9] = {false};
		SetBegin(B_Igd);
		while(GetNext(B_Igd))
		{
			if(Igd_Nomig < 90 &&
				(dt <= Igd_Dso || !Igd_Dso) &&
				(Igd_Katnetr != 9 || (Igd_Katnetr == 9 && dt <= GoYear(Igd_Drog,8))) &&
				(Igd_Katnetr != 12 || (Igd_Katnetr == 12 && (dt <= GoYear(Igd_Drog,23))))) //9 -догляд за дитиною до 8 років
			{
				SetBegin(B_Dolja);
				GetNext(B_Dolja);
				if(Igd_Dolja_NumP < 9)
					usl[Igd_Dolja_NumP] = true;
			}
		}
		for(int i = 0; i < 9; i++) {
			if(usl[i])
				kolDol++;
		}
	}

	GetSumPerRnaz(dt, _Glb_Rab1);
	if(Cmp2(_Glb_Rab1, 0) != 0) {
		Ldd(_Glb_Rab1);
		if(kolDol) {
			Ldi(kolDol,0);
			Mul();
		}
		Ldi(10740,0);
		if(Cmp() >= 0) {
			Ldd(_Glb_Rab1);
			Ldi(13370,0);
			if(Cmp() <= 0) {
				//glb.is10740 = true;
				return true;
			}
		}
	}
	return false;
}
//пропуск о/р по умові
bool SkipCondition(StayDate dtMas) {
    bool doplPer = false;
    unsigned short skipCodes[] = {
        151, 152, 153, 154, 155, 156, 157, 158, 159,
        160, 161, 162, 163, 164, 165, 166, 167, 168, 169,
        818, 829, 852, 854, 856, 890, 995, 996, 812,
        137,
        216, 217, 218, 219,
        220, 221, 224, 228, 229,
        230, 231, 238, 239,
        240, 241, 242, 243, 244, 245, 246, 247, 248, 249,
        250, 251, 252, 253, 254, 257,
        261, 265, 267, 268, 269,
        280, 282, 283, 284, 285, 286, 287, 288, 289,
        292, 293, 294, 295, 296, 299,
        2217, 2218, 2229, 2245, 2247, 2248
    };
    int sizeMas = (int)(sizeof(skipCodes)/sizeof(skipCodes[0])); //83
    if(Ls_Rab == 1) {
        SetBegin(B_Np);
        while(GetNext(B_Np)) {
            if(Np_Kfn == 131 || Np_Kfn == 132 || Np_Kfn == 135 || Np_Kfn == 140)
                continue;
            if(Np_Dkprav >= dtMas && Np_Dnprav <= dtMas) {
                for(int i = 0; i < sizeMas; i++) {
                    if(skipCodes[i] == Np_Kfn)
                        return (false);
                }
            }
        }

		GetSumPerRnaz(dtMas, _Glb_Rab1, 995);
		if(Cmp2(_Glb_Rab1, 0) != 0)
			return false;
		GetSumPerRnaz(dtMas, _Glb_Rab1, 854);
		if(Cmp2(_Glb_Rab1, 0) != 0)
			return false;
		GetSumPerRnaz(dtMas, _Glb_Rab1, 856);
		if(Cmp2(_Glb_Rab1, 0) != 0)
			return false;
		GetSumPerRnaz(dtMas, _Glb_Rab1, 818);
		if(Cmp2(_Glb_Rab1, 0) != 0)
			return false;
		GetSumPerRnaz(dtMas, _Glb_Rab1, 829);
		if(Cmp2(_Glb_Rab1, 0) != 0)
			return false;
		GetSumPerRnaz(dtMas, _Glb_Rab1, 852);
		if(Cmp2(_Glb_Rab1, 0) != 0)
			return false;
		GetSumPerRnaz(dtMas, _Glb_Rab1, 890);
		if(Cmp2(_Glb_Rab1, 0) != 0)
			return false;
		GetSumPerRnaz(dtMas, _Glb_Rab1, 996);
		if(Cmp2(_Glb_Rab1, 0) != 0)
			return false;
		GetSumPerRnaz(dtMas, _Glb_Rab1, 812);
		if(Cmp2(_Glb_Rab1, 0) != 0)
			return false;

        return (true);
    }
    return (false);
}
bool isMas(StayDate dt) {
	bool result = false;
	SetBegin(B_Per);
	while(GetNext(B_Per)) {
		if((Per_Op == 3900 || Per_Op == 3190) && Per_Dnpen == dt) {
			result = true;
			break;
		}
	}
	return result;
}
bool checkDateZrb() {
	StayDate maxDendz = 0;
	if (Size(B_Zrbs))
	{
		SetEnd(B_Zrbs);
		while(GetPrior(B_Zrbs)){
			//FRB 14.11.16 begin виключення окладу, брати тільки заробіток
			Zrb_Nr = Zrbs_Nr;
			Zrb_Nrs = Zrbs_Nrs;
			Part(B_Zrb,2);
			SetEnd(B_Zrb);
			if(GetPrior(B_Zrb))
			{
				if(Zrb_Nepol == 7) //оклад
				{
					Part(B_Zrb,0);
					continue;
				}
			}
			Part(B_Zrb,0);
			//FRB end
			if(Zrbs_Dendz > maxDendz)
				maxDendz = Zrbs_Dendz;
		}
		if (maxDendz > DatePack(30,9,2017) ) //FRB
			return true;
	}
	return false;
}


char* substr_char(char* arr, int begin, int len)
{
    for (int i = 0; i < len; i++)
        res[i] = *(arr + begin + i);
    res[len] = 0;
    return res;
}

void PutIgdNomig(FD * nomigPPVP, FD * idPPVP) {
	SetIndex(B_IgdE, 1);
	if(Size(B_IgdE)) {
		SetEnd(B_IgdE);
		GetPrior(B_IgdE);
		IgdE_Num++;
		Ldd(nomigPPVP);
		Std(_IgdE_Nomig);
		Ldd(idPPVP);
		Std(_IgdE_ID);
		Put(B_IgdE);
	}
	else {
		IgdE_Num = 0;
		Ldd(nomigPPVP);
		Std(_IgdE_Nomig);
		Ldd(idPPVP);
		Std(_IgdE_ID);
		Put(B_IgdE);
	}
}

void PutKorNomig(FD * nomigPPVP) {
	SetIndex(B_KorE, 1);
	if(Size(B_KorE)) {
		SetEnd(B_KorE);
		GetPrior(B_KorE);
		KorE_Num++;
		Ldd(nomigPPVP);
		Std(_KorE_Nomig);
		Put(B_KorE);
	}
	else {
		KorE_Num = 0;
		Ldd(nomigPPVP);
		Std(_KorE_Nomig);
		Put(B_KorE);
	}
}

bool GetPrizPut(FD * PPVPnls) {
	SetIndex(B_LSExt, 2);
	Ldd(PPVPnls);
	Std(_LE_PFUNls);
	bool priz = false;
	if(GetKey(B_LSExt)) {
		Ldd(_LE_Nls);
		Dup();
		Std(_Ls_Nls);
		Std(_FW_Nls);
		if(GetKey(B_Ls))
			priz = true;
	}
	return priz;
}

int GetPrizPutIgd(FD * nomigPPVP) {
	SetIndex(B_IgdE, 1);
	int result = -1;
	for(IgdE_Num = 0; IgdE_Num < 100; IgdE_Num++) {
		if(GetKey(B_IgdE)) {
			if(Cmp2(_IgdE_Nomig, nomigPPVP) == 0) {
				result = IgdE_Num;
				break;
			}
		}
		else
			break;
	}
	return result;
}

int GetPrizPutKor(FD * nomigPPVP) {
	int result = -1;
	unsigned short maxKorNum = 0;
	SetIndex(B_KorE, 2);
	Ldd(nomigPPVP);
	Std(_KorE_Nomig);
	KorE_Num = 0;
	if(GetKey(B_KorE)) {
		result = KorE_Num;
	}
	else {
		if(Size(B_KorE)) {
			SetIndex(B_KorE, 1);
			SetEnd(B_KorE);
			GetPrior(B_KorE);
			KorE_Num++;
			return result;
		}
	}
	return result;
}

void DeleteLsOracle()
{
	char name_mp_dt[] = "LS:LS_ORACLE.DT";
	char name_mp_btv[] = "LS:LS_ORACLE.BTV";
	if(FFind(name_mp_dt, NULL))
		FDelete(name_mp_dt);
	if(FFind(name_mp_btv, NULL))
		FDelete(name_mp_btv);
}

int SetBj(int neop, int tved, int spos)
// Программа свертки Bj из компонент
{
	int Bj = 0;
	int ud = 0;
	int nach = 0;
	int nper = 0;
	int neopdv = 0;
	Bj = ud*2;   
	Bj = Bj + neop * 4;
	Bj = Bj + nach * 8;
	Bj = Bj + tved * 16;
	Bj = Bj + nper * 256;
	Bj = Bj + spos * 4096;
	Bj = Bj + neopdv;
	return Bj;
}

bool IsNotClosedInv() {
	bool result = false;
	bool is3940 = false;
	bool closedInv = false;
	bool closedNp = false;
	StayDate dt0418 = DatePack(1,4,2018);
	StayDate dtCloseInv = 0;
	if(Ls_Vid == 2 || Ls_Vid == 7) {
		if(Size(B_Inv)) {
			SetBegin(B_Inv);
			GetNext(B_Inv);
			if(!Inv_Nomig && (Inv_Dkpi > dt0418) && (Inv_Dkpi < DATE_MAX))
				dtCloseInv = Inv_Dkpi;
			if(!dtCloseInv)
				return false;
			if(dtCloseInv == MonthBeg(dtCloseInv))//1-е число преобразую в последнее предыдущего месяца
				dtCloseInv--;
			SetBegin(B_Per);
			while(GetNext(B_Per)) {
				if(Per_Op == 3940 && Per_Dnpen == dt0418 && !Per_Psn)
					is3940 = true;
				if(Per_Op == 3940 && Per_Dnpen == dtCloseInv && Per_Psn)
					closedInv = true;
			}
			SetBegin(B_Np);
			while(GetNext(B_Np)) {
				if(!Np_Nomig && Np_Kfn <= 131) {
					if(Np_Dkprav == dtCloseInv) {
						closedNp = true;
						break;
					}
				}
			}
			if(is3940 && !closedInv && closedNp) {
				result = true;
				CloseInvBPer(dtCloseInv);
			}
		}
	}
	return result;
}
void CloseInvBPer(StayDate dtCloseInv) {
	Singleton &glb = Singleton::getInstance();
	glb.dtClosedInv = dtCloseInv;
	SetEnd(B_Per);
	unsigned short oldKfn = 0;
	while(GetPrior(B_Per)) {
		if(oldKfn == Per_Kfn)
			continue;
		oldKfn = Per_Kfn;
		CheckDatin(Per_Kfn, Per_Dnpen);
		if(!Per_Psn) {
			Per_Op = 2060;
			Per_Psn = 6;
			Per_Datin = GetSysDate();
			Per_Kin = glb.insCode;
			Per_Dnpen = dtCloseInv + 1;
			Put(B_Per);
		}
	}
}
void ReverseMigration_BLs(string strTxtFilePath) {
	IWStayFile* File_ZAV;
	const int MaxLen = 16000;
	char c512_1[512];
	char c512_2[512];
	char c512_3[512];
	char cNum[4];
	char c_buf[MaxLen+1];
	int fieldlen = 0;
    int ret = 0; Clrd(_FW_PFUNls);
	char ImpTxtFilePath[200];
	bool prizPut = false;

	strcpy(ImpTxtFilePath, strTxtFilePath.c_str());
	strcpy(textIndicator, strTxtFilePath.c_str());

	File_ZAV = NULL;
	if (FFind(ImpTxtFilePath))
		File_ZAV = FOpen (ImpTxtFilePath, RD);

	if(File_ZAV)
	{
		for(;;)
		{
			Clear(B_Ls);
			ret = FReadText(File_ZAV, c_buf, MaxLen);
			if(ret == -1)
				break;
			char* line = new char[strlen(c_buf)+1];
			strcpy(line, c_buf);
			line[strlen(c_buf)] = '\x0';
			char *cur = line;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				strcpy(cNum, substr_char(c512_2, 0, 3));
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Ls_Raj);
			}
			cur = cur + fieldlen + 1; fieldlen=0;
			
			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_LE_PFUNls);
				strcpy(c512_3, substr_char(c512_2, 6, 6));
				Ldv(c512_3); Std(_Ls_Nls);
				strcpy(c512_3, substr_char(c512_2, 0, 1));
				if(c512_3[0] != '9') {
					Ldv(cNum);
					Ldul(1000000,0);
					Mul();
					Ldd(_Ls_Nls);
					Add();
					Std(_Ls_Nls);
				}
				else {
					strcpy(c512_3, substr_char(c512_2, 1, 4));
					Ldv(c512_3);
					Ldd(_Ls_Raj);
					if(Cmp()) {
						Ldv(cNum);
						Ldul(1000000,0);
						Mul();
						Ldd(_Ls_Nls);
						Add();
						Std(_Ls_Nls);
					}
				}
				Ldd(_Ls_Nls); Std(_LE_Nls);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_LE_Nomig);
			}
			cur = cur + fieldlen + 1; fieldlen=0;
			prizPut = Put(B_LSExt);
			Clear(B_Extra);
			Ext_Code = 1;
			Ext_Date1 = GetSysDate();
			Put(B_Extra);

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Ls_Spos);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				StrForm(Ls_Fio, 50, c512_2);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(prizPut)
				prizPut = Put(B_Ls);

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Ls_Indots);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_AdrE_Stlm);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_AdrE_Ul);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				StrForm(AdrE_Bld, 10, c512_2);
				StrForm(Ls_Adrdom, 7, c512_2);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				StrForm(AdrE_Corp, 10, c512_2);
				StrForm(Ls_Adrkorp, 2, c512_2);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				StrForm(AdrE_App, 10, c512_2);
				StrForm(Ls_Adrkv, 4, c512_2);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Ls_Shifr);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Ls_Vid);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Ls_Kfn);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Ls_Pol);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				strcpy(c512_3, substr_char(c512_2, 0, 10));
				LdDate(c512_3);
				Ls_Drog = Stu(0);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				StrForm(Ls_Pasp, 15, c512_2);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				StrForm(AdrE_Txt, 250, c512_2);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Ls_Grjd);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Ls_Vzvan);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Ls_Dolya);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Ls_Rab);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				strcpy(c512_3, substr_char(c512_2, 0, 10));
				LdDate(c512_3);
				Ls_Dnac = Stu(0);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Ls_IdCode);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Ls_Adrul);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(prizPut) {
				Modify(B_Ls);
				Ldd(_LE_PFUNls);
				Std(_AdrE_PFUNls);
				Put(B_AdrE);
				Clear(B_VidOs);
				VidOs_Code = 15555;
				VidOs_DateB = GetSysDate();
				Put(B_VidOs);
			}
			delete[] line;
		}
		FClose(File_ZAV);
	}
}
void ReverseMigration_BKor(string strTxtFilePath) {
	IWStayFile* File_ZAV;
	const int MaxLen = 16000;
	char c512_1[512];
	char c512_2[512];
	char c512_3[512];
	char c_buf[MaxLen+1];
	int fieldlen = 0;
    int ret = 0; Clrd(_FW_PFUNls);
	char ImpTxtFilePath[200];
	bool prizPut = false;
	int prizPutKor = -1;
	int prizPutIgd = -1;

	strcpy(ImpTxtFilePath, strTxtFilePath.c_str());
	strcpy(textIndicator, strTxtFilePath.c_str());

	File_ZAV = NULL;
	if (FFind(ImpTxtFilePath))
		File_ZAV = FOpen (ImpTxtFilePath, RD);

	if(File_ZAV)
	{
		for(;;)
		{
			ret = FReadText(File_ZAV, c_buf, MaxLen);
			if(ret == -1)
				break;
			char* line = new char[strlen(c_buf)+1];
			strcpy(line, c_buf);
			line[strlen(c_buf)] = '\x0';
			char *cur = line;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				//Ldv(c512_2); Std(_Ls_Raj);
			}
			cur = cur + fieldlen + 1; fieldlen=0;
			
			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_LE_PFUNls);
				strcpy(c512_3, substr_char(c512_2, 6, 6));
				Ldv(c512_3); Std(_FW_Nls);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			//Find Ls_Nls in B_Ls
			Ldd(_FW_PFUNls);
			Ldd(_LE_PFUNls);
			if(Cmp()) {
				prizPut = GetPrizPut(_LE_PFUNls);
				Ldd(_LE_PFUNls);
				Std(_FW_PFUNls);
			}
			else
				prizPut = true;
			Clear(B_Kor);

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_FW_LsNomig);
			}
			cur = cur + fieldlen + 1; fieldlen=0;
			prizPutIgd = GetPrizPutKor(_FW_LsNomig);
			if(KorE_Num > 0)
				Kor_Katk += 100;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Kor_Vozrl);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Kor_Pol);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Kor_Prism);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				strcpy(c512_3, substr_char(c512_2, 0, 10));
				LdDate(c512_3);
				Kor_Datsm = Stu(0);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				strcpy(c512_3, substr_char(c512_2, 0, 10));
				LdDate(c512_3);
				Kor_Drog = Stu(0);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				strcpy(c512_3, substr_char(c512_2, 0, 10));
				LdDate(c512_3);
				Kor_Dvpen = Stu(0);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Kor_IdCode);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_KOR_Number);
				Kor_Katk += KOR_Number;
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(prizPutIgd < 0) {
				Put(B_Kor);
				PutKorNomig(_FW_LsNomig);
			}
			delete[] line;
		}
		FClose(File_ZAV);
	}
}
void ReverseMigration_BIgd(string strTxtFilePath) {
	IWStayFile* File_ZAV;
	const int MaxLen = 16000;
	char c512_1[512];
	char c512_2[512];
	char c512_3[512];
	char c_buf[MaxLen+1];
	int fieldlen = 0;
    int ret = 0; Clrd(_FW_PFUNls);
	char ImpTxtFilePath[200];
	bool prizPut = false;
	int prizPutKor = -1;
	int prizPutIgd = -1;
	int isKormilec = -1;

	strcpy(ImpTxtFilePath, strTxtFilePath.c_str());	
	strcpy(textIndicator, strTxtFilePath.c_str());

	File_ZAV = NULL;
	if (FFind(ImpTxtFilePath))
		File_ZAV = FOpen (ImpTxtFilePath, RD);

	if(File_ZAV)
	{
		for(;;)
		{
			ret = FReadText(File_ZAV, c_buf, MaxLen);
			if(ret == -1)
				break;
			char* line = new char[strlen(c_buf)+1];
			strcpy(line, c_buf);
			line[strlen(c_buf)] = '\x0';
			char *cur = line;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				//Ldv(c512_2); Std(_Ls_Raj);
			}
			cur = cur + fieldlen + 1; fieldlen=0;
			
			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_LE_PFUNls);
				strcpy(c512_3, substr_char(c512_2, 6, 6));
				Ldv(c512_3); Std(_FW_Nls);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			//Find Ls_Nls in B_Ls
			Ldd(_FW_PFUNls);
			Ldd(_LE_PFUNls);
			if(Cmp()) {
				prizPut = GetPrizPut(_LE_PFUNls);
				Ldd(_LE_PFUNls);
				Std(_FW_PFUNls);
			}
			else
				prizPut = true;
			Clear(B_Igd);

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_FW_LsNomig);
			}
			cur = cur + fieldlen + 1; fieldlen=0;
			prizPutIgd = GetPrizPutIgd(_FW_LsNomig);
			Igd_Nomig = IgdE_Num;
			isKormilec = GetPrizPutKor(_FW_LsNomig);
			if(isKormilec >= 0)
				Igd_Nomig = isKormilec + 101;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				//
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Igd_Katrod);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				StrForm(Igd_Fio, 50, c512_2);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_FW_IdCode);
				//PutIgdIdCode(_FW_IdCode);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				strcpy(c512_3, substr_char(c512_2, 0, 10));
				LdDate(c512_3);
				Igd_Drog = Stu(0);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Igd_Pol);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Igd_Psn);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Igd_Sir);
				if(Igd_Sir == 1)
					Igd_Sir = 21;
				if(Igd_Sir == 2)
					Igd_Sir = 22;
				if(Igd_Sir == 0)
					Igd_Sir = 1;
				if(Igd_Sir == 3)
					Igd_Sir = 0;
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				strcpy(c512_3, substr_char(c512_2, 0, 10));
				LdDate(c512_3);
				Igd_Dso = Stu(0);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Igd_Prab);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Igd_Prdel);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				strcpy(c512_3, substr_char(c512_2, 0, 10));
				LdDate(c512_3);
				Igd_Dusn = Stu(0);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
			}
			cur = cur + fieldlen + 1; fieldlen=0;
			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
			}
			cur = cur + fieldlen + 1; fieldlen=0;
			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				//CommaToDot(c512_2);
				Ldv(c512_2); Std(_Igd_Katnetr);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(prizPutIgd < 0) {
				Put(B_Igd);
				if(Igd_Nomig < 90)
					PutIgdNomig(_FW_LsNomig, _FW_IdCode);
			}
			delete[] line;
		}
		FClose(File_ZAV);
	}
}
void ReverseMigration_BNp(string strTxtFilePath) {
	IWStayFile* File_ZAV;
	const int MaxLen = 16000;
	char c512_1[512];
	char c512_2[512];
	char c512_3[512];
	char c_buf[MaxLen+1];
	int fieldlen = 0;
    int ret = 0; Clrd(_FW_PFUNls);
	char ImpTxtFilePath[200];
	bool prizPut = false;
	int prizPutKor = -1;
	int prizPutIgd = -1;
	int isKormilec = -1;

	strcpy(ImpTxtFilePath, strTxtFilePath.c_str());	
	strcpy(textIndicator, strTxtFilePath.c_str());

	File_ZAV = NULL;
	if (FFind(ImpTxtFilePath))
		File_ZAV = FOpen (ImpTxtFilePath, RD);

	if(File_ZAV)
	{
		for(;;)
		{
			ret = FReadText(File_ZAV, c_buf, MaxLen);
			if(ret == -1)
				break;
			char* line = new char[strlen(c_buf)+1];
			strcpy(line, c_buf);
			line[strlen(c_buf)] = '\x0';
			char *cur = line;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				//Ldv(c512_2); Std(_Ls_Raj);
			}
			cur = cur + fieldlen + 1; fieldlen=0;
			
			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_LE_PFUNls);
				strcpy(c512_3, substr_char(c512_2, 6, 6));
				Ldv(c512_3); Std(_FW_Nls);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			//Find Ls_Nls in B_Ls
			Ldd(_FW_PFUNls);
			Ldd(_LE_PFUNls);
			if(Cmp()) {
				prizPut = GetPrizPut(_LE_PFUNls);
				Ldd(_LE_PFUNls);
				Std(_FW_PFUNls);
			}
			else
				prizPut = true;
			Clear(B_Np);

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_FW_LsNomig);
			}
			cur = cur + fieldlen + 1; fieldlen=0;
			prizPutIgd = GetPrizPutIgd(_FW_LsNomig);
			if(prizPutIgd < 0)
				Np_Nomig = 0;
			else
				Np_Nomig = IgdE_Num;


			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Np_Kfn);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				strcpy(c512_3, substr_char(c512_2, 0, 10));
				LdDate(c512_3);
				Np_Dnprav = Stu(0);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				strcpy(c512_3, substr_char(c512_2, 0, 10));
				LdDate(c512_3);
				Np_Dkprav = Stu(0);
				if(!Np_Dkprav)
					Np_Dkprav = DATE_MAX;
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				CommaToDot(c512_2);
				Ldv(c512_2); Std(_Np_Snadp);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Np_Pr);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(prizPut && Np_Dnprav) {
				Put(B_Np);
			}
			delete[] line;
		}
		FClose(File_ZAV);
	}
}
void ReverseMigration_BPer(string strTxtFilePath) {
	IWStayFile* File_ZAV;
	const int MaxLen = 16000;
	char c512_1[512];
	char c512_2[512];
	char c512_3[512];
	char c_buf[MaxLen+1];
	int fieldlen = 0;
    int ret = 0; Clrd(_FW_PFUNls);
	char ImpTxtFilePath[200];
	bool prizPut = false;
	int prizPutKor = -1;
	int prizPutIgd = -1;
	int isKormilec = -1;

	strcpy(ImpTxtFilePath, strTxtFilePath.c_str());	
	strcpy(textIndicator, strTxtFilePath.c_str());

	File_ZAV = NULL;
	if (FFind(ImpTxtFilePath))
		File_ZAV = FOpen (ImpTxtFilePath, RD);

	if(File_ZAV)
	{
		for(;;)
		{
			ret = FReadText(File_ZAV, c_buf, MaxLen);
			if(ret == -1)
				break;
			char* line = new char[strlen(c_buf)+1];
			strcpy(line, c_buf);
			line[strlen(c_buf)] = '\x0';
			char *cur = line;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				//Ldv(c512_2); Std(_Ls_Raj);
			}
			cur = cur + fieldlen + 1; fieldlen=0;
			
			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_LE_PFUNls);
				strcpy(c512_3, substr_char(c512_2, 6, 6));
				Ldv(c512_3); Std(_FW_Nls);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			//Find Ls_Nls in B_Ls
			Ldd(_FW_PFUNls);
			Ldd(_LE_PFUNls);
			if(Cmp()) {
				prizPut = GetPrizPut(_LE_PFUNls);
				Ldd(_LE_PFUNls);
				Std(_FW_PFUNls);
			}
			else
				prizPut = true;
			Clear(B_Per);

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Per_Kfn);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				strcpy(c512_3, substr_char(c512_2, 0, 10));
				LdDate(c512_3);
				Per_Dnpen = Stu(0);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Per_Op);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				CommaToDot(c512_2);
				Ldv(c512_2); Std(_Per_Rnaz);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Per_Psn);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				strcpy(c512_3, substr_char(c512_2, 0, 10));
				LdDate(c512_3);
				Per_Datin = Stu(0);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Per_NIz);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(prizPut && Per_Kfn && Per_Dnpen && Per_Op) {
				Put(B_Per);
			}
			delete[] line;
		}
		FClose(File_ZAV);
	}
}
void ReverseMigration_BShifr(string strTxtFilePath) {
	IWStayFile* File_ZAV;
	const int MaxLen = 16000;
	char c512_1[512];
	char c512_2[512];
	char c512_3[512];
	char c_buf[MaxLen+1];
	int fieldlen = 0;
    int ret = 0; Clrd(_FW_PFUNls);
	char ImpTxtFilePath[200];
	bool prizPut = false;
	int prizPutKor = -1;
	int prizPutIgd = -1;
	int isKormilec = -1;

	strcpy(ImpTxtFilePath, strTxtFilePath.c_str());	
	strcpy(textIndicator, strTxtFilePath.c_str());

	File_ZAV = NULL;
	if (FFind(ImpTxtFilePath))
		File_ZAV = FOpen (ImpTxtFilePath, RD);

	if(File_ZAV)
	{
		for(;;)
		{
			ret = FReadText(File_ZAV, c_buf, MaxLen);
			if(ret == -1)
				break;
			char* line = new char[strlen(c_buf)+1];
			strcpy(line, c_buf);
			line[strlen(c_buf)] = '\x0';
			char *cur = line;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				//Ldv(c512_2); Std(_Ls_Raj);
			}
			cur = cur + fieldlen + 1; fieldlen=0;
			
			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_LE_PFUNls);
				strcpy(c512_3, substr_char(c512_2, 6, 6));
				Ldv(c512_3); Std(_FW_Nls);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			//Find Ls_Nls in B_Ls
			Ldd(_FW_PFUNls);
			Ldd(_LE_PFUNls);
			if(Cmp()) {
				prizPut = GetPrizPut(_LE_PFUNls);
				Ldd(_LE_PFUNls);
				Std(_FW_PFUNls);
			}
			else
				prizPut = true;
			Clear(B_Shifr);

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Shifr_Code);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Shifr_Kfn);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				strcpy(c512_3, substr_char(c512_2, 0, 10));
				LdDate(c512_3);
				Shifr_DateC = Stu(0);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				strcpy(c512_3, substr_char(c512_2, 0, 10));
				LdDate(c512_3);
				Shifr_InsDat = Stu(0);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(prizPut && Shifr_DateC && Shifr_Code) {
				Put(B_Shifr);
			}
			delete[] line;
		}
		FClose(File_ZAV);
	}
}
void ReverseMigration_BChe(string strTxtFilePath) {
	IWStayFile* File_ZAV;
	const int MaxLen = 16000;
	char c512_1[512];
	char c512_2[512];
	char c512_3[512];
	char c_buf[MaxLen+1];
	int fieldlen = 0;
    int ret = 0; Clrd(_FW_PFUNls);
	char ImpTxtFilePath[200];
	bool prizPut = false;
	int prizPutKor = -1;
	int prizPutIgd = -1;
	int isKormilec = -1;

	strcpy(ImpTxtFilePath, strTxtFilePath.c_str());	
	strcpy(textIndicator, strTxtFilePath.c_str());

	File_ZAV = NULL;
	if (FFind(ImpTxtFilePath))
		File_ZAV = FOpen (ImpTxtFilePath, RD);

	if(File_ZAV)
	{
		for(;;)
		{
			ret = FReadText(File_ZAV, c_buf, MaxLen);
			if(ret == -1)
				break;
			char* line = new char[strlen(c_buf)+1];
			strcpy(line, c_buf);
			line[strlen(c_buf)] = '\x0';
			char *cur = line;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				//Ldv(c512_2); Std(_Ls_Raj);
			}
			cur = cur + fieldlen + 1; fieldlen=0;
			
			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_LE_PFUNls);
				strcpy(c512_3, substr_char(c512_2, 6, 6));
				Ldv(c512_3); Std(_FW_Nls);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			//Find Ls_Nls in B_Ls
			Ldd(_FW_PFUNls);
			Ldd(_LE_PFUNls);
			if(Cmp()) {
				prizPut = GetPrizPut(_LE_PFUNls);
				Ldd(_LE_PFUNls);
				Std(_FW_PFUNls);
			}
			else
				prizPut = true;
			Clear(B_Che);

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_FW_LsNomig);
			}
			cur = cur + fieldlen + 1; fieldlen=0;
			prizPutIgd = GetPrizPutIgd(_FW_LsNomig);
			if(prizPutIgd < 0)
				Che_Nomig = 0;
			else
				Che_Nomig = IgdE_Num;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				strcpy(c512_3, substr_char(c512_2, 0, 10));
				LdDate(c512_3);
				Che_Dnprav = Stu(0);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				strcpy(c512_3, substr_char(c512_2, 0, 10));
				LdDate(c512_3);
				Che_Dkprav = Stu(0);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Che_Kzp);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Che_Kzr);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Che_Chpri);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Che_Likvid);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Che_Ptru);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Che_Tpos);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Che_Snig);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(prizPut) {
				Put(B_Che);
			}
			delete[] line;
		}
		FClose(File_ZAV);
	}
}
void ReverseMigration_BCheZp(string strTxtFilePath) {
	IWStayFile* File_ZAV;
	const int MaxLen = 16000;
	char c512_1[512];
	char c512_2[512];
	char c512_3[512];
	char c_buf[MaxLen+1];
	int fieldlen = 0;
    int ret = 0; Clrd(_FW_PFUNls);
	char ImpTxtFilePath[200];
	bool prizPut = false;
	int prizPutKor = -1;
	int prizPutIgd = -1;
	int isKormilec = -1;

	strcpy(ImpTxtFilePath, strTxtFilePath.c_str());	
	strcpy(textIndicator, strTxtFilePath.c_str());

	File_ZAV = NULL;
	if (FFind(ImpTxtFilePath))
		File_ZAV = FOpen (ImpTxtFilePath, RD);

	if(File_ZAV)
	{
		for(;;)
		{
			ret = FReadText(File_ZAV, c_buf, MaxLen);
			if(ret == -1)
				break;
			char* line = new char[strlen(c_buf)+1];
			strcpy(line, c_buf);
			line[strlen(c_buf)] = '\x0';
			char *cur = line;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				//Ldv(c512_2); Std(_Ls_Raj);
			}
			cur = cur + fieldlen + 1; fieldlen=0;
			
			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_LE_PFUNls);
				strcpy(c512_3, substr_char(c512_2, 6, 6));
				Ldv(c512_3); Std(_FW_Nls);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			//Find Ls_Nls in B_Ls
			Ldd(_FW_PFUNls);
			Ldd(_LE_PFUNls);
			if(Cmp()) {
				prizPut = GetPrizPut(_LE_PFUNls);
				Ldd(_LE_PFUNls);
				Std(_FW_PFUNls);
			}
			else
				prizPut = true;
			Clear(B_CheZp);

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_FW_LsNomig);
			}
			cur = cur + fieldlen + 1; fieldlen=0;
			prizPutIgd = GetPrizPutIgd(_FW_LsNomig);
			if(prizPutIgd < 0)
				CheZp_Nomig = 0;
			else
				CheZp_Nomig = IgdE_Num;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_CheZp_Code);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_CheZp_Time);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				strcpy(c512_3, substr_char(c512_2, 0, 10));
				LdDate(c512_3);
				CheZp_DateBeg = Stu(0);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				strcpy(c512_3, substr_char(c512_2, 0, 10));
				LdDate(c512_3);
				CheZp_DateEnd = Stu(0);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			switch(CheZp_Code) {
				case 16: case 19: case 20: case 21: case 22: case 23: case 24:
					if(!CheZp_DateEnd) {
						CheZp_Time = 1;
						if(prizPut && CheZp_Code && CheZp_DateBeg) {
							Put(B_CheZp);
						}
					}
					else if(CheZp_DateBeg == CheZp_DateEnd) {
						CheZp_Time = 3;
						if(prizPut && CheZp_Code && CheZp_DateBeg) {
							Put(B_CheZp);
						}
					}
					else {
						if(prizPut && CheZp_Code && CheZp_DateBeg) {
							CheZp_Time = 1;
							Put(B_CheZp);
							if(CheZp_Code == 16)
								Put16RabPer();
							CheZp_Time = 2;
							CheZp_DateBeg = CheZp_DateEnd;
							Put(B_CheZp);
						}						
					}
					if(CheZp_Code == 16)
						Put16RabPer();
					break;
				default:
					if(prizPut && CheZp_Code && CheZp_DateBeg) {
						Put(B_CheZp);
					}
					break;
			}
			delete[] line;
		}
		FClose(File_ZAV);
	}
}
void Put16RabPer()
{
	RabPer_Date = CheZp_DateBeg;
	if(GetKey(B_RabPer))
	{
		RabPer_Pr = 1;
		RabPer_CodIns = 0;
		RabPer_DateIns = GetSysDate();
		Modify(B_RabPer);        
	}
	else
	{
		RabPer_Pr = (CheZp_Time == 1 ? 0 : 1);
		RabPer_CodIns = 0;
		RabPer_DateIns = GetSysDate();
		Put(B_RabPer);        
	}
}
void ReverseMigration_BInv(string strTxtFilePath) {
	union MCEK
	{	 
		char bufMC[9];
		struct
		{
			StayDate RDateE;
			uint2    RPriz;
			uint4    RSum;
		};
	};

	IWStayFile* File_ZAV;
	const int MaxLen = 16000;
	char c512_1[512];
	char c512_2[512];
	char c512_3[512];
	char c_buf[MaxLen+1];
	int fieldlen = 0;
    int ret = 0; Clrd(_FW_PFUNls);
	char ImpTxtFilePath[200];
	bool prizPut = false;
	int prizPutKor = -1;
	int prizPutIgd = -1;
	int isKormilec = -1;

	strcpy(ImpTxtFilePath, strTxtFilePath.c_str());	
	strcpy(textIndicator, strTxtFilePath.c_str());

	File_ZAV = NULL;
	if (FFind(ImpTxtFilePath))
		File_ZAV = FOpen (ImpTxtFilePath, RD);

	if(File_ZAV)
	{
		for(;;)
		{
			ret = FReadText(File_ZAV, c_buf, MaxLen);
			if(ret == -1)
				break;
			char* line = new char[strlen(c_buf)+1];
			strcpy(line, c_buf);
			line[strlen(c_buf)] = '\x0';
			char *cur = line;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				//Ldv(c512_2); Std(_Ls_Raj);
			}
			cur = cur + fieldlen + 1; fieldlen=0;
			
			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_LE_PFUNls);
				strcpy(c512_3, substr_char(c512_2, 6, 6));
				Ldv(c512_3); Std(_FW_Nls);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			//Find Ls_Nls in B_Ls
			Ldd(_FW_PFUNls);
			Ldd(_LE_PFUNls);
			if(Cmp()) {
				prizPut = GetPrizPut(_LE_PFUNls);
				Ldd(_LE_PFUNls);
				Std(_FW_PFUNls);
			}
			else
				prizPut = true;
			Clear(B_Inv);

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_FW_LsNomig);
			}
			cur = cur + fieldlen + 1; fieldlen=0;
			prizPutIgd = GetPrizPutIgd(_FW_LsNomig);
			if(prizPutIgd < 0)
				Inv_Nomig = 0;
			else
				Inv_Nomig = IgdE_Num;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				strcpy(c512_3, substr_char(c512_2, 0, 10));
				LdDate(c512_3);
				Inv_Dnpi = Stu(0);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				strcpy(c512_3, substr_char(c512_2, 0, 10));
				LdDate(c512_3);
				Inv_Dkpi = Stu(0);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Inv_Kod);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				strcpy(c512_3, substr_char(c512_2, 0, 10));
				LdDate(c512_3);
				Inv_Dni = Stu(0);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Inv_Stag);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				strcpy(c512_3, substr_char(c512_2, 0, 1)); //перекодировка
				Ldv(c512_3); Std(_Inv_Grinv);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				StrForm(Winv_SerMCEK, 50, c512_2);
			}
			cur = cur + fieldlen + 1; fieldlen=0;
			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Winv_NumMCEK);
			}
			cur = cur + fieldlen + 1; fieldlen=0;
			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				strcpy(c512_3, substr_char(c512_2, 0, 10));
				LdDate(c512_3);
				Winv_DVSpr = Stu(0);
			}
			cur = cur + fieldlen + 1; fieldlen=0;
			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			MCEK MC; 
			Clear(B_VidOs);
			VidOs_Code = 87;
			VidOs_DateB = DatePack(1,1,1900) + Inv_Nomig;
			if(Winv_SerMCEK[0] != 0){
				if (!GetKey(B_VidOs))
					Put(B_VidOs);
				memset (MC.bufMC,0,9);
				strcpy (MC.bufMC,Winv_SerMCEK);
				VidOs_DateE = MC.RDateE;
				VidOs_Sum   = MC.RSum;
				VidOs_Priz  = MC.RPriz;
				Modify(B_VidOs);
			}
			Clear(B_VidOs);
			VidOs_Code = 88;
			VidOs_DateB = DatePack(1,1,1900) + Inv_Nomig;
			if(Cmp2(_Winv_NumMCEK,0) != 0){
				if (!GetKey(B_VidOs))
					Put(B_VidOs);
				Ldd(_Winv_NumMCEK);
				Std(_VidOs_Sum);
				Modify(B_VidOs);
			}

			Clrd(_Winv_DObsl);
			VidOs_Code = 55;
			VidOs_DateB = DatePack(1,1,1900) + Inv_Nomig;	 
			VidOs_DateE = Winv_DObsl;
			VidOs_Priz  = 0;//Winv_MaskOsb;
			Ldd(_Winv_DVSpr);
			Std(_VidOs_Sum);
			Put (B_VidOs);

			if(prizPut && Inv_Dnpi) {
				if(!Inv_Dkpi)
					Inv_Dkpi = DATE_MAX;
				Put(B_Inv);
			}
			delete[] line;
		}
		FClose(File_ZAV);
	}
}
void ReverseMigration_BNazn(string strTxtFilePath) {
	IWStayFile* File_ZAV;
	const int MaxLen = 16000;
	char c512_1[512];
	char c512_2[512];
	char c512_3[512];
	char c_buf[MaxLen+1];
	int fieldlen = 0;
    int ret = 0; Clrd(_FW_PFUNls);
	char ImpTxtFilePath[200];
	bool prizPut = false;
	int prizPutKor = -1;
	int prizPutIgd = -1;
	int isKormilec = -1;

	strcpy(ImpTxtFilePath, strTxtFilePath.c_str());	
	strcpy(textIndicator, strTxtFilePath.c_str());

	File_ZAV = NULL;
	if (FFind(ImpTxtFilePath))
		File_ZAV = FOpen (ImpTxtFilePath, RD);

	if(File_ZAV)
	{
		for(;;)
		{
			ret = FReadText(File_ZAV, c_buf, MaxLen);
			if(ret == -1)
				break;
			char* line = new char[strlen(c_buf)+1];
			strcpy(line, c_buf);
			line[strlen(c_buf)] = '\x0';
			char *cur = line;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				//Ldv(c512_2); Std(_Ls_Raj);
			}
			cur = cur + fieldlen + 1; fieldlen=0;
			
			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_LE_PFUNls);
				strcpy(c512_3, substr_char(c512_2, 6, 6));
				Ldv(c512_3); Std(_FW_Nls);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			//Find Ls_Nls in B_Ls
			Ldd(_FW_PFUNls);
			Ldd(_LE_PFUNls);
			if(Cmp()) {
				prizPut = GetPrizPut(_LE_PFUNls);
				Ldd(_LE_PFUNls);
				Std(_FW_PFUNls);
			}
			else
				prizPut = true;
			Clear(B_Nazn);

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Nazn_Op);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				strcpy(c512_3, substr_char(c512_2, 0, 10));
				LdDate(c512_3);
				Nazn_Dnaz = Stu(0);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				strcpy(c512_3, substr_char(c512_2, 0, 10));
				LdDate(c512_3);
				Nazn_Dobr = Stu(0);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				CommaToDot(c512_2);
				Ldv(c512_2); Std(_Nazn_Pensosn);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(prizPut && Nazn_Op && Nazn_Dnaz) {
				Put(B_Nazn);
			}
			delete[] line;
		}
		FClose(File_ZAV);
	}
}
void ReverseMigration_BNac(string strTxtFilePath) {
	IWStayFile* File_ZAV;
	const int MaxLen = 16000;
	char c512_1[512];
	char c512_2[512];
	char c512_3[512];
	char c_buf[MaxLen+1];
	int fieldlen = 0;
    int ret = 0; Clrd(_FW_PFUNls);
	char ImpTxtFilePath[200];
	bool prizPut = false;
	int prizPutKor = -1;
	int prizPutIgd = -1;
	int isKormilec = -1;
	bool isFoundNac = false;
	bool isFoundNacOp = false;
	bool prPutNac = false;
	bool prPutNacOp = false;
	int neop = 0;
	int tved = 0;
	int spos = 0;

	strcpy(ImpTxtFilePath, strTxtFilePath.c_str());	
	strcpy(textIndicator, strTxtFilePath.c_str());

	File_ZAV = NULL;
	if (FFind(ImpTxtFilePath))
		File_ZAV = FOpen (ImpTxtFilePath, RD);

	if(File_ZAV)
	{
		for(;;)
		{
			ret = FReadText(File_ZAV, c_buf, MaxLen);
			if(ret == -1)
				break;
			char* line = new char[strlen(c_buf)+1];
			strcpy(line, c_buf);
			line[strlen(c_buf)] = '\x0';
			char *cur = line;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				//Ldv(c512_2); Std(_Ls_Raj);
			}
			cur = cur + fieldlen + 1; fieldlen=0;
			
			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_LE_PFUNls);
				strcpy(c512_3, substr_char(c512_2, 6, 6));
				Ldv(c512_3); Std(_FW_Nls);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			//Find Ls_Nls in B_Ls
			Ldd(_FW_PFUNls);
			Ldd(_LE_PFUNls);
			if(Cmp()) {
				prizPut = GetPrizPut(_LE_PFUNls);
				Ldd(_LE_PFUNls);
				Std(_FW_PFUNls);
			}
			else
				prizPut = true;
			Clear(B_Nac);

			//1 сформировать ключ god, mec, npp

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Nac_God);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Nac_Mec);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Nac_Npp);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			isFoundNac = false;
			//2 проверить на наличие такой записи
			if(!Nac_Npp)
				Nac_Npp = 1;
			if(Nac_God && Nac_Mec && Nac_Npp && prizPut) { //есть ключ
				isFoundNac = true;
				prPutNac = false;
				if(!GetKey(B_Nac))
					prPutNac = true;
				if(strstr(cur, ";"))
				{
					strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
					CommaToDot(c512_2);
					Ldv(c512_2); Std(_Nac_Sved);
				}
				cur = cur + fieldlen + 1; fieldlen=0;
				if(strstr(cur, ";"))
				{
					strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
					Ldv(c512_2); Std(_Nac_Nved);
				}
				cur = cur + fieldlen + 1; fieldlen=0;
				if(strstr(cur, ";"))
				{
					strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
					strcpy(c512_3, substr_char(c512_2, 0, 10));
					LdDate(c512_3);
					Nac_DatSpis = Stu(0);
				}
				cur = cur + fieldlen + 1; fieldlen=0;
				if(strstr(cur, ";"))
				{
					strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
					Ldv(c512_2); neop = Sti(0);
				}
				cur = cur + fieldlen + 1; fieldlen=0;
				if(strstr(cur, ";"))
				{
					strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
					Ldv(c512_2); tved = Sti(0);
				}
				cur = cur + fieldlen + 1; fieldlen=0;
				if(strstr(cur, ";"))
				{
					strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
					Ldv(c512_2); spos = Sti(0);
				}
				cur = cur + fieldlen + 1; fieldlen=0;
				Nac_Bj = SetBj(neop, tved, spos);
				if(strstr(cur, ";"))
				{
					strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
					Ldv(c512_2); Std(_Nac_IndOts);
				}
				cur = cur + fieldlen + 1; fieldlen=0;
				if(strstr(cur, ";"))
				{
					strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
					Ldv(c512_2); Std(_Nac_Mecn);
				}
				cur = cur + fieldlen + 1; fieldlen=0;
				if(strstr(cur, ";"))
				{
					strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
					Ldv(c512_2); Std(_Nac_Godn);
				}
				cur = cur + fieldlen + 1; fieldlen=0;
				if(strstr(cur, ";"))
				{
					strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
					Ldv(c512_2); Std(_Nac_Nppn);
				}
				cur = cur + fieldlen + 1; fieldlen=0;
				if(strstr(cur, ";"))
				{
					strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
					Ldv(c512_2); Std(_Nac_Tip);
				}
				cur = cur + fieldlen + 1; fieldlen=0;
				if(strstr(cur, ";"))
				{
					strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
					Ldv(c512_2); Std(_Nac_TVed);
				}
				cur = cur + fieldlen + 1; fieldlen=0;
				if(prPutNac)
					Put(B_Nac);
			}
			if(isFoundNac && prizPut) { //курсор на запису в B_Nac
				//ключ для NacOp
				if(strstr(cur, ";"))
				{
					strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
					Ldv(c512_2); Std(_Nac_Op);
				}
				cur = cur + fieldlen + 1; fieldlen=0;
				if(strstr(cur, ";"))
				{
					strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
					strcpy(c512_3, substr_char(c512_2, 0, 10));
					LdDate(c512_3);
					Nac_DatOp = Stu(0);
				}
				cur = cur + fieldlen + 1; fieldlen=0;
				Nac_Kin = 0;
				isFoundNacOp = false;
				if(Nac_Op && Nac_DatOp) {
					isFoundNacOp = true;
					if(!GetKey(B_NacOp)) {
						Put(B_NacOp);
					}
				}
			}
			if(isFoundNacOp && prizPut) {
				if(strstr(cur, ";"))
				{
					strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
					Ldv(c512_2); Std(_Nac_Kfn);
				}
				cur = cur + fieldlen + 1; fieldlen=0;
				if(strstr(cur, ";"))
				{
					strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
					Ldv(c512_2); Std(_Nac_GodF);
				}
				cur = cur + fieldlen + 1; fieldlen=0;
				if(strstr(cur, ";"))
				{
					strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
					Ldv(c512_2); Std(_Nac_MecF);
				}
				cur = cur + fieldlen + 1; fieldlen=0;
				if(strstr(cur, ";"))
				{
					strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
					CommaToDot(c512_2);
					Ldv(c512_2); Std(_Nac_SNac);
				}
				cur = cur + fieldlen + 1; fieldlen=0;
				if(strstr(cur, ";"))
				{
					strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
					CommaToDot(c512_2);
					Ldv(c512_2); Std(_Nac_SInd);
				}
				cur = cur + fieldlen + 1; fieldlen=0;
				if(Nac_Kfn && Nac_GodF && Nac_MecF)
					Put(B_NacKfn);
			}
			delete[] line;
		}
		FClose(File_ZAV);
	}
}
void ReverseMigration_BOsob(string strTxtFilePath) {
	IWStayFile* File_ZAV;
	const int MaxLen = 16000;
	char c512_1[512];
	char c512_2[512];
	char c512_3[512];
	char c_buf[MaxLen+1];
	int fieldlen = 0;
    int ret = 0; Clrd(_FW_PFUNls);
	char ImpTxtFilePath[200];
	bool prizPut = false;
	int prizPutKor = -1;
	int prizPutIgd = -1;
	int isKormilec = -1;

	strcpy(ImpTxtFilePath, strTxtFilePath.c_str());	
	strcpy(textIndicator, strTxtFilePath.c_str());

	File_ZAV = NULL;
	if (FFind(ImpTxtFilePath))
		File_ZAV = FOpen (ImpTxtFilePath, RD);

	if(File_ZAV)
	{
		for(;;)
		{
			ret = FReadText(File_ZAV, c_buf, MaxLen);
			if(ret == -1)
				break;
			char* line = new char[strlen(c_buf)+1];
			strcpy(line, c_buf);
			line[strlen(c_buf)] = '\x0';
			char *cur = line;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				//Ldv(c512_2); Std(_Ls_Raj);
			}
			cur = cur + fieldlen + 1; fieldlen=0;
			
			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_LE_PFUNls);
				strcpy(c512_3, substr_char(c512_2, 6, 6));
				Ldv(c512_3); Std(_FW_Nls);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			//Find Ls_Nls in B_Ls
			Ldd(_FW_PFUNls);
			Ldd(_LE_PFUNls);
			if(Cmp()) {
				prizPut = GetPrizPut(_LE_PFUNls);
				Ldd(_LE_PFUNls);
				Std(_FW_PFUNls);
				//todo save create date
			}
			else
				prizPut = true;
			Clear(B_Osob);

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				//Ldv(c512_2); Std(_Shifr_Code); Nomig
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Osob_Code);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Osob_Priz);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(prizPut && Osob_Code) {
				Put(B_Osob);
			}
			delete[] line;
		}
		FClose(File_ZAV);
	}
}
void ReverseMigration_BStg(string strTxtFilePath) {
	IWStayFile* File_ZAV;
	const int MaxLen = 16000;
	char c512_1[512];
	char c512_2[512];
	char c512_3[512];
	char c_buf[MaxLen+1];
	int fieldlen = 0;
    int ret = 0; Clrd(_FW_PFUNls);
	char ImpTxtFilePath[200];
	bool prizPut = false;
	int prizPutKor = -1;
	int prizPutIgd = -1;
	int isKormilec = -1;
	int numKor = 0;

	strcpy(ImpTxtFilePath, strTxtFilePath.c_str());	
	strcpy(textIndicator, strTxtFilePath.c_str());

	File_ZAV = NULL;
	if (FFind(ImpTxtFilePath))
		File_ZAV = FOpen (ImpTxtFilePath, RD);

	if(File_ZAV)
	{
		for(;;)
		{
			ret = FReadText(File_ZAV, c_buf, MaxLen);
			if(ret == -1)
				break;
			char* line = new char[strlen(c_buf)+1];
			strcpy(line, c_buf);
			line[strlen(c_buf)] = '\x0';
			char *cur = line;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				//Ldv(c512_2); Std(_Ls_Raj);
			}
			cur = cur + fieldlen + 1; fieldlen=0;
			
			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_LE_PFUNls);
				strcpy(c512_3, substr_char(c512_2, 6, 6));
				Ldv(c512_3); Std(_FW_Nls);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			//Find Ls_Nls in B_Ls
			Ldd(_FW_PFUNls);
			Ldd(_LE_PFUNls);
			if(Cmp()) {
				prizPut = GetPrizPut(_LE_PFUNls);
				Ldd(_LE_PFUNls);
				Std(_FW_PFUNls);
			}
			else
				prizPut = true;
			Clear(B_Stg);

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_FW_LsNomig);
			}
			cur = cur + fieldlen + 1; fieldlen=0;
			prizPutIgd = GetPrizPutKor(_FW_LsNomig);
			if(prizPutIgd < 0)
				numKor = 0;
			else
				numKor = KorE_Num;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Stg_Kods);
			}
			cur = cur + fieldlen + 1; fieldlen=0;
			if(numKor)
				Stg_Kods += 100;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Stg_Dni);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Stg_Mec);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Stg_God);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(prizPut && Stg_Kods) {
				Put(B_Stg);
			}
			delete[] line;
		}
		FClose(File_ZAV);
	}
}
void ReverseMigration_BStgp(string strTxtFilePath) {
	IWStayFile* File_ZAV;
	const int MaxLen = 16000;
	char c512_1[512];
	char c512_2[512];
	char c512_3[512];
	char c_buf[MaxLen+1];
	int fieldlen = 0;
    int ret = 0; Clrd(_FW_PFUNls);
	char ImpTxtFilePath[200];
	bool prizPut = false;
	int prizPutKor = -1;
	int prizPutIgd = -1;
	int isKormilec = -1;
	int numKor = 0;

	strcpy(ImpTxtFilePath, strTxtFilePath.c_str());	
	strcpy(textIndicator, strTxtFilePath.c_str());

	File_ZAV = NULL;
	if (FFind(ImpTxtFilePath))
		File_ZAV = FOpen (ImpTxtFilePath, RD);

	if(File_ZAV)
	{
		for(;;)
		{
			ret = FReadText(File_ZAV, c_buf, MaxLen);
			if(ret == -1)
				break;
			char* line = new char[strlen(c_buf)+1];
			strcpy(line, c_buf);
			line[strlen(c_buf)] = '\x0';
			char *cur = line;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				//Ldv(c512_2); Std(_Ls_Raj);
			}
			cur = cur + fieldlen + 1; fieldlen=0;
			
			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_LE_PFUNls);
				strcpy(c512_3, substr_char(c512_2, 6, 6));
				Ldv(c512_3); Std(_FW_Nls);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			//Find Ls_Nls in B_Ls
			Ldd(_FW_PFUNls);
			Ldd(_LE_PFUNls);
			if(Cmp()) {
				prizPut = GetPrizPut(_LE_PFUNls);
				Ldd(_LE_PFUNls);
				Std(_FW_PFUNls);
			}
			else
				prizPut = true;
			Clear(B_Stgp);

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_FW_LsNomig);
			}
			cur = cur + fieldlen + 1; fieldlen=0;
			prizPutIgd = GetPrizPutKor(_FW_LsNomig);
			if(prizPutIgd < 0)
				numKor = 0;
			else
				numKor = KorE_Num;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				strcpy(c512_3, substr_char(c512_2, 0, 10));
				LdDate(c512_3);
				Stgp_Dbeg = Stu(0);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				strcpy(c512_3, substr_char(c512_2, 0, 10));
				LdDate(c512_3);
				Stgp_Dend = Stu(0);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Stgp_Lgvl);
			}
			cur = cur + fieldlen + 1; fieldlen=0;
			if(numKor)
				Stgp_Lgvl += 100;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Stgp_Sever);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Stgp_Gg);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Stgp_Mm);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Stgp_Dd);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Stgp_Kolh);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Stgp_KodPr);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(prizPut && Stgp_Dbeg && Stgp_Dend) {
				if(Put(B_Stgp)) {
					StgpE_nomig = KorE_Num;
					StgpE_dbeg = Stgp_Dbeg;
					StgpE_dend = Stgp_Dend;

					if(strstr(cur, ";"))
					{
						strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
						Ldv(c512_2); Std(_StgpE_gg_t);
						Ldd(_Stgp_Gg); Ldd(_StgpE_gg_t);
						Std(_Stgp_Gg); Std(_StgpE_gg_t);
					}
					cur = cur + fieldlen + 1; fieldlen=0;

					if(strstr(cur, ";"))
					{
						strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
						Ldv(c512_2); Std(_StgpE_mm_t);
						Ldd(_Stgp_Mm); Ldd(_StgpE_mm_t);
						Std(_Stgp_Mm); Std(_StgpE_mm_t);
					}
					cur = cur + fieldlen + 1; fieldlen=0;

					if(strstr(cur, ";"))
					{
						strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
						Ldv(c512_2); Std(_StgpE_dd_t);
						Ldd(_Stgp_Dd); Ldd(_StgpE_dd_t);
						Std(_Stgp_Dd); Std(_StgpE_dd_t);
					}
					cur = cur + fieldlen + 1; fieldlen=0;
					Modify(B_Stgp);

					if(strstr(cur, ";"))
					{
						strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
						Ldv(c512_2); Std(_StgpE_gg_k);
					}
					cur = cur + fieldlen + 1; fieldlen=0;

					if(strstr(cur, ";"))
					{
						strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
						Ldv(c512_2); Std(_StgpE_mm_k);
					}
					cur = cur + fieldlen + 1; fieldlen=0;

					if(strstr(cur, ";"))
					{
						strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
						Ldv(c512_2); Std(_StgpE_dd_k);
					}
					cur = cur + fieldlen + 1; fieldlen=0;
					Put(B_StgpE);
				}
			}
			delete[] line;
		}
		FClose(File_ZAV);
	}
}
void ReverseMigration_BSv1(string strTxtFilePath) {
	IWStayFile* File_ZAV;
	const int MaxLen = 16000;
	char c512_1[512];
	char c512_2[512];
	char c512_3[512];
	char c_buf[MaxLen+1];
	int fieldlen = 0;
    int ret = 0; Clrd(_FW_PFUNls);
	char ImpTxtFilePath[200];
	bool prizPut = false;
	int prizPutKor = -1;
	int prizPutIgd = -1;
	int isKormilec = -1;

	strcpy(ImpTxtFilePath, strTxtFilePath.c_str());	
	strcpy(textIndicator, strTxtFilePath.c_str());

	File_ZAV = NULL;
	if (FFind(ImpTxtFilePath))
		File_ZAV = FOpen (ImpTxtFilePath, RD);

	if(File_ZAV)
	{
		for(;;)
		{
			ret = FReadText(File_ZAV, c_buf, MaxLen);
			if(ret == -1)
				break;
			char* line = new char[strlen(c_buf)+1];
			strcpy(line, c_buf);
			line[strlen(c_buf)] = '\x0';
			char *cur = line;
			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				//Ldv(c512_2); Std(_Ls_Raj);
			}
			cur = cur + fieldlen + 1; fieldlen=0;
			
			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_LE_PFUNls);
				strcpy(c512_3, substr_char(c512_2, 6, 6));
				Ldv(c512_3); Std(_FW_Nls);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			//Find Ls_Nls in B_Ls
			Ldd(_FW_PFUNls);
			Ldd(_LE_PFUNls);
			if(Cmp()) {
				prizPut = GetPrizPut(_LE_PFUNls);
				Ldd(_LE_PFUNls);
				Std(_FW_PFUNls);
			}
			else
				prizPut = true;

			Clear(B_Sv1);

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Sv1_Kus);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Sv1_Os);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Sv1_Du);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Sv1_Dvipl);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(prizPut && (Sv1_Kus || Sv1_Dvipl)) {
				Put(B_Sv1);
			}
			delete[] line;
		}
		FClose(File_ZAV);
	}
}
void ReverseMigration_BSv2(string strTxtFilePath) {
	IWStayFile* File_ZAV;
	const int MaxLen = 16000;
	char c512_1[512];
	char c512_2[512];
	char c512_3[512];
	char c_buf[MaxLen+1];
	int fieldlen = 0;
    int ret = 0; Clrd(_FW_PFUNls);
	char ImpTxtFilePath[200];
	bool prizPut = false;
	int prizPutKor = -1;
	int prizPutIgd = -1;
	int isKormilec = -1;

	strcpy(ImpTxtFilePath, strTxtFilePath.c_str());	
	strcpy(textIndicator, strTxtFilePath.c_str());

	File_ZAV = NULL;
	if (FFind(ImpTxtFilePath))
		File_ZAV = FOpen (ImpTxtFilePath, RD);

	if(File_ZAV)
	{
		for(;;)
		{
			ret = FReadText(File_ZAV, c_buf, MaxLen);
			if(ret == -1)
				break;
			char* line = new char[strlen(c_buf)+1];
			strcpy(line, c_buf);
			line[strlen(c_buf)] = '\x0';
			char *cur = line;
			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				//Ldv(c512_2); Std(_Ls_Raj);
			}
			cur = cur + fieldlen + 1; fieldlen=0;
			
			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_LE_PFUNls);
				strcpy(c512_3, substr_char(c512_2, 6, 6));
				Ldv(c512_3); Std(_FW_Nls);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			//Find Ls_Nls in B_Ls
			Ldd(_FW_PFUNls);
			Ldd(_LE_PFUNls);
			if(Cmp()) {
				prizPut = GetPrizPut(_LE_PFUNls);
				Ldd(_LE_PFUNls);
				Std(_FW_PFUNls);
			}
			else
				prizPut = true;

			Clear(B_Sv2);

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Sv2_Ncsbb);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Sv2_Npsbb);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				StrForm(Sv2_Vklad, 25, c512_2);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(prizPut && Sv2_Ncsbb) {
				Put(B_Sv2);
			}
			delete[] line;
		}
		FClose(File_ZAV);
	}
}
void ReverseMigration_BAtst(string strTxtFilePath) {
	IWStayFile* File_ZAV;
	const int MaxLen = 16000;
	char c512_1[512];
	char c512_2[512];
	char c512_3[512];
	char c_buf[MaxLen+1];
	int fieldlen = 0;
    int ret = 0; Clrd(_FW_PFUNls);
	char ImpTxtFilePath[200];
	bool prizPut = false;
	int prizPutKor = -1;
	int prizPutIgd = -1;
	int isKormilec = -1;

	strcpy(ImpTxtFilePath, strTxtFilePath.c_str());	
	strcpy(textIndicator, strTxtFilePath.c_str());

	File_ZAV = NULL;
	if (FFind(ImpTxtFilePath))
		File_ZAV = FOpen (ImpTxtFilePath, RD);

	if(File_ZAV)
	{
		for(;;)
		{
			ret = FReadText(File_ZAV, c_buf, MaxLen);
			if(ret == -1)
				break;
			char* line = new char[strlen(c_buf)+1];
			strcpy(line, c_buf);
			line[strlen(c_buf)] = '\x0';
			char *cur = line;
			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				//Ldv(c512_2); Std(_Ls_Raj);
			}
			cur = cur + fieldlen + 1; fieldlen=0;
			
			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_LE_PFUNls);
				strcpy(c512_3, substr_char(c512_2, 6, 6));
				Ldv(c512_3); Std(_FW_Nls);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			//Find Ls_Nls in B_Ls
			Ldd(_FW_PFUNls);
			Ldd(_LE_PFUNls);
			if(Cmp()) {
				prizPut = GetPrizPut(_LE_PFUNls);
				Ldd(_LE_PFUNls);
				Std(_FW_PFUNls);
			}
			else
				prizPut = true;

			Clear(B_Atst);

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Atst_Type);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Atst_Num);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				strcpy(c512_3, substr_char(c512_2, 0, 10));
				LdDate(c512_3);
				Atst_Data = Stu(0);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(prizPut && Atst_Type) {
				Put(B_Atst);
			}
			delete[] line;
		}
		FClose(File_ZAV);
	}
}
void ReverseMigration_BUmer(string strTxtFilePath) {
	IWStayFile* File_ZAV;
	const int MaxLen = 16000;
	char c512_1[512];
	char c512_2[512];
	char c512_3[512];
	char c_buf[MaxLen+1];
	int fieldlen = 0;
    int ret = 0; Clrd(_FW_PFUNls);
	char ImpTxtFilePath[200];
	bool prizPut = false;
	bool prizPutUmer = false;
	int prizPutKor = -1;
	int prizPutIgd = -1;
	int isKormilec = -1;

	strcpy(ImpTxtFilePath, strTxtFilePath.c_str());	
	strcpy(textIndicator, strTxtFilePath.c_str());

	File_ZAV = NULL;
	if (FFind(ImpTxtFilePath))
		File_ZAV = FOpen (ImpTxtFilePath, RD);

	if(File_ZAV)
	{
		for(;;)
		{
			ret = FReadText(File_ZAV, c_buf, MaxLen);
			if(ret == -1)
				break;
			char* line = new char[strlen(c_buf)+1];
			strcpy(line, c_buf);
			line[strlen(c_buf)] = '\x0';
			char *cur = line;
			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				//Ldv(c512_2); Std(_Ls_Raj);
			}
			cur = cur + fieldlen + 1; fieldlen=0;
			
			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_LE_PFUNls);
				strcpy(c512_3, substr_char(c512_2, 6, 6));
				Ldv(c512_3); Std(_FW_Nls);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			//Find Ls_Nls in B_Ls
			Ldd(_FW_PFUNls);
			Ldd(_LE_PFUNls);
			if(Cmp()) {
				prizPut = GetPrizPut(_LE_PFUNls);
				Ldd(_LE_PFUNls);
				Std(_FW_PFUNls);
			}
			else
				prizPut = true;

			Clear(B_Umer);

            prizPutUmer = false;
			Clrd(_Umer_Nomig);
			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2);
				Ldd(_LE_Nomig);
				if(!Cmp())
					prizPutUmer = true;
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				strcpy(c512_3, substr_char(c512_2, 0, 10));
				LdDate(c512_3);
				Umer_DatSm = Stu(0);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				strcpy(c512_3, substr_char(c512_2, 0, 10));
				LdDate(c512_3);
				Umer_DatZap = Stu(0);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Umer_Zap);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				strcpy(c512_3, substr_char(c512_2, 0, 10));
				LdDate(c512_3);
				Umer_DatPos = Stu(0);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				StrForm(Umer_Fio, 50, c512_2);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				StrForm(Umer_Adr, 100, c512_2);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				StrForm(Umer_Pasp, 15, c512_2);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				StrForm(Umer_Vidan, 40, c512_2);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				CommaToDot(c512_2);
				Ldv(c512_2); Std(_Umer_Pos);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Umer_Spis);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				strcpy(c512_3, substr_char(c512_2, 0, 10));
				LdDate(c512_3);
				Umer_DatSp = Stu(0);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				strcpy(c512_3, substr_char(c512_2, 0, 10));
				LdDate(c512_3);
				Umer_DatPoh = Stu(0);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Umer_God);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Umer_Mec);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(prizPut && prizPutUmer) {
				Put(B_Umer);
			}
			delete[] line;
		}
		FClose(File_ZAV);
	}
}
void ReverseMigration_BZp(string strTxtFilePath) {
	IWStayFile* File_ZAV;
	const int MaxLen = 16000;
	char c512_1[512];
	char c512_2[512];
	char c512_3[512];
	char c_buf[MaxLen+1];
	int fieldlen = 0;
    int ret = 0; Clrd(_FW_PFUNls);
	char ImpTxtFilePath[200];
	bool prizPut = false;
	int prizPutKor = -1;
	int prizPutIgd = -1;
	int isKormilec = -1;

	strcpy(ImpTxtFilePath, strTxtFilePath.c_str());	
	strcpy(textIndicator, strTxtFilePath.c_str());

	File_ZAV = NULL;
	if (FFind(ImpTxtFilePath))
		File_ZAV = FOpen (ImpTxtFilePath, RD);

	if(File_ZAV)
	{
		for(;;)
		{
			ret = FReadText(File_ZAV, c_buf, MaxLen);
			if(ret == -1)
				break;
			char* line = new char[strlen(c_buf)+1];
			strcpy(line, c_buf);
			line[strlen(c_buf)] = '\x0';
			char *cur = line;
			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				//Ldv(c512_2); Std(_Ls_Raj);
			}
			cur = cur + fieldlen + 1; fieldlen=0;
			
			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_LE_PFUNls);
				strcpy(c512_3, substr_char(c512_2, 6, 6));
				Ldv(c512_3); Std(_FW_Nls);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			//Find Ls_Nls in B_Ls
			Ldd(_FW_PFUNls);
			Ldd(_LE_PFUNls);
			if(Cmp()) {
				prizPut = GetPrizPut(_LE_PFUNls);
				Ldd(_LE_PFUNls);
				Std(_FW_PFUNls);
			}
			else
				prizPut = true;

			Clear(B_Zp);

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				strcpy(c512_3, substr_char(c512_2, 0, 10));
				LdDate(c512_3);
				Zp_DateB = Stu(0);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				strcpy(c512_3, substr_char(c512_2, 0, 10));
				LdDate(c512_3);
				Zp_DateE = Stu(0);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				CommaToDot(c512_2);
				Ldv(c512_2); Std(_Zp_Razm);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Zp_Alim);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(prizPut && Zp_DateB) {
				Put(B_Zp);
			}
			delete[] line;
		}
		FClose(File_ZAV);
	}
}
void ReverseMigration_BZrb(string strTxtFilePath) {
	IWStayFile* File_ZAV;
	const int MaxLen = 16000;
	char c512_1[512];
	char c512_2[512];
	char c512_3[512];
	char c_buf[MaxLen+1];
	int fieldlen = 0;
    int ret = 0; Clrd(_FW_PFUNls);
	char ImpTxtFilePath[200];
	bool prizPut = false;
	int prizPutKor = -1;
	int prizPutIgd = -1;
	int isKormilec = -1;

	strcpy(ImpTxtFilePath, strTxtFilePath.c_str());	
	strcpy(textIndicator, strTxtFilePath.c_str());

	File_ZAV = NULL;
	if (FFind(ImpTxtFilePath))
		File_ZAV = FOpen (ImpTxtFilePath, RD);

	if(File_ZAV)
	{
		for(;;)
		{
			ret = FReadText(File_ZAV, c_buf, MaxLen);
			if(ret == -1)
				break;
			char* line = new char[strlen(c_buf)+1];
			strcpy(line, c_buf);
			line[strlen(c_buf)] = '\x0';
			char *cur = line;
			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				//Ldv(c512_2); Std(_Ls_Raj);
			}
			cur = cur + fieldlen + 1; fieldlen=0;
			
			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_LE_PFUNls);
				strcpy(c512_3, substr_char(c512_2, 6, 6));
				Ldv(c512_3); Std(_FW_Nls);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			//Find Ls_Nls in B_Ls
			Ldd(_FW_PFUNls);
			Ldd(_LE_PFUNls);
			if(Cmp()) {
				prizPut = GetPrizPut(_LE_PFUNls);
				Ldd(_LE_PFUNls);
				Std(_FW_PFUNls);
			}
			else
				prizPut = true;

			Clear(B_Zrb);

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Zrb_Nr);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Zrb_Nrs);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				strcpy(c512_3, substr_char(c512_2, 0, 10));
				LdDate(c512_3);
				Zrb_Dbeg = Stu(0);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				strcpy(c512_3, substr_char(c512_2, 0, 10));
				LdDate(c512_3);
				Zrb_Dend = Stu(0);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				CommaToDot(c512_2);
				Ldv(c512_2); Std(_Zrb_Suma);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				CommaToDot(c512_2);
				Ldv(c512_2); Std(_Zrb_Koef);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Zrb_DKoef);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Zrb_Nepol);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(prizPut && Zrb_Dbeg) {
				Put(B_Zrb);
			}
			delete[] line;
		}
		FClose(File_ZAV);
	}
}
void ReverseMigration_BZrbs(string strTxtFilePath) {
	IWStayFile* File_ZAV;
	const int MaxLen = 16000;
	char c512_1[512];
	char c512_2[512];
	char c512_3[512];
	char c_buf[MaxLen+1];
	int fieldlen = 0;
    int ret = 0; Clrd(_FW_PFUNls);
	char ImpTxtFilePath[200];
	bool prizPut = false;
	int prizPutKor = -1;
	int prizPutIgd = -1;
	int isKormilec = -1;

	strcpy(ImpTxtFilePath, strTxtFilePath.c_str());
	strcpy(textIndicator, strTxtFilePath.c_str());

	File_ZAV = NULL;
	if (FFind(ImpTxtFilePath))
		File_ZAV = FOpen (ImpTxtFilePath, RD);

	if(File_ZAV)
	{
		for(;;)
		{
			ret = FReadText(File_ZAV, c_buf, MaxLen);
			if(ret == -1)
				break;
			char* line = new char[strlen(c_buf)+1];
			strcpy(line, c_buf);
			line[strlen(c_buf)] = '\x0';
			char *cur = line;
			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				//Ldv(c512_2); Std(_Ls_Raj);
			}
			cur = cur + fieldlen + 1; fieldlen=0;
			
			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_LE_PFUNls);
				strcpy(c512_3, substr_char(c512_2, 6, 6));
				Ldv(c512_3); Std(_FW_Nls);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			//Find Ls_Nls in B_Ls
			Ldd(_FW_PFUNls);
			Ldd(_LE_PFUNls);
			if(Cmp()) {
				prizPut = GetPrizPut(_LE_PFUNls);
				Ldd(_LE_PFUNls);
				Std(_FW_PFUNls);
			}
			else
				prizPut = true;

			Clear(B_Zrbs);

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Zrbs_Nr);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Zrbs_Nrs);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				CommaToDot(c512_2);
				Ldv(c512_2); Std(_Zrbs_Zregr);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				CommaToDot(c512_2);
				Ldv(c512_2); Std(_Zrbs_Zar);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				strcpy(c512_3, substr_char(c512_2, 0, 10));
				LdDate(c512_3);
				Zrbs_Dendz = Stu(0);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Zrbs_Mes);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Zrbs_Nepol);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(prizPut) {
				Put(B_Zrbs);
				Clear(B_ZrbsE);
				ZrbsE_Nr = Zrbs_Nr;
				ZrbsE_Nrs = Zrbs_Nrs;
				ZrbsE_Dendz = Zrbs_Dendz;
				Cpy2(_ZrbsE_Zar, _Zrbs_Zar);
				Cpy2(_ZrbsE_Zregr, _Zrbs_Zregr);
				ZrbsE_Mes = Zrbs_Mes;
				ZrbsE_Nepol = Zrbs_Nepol;

				if(strstr(cur, ";"))
				{
					strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
					strcpy(c512_3, substr_char(c512_2, 0, 10));
					LdDate(c512_3);
					ZrbsE_DateVZ = Stu(0);
				}
				cur = cur + fieldlen + 1; fieldlen=0;

				if(strstr(cur, ";"))
				{
					strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
					CommaToDot(c512_2);
					Ldv(c512_2); Std(_ZrbsE_SRNX);
				}
				cur = cur + fieldlen + 1; fieldlen=0;

				if(strstr(cur, ";"))
				{
					strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
					Ldv(c512_2); Std(_ZrbsE_GdSRNX);
				}
				cur = cur + fieldlen + 1; fieldlen=0;

				if(strstr(cur, ";"))
				{
					strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
					strcpy(c512_3, substr_char(c512_2, 0, 10));
					LdDate(c512_3);
					ZrbsE_MaxDOpt = Stu(0);
				}
				cur = cur + fieldlen + 1; fieldlen=0;

				if(strstr(cur, ";"))
				{
					strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
					CommaToDot(c512_2);
					Ldv(c512_2); Std(_ZrbsE_SKfDoOp);
				}
				cur = cur + fieldlen + 1; fieldlen=0;

				if(strstr(cur, ";"))
				{
					strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
					Ldv(c512_2); Std(_ZrbsE_NMsDoOp);
				}
				cur = cur + fieldlen + 1; fieldlen=0;

				if(strstr(cur, ";"))
				{
					strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
					CommaToDot(c512_2);
					Ldv(c512_2); Std(_ZrbsE_SKfRas);
				}
				cur = cur + fieldlen + 1; fieldlen=0;

				if(strstr(cur, ";"))
				{
					strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
					Ldv(c512_2); Std(_ZrbsE_NMsRas);
				}
				cur = cur + fieldlen + 1; fieldlen=0;

				if(strstr(cur, ";"))
				{
					strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
					Ldv(c512_2); Std(_ZrbsE_NMesNep);
				}
				cur = cur + fieldlen + 1; fieldlen=0;

				if(strstr(cur, ";"))
				{
					strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
					CommaToDot(c512_2);
					Ldv(c512_2); Std(_ZrbsE_ZAR1SKL);
				}
				cur = cur + fieldlen + 1; fieldlen=0;

				if(strstr(cur, ";"))
				{
					strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
					CommaToDot(c512_2);
					Ldv(c512_2); Std(_ZrbsE_ZAR2SKL);
				}
				cur = cur + fieldlen + 1; fieldlen=0;

				if(strstr(cur, ";"))
				{
					strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
					CommaToDot(c512_2);
					Ldv(c512_2); Std(_ZrbsE_PRC1SKL);
				}
				cur = cur + fieldlen + 1; fieldlen=0;

				if(strstr(cur, ";"))
				{
					strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
					CommaToDot(c512_2);
					Ldv(c512_2); Std(_ZrbsE_OSN1SKL);
				}
				cur = cur + fieldlen + 1; fieldlen=0;

				Put(B_ZrbsE);
			}
			delete[] line;
		}
		FClose(File_ZAV);
	}
}
void ReverseMigration_BIspl(string strTxtFilePath) {
	IWStayFile* File_ZAV;
	const int MaxLen = 16000;
	char c512_1[512];
	char c512_2[512];
	char c512_3[512];
	char c_buf[MaxLen+1];
	int fieldlen = 0;
    int ret = 0; Clrd(_FW_PFUNls);
	char ImpTxtFilePath[200];
	bool prizPut = false;
	int prizPutKor = -1;
	int prizPutIgd = -1;
	int isKormilec = -1;

	strcpy(ImpTxtFilePath, strTxtFilePath.c_str());
	strcpy(textIndicator, strTxtFilePath.c_str());

	File_ZAV = NULL;
	if (FFind(ImpTxtFilePath))
		File_ZAV = FOpen (ImpTxtFilePath, RD);

	if(File_ZAV)
	{
		for(;;)
		{
			ret = FReadText(File_ZAV, c_buf, MaxLen);
			if(ret == -1)
				break;
			char* line = new char[strlen(c_buf)+1];
			strcpy(line, c_buf);
			line[strlen(c_buf)] = '\x0';
			char *cur = line;
			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				//Ldv(c512_2); Std(_Ls_Raj);
			}
			cur = cur + fieldlen + 1; fieldlen=0;
			
			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_LE_PFUNls);
				strcpy(c512_3, substr_char(c512_2, 6, 6));
				Ldv(c512_3); Std(_FW_Nls);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			//Find Ls_Nls in B_Ls
			Ldd(_FW_PFUNls);
			Ldd(_LE_PFUNls);
			if(Cmp()) {
				prizPut = GetPrizPut(_LE_PFUNls);
				Ldd(_LE_PFUNls);
				Std(_FW_PFUNls);
			}
			else
				prizPut = true;

			Clear(B_Ispl);

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Ispl_Kud);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Ispl_Num);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				strcpy(c512_3, substr_char(c512_2, 0, 10));
				LdDate(c512_3);
				Ispl_Dpd = Stu(0);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				StrForm(Ispl_Vhn, 9, c512_2);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Ispl_Kd);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				StrForm(Ispl_Nd, 9, c512_2);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				strcpy(c512_3, substr_char(c512_2, 0, 10));
				LdDate(c512_3);
				Ispl_Dv = Stu(0);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Ispl_Ksud);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Ispl_Kvz);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Ispl_Kold);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				strcpy(c512_3, substr_char(c512_2, 0, 10));
				LdDate(c512_3);
				Ispl_Datast = Stu(0);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				CommaToDot(c512_2);
				Ldv(c512_2); Std(_Ispl_PostDolg);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				CommaToDot(c512_2);
				Ldv(c512_2); Std(_Ispl_Dolg);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Ispl_Sp);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				CommaToDot(c512_2);
				Ldv(c512_2); Std(_Ispl_PerSud);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Ispl_PerSud1);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				strcpy(c512_3, substr_char(c512_2, 0, 10));
				LdDate(c512_3);
				Ispl_DatU = Stu(0);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				strcpy(c512_3, substr_char(c512_2, 0, 10));
				LdDate(c512_3);
				Ispl_Displ = Stu(0);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Ispl_Spos);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Ispl_Kdp);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				CommaToDot(c512_2);
				Ldv(c512_2); Std(_Ispl_Ost);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				CommaToDot(c512_2);
				Ldv(c512_2); Std(_Ispl_Rudp);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Ispl_Gor);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				strcpy(c512_3, substr_char(c512_2, 0, 10));
				LdDate(c512_3);
				Ispl_Datin = Stu(0);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(prizPut && Ispl_Kud && Ispl_Num) {
				Put(B_Ispl);
			}
			delete[] line;
		}
		FClose(File_ZAV);
	}
}
void ReverseMigration_BUd(string strTxtFilePath) {
	IWStayFile* File_ZAV;
	const int MaxLen = 16000;
	char c512_1[512];
	char c512_2[512];
	char c512_3[512];
	char c_buf[MaxLen+1];
	int fieldlen = 0;
    int ret = 0; Clrd(_FW_PFUNls);
	char ImpTxtFilePath[200];
	bool prizPut = false;
	bool prizPutIspl = false;
	int prizPutKor = -1;
	int prizPutIgd = -1;
	int isKormilec = -1;
	strcpy(ImpTxtFilePath, strTxtFilePath.c_str());
	strcpy(textIndicator, strTxtFilePath.c_str());
	File_ZAV = NULL;

	if (FFind(ImpTxtFilePath))
		File_ZAV = FOpen (ImpTxtFilePath, RD);

	if(File_ZAV)
	{
		for(;;)
		{
			ret = FReadText(File_ZAV, c_buf, MaxLen);
			if(ret == -1)
				break;
			char* line = new char[strlen(c_buf)+1];
			strcpy(line, c_buf);
			line[strlen(c_buf)] = '\x0';
			char *cur = line;
			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				//Ldv(c512_2); Std(_Ls_Raj);
			}
			cur = cur + fieldlen + 1; fieldlen=0;
			
			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_LE_PFUNls);
				strcpy(c512_3, substr_char(c512_2, 6, 6));
				Ldv(c512_3); Std(_FW_Nls);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			//Find Ls_Nls in B_Ls
			Ldd(_FW_PFUNls);
			Ldd(_LE_PFUNls);
			if(Cmp()) {
				prizPut = GetPrizPut(_LE_PFUNls);
				Ldd(_LE_PFUNls);
				Std(_FW_PFUNls);
			}
			else
				prizPut = true;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Ispl_Kud);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Ispl_Num);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			prizPutIspl = false;
			if(GetKey(B_Ispl))
				prizPutIspl = true;

			Clear(B_Ud);

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Ud_Psn);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				strcpy(c512_3, substr_char(c512_2, 0, 10));
				LdDate(c512_3);
				Ud_Dso = Stu(0);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(prizPut && prizPutIspl && Ud_Dso) {
				Put(B_Ud);
			}
			delete[] line;
		}
		FClose(File_ZAV);
	}
}
void ReverseMigration_BUd2(string strTxtFilePath) {
	IWStayFile* File_ZAV;
	const int MaxLen = 16000;
	char c512_1[512];
	char c512_2[512];
	char c512_3[512];
	char c_buf[MaxLen+1];
	int fieldlen = 0;
    int ret = 0; Clrd(_FW_PFUNls);
	char ImpTxtFilePath[200];
	bool prizPut = false;
	bool prizPutIspl = false;
	int prizPutKor = -1;
	int prizPutIgd = -1;
	int isKormilec = -1;
	strcpy(ImpTxtFilePath, strTxtFilePath.c_str());
	strcpy(textIndicator, strTxtFilePath.c_str());
	File_ZAV = NULL;

	if (FFind(ImpTxtFilePath))
		File_ZAV = FOpen (ImpTxtFilePath, RD);

	if(File_ZAV)
	{
		for(;;)
		{
			ret = FReadText(File_ZAV, c_buf, MaxLen);
			if(ret == -1)
				break;
			char* line = new char[strlen(c_buf)+1];
			strcpy(line, c_buf);
			line[strlen(c_buf)] = '\x0';
			char *cur = line;
			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				//Ldv(c512_2); Std(_Ls_Raj);
			}
			cur = cur + fieldlen + 1; fieldlen=0;
			
			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_LE_PFUNls);
				strcpy(c512_3, substr_char(c512_2, 6, 6));
				Ldv(c512_3); Std(_FW_Nls);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			//Find Ls_Nls in B_Ls
			Ldd(_FW_PFUNls);
			Ldd(_LE_PFUNls);
			if(Cmp()) {
				prizPut = GetPrizPut(_LE_PFUNls);
				Ldd(_LE_PFUNls);
				Std(_FW_PFUNls);
			}
			else
				prizPut = true;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Ispl_Kud);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Ispl_Num);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			prizPutIspl = false;
			if(GetKey(B_Ispl))
				prizPutIspl = true;

			Clear(B_Ud2);

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Ud2_Kud);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				StrForm(Ud2_Vhn, 9, c512_2);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				strcpy(c512_3, substr_char(c512_2, 0, 10));
				LdDate(c512_3);
				Ud2_Dpd = Stu(0);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Ud2_Ncsbb);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Ud2_Npsbb);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				StrForm(Ud2_Vklad, 25, c512_2);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				StrForm(Ud2_Fio, 50, c512_2);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Ud2_Indots);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				StrForm(Ud2_Abank, 50, c512_2);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				StrForm(Ud2_Nbank, 40, c512_2);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(prizPut && prizPutIspl && Ud2_Ncsbb) {
				Put(B_Ud2);
			}
			delete[] line;
		}
		FClose(File_ZAV);
	}
}
void ReverseMigration_BUd3(string strTxtFilePath) {
	IWStayFile* File_ZAV;
	const int MaxLen = 16000;
	char c512_1[512];
	char c512_2[512];
	char c512_3[512];
	char c_buf[MaxLen+1];
	int fieldlen = 0;
    int ret = 0; Clrd(_FW_PFUNls);
	char ImpTxtFilePath[200];
	bool prizPut = false;
	bool prizPutIspl = false;
	int prizPutKor = -1;
	int prizPutIgd = -1;
	int isKormilec = -1;
	strcpy(ImpTxtFilePath, strTxtFilePath.c_str());
	strcpy(textIndicator, strTxtFilePath.c_str());
	File_ZAV = NULL;

	if (FFind(ImpTxtFilePath))
		File_ZAV = FOpen (ImpTxtFilePath, RD);

	if(File_ZAV)
	{
		for(;;)
		{
			ret = FReadText(File_ZAV, c_buf, MaxLen);
			if(ret == -1)
				break;
			char* line = new char[strlen(c_buf)+1];
			strcpy(line, c_buf);
			line[strlen(c_buf)] = '\x0';
			char *cur = line;
			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				//Ldv(c512_2); Std(_Ls_Raj);
			}
			cur = cur + fieldlen + 1; fieldlen=0;
			
			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_LE_PFUNls);
				strcpy(c512_3, substr_char(c512_2, 6, 6));
				Ldv(c512_3); Std(_FW_Nls);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			//Find Ls_Nls in B_Ls
			Ldd(_FW_PFUNls);
			Ldd(_LE_PFUNls);
			if(Cmp()) {
				prizPut = GetPrizPut(_LE_PFUNls);
				Ldd(_LE_PFUNls);
				Std(_FW_PFUNls);
			}
			else
				prizPut = true;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Ispl_Kud);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Ispl_Num);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			prizPutIspl = false;
			if(GetKey(B_Ispl))
				prizPutIspl = true;

			Clear(B_Ud3);

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Ud3_Kud);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				StrForm(Ud3_Vhn, 9, c512_2);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				strcpy(c512_3, substr_char(c512_2, 0, 10));
				LdDate(c512_3);
				Ud3_Dpd = Stu(0);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Ud3_Indots);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
			}
			cur = cur + fieldlen + 1; fieldlen=0;
			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
			}
			cur = cur + fieldlen + 1; fieldlen=0;
			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
			}
			cur = cur + fieldlen + 1; fieldlen=0;
			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
			}
			cur = cur + fieldlen + 1; fieldlen=0;
			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
			}
			cur = cur + fieldlen + 1; fieldlen=0;
			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
			}
			cur = cur + fieldlen + 1; fieldlen=0;


			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				StrForm(Ud3_Adom, 100, c512_2);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				StrForm(Ud3_Fio, 50, c512_2);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(prizPut && prizPutIspl && Ud3_Indots) {
				Put(B_Ud3);
			}
			delete[] line;
		}
		FClose(File_ZAV);
	}
}
void ReverseMigration_BDet(string strTxtFilePath) {
	IWStayFile* File_ZAV;
	const int MaxLen = 16000;
	char c512_1[512];
	char c512_2[512];
	char c512_3[512];
	char c_buf[MaxLen+1];
	int fieldlen = 0;
    int ret = 0; Clrd(_FW_PFUNls);
	char ImpTxtFilePath[200];
	bool prizPut = false;
	bool prizPutIspl = false;
	int prizPutKor = -1;
	int prizPutIgd = -1;
	int isKormilec = -1;
	strcpy(ImpTxtFilePath, strTxtFilePath.c_str());
	strcpy(textIndicator, strTxtFilePath.c_str());
	File_ZAV = NULL;

	if (FFind(ImpTxtFilePath))
		File_ZAV = FOpen (ImpTxtFilePath, RD);

	if(File_ZAV)
	{
		for(;;)
		{
			ret = FReadText(File_ZAV, c_buf, MaxLen);
			if(ret == -1)
				break;
			char* line = new char[strlen(c_buf)+1];
			strcpy(line, c_buf);
			line[strlen(c_buf)] = '\x0';
			char *cur = line;
			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				//Ldv(c512_2); Std(_Ls_Raj);
			}
			cur = cur + fieldlen + 1; fieldlen=0;
			
			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_LE_PFUNls);
				strcpy(c512_3, substr_char(c512_2, 6, 6));
				Ldv(c512_3); Std(_FW_Nls);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			//Find Ls_Nls in B_Ls
			Ldd(_FW_PFUNls);
			Ldd(_LE_PFUNls);
			if(Cmp()) {
				prizPut = GetPrizPut(_LE_PFUNls);
				Ldd(_LE_PFUNls);
				Std(_FW_PFUNls);
			}
			else
				prizPut = true;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Ispl_Kud);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Ispl_Num);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			prizPutIspl = false;
			if(GetKey(B_Ispl))
				prizPutIspl = true;

			Clear(B_Det);

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				strcpy(c512_3, substr_char(c512_2, 0, 10));
				LdDate(c512_3);
				Ispl_Datar = Stu(0);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				strcpy(c512_3, substr_char(c512_2, 0, 10));
				LdDate(c512_3);
				Ispl_Datae = Stu(0);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				CommaToDot(c512_2);
				Ldv(c512_2); Std(_Ispl_Per);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Ispl_Per1);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(prizPut && prizPutIspl && Ispl_Datar) {
				Put(B_Det);
			}
			delete[] line;
		}
		FClose(File_ZAV);
	}
}
void ReverseMigration_BNUdr(string strTxtFilePath) {
	IWStayFile* File_ZAV;
	const int MaxLen = 16000;
	char c512_1[512];
	char c512_2[512];
	char c512_3[512];
	char c_buf[MaxLen+1];
	int fieldlen = 0;
    int ret = 0; Clrd(_FW_PFUNls);
	char ImpTxtFilePath[200];
	bool prizPut = false;
	bool prizPutIspl = false;
	int prizPutKor = -1;
	int prizPutIgd = -1;
	int isKormilec = -1;
	strcpy(ImpTxtFilePath, strTxtFilePath.c_str());
	strcpy(textIndicator, strTxtFilePath.c_str());
	File_ZAV = NULL;

	if (FFind(ImpTxtFilePath))
		File_ZAV = FOpen (ImpTxtFilePath, RD);

	if(File_ZAV)
	{
		for(;;)
		{
			ret = FReadText(File_ZAV, c_buf, MaxLen);
			if(ret == -1)
				break;
			char* line = new char[strlen(c_buf)+1];
			strcpy(line, c_buf);
			line[strlen(c_buf)] = '\x0';
			char *cur = line;
			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				//Ldv(c512_2); Std(_Ls_Raj);
			}
			cur = cur + fieldlen + 1; fieldlen=0;
			
			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_LE_PFUNls);
				strcpy(c512_3, substr_char(c512_2, 6, 6));
				Ldv(c512_3); Std(_FW_Nls);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			//Find Ls_Nls in B_Ls
			Ldd(_FW_PFUNls);
			Ldd(_LE_PFUNls);
			if(Cmp()) {
				prizPut = GetPrizPut(_LE_PFUNls);
				Ldd(_LE_PFUNls);
				Std(_FW_PFUNls);
			}
			else
				prizPut = true;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Ispl_Kud);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Ispl_Num);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			prizPutIspl = false;
			if(GetKey(B_Ispl))
				prizPutIspl = true;

			Clear(B_NUdr);

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_NUdr_God);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_NUdr_Mec);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				CommaToDot(c512_2);
				Ldv(c512_2); Std(_NUdr_Sved);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_NUdr_NSpis);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				strcpy(c512_3, substr_char(c512_2, 0, 10));
				LdDate(c512_3);
				NUdr_Datkvit = Stu(0);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_NUdr_NKvit);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_NUdr_Bj);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				CommaToDot(c512_2);
				Ldv(c512_2); Std(_NUdr_Ost);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_NUdr_Mecn);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_NUdr_Godn);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(prizPut && prizPutIspl && NUdr_God && NUdr_Mec) {
				Put(B_NUdr);
			}
			delete[] line;
		}
		FClose(File_ZAV);
	}
}
void ReverseMigration_BUdMec(string strTxtFilePath) {
	IWStayFile* File_ZAV;
	const int MaxLen = 16000;
	char c512_1[512];
	char c512_2[512];
	char c512_3[512];
	char c_buf[MaxLen+1];
	int fieldlen = 0;
    int ret = 0; Clrd(_FW_PFUNls);
	char ImpTxtFilePath[200];
	bool prizPut = false;
	bool prizPutIspl = false;
	bool prizPutNudr = false;
	int prizPutKor = -1;
	int prizPutIgd = -1;
	int isKormilec = -1;
	strcpy(ImpTxtFilePath, strTxtFilePath.c_str());
	strcpy(textIndicator, strTxtFilePath.c_str());
	File_ZAV = NULL;

	if (FFind(ImpTxtFilePath))
		File_ZAV = FOpen (ImpTxtFilePath, RD);

	if(File_ZAV)
	{
		for(;;)
		{
			ret = FReadText(File_ZAV, c_buf, MaxLen);
			if(ret == -1)
				break;
			char* line = new char[strlen(c_buf)+1];
			strcpy(line, c_buf);
			line[strlen(c_buf)] = '\x0';
			char *cur = line;
			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				//Ldv(c512_2); Std(_Ls_Raj);
			}
			cur = cur + fieldlen + 1; fieldlen=0;
			
			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_LE_PFUNls);
				strcpy(c512_3, substr_char(c512_2, 6, 6));
				Ldv(c512_3); Std(_FW_Nls);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			//Find Ls_Nls in B_Ls
			Ldd(_FW_PFUNls);
			Ldd(_LE_PFUNls);
			if(Cmp()) {
				prizPut = GetPrizPut(_LE_PFUNls);
				Ldd(_LE_PFUNls);
				Std(_FW_PFUNls);
			}
			else
				prizPut = true;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Ispl_Kud);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Ispl_Num);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			prizPutIspl = false;
			if(GetKey(B_Ispl))
				prizPutIspl = true;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_NUdr_God);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_NUdr_Mec);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			prizPutNudr = false;
			if(GetKey(B_NUdr))
				prizPutNudr = true;

			Clear(B_UdMec);

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_NUdr_Sved);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_NUdr_NSpis);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				strcpy(c512_3, substr_char(c512_2, 0, 10));
				LdDate(c512_3);
				NUdr_Datkvit = Stu(0);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_NUdr_NKvit);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_NUdr_Bj);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_NUdr_Ost);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_NUdr_Mecn);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_NUdr_Godn);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_NUdr_GodF);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_NUdr_MecF);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				CommaToDot(c512_2);
				Ldv(c512_2); Std(_NUdr_SNac);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(prizPut && prizPutIspl && prizPutNudr && NUdr_GodF && NUdr_MecF) {
				Put(B_UdMec);
			}
			delete[] line;
		}
		FClose(File_ZAV);
	}
}
void ReverseMigration_BPpl(string strTxtFilePath) {
	IWStayFile* File_ZAV;
	const int MaxLen = 16000;
	char c512_1[512];
	char c512_2[512];
	char c512_3[512];
	char c_buf[MaxLen+1];
	int fieldlen = 0;
    int ret = 0; Clrd(_FW_PFUNls);
	char ImpTxtFilePath[200];
	bool prizPut = false;
	int prizPutKor = -1;
	int prizPutIgd = -1;
	int isKormilec = -1;

	strcpy(ImpTxtFilePath, strTxtFilePath.c_str());
	strcpy(textIndicator, strTxtFilePath.c_str());

	File_ZAV = NULL;
	if (FFind(ImpTxtFilePath))
		File_ZAV = FOpen (ImpTxtFilePath, RD);

	if(File_ZAV)
	{
		for(;;)
		{
			ret = FReadText(File_ZAV, c_buf, MaxLen);
			if(ret == -1)
				break;
			char* line = new char[strlen(c_buf)+1];
			strcpy(line, c_buf);
			line[strlen(c_buf)] = '\x0';
			char *cur = line;
			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				//Ldv(c512_2); Std(_Ls_Raj);
			}
			cur = cur + fieldlen + 1; fieldlen=0;
			
			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_LE_PFUNls);
				strcpy(c512_3, substr_char(c512_2, 6, 6));
				Ldv(c512_3); Std(_FW_Nls);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			//Find Ls_Nls in B_Ls
			Ldd(_FW_PFUNls);
			Ldd(_LE_PFUNls);
			if(Cmp()) {
				prizPut = GetPrizPut(_LE_PFUNls);
				Ldd(_LE_PFUNls);
				Std(_FW_PFUNls);
			}
			else
				prizPut = true;

			Clear(B_Ppl);

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Ispl_Kud); //ошибочно переданное
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Ispl_Num); //ошибочно переданное
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Ppl_Prizn);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				strcpy(c512_3, substr_char(c512_2, 0, 10));
				LdDate(c512_3);
				Ppl_DatePs = Stu(0);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				strcpy(c512_3, substr_char(c512_2, 0, 10));
				LdDate(c512_3);
				Ppl_DatePk = Stu(0);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Ppl_Kfn);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				CommaToDot(c512_2);
				Ldv(c512_2); Std(_Ppl_Sum);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_Ppl_Tip);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				strcpy(c512_3, substr_char(c512_2, 0, 10));
				LdDate(c512_3);
				Ppl_DateObn = Stu(0);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(prizPut && Ppl_Prizn & Ppl_DatePs) {
				Put(B_Ppl);
			}
			delete[] line;
		}
		FClose(File_ZAV);
	}
}
void ReverseMigration_Total(string strTxtFilePath) {
	IWStayFile* File_ZAV;
	const int MaxLen = 16000;
	char c512_1[512];
	char c512_2[512];
	char c512_3[512];
	char c_buf[MaxLen+1];
	int fieldlen = 0;
    int ret = 0; Clrd(_FW_PFUNls);
	char ImpTxtFilePath[200];
	bool prizPut = false;

	strcpy(ImpTxtFilePath, strTxtFilePath.c_str());
	strcpy(textIndicator, strTxtFilePath.c_str());

	File_ZAV = NULL;
	if (FFind(ImpTxtFilePath))
		File_ZAV = FOpen (ImpTxtFilePath, RD);

	if(File_ZAV)
	{
		for(;;)
		{
			ret = FReadText(File_ZAV, c_buf, MaxLen);
			if(ret == -1)
				break;
			char* line = new char[strlen(c_buf)+1];
			strcpy(line, c_buf);
			line[strlen(c_buf)] = '\x0';
			char *cur = line;
			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				//Ldv(c512_2); Std(_Ls_Raj);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				//Ldv(c512_2); Std(_);
				Clrd(_T1);
			}
			cur = cur + fieldlen + 1; fieldlen=0;
			
			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_LE_PFUNls);
				strcpy(c512_3, substr_char(c512_2, 6, 6));
				Ldv(c512_3); Std(_FW_Nls);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			//Find Ls_Nls in B_Ls
			Ldd(_FW_PFUNls);
			Ldd(_LE_PFUNls);
			if(Cmp()) {
				prizPut = GetPrizPut(_LE_PFUNls);
				Ldd(_LE_PFUNls);
				Std(_FW_PFUNls);
			}
			else
				prizPut = true;

			Clear(B_TotalE);

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_T2);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_T3);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				CommaToDot(c512_2);
				Ldv(c512_2); Std(_T4);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				CommaToDot(c512_2);
				Ldv(c512_2); Std(_T5);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_T6);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_T7);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_T8);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				CommaToDot(c512_2);
				Ldv(c512_2); Std(_T9);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_T10);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_T11);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				CommaToDot(c512_2);
				Ldv(c512_2); Std(_T12);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_T13);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				strcpy(c512_3, substr_char(c512_2, 0, 10));
				LdDate(c512_3);
				T14 = Stu(0);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_T15);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_T16);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				strcpy(c512_3, substr_char(c512_2, 0, 10));
				LdDate(c512_3);
				T17 = Stu(0);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_T18);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				CommaToDot(c512_2);
				Ldv(c512_2); Std(_T19);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				CommaToDot(c512_2);
				Ldv(c512_2); Std(_T20);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_T21);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				CommaToDot(c512_2);
				Ldv(c512_2); Std(_T22);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				CommaToDot(c512_2);
				Ldv(c512_2); Std(_T23);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				strcpy(c512_3, substr_char(c512_2, 0, 10));
				LdDate(c512_3);
				T24 = Stu(0);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				strcpy(c512_3, substr_char(c512_2, 0, 10));
				LdDate(c512_3);
				T25 = Stu(0);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_T21);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				strcpy(c512_3, substr_char(c512_2, 0, 10));
				LdDate(c512_3);
				T27 = Stu(0);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				strcpy(c512_3, substr_char(c512_2, 0, 10));
				LdDate(c512_3);
				T28 = Stu(0);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_T29);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_T30);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_T31);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_T32);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_T33);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_T34);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				CommaToDot(c512_2);
				Ldv(c512_2); Std(_T35);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				CommaToDot(c512_2);
				Ldv(c512_2); Std(_T36);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				CommaToDot(c512_2);
				Ldv(c512_2); Std(_T37);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				CommaToDot(c512_2);
				Ldv(c512_2); Std(_T38);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				CommaToDot(c512_2);
				Ldv(c512_2); Std(_T39);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				CommaToDot(c512_2);
				Ldv(c512_2); Std(_T40);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_T41);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_T42);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_T43);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_T44);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(prizPut) {
				Put(B_TotalE);
			}
			delete[] line;
		}
		FClose(File_ZAV);
	}
}

void ReverseMigration_NSI_KLUL(string strTxtFilePath) {
	IWStayFile* File_ZAV;
	const int MaxLen = 16000;
	char c512_1[512];
	char c512_2[512];
	char c512_3[512];
	char c_buf[MaxLen+1];
	int fieldlen = 0;
    int ret = 0; Clrd(_FW_PFUNls);
	char ImpTxtFilePath[200];
	bool prizPut = false;

	strcpy(ImpTxtFilePath, strTxtFilePath.c_str());
	strcpy(textIndicator, strTxtFilePath.c_str());

	File_ZAV = NULL;
	if (FFind(ImpTxtFilePath))
		File_ZAV = FOpen (ImpTxtFilePath, RD);

	OpenCreate(NSI_KlUl, RDWR);

	if(File_ZAV && NSI_KlUl->bs)
	{
		for(;;)
		{
			ret = FReadText(File_ZAV, c_buf, MaxLen);
			if(ret == -1)
				break;
			char* line = new char[strlen(c_buf)+1];
			strcpy(line, c_buf);
			line[strlen(c_buf)] = '\x0';
			char *cur = line;
			Clear(NSI_KlUl);
			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_NSI_UlRaj);
			}
			cur = cur + fieldlen + 1; fieldlen=0;
			
			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_NSI_UlCode);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				StrForm(NSI_UlName, 50, c512_2);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_NSI_UlKat);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(NSI_UlRaj && NSI_UlCode)
				prizPut = true;

			if(prizPut) {
				Put(NSI_KlUl);
			}
			delete[] line;
		}
		FClose(File_ZAV);
	}
	if(NSI_KlUl->bs)
		Close(NSI_KlUl);
}

void ReverseMigration_KL_KLUL(string strTxtFilePath) {
	IWStayFile* File_ZAV;
	const int MaxLen = 16000;
	char c512_1[512];
	char c512_2[512];
	char c512_3[512];
	char c_buf[MaxLen+1];
	int fieldlen = 0;
    int ret = 0; Clrd(_FW_PFUNls);
	char ImpTxtFilePath[200];
	bool prizPut = false;

	strcpy(ImpTxtFilePath, strTxtFilePath.c_str());
	strcpy(textIndicator, strTxtFilePath.c_str());

	File_ZAV = NULL;
	if (FFind(ImpTxtFilePath))
		File_ZAV = FOpen (ImpTxtFilePath, RD);

	//Open(B_KlUl,WR | ANNONE);
	SetIndex(B_KlUl, 1);

	if(File_ZAV && B_KlUl->bs)
	{
		for(;;)
		{
			ret = FReadText(File_ZAV, c_buf, MaxLen);
			if(ret == -1)
				break;
			char* line = new char[strlen(c_buf)+1];
			strcpy(line, c_buf);
			line[strlen(c_buf)] = '\x0';
			char *cur = line;
			Clear(B_KlUl);
			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_KlUl_CodeRn);
			}
			cur = cur + fieldlen + 1; fieldlen=0;
			
			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_KlUl_CodeUl);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				StrForm(KlUl_Name, 50, c512_2);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_KlUl_CodeKUl);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			if(KlUl_CodeRn && KlUl_CodeUl)
				prizPut = true;

			if(prizPut) {
				Put(B_KlUl);
			}
			delete[] line;
		}
		FClose(File_ZAV);
	}
	//if(B_KlUl->bs)
		//Close(B_KlUl);
}

void CommaToDot(char * str) {
	unsigned short len = 16;//2^(6*8)
    for(int i = 0; i <= len; i++)
    {
        if(str[i] == '\0')
            break;
		if(str[i] == ',') {
			str[i] = '.'; //only one dot in number
			break;
		}
    }
}
//записать строку из csv в поле БД
/*
void GetStringField(char * cur, char * c512_1, char * c512_2, char * field, unsigned short length) {
	int fieldlen = 0;
	if(strstr(cur, ";"))
	{
		strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
		StrForm(field, length, c512_2);
	}
	cur = cur + fieldlen + 1; fieldlen=0;	
}
void GetDateField(char * cur, char * c512_1, char * c512_2, char * c512_3, FD * field) {
	int fieldlen = 0;
	if(strstr(cur, ";"))
	{
		strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
		strcpy(c512_3, substr_char(c512_2, 0, 10));
		LdDate(c512_3);
		field = Stu(0);
	}
	cur = cur + fieldlen + 1; fieldlen=0;
}
void GetNumberField(char * cur, char * c512_1, char * c512_2, FD * field) {
	int fieldlen = 0;
	if(strstr(cur, ";"))
	{
		strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
		Ldv(c512_2); Std(field);
	}
	cur = cur + fieldlen + 1; fieldlen=0;
}
*/
/*
void ReverseMigration_(string strTxtFilePath) {
	IWStayFile* File_ZAV;
	const int MaxLen = 16000;
	char c512_1[512];
	char c512_2[512];
	char c512_3[512];
	char c_buf[MaxLen+1];
	int fieldlen = 0;
    int ret = 0; Clrd(_FW_PFUNls);
	char ImpTxtFilePath[200];
	bool prizPut = false;
	int prizPutKor = -1;
	int prizPutIgd = -1;
	int isKormilec = -1;

	strcpy(ImpTxtFilePath, strTxtFilePath.c_str());
	strcpy(textIndicator, strTxtFilePath.c_str());

	File_ZAV = NULL;
	if (FFind(ImpTxtFilePath))
		File_ZAV = FOpen (ImpTxtFilePath, RD);

	if(File_ZAV)
	{
		for(;;)
		{
			ret = FReadText(File_ZAV, c_buf, MaxLen);
			if(ret == -1)
				break;
			char* line = new char[strlen(c_buf)+1];
			strcpy(line, c_buf);
			line[strlen(c_buf)] = '\x0';
			char *cur = line;
			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				//Ldv(c512_2); Std(_Ls_Raj);
			}
			cur = cur + fieldlen + 1; fieldlen=0;
			
			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				Ldv(c512_2); Std(_LE_PFUNls);
				strcpy(c512_3, substr_char(c512_2, 6, 6));
				Ldv(c512_3); Std(_FW_Nls);
			}
			cur = cur + fieldlen + 1; fieldlen=0;

			//Find Ls_Nls in B_Ls
			Ldd(_FW_PFUNls);
			Ldd(_LE_PFUNls);
			if(Cmp()) {
				prizPut = GetPrizPut(_LE_PFUNls);
				Ldd(_LE_PFUNls);
				Std(_FW_PFUNls);
			}
			else
				prizPut = true;

			Clear(B_);

			if(prizPut &&) {
				Put(B_);
			}
			delete[] line;
		}
		FClose(File_ZAV);
	}
}
*/
/*
//string
			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				StrForm(xxx_xxx, 25, c512_2);
			}
			cur = cur + fieldlen + 1; fieldlen=0;
//date
			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				strcpy(c512_3, substr_char(c512_2, 0, 10));
				LdDate(c512_3);
				xxx_xxx = Stu(0);
			}
			cur = cur + fieldlen + 1; fieldlen=0;
//number
			if(strstr(cur, ";"))
			{
				strcpy(c512_1, strstr(cur, ";")); fieldlen = strlen(cur) - strlen(c512_1); strncpy(c512_2, cur, fieldlen); c512_2[fieldlen] = '\x0';
				//CommaToDot(c512_2);
				Ldv(c512_2); Std(_xxx_xxx);
			}
			cur = cur + fieldlen + 1; fieldlen=0;
*/