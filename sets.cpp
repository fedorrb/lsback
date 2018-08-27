 //получить ссылку на созданый класс глобальных переменных 
 Singleton &glb = Singleton::getInstance();
 //StrForm(stgZrbFile,30,"LS:STZR%d.dt", Glb_OsoCode);
 //string pathCsv = "d:\\work\\base\\oracle\\6501\\";

 //******************
 set<int> oldNls;
 oldNls.clear();
 set<int> newNls;
 newNls.clear();
 set<int> diff;
 diff.clear();
 SetIndex(B_Ls, 1);
 SetBegin(B_Ls);
 while(GetNext(B_Ls))
 {
	 if(Ls_Nls < 200000)
		 oldNls.insert(Ls_Nls);
	 else
		 break;
 }
 //************************

 char s[5];
 StrForm(s,5,"%d", glb.rayon);
 std::string strRaj(s);
 std::string tableName = "";

 string pathCsv = "d:\\work\\base\\oracle\\" + strRaj;
 pathCsv +=  "\\";
 if(B_Ls->bs)
	 Close(B_Ls);
 B_Ls->file = "LS:ls_oracle.dt";
 //Create( B_Ls, RDWR|ANRDWR );
 OpenCreate( B_Ls, RDWR|ANRDWR );
 SetIndex(B_Ls, 1);

 //Destroy(B_LSExt);
 SetIndex(B_LSExt, 1);

 //******************************
 SetBegin(B_LSExt);
 while(GetNext(B_LSExt)) {
	 if(LE_Nls < 200000)
		 newNls.insert(LE_Nls);
	 else
		 break;
 }
 //std::set_difference(oldNls.begin(), oldNls.end(), newNls.begin(), newNls.end(), std::inserter(diff, diff.begin()));
 std::set_difference(newNls.begin(), newNls.end(), oldNls.begin(), oldNls.end(), std::inserter(diff, diff.begin()));
 std::set<int>::iterator it;
 Destroy(B_Woomen);
 for(it = diff.begin(); it != diff.end(); ++it)
 {
    Ls_Nls = *it;
	if(GetKey(B_Ls))
		PutBWoomen(false);
	else
		PutBWoomen(true);
 }
 //******************************