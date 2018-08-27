/* Begin FCbegin */
//-------------------------------------------------------------------------
// STAY / W      Resource file OKNO.XME
//-------------------------------------------------------------------------
// Created 10\04\2018 13:20
//-------------------------------------------------------------------------

#include "OKNO.h"

/* End FCbegin */
/* Begin FCinclude */
/* End FCinclude */
/* Begin FChead */
PICMODULEBEG(OKNO)

static StayFD _nn_OKNO = {NULL,TAG_PIC,0,0,0,0,"OKNO",NULL};
/* End FChead */
/* Begin FCtypedef */
/* End FCtypedef */
/* Begin FCfield */
/* End FCfield */
/* Begin FCextern */
extern StayWindow _n_Form1;
/* End FCextern */
/* Begin FCdataset */
/* End FCdataset */
/* Begin FCmenu */

HMENU Menu1 ()
{HMENU _menu[6];
 _menu[0] = CreateMenu ();
 AppendMenu (_menu[0], MF_STRING, SEL501, "Ì²ÃÐÀÖ²ß");
 _menu[1] = CreatePopupMenu ();
 AppendMenu (_menu[0], MF_POPUP, (DWORD)_menu[1], "ÇÂ²Ò");
 AppendMenu (_menu[1], MF_STRING, SEL511, "ÇÂ²Ò ÇÀ ÍÎÌÅÐÀÌÈ Î.Ð.");
 AppendMenu (_menu[1], MF_STRING, SEL512, "ÇÂ²Ò ÏÎ Â²ÄÄ²ËÅÍÍßÌ ÇÂßÇÊÓ");
 AppendMenu (_menu[0], MF_STRING, SEL503, "ÂÈÕ²Ä");
 return _menu[0];
}

/* End FCmenu */
/* Begin FCframe */

IWStayWin *_init_Form1 ()
{
 IWStayWin *item[8];
 CreateFrame ("Form1", 0, 0, 482, 230, STM_HIDDEN, 0, "Çâîðîòíÿ ì³ãðàö³ÿ áàçè îñîáîâèõ ðàõóíê³â", &item[0]);
 item[0]->SetProperty ("menu", (DWORD)Menu1());
 return item[0];
}
StayWindow _n_Form1 = {NULL,TAG_FRAME,0,0,0,"Form1",_init_Form1};
StayWindow *Form1 = &_n_Form1;

/* End FCframe */
/* Begin FCtabl */
void *OKNO[] =
 {NULL,
  &_nn_OKNO,
  (StayFD *)Form1,
  NULL};

PICMODULEEND(OKNO)

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
