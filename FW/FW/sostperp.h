#ifndef _SOSTPERP_
#define _SOSTPERP_
#define dfPFU 1
#define dfDOP 2
#define dfOSN 3
#define dfDPI 4
#define dfALL 5
#define dfDOPL 6



struct SostPerp
{

public:
  unsigned long ul_PFU;
  unsigned long ul_Dop;
  unsigned long ul_131;
  unsigned long ul_101_103;
 
  long ul_11131;

  long ul_11132;

  long ul_11135;
  unsigned long ul_132;
  unsigned long ul_133;
  unsigned long ul_134; 
  unsigned long ul_135; 
  unsigned long ul_136; 
  unsigned long ul_137; 
  unsigned long ul_138; 
  unsigned long ul_139; 
  unsigned long ul_140; 
  unsigned long ul_125; 
  unsigned long ul_123;
  unsigned long ul_12;
  unsigned long ul_297;
  unsigned long ul_298;

  unsigned long ul_Np;
  unsigned long ul_Dopl;  
  unsigned long ul_Osn;//CУММА БЕЗ НАДБАВОК ЧИСТЫЙ 131 И ДОПОЛНИТ
  unsigned long ul_DPI;
  unsigned long ul_NpDPI;
  int2 ul_Prc;


  unsigned long ul_709;
  unsigned long ul_708;

  unsigned long ul_808;
  unsigned long ul_809;
  unsigned long ul_800;
  unsigned long ul_801;
  unsigned long ul_802;
  unsigned long ul_810;
  unsigned long ul_812;
  unsigned long ul_814;   
  unsigned long ul_815; 
  unsigned long ul_816; 
  unsigned long ul_817; 
  unsigned long ul_818; 
  unsigned long ul_819; 
  unsigned long ul_820; 
  unsigned long ul_821; 
  unsigned long ul_822;  
  long ul_823;  
  unsigned long ul_824;  
  unsigned long ul_825;  
  unsigned long ul_826;  
  unsigned long ul_827;  //FRB_827
  unsigned long ul_828;  //FRB_827
  unsigned long ul_829;  //FRB
  unsigned long ul_849;  //FRB
  unsigned long ul_830;  //FRB
  unsigned long ul_835;  //FRB
  unsigned long ul_850;
  unsigned long ul_851;
  unsigned long ul_852; 
  unsigned long ul_853; 
  unsigned long ul_854; 
  unsigned long ul_855; 
  unsigned long ul_856; 
  unsigned long ul_857; 
  unsigned long ul_858; 
  unsigned long ul_990;
  
  unsigned long ul_991;
  unsigned long ul_890; 
 
  unsigned long ul_992;
  unsigned long ul_993; // 27.12.2007
  unsigned long ul_994; // 03.01.2008
  unsigned long ul_995; 
  unsigned long ul_996; 
  unsigned long ul_997; 
  unsigned long ul_282; 
  unsigned long ul_265;  

  unsigned long ul_257;//21.04.16
  unsigned long ul_284;//21.04.16
  unsigned long ul_296;//21.04.16

  unsigned long ul_299; // 1.5.2012
  unsigned long ul_261; 
  unsigned long ul_285; 
 unsigned long ul_Nadb;
 unsigned long ul_211; 
 unsigned long ul_212; 
 unsigned long ul_213; 
 unsigned long ul_214; 
 unsigned long ul_215; 
 unsigned long ul_2229; 
  unsigned long All_Sum;
  unsigned long ul_Ind; //сумма индексации - не входит в All_Sum

  
  SostPerp(StayDate Dt);
  SostPerp(StayDate Dt,int Per);
  void SostPerp_in_Per(StayDate Dt);
   void SostPerp_in_Per211(StayDate Dt);
  void SostPerp::Clear();
  SostPerp::SostPerp();
  void SostPerp::Get(unsigned int Kfn, FD *Field);
  void SostPerp::SetPerp();//переписываем значения в Перп
  void SostPerp::SumIndNac(StayDate Dt, int DPIproc, ulong* sind); //сумма индексации

};

#endif