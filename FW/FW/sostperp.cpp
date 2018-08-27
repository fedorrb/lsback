
#include "klovr.h"
#include "Ls.h"
#include "naz_pel.h"
#include "naz_bai.h"
#include "naz_pen.h"
#include "sostperp.h"
#include "Ls_func.h"
#include "pensclass.h"

void SostPerp::Clear()
{
   ul_Np = 0;//
   ul_Dopl = 0;//  

   ul_PFU = 0;
   ul_Dop = 0;
   ul_131 = 0;
   ul_101_103 = 0;
   ul_11131 = 0;
   ul_11132 = 0;
   ul_11135 = 0;
   ul_132 = 0;
   ul_133 = 0;
   ul_123 = 0;
   ul_12  = 0; // 22.09.08
   ul_134 = 0; 
   ul_135 = 0; 
   ul_140 = 0;
   ul_136 = 0; 
   ul_137 = 0; 
   ul_138 = 0;
   ul_139 = 0;
   ul_136 = 0; 
   ul_125 = 0; 
   ul_282 = 0; 
   ul_265 = 0; 
   ul_284 = 0;
   ul_296 = 0;
   ul_257 = 0;
   ul_297 = 0;
   ul_298 = 0;
   ul_Osn = 0;//CУММА БЕЗ НАДБАВОК ЧИСТЫЙ 131 И ДОПОЛНИТ
   ul_DPI = 0;
   ul_NpDPI = 0;
   ul_Prc = 0;

   ul_709 = 0;
   ul_708 = 0;

   ul_808 = 0;
   ul_809 = 0;
   ul_800 = 0;
   ul_801 = 0;
   ul_802 = 0;
   ul_810 = 0;
   ul_812 = 0;
   ul_814 = 0; 
   ul_815 = 0; 
   ul_817 = 0; 
   ul_818 = 0; 
   ul_819 = 0; 
   ul_821 = 0; 
   ul_822 = 0; 
   ul_823 = 0; 
   ul_824 = 0; 
   ul_825 = 0; 
   ul_826 = 0; 
   ul_827 = 0; //FRB_827
   ul_828 = 0; //FRB_827
   ul_820 = 0;
      
   ul_850 = 0;
   ul_851 = 0;
   ul_852 = 0; 
   ul_853 = 0; 
   ul_854 = 0; 
   ul_855 = 0; 
   ul_856 = 0; 
   ul_857 = 0; 
   ul_858 = 0; 
   ul_890 = 0; 
  
   ul_990 = 0;
   ul_991 = 0;
   ul_992 = 0;
   ul_993 = 0; 
   ul_994 = 0; 
   ul_995 = 0; 
   ul_996 = 0; 
   ul_997 = 0; 
   All_Sum = 0;
   ul_Ind = 0;
  
  ul_299 = 0; // 1.5.2012
  ul_261 = 0; 
  ul_285 = 0;
  ul_Nadb = 0;
   ul_211 = 0; 
   ul_212 = 0; 
   ul_213 = 0; 
   ul_214 = 0; 
   ul_215 = 0; 
   ul_2229 = 0; 
   ul_849 = 0;
   ul_830 = 0;
   ul_835 = 0;
}

SostPerp::SostPerp()
{
      SostPerp::Clear();
}

SostPerp::SostPerp(StayDate Dt)
{
      SostPerp::Clear();
      SetBegin (Perp);
	  while ( GetNext (Perp) ) 
	  {
		  //         if ( (MaxVZak==132) && (Perp_Zak!=134)) continue; //Glb_VZak != Perp_Zak &&
		  if (Glb_Pr2SKL==2)
		  {
			  if ( (MaxVZak==132) && (Perp_Zak!=134)) continue;
		  }
		  else
		  {
			  if ( Glb_Zak != Perp_Zak)continue; //Glb_VZak != Perp_Zak &&
		  }
		  if (!((!GetBit(&Wls_MaskOsb, 27) ||!Perp_NMDolja) &&
			  (!GetBit(&Wls_MaskOsb, 28) || Perp_NMDolja == Glb_NmDolja)
			  )
			  ) continue;    

		  if (Perp_DateBeg == Dt-1) continue;
		  if ((Perp_DateBeg <= Dt && Dt < Perp_DateEnd) || 
			  (Perp_DateBeg <= Dt && Dt <= Perp_DateEnd && Perp_DateEnd ==  Perp_DateBeg ))
		  {
			  if(PensPioner.Razdelenie || (Perp_Zak >= 4 && Perp_Zak < 131))// && PensPioner.ZK == 15)
			  {
				//  Ut.Sub_(_Perp_Summa,_Perp_Razm857); // 15.05.2012
			  	  Ut.Sub_(_Perp_Summa,_Perp_Razm858); // 17.05.2012
				  SostPerp::ul_PFU   = *(long*)Perp_RazmPF; //osn
				  SostPerp::ul_Dop =  *(long*)Perp_Summa - SostPerp::ul_PFU;
			  }
			  else 
			  {
				  SostPerp::ul_PFU = *(long*)Perp_Summa;
				  SostPerp::ul_Dop = 0;
			  }
			  SostPerp::ul_Np = *(long*)Perp_RazmNP; // сумма доплат в B_Np ( 118 + 265 + ....)
			  SostPerp::ul_Osn   = *(long*)Perp_Summa; //osn

			  SostPerp::ul_DPI  = *(long*)Perp_RazmGos;
			  SostPerp::ul_990   = *(long*)Perp_Razm908;
			  SostPerp::ul_991   = *(long*)Perp_Razm991;
			  SostPerp::ul_708   = *(long*)Perp_RazmDot;
			  SostPerp::ul_801	 = *(long*)Perp_Razm801;
			  SostPerp::ul_802	 = *(long*)Perp_Razm802;
			  SostPerp::ul_810	 = *(long*)Perp_Razm810;
			  SostPerp::ul_812	 = *(long*)Perp_Razm812;
			  SostPerp::ul_814   = *(long*)Perp_Razm814;
			  SostPerp::ul_815   = *(long*)Perp_Razm815;
			  SostPerp::ul_816   = *(long*)Perp_Razm816;
			  SostPerp::ul_817   = *(long*)Perp_Razm817;
			  SostPerp::ul_818   = *(long*)Perp_Razm818;
			  SostPerp::ul_819   = *(long*)Perp_Razm819;
			  SostPerp::ul_820	 = *(long*)Perp_Razm820;
			  SostPerp::ul_821	 = *(long*)Perp_Razm821;
			  SostPerp::ul_822	 = *(long*)Perp_Razm822;
			  SostPerp::ul_823	 = *(long*)Perp_Razm823;
              SostPerp::ul_824	 = *(long*)Perp_Razm824;
			  SostPerp::ul_825	 = *(long*)Perp_Razm825;
	          SostPerp::ul_826	 = *(long*)Perp_Razm826;
              SostPerp::ul_827	 = *(long*)Perp_Razm827;//FRB_827
              SostPerp::ul_828	 = *(long*)Perp_Razm828;//FRB_827
              SostPerp::ul_829	 = *(long*)Perp_Razm829;//FRB
              SostPerp::ul_849	 = *(long*)Perp_Razm849;//FRB
              SostPerp::ul_830	 = *(long*)Perp_Razm830;//FRB
			  SostPerp::ul_835	 = *(long*)Perp_Razm835;//FRB
			  SostPerp::ul_850   = *(long*)Perp_Razm850;
			  //	  SostPerp::ul_851   = *(long*)Perp_Razm851;
			  SostPerp::ul_852   = *(long*)Perp_Razm852;
			  SostPerp::ul_853   = *(long*)Perp_Razm853;
			  SostPerp::ul_854   = *(long*)Perp_Razm854;
			  SostPerp::ul_855   = *(long*)Perp_Razm855;
			  SostPerp::ul_856   = *(long*)Perp_Razm856;
			  SostPerp::ul_857   = *(long*)Perp_Razm857;
  			  SostPerp::ul_858   = *(long*)Perp_Razm858;
              SostPerp::ul_890   = *(long*)Perp_Razm890;
			  SostPerp::ul_808	 = *(long*)Perp_Razm808;
			  SostPerp::ul_709	 = *(long*)Perp_Razm709;
			  SostPerp::ul_809	 = *(long*)Perp_Razm809;
			  SostPerp::ul_800	 = *(long*)Perp_Razm800;
			  // A.C. 30.03.07			  SostPerp::ul_992	 = *(long*)Perp_Razm992;
			  SostPerp::ul_992	 = *(long*)Perp_Razm992; // 01.01.2008
			  SostPerp::ul_993   = *(long*)Perp_Razm993; // sid 27.12.2008
			  SostPerp::ul_994   = *(long*)Perp_Razm994; //03.01.2008
			  SostPerp::ul_995   = *(long*)Perp_Razm995; //03.01.2008
			  SostPerp::ul_996   = *(long*)Perp_Razm996; //03.01.2008
			  SostPerp::ul_997   = *(long*)Perp_Razm997; //25.05.2011
			  //дополнительные КФНы
			  SostPerp::ul_123 = 0;
			  SostPerp::ul_132 = *(long*)Perp_RazmPNSt; 
			  SostPerp::ul_135 = *(long*)Perp_RazmPMin;
			  SostPerp::ul_140 = *(long*)Perp_RazmMZar;
			  SostPerp::ul_133 = *(long*)Perp_RazmDKf;
			  SostPerp::ul_134 = *(long*)Perp_RazmOtct;    
              SostPerp::ul_137 = *(long*)Perp_RazmM137;  
              SostPerp::ul_136 = *(long*)Perp_RazmM136;  
			  SostPerp::All_Sum = SostPerp::ul_Osn
				  + SostPerp::ul_709 + SostPerp::ul_708
				  + SostPerp::ul_800 + SostPerp::ul_801 + SostPerp::ul_802 + SostPerp::ul_808
				  + SostPerp::ul_809 + SostPerp::ul_810 + SostPerp::ul_812 + SostPerp::ul_814 
				  + SostPerp::ul_815 + SostPerp::ul_816 + SostPerp::ul_817 + SostPerp::ul_818 
				  + SostPerp::ul_819 + SostPerp::ul_820 + SostPerp::ul_821 + SostPerp::ul_822
				  + SostPerp::ul_850 + SostPerp::ul_852 + SostPerp::ul_853 + SostPerp::ul_854  // sid  + SostPerp::ul_851
				  + SostPerp::ul_855 + SostPerp::ul_856 + SostPerp::ul_990 + SostPerp::ul_991
				  + SostPerp::ul_992 + SostPerp::ul_993 + SostPerp::ul_994 + SostPerp::ul_995
				  + SostPerp::ul_996 + SostPerp::ul_823 + SostPerp::ul_824 + SostPerp::ul_825 
				  + SostPerp::ul_826 + SostPerp::ul_857 + SostPerp::ul_858 + SostPerp::ul_890
				  + SostPerp::ul_997 + SostPerp::ul_827 + SostPerp::ul_828 + SostPerp::ul_829
				  + SostPerp::ul_849 + SostPerp::ul_830 + SostPerp::ul_835; //FRB_827
			  break;
		  }
	  }
////22-03-2012
	  if (ul_823 < 0) ul_Osn =  ul_Osn  + ul_823;
    ul_11131 = 0;
	ul_11132 = 0;
	ul_11135 = 0;
    ul_123 = 0;
    ul_131 = 0;
    ul_101_103 = 0;
	ul_132 = 0;
    ul_133 = 0;
	ul_134 = 0;
	ul_135 = 0;
	ul_140 = 0;
	ul_137 = 0;
	ul_138 = 0;
	ul_139 = 0;
	ul_136 = 0;
	ul_125 = 0;
	ul_282 = 0;
	ul_265 = 0;
    ul_284 = 0;
    ul_296 = 0;
    ul_257 = 0;
	 ul_299 = 0; // 1.5.2012
     ul_261 = 0; 
     ul_285 = 0;

	   ul_211 = 0; 
	   ul_212 = 0; 
	   ul_213 = 0; 
	   ul_214 = 0; 
	   ul_215 = 0; 
       ul_2229 = 0; 
    SetBegin (Pravo);
    while ( GetNext (Pravo) )
    {
    
     if(Pravo_VPen != MaxVPen && Pravo_VPen != Glb_VZak) continue;
      if (PensPioner.Dvosklad && Pravo_Zak != 134) continue;
	  if (PensPioner.Razdelenie && PensPioner.ZK != 15 &&
		  Pravo_Zak != 1 ) continue;
      if (Pravo_Nr == -1) continue;
      if ((!GetBit(&Wls_MaskOsb, 27) || !Pravo_NMDolja) &&
          (!GetBit(&Wls_MaskOsb, 28) || Pravo_NMDolja == Glb_NmDolja))
        {
            while ( GetNext (Per) )
            if (Dt >= Per_DateBeg && Dt <= Per_DateEnd )
            {
                if(PensPioner.Shifr == 220 || PensPioner.Shifr == 221 || PensPioner.Shifr == 270 || PensPioner.Shifr == 271)
                {
                    Ldd(_Per_RazmOgr);
                    ul_101_103 = Stul(2);
                }
                 SetBegin(NpOsn);
                while(GetNext(NpOsn))
                {
				if (Pravo_Zak == 12) {
                 if (NpOsn_Code == 12) {Ldd(_NpOsn_Razm); Ldul(ul_12,2); Add(); ul_12 =  Stul(2);} // 22.09.08 sid
                 if (NpOsn_Code == 123) {Ldd(_NpOsn_Razm); Ldul(ul_123,2); Add(); ul_123 =  Stul(2);}
				}
				else
				{

				 if (NpOsn_Code == 131){
                     Ldd(_NpOsn_Razm); Ldul(ul_131,2); Add(); ul_131 =  Stul(2);
                 }
				 if (NpOsn_Code >= 101 && NpOsn_Code <= 103){
                     if(PensPioner.Shifr == 220 || PensPioner.Shifr == 221 || PensPioner.Shifr == 270 || PensPioner.Shifr == 271)
                         ul_101_103 = 0;
                     Ldd(_NpOsn_Razm); Ldul(ul_101_103,2); Add(); ul_101_103 = Stul(2);
                 }
		         if (NpOsn_Code == 132) {Ldd(_NpOsn_Razm); Ldul(ul_132,2); Add(); ul_132 =  Stul(2);}
 
				 if (NpOsn_Code == 11131) {Ldd(_NpOsn_Razm); Ldl(ul_11131,2); Add(); ul_11131 =  Stl(2);}
                 if (NpOsn_Code == 11132) {Ldd(_NpOsn_Razm); Ldl(ul_11132,2); Add(); ul_11132 =  Stl(2);}
                 if (NpOsn_Code == 11135) {Ldd(_NpOsn_Razm); Ldl(ul_11135,2); Add(); ul_11135 =  Stl(2);}
                
				 if (NpOsn_Code == 133) {Ldd(_NpOsn_Razm); Ldul(ul_133,2); Add(); ul_133 =  Stul(2);}
                 if (NpOsn_Code == 134) {Ldd(_NpOsn_Razm); Ldul(ul_134,2); Add(); ul_134 =  Stul(2);}
		         if (NpOsn_Code == 135) {Ldd(_NpOsn_Razm); Ldul(ul_135,2); Add(); ul_135 =  Stul(2);} // sid
 		         if (NpOsn_Code == 137) {Ldd(_NpOsn_Razm); Ldul(ul_137,2); Add(); ul_137 =  Stul(2);} // sid
   		         if (NpOsn_Code == 136) {Ldd(_NpOsn_Razm); Ldul(ul_136,2); Add(); ul_136 =  Stul(2);} // sid
				 if (NpOsn_Code == 125) {Ldd(_NpOsn_Razm); Ldul(ul_125,2); Add(); ul_125 =  Stul(2);} // sid
   		         if (NpOsn_Code == 138) {Ldd(_NpOsn_Razm); Ldul(ul_138,2); Add(); ul_138 =  Stul(2);} // sid
   		         if (NpOsn_Code == 139) {Ldd(_NpOsn_Razm); Ldul(ul_139,2); Add(); ul_139 =  Stul(2);} // sid
				 if (NpOsn_Code == 140) {Ldd(_NpOsn_Razm); Ldul(ul_140,2); Add(); ul_140 =  Stul(2);}
				}  
              

                }
//////////////////////////
				 SetBegin(Np);
				 while(GetNext(Np)) {
					 //////////////////////15-01-2012
                 if (Np_Code == 297 || Np_Code == 298) {Ldd(_Np_Razm); Ldul(ul_297,2); Add(); ul_297 =  Stul(2);}
                 if (Np_Code == 261) {Ldd(_Np_Razm); Ldul(ul_261,2); Add(); ul_261 =  Stul(2);} // 1.5.2012 sid
                 if (Np_Code == 285) {Ldd(_Np_Razm); Ldul(ul_285,2); Add(); ul_285 =  Stul(2);} 
                 if (Np_Code == 284 && ul_284 == 0) {
                     Ldd(_Np_Razm); Ldul(ul_284,2); Add(); ul_284 =  Stul(2);
                 } 
                 if (Np_Code == 296 && ul_296 == 0) {
                     Ldd(_Np_Razm); Ldul(ul_296,2); Add(); ul_296 =  Stul(2);
                 } 
                 if (Np_Code == 257 && ul_257 == 0) {
                     Ldd(_Np_Razm); Ldul(ul_257,2); Add(); ul_257 =  Stul(2);
                 } 
				 if (Np_Code == 299) {Ldd(_Np_Razm); Ldul(ul_299,2); Add(); ul_299 =  Stul(2);} 
				 //////////////////////
                 if (Np_Code == 211) {Ldd(_Np_Razm); Ldul(ul_211,2); Add(); ul_211 =  Stul(2);}   
				 if (Np_Code == 212) {Ldd(_Np_Razm); Ldul(ul_212,2); Add(); ul_212 =  Stul(2);}
				 if (Np_Code == 213) {Ldd(_Np_Razm); Ldul(ul_213,2); Add(); ul_213 =  Stul(2);}
				 if (Np_Code == 214) {Ldd(_Np_Razm); Ldul(ul_214,2); Add(); ul_214 =  Stul(2);}
				 if (Np_Code == 215) {Ldd(_Np_Razm); Ldul(ul_215,2); Add(); ul_215 =  Stul(2);}

				 }

            }
        } 
    }     
    //*******************************
    SetBegin(Pravo);
    while(GetNext(Pravo))
    {
        if(PensPioner.Dvosklad && Pravo_Zak == 134 && Pravo_Nr == -1)
        {
            if ((!GetBit(&Wls_MaskOsb, 27) || !Pravo_NMDolja) &&
                (!GetBit(&Wls_MaskOsb, 28) || Pravo_NMDolja == Glb_NmDolja))
            {
                SetBegin(Per);
                while ( GetNext (Per) )
                    if (Dt >= Per_DateBeg && Dt <= Per_DateEnd )
                    {
                        SetBegin(NpOsn);
                        while(GetNext(NpOsn))
                        {
                            //if (NpOsn_Code == 131){
                                //Ldd(_NpOsn_Razm); Ldul(ul_131,2); Add(); ul_131 =  Stul(2);
                            //}
                            if (NpOsn_Code >= 101 && NpOsn_Code <= 103){
                                Ldd(_NpOsn_Razm); Ldul(ul_101_103,2); Add(); ul_101_103 = Stul(2);
                            }
                        }
                    }
            }
        }
    }
    //*******************************

}


SostPerp::SostPerp(StayDate Dt,int Per)
{
    if (Per == 0 )SostPerp::SostPerp(Dt);
    else  
	{
		if (Dt == DatePack (1,1,2018)) 
			SostPerp::SostPerp_in_Per(Dt);
		else 
		{
			SostPerp::SostPerp_in_Per211(Dt);
			SostPerp::SostPerp_in_Per(Dt);
			
		}
	}
}



void SostPerp::SostPerp_in_Per(StayDate Dt)
{
    SostPerp::Clear();
	Array_Per Arr_Per;
	Arr_Per.Put_from_Per(Dt);
	Array_HNp Arr_Np;
	Arr_Np.Put_from_Np(Dt);
	

	int KfnPFU,KfnDop;

	Arr_Per.GetKfn(&KfnPFU,&KfnDop);
	if (!KfnDop)
		SostPerp::ul_Dop = 0;
	else 
		Arr_Per.Create_Sum(&ul_Dop,KfnDop);
	if (!KfnPFU)	
	    SostPerp::ul_PFU = 0;
	else
	    Arr_Per.Create_Sum(&ul_PFU,KfnPFU);

	Arr_Per.Create_Sum(&ul_708,708);
	Arr_Per.Create_Sum(&ul_800,800);
	Arr_Per.Create_Sum(&ul_801,801);
	Arr_Per.Create_Sum(&ul_802,802);
	Arr_Per.Create_Sum(&ul_808,808);
	Arr_Per.Create_Sum(&ul_809,809);
	Arr_Per.Create_Sum(&ul_810,810);
	Arr_Per.Create_Sum(&ul_812,812);
	Arr_Per.Create_Sum(&ul_814,814);
	Arr_Per.Create_Sum(&ul_815,815);
	Arr_Per.Create_Sum(&ul_816,816);
	Arr_Per.Create_Sum(&ul_817,817);
	Arr_Per.Create_Sum(&ul_818,818);
	Arr_Per.Create_Sum(&ul_819,819);
	Arr_Per.Create_Sum(&ul_820,820);
	Arr_Per.Create_Sum(&ul_821,821);
	Arr_Per.Create_Sum(&ul_822,822);
	Arr_Per.Create_Sum(&ul_824,824);

	Arr_Per.Create_Sum(&ul_823,823);
	Arr_Per.Create_Sum(&ul_825,825);
	Arr_Per.Create_Sum(&ul_826,826);
	Arr_Per.Create_Sum(&ul_827,827); //FRB_827
	Arr_Per.Create_Sum(&ul_835,835); //FRB
	Arr_Per.Create_Sum(&ul_828,828); //FRB_827
    Arr_Per.Create_Sum(&ul_829,829); //FRB
    Arr_Per.Create_Sum(&ul_849,849); //FRB
    Arr_Per.Create_Sum(&ul_849,830); //FRB
	Arr_Per.Create_Sum(&ul_850,850);
	Arr_Per.Create_Sum(&ul_852,852);
	Arr_Per.Create_Sum(&ul_853,853);
    Arr_Per.Create_Sum(&ul_854,854);
	Arr_Per.Create_Sum(&ul_855,855);
	Arr_Per.Create_Sum(&ul_856,856);
 	Arr_Per.Create_Sum(&ul_857,857);
 	Arr_Per.Create_Sum(&ul_858,858);
    Arr_Per.Create_Sum(&ul_709,709);
 	Arr_Per.Create_Sum(&ul_890,890);

	Arr_Per.Create_Sum(&ul_990,990);
// Доплата 908 и доплата 990 - взаимоисключающие 
// если нет доплпті 990, то в єто поле помещаем 908 
	if (ul_990 == 0) Arr_Per.Create_Sum(&ul_990,908);
	Arr_Per.Create_Sum(&ul_991,991);
	Arr_Per.Create_Sum(&ul_992,992);
    Arr_Per.Create_Sum(&ul_993,993);  // 27.12.2007
    Arr_Per.Create_Sum(&ul_994,994);  // 27.12.2007
    Arr_Per.Create_Sum(&ul_995,995);  // 26.03.2008
	Arr_Per.Create_Sum(&ul_996,996);  // 26.03.2008
	Arr_Per.Create_Sum(&ul_997,997);  // 25.05.2011
	Arr_Per.Create_Sum(&All_Sum,0);

   //дополнительные КФНы
    Arr_Np.Get_Kfn_ijd(&ul_123,-1,123);
	Arr_Np.Get_Kfn_ijd(&ul_131,-1,131);

    Arr_Np.Get_Kfn_ijd(&ul_101_103,-1,101);
    if(!ul_101_103)
        Arr_Np.Get_Kfn_ijd(&ul_101_103,-1,102);
    if(!ul_101_103)
        Arr_Np.Get_Kfn_ijd(&ul_101_103,-1,103);

	Arr_Np.Get_Kfn_ijd(&ul_11131,-1,11131);
	Arr_Np.Get_Kfn_ijd(&ul_11132,-1,11132);
	Arr_Np.Get_Kfn_ijd(&ul_11135,-1,11135);
	Arr_Np.Get_Kfn_ijd(&ul_132,-1,132);
	Arr_Np.Get_Kfn_ijd(&ul_133,-1,133);
	Arr_Np.Get_Kfn_ijd(&ul_134,-1,134);
	Arr_Np.Get_Kfn_ijd(&ul_135,-1,135);
	Arr_Np.Get_Kfn_ijd(&ul_140,-1,140);
	Arr_Np.Get_Kfn_ijd(&ul_125,-1,125); 
	Arr_Np.Get_Kfn_ijd(&ul_137,-1,137); 
	Arr_Np.Get_Kfn_ijd(&ul_136,-1,136); 
	Arr_Np.Get_Kfn_ijd(&ul_138,-1,138); 
	Arr_Np.Get_Kfn_ijd(&ul_139,-1,139); 
	Arr_Np.Get_Kfn_ijd(&ul_282,-1,282); 
	Arr_Np.Get_Kfn_ijd(&ul_297,-1,297); 
	Arr_Np.Get_Kfn_ijd(&ul_298,-1,298); 
    
	Arr_Np.Get_Kfn_ijd(&ul_299,-1,299); 
	Arr_Np.Get_Kfn_ijd(&ul_261,-1,261); 
	Arr_Np.Get_Kfn_ijd(&ul_285,-1,285); 
    Arr_Np.Get_Kfn_ijd(&ul_284,-1,284);
    Arr_Np.Get_Kfn_ijd(&ul_296,-1,296);
    Arr_Np.Get_Kfn_ijd(&ul_257,-1,257);


	Arr_Np.Get_Kfn_ijd(&ul_211,-1,211);
	Arr_Np.Get_Kfn_ijd(&ul_212,-1,212);
	Arr_Np.Get_Kfn_ijd(&ul_213,-1,213);
	Arr_Np.Get_Kfn_ijd(&ul_214,-1,214);
	Arr_Np.Get_Kfn_ijd(&ul_215,-1,215);
	Arr_Np.Get_Kfn_ijd(&ul_2229,-1,2229);

	//	Arr_Np.Get_Kfn_ijd(&ul_265,-1,2); //sid
	Arr_Np.Get_Kfn_ijd(&ul_12,-1,12); // 22.09.08 
	Arr_Per.Create_SumOsn(_Int_tmpPer);
	ul_Osn = Int_tmpPer;// - (ul_132 + ul_133);
/////22-03-2012
	if (ul_823 < 0) ul_Osn =  ul_Osn  + ul_823;
	Arr_Np.Get_Np_Razm(_Int_tmpPer,-1);
	ul_Np = Int_tmpPer;
	unsigned long sum265 = 0;
	Arr_Np.Get_Kfn_ijd(&sum265,-1,265);
	ul_Np += sum265;//вся сумма надбавок
    ul_265 = sum265; 
	//Для ДПИ
	int kfn;
	int Prc = 0;
	Arr_Np.Put_from_Np181(Dt); // 09.08.10
	if (Arr_Np.ifKfnDPI(-1,&kfn))
	{
		for(int i=0; i<= Arr_Np.ColIgd(); i++)
		{
				Arr_Np.Get_Np_Razm(_Int_tmpPer,i);
				Arr_Np.GetProcDpi(&Prc,i);
				ul_Prc = Prc;
				Int_tmpPer = (Int_tmpPer*Prc)/100;
				ul_NpDPI += Int_tmpPer;
		}
     ul_NpDPI += sum265;
	}
    // ul_NpDPI += sum265;

	//сумируем доплаты FRB_827
	SostPerp::ul_Dopl =  ul_709 + ul_708 
		+ ul_800 + ul_801 + ul_802 + ul_808 + ul_809 + ul_810 + ul_812  
		+ ul_814 + ul_815 + ul_816 + ul_817  + ul_818 + ul_819 + ul_820 + ul_821 + ul_822 
		+ ul_823  + ul_824 + ul_825 + ul_826 + ul_890 + ul_827 + ul_828 
		+ ul_850 + ul_852 + ul_853 + ul_854 + ul_855 + ul_856 + ul_857  + ul_858 
	    + ul_990 + ul_991 + ul_992 + ul_993 + ul_994 + ul_995  + ul_996  + ul_997 + ul_829
        + ul_849 + ul_830 + ul_835; 

	//сумма индексации
	SostPerp::SumIndNac(Dt,Prc,&ul_Ind);

}
//////////////////////
void SostPerp::SostPerp_in_Per211(StayDate Dt)
{
    SostPerp::Clear();
	Array_Per Arr_Per;
	Arr_Per.Put_from_Per(Dt);
	Array_HNp Arr_Np;
	Arr_Np.Put_from_Np(Dt);
   //дополнительные КФНы
	ul_211 = ul_212 = ul_213 = ul_214 = ul_215 = 0;

	Arr_Np.Get_Kfn_ijd(&ul_211,-1,211);
	Arr_Np.Get_Kfn_ijd(&ul_212,-1,212);
	Arr_Np.Get_Kfn_ijd(&ul_213,-1,213);
	Arr_Np.Get_Kfn_ijd(&ul_214,-1,214);
	Arr_Np.Get_Kfn_ijd(&ul_215,-1,215);
}
/////////////////////
void SostPerp::Get(unsigned int Kfn, FD *Field)
{
   Clrd(Field);
   switch(Kfn)
   {
   case 1: Ldul(SostPerp::ul_PFU,2); Std(Field); break;
   case 2: Ldul(SostPerp::ul_Dop,2); Std(Field); break;
   case 3: Ldul(SostPerp::ul_Osn,2); Std(Field); break;
   case 4: Ldul(SostPerp::ul_DPI,2); Std(Field); break;
   case 5: Ldul(SostPerp::All_Sum,2); Std(Field); break;
   case 6:
       Ldul(SostPerp::ul_Dopl,2);
       Std(Field);
       break;
   case 7: Ldul(SostPerp::ul_Ind,2); Std(Field); break;
 
   case 132: Ldul(SostPerp::ul_132,2); Std(Field); break;
   case 133: Ldul(SostPerp::ul_133,2); Std(Field); break;
   case 134: Ldul(SostPerp::ul_134,2); Std(Field); break; // sid
   case 135: Ldul(SostPerp::ul_135,2); Std(Field); break; //sid
   case 137: Ldul(SostPerp::ul_137,2); Std(Field); break; //sid
   case 125: Ldul(SostPerp::ul_125,2); Std(Field); break; //sid
   case 138: Ldul(SostPerp::ul_138,2); Std(Field); break; //sid
   case 139: Ldul(SostPerp::ul_139,2); Std(Field); break; //sid
   case 140: Ldul(SostPerp::ul_140,2); Std(Field); break; //FRB 14.12.17

   case 136: Ldul(SostPerp::ul_136,2); Std(Field); break; //sid
   case 123: Ldul(SostPerp::ul_123,2); Std(Field); break;
   case 708: Ldul(SostPerp::ul_708,2); Std(Field); break;
   case 709: Ldul(SostPerp::ul_709,2); Std(Field); break;
   case 808: Ldul(SostPerp::ul_808,2); Std(Field); break;
   case 809: Ldul(SostPerp::ul_809,2); Std(Field); break;
   case 800: Ldul(SostPerp::ul_800,2); Std(Field); break;
   case 801: Ldul(SostPerp::ul_801,2); Std(Field); break;
   case 802: Ldul(SostPerp::ul_802,2); Std(Field); break;
   case 810: Ldul(SostPerp::ul_810,2); Std(Field); break;
   case 812: Ldul(SostPerp::ul_812,2); Std(Field); break;
   case 850: Ldul(SostPerp::ul_850,2); Std(Field); break;
//   case 851: Ldul(SostPerp::ul_851,2); Std(Field); break;
   case 852: Ldul(SostPerp::ul_852,2); Std(Field); break;
   case 853: Ldul(SostPerp::ul_853,2); Std(Field); break;
   case 854: Ldul(SostPerp::ul_854,2); Std(Field); break;
   case 855: Ldul(SostPerp::ul_855,2); Std(Field); break;
   case 856: Ldul(SostPerp::ul_856,2); Std(Field); break;
   case 815: Ldul(SostPerp::ul_815,2); Std(Field); break;
   case 816: Ldul(SostPerp::ul_816,2); Std(Field); break;
   case 817: Ldul(SostPerp::ul_817,2); Std(Field); break;
   case 818: Ldul(SostPerp::ul_818,2); Std(Field); break;
   case 814: Ldul(SostPerp::ul_814,2); Std(Field); break;
   case 819: Ldul(SostPerp::ul_819,2); Std(Field); break;
   case 820: Ldul(SostPerp::ul_820,2); Std(Field); break;
   case 821: Ldul(SostPerp::ul_821,2); Std(Field); break;
   case 822: Ldul(SostPerp::ul_822,2); Std(Field); break;
   case 823:
	   {
		 // Ldul(SostPerp::ul_823,2); Std(Field); break;
		    Ldl(SostPerp::ul_823,2); Std(Field); break;

	   }
   case 824: Ldul(SostPerp::ul_824,2); Std(Field); break;
   case 825: Ldul(SostPerp::ul_825,2); Std(Field); break;
   case 990: Ldul(SostPerp::ul_990,2); Std(Field); break;
   case 826: Ldul(SostPerp::ul_826,2); Std(Field); break;
   case 827: Ldul(SostPerp::ul_827,2); Std(Field); break; //FRB_827
   case 828: Ldul(SostPerp::ul_828,2); Std(Field); break; //FRB_827
   case 829:
       Ldul(SostPerp::ul_829,2);
       Std(Field);
       break; //FRB
   case 849:
       Ldul(SostPerp::ul_849,2);
       Std(Field);
       break; //FRB
   case 830:
       Ldul(SostPerp::ul_830,2);
       Std(Field);
       break; //FRB
   case 835:
       Ldul(SostPerp::ul_835,2);
       Std(Field);
       break; //FRB
   case 857: Ldul(SostPerp::ul_857,2); Std(Field); break;
   case 858: Ldul(SostPerp::ul_858,2); Std(Field); break;

   case 890: Ldul(SostPerp::ul_890,2); Std(Field); break;


   case 991: Ldul(SostPerp::ul_991,2); Std(Field); break;
   case 992: Ldul(SostPerp::ul_992,2); Std(Field); break;
   case 993: Ldul(SostPerp::ul_993,2); Std(Field); break;
   case 994: Ldul(SostPerp::ul_994,2); Std(Field); break;
   case 995: Ldul(SostPerp::ul_995,2); Std(Field); break;
   case 996: Ldul(SostPerp::ul_996,2); Std(Field); break;
   case 997: Ldul(SostPerp::ul_997,2); Std(Field); break;

   }
}
void SostPerp::SetPerp()//переписываем значения в Перп
{
			  if(PensPioner.Razdelenie)// && PensPioner.ZK == 15)
			  {
				  SostPerp::Get(dfPFU , _Perp_RazmPF);
				  SostPerp::Get(dfDOP , _Perp_Summa);
				  //Ut.Add_(_Perp_Summa,_Perp_RazmPF);
			  }
			  else 
			  {
			  SostPerp::Get(dfPFU, _Perp_Summa);
			  if (Ut.Cmp0(_Perp_Summa) == 0) SostPerp::Get(dfDOP , _Perp_Summa);
			  Clrd(_Perp_RazmPF);
			  }

	  ///SostPerp::ul_Osn   = *(long*)Perp_Summa; //osn
      SostPerp::Get(dfDPI , _Perp_RazmGos);  // SostPerp::ul_DPI  = *(long*)Perp_RazmGos;
      SostPerp::Get(990 , _Perp_Razm908);// SostPerp::ul_990   = *(long*)Perp_Razm908;
	  SostPerp::Get(991 , _Perp_Razm991);//SostPerp::   = *(long*);
	  SostPerp::Get(708 , _Perp_RazmDot);//SostPerp::   = *(long*);
	  SostPerp::Get(850 , _Perp_Razm850);//SostPerp::   = *(long*);
	  SostPerp::Get(851 , _Perp_Razm851);//SostPerp::   = *(long*);
	  SostPerp::Get(852 , _Perp_Razm852);//SostPerp::   = *(long*);
      SostPerp::Get(853 , _Perp_Razm853);//SostPerp::   = *(long*);
      SostPerp::Get(854 , _Perp_Razm854);
	  SostPerp::Get(855 , _Perp_Razm855);
  	  SostPerp::Get(856 , _Perp_Razm856);
  	  SostPerp::Get(857 , _Perp_Razm857);
	  SostPerp::Get(816 , _Perp_Razm816);
	  SostPerp::Get(815 , _Perp_Razm815);
	  SostPerp::Get(817 , _Perp_Razm817);
	  SostPerp::Get(818 , _Perp_Razm818);
	  SostPerp::Get(819 , _Perp_Razm819);
	  SostPerp::Get(820 , _Perp_Razm820);
	  SostPerp::Get(821 , _Perp_Razm821);
      SostPerp::Get(822 , _Perp_Razm822);
	  SostPerp::Get(823 , _Perp_Razm823);
   	  SostPerp::Get(824 , _Perp_Razm824);
	  SostPerp::Get(825 , _Perp_Razm825);
      SostPerp::Get(826 , _Perp_Razm826);
      SostPerp::Get(827 , _Perp_Razm827); //FRB_827
      SostPerp::Get(828 , _Perp_Razm828); //FRB_827
	  SostPerp::Get(814 , _Perp_Razm814);
  	  SostPerp::Get(890 , _Perp_Razm890);
	  SostPerp::Get(808 , _Perp_Razm808);//SostPerp::	 = *(long*);
	  SostPerp::Get(709 , _Perp_Razm709);//SostPerp::	 = *(long*);
	  SostPerp::Get(809 , _Perp_Razm809);//SostPerp::	 = *(long*);
	  SostPerp::Get(800 , _Perp_Razm800);//SostPerp::	 = *(long*);
	  SostPerp::Get(801 , _Perp_Razm801);//SostPerp::	 = *(long*);
	  SostPerp::Get(802, _Perp_Razm802);//SostPerp::	 = *(long*);
	  SostPerp::Get(810 , _Perp_Razm810);//SostPerp::	 = *(long*);
	  SostPerp::Get(812 , _Perp_Razm812);//SostPerp::	 = *(long*);
	  SostPerp::Get(992 , _Perp_Razm992);
      SostPerp::Get(993 , _Perp_Razm993);
      SostPerp::Get(994 , _Perp_Razm994);
      SostPerp::Get(995 , _Perp_Razm995);
	  SostPerp::Get(996 , _Perp_Razm996);
   	   SostPerp::Get(997 , _Perp_Razm997);
      //дополнительные КФНы
	  SostPerp::Get(132 , _Perp_RazmO28);//SostPerp:: = *(long*);
	  SostPerp::Get(133, _Perp_RazmDKf);//SostPerp:: = *(long*);
	
}                            

// опредилние размера индексации
void SostPerp::SumIndNac(StayDate Dt, int DPIproc, ulong* sind)
{ uint2 dd, yy, mm;
  DateUnpack(Dt,  &dd, &mm, &yy);  
  Ldi(0,0);
  for (SetBegin(B_Nac);GetNext(B_Nac);)
   if ( (Nac_God == yy && Nac_Mec == mm) ||
        (Nac_God == 0  && Nac_Mec == 0) ){
     for (SetBegin(B_NacOp);GetNext(B_NacOp);){
      for (SetBegin(B_NacKfn); GetNext(B_NacKfn); ){
        if (Nac_GodF == yy && Nac_MecF == mm) { // сумма с индекс
            Adds(_Nac_SInd); 
         }
       } //B_NacKfn
     }  //B_NacOp
   }  //B_Nac 
   if (DPIproc){
       Ldi(DPIproc,2);
	   Mul(); Round(2);
   }
   *sind = Stl(2);

}