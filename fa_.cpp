#define STRICT

#define NOSOUND
#define NOCOMM
#define NODRIVERS
#define NOMINMAX
#define NOLOGERROR
#define NOPROFILER
#define NOMEMMRG
#define NOOPENFILE
#define NORESOURCE
#define NOATOM
#define NOLANGUAGE
#define NODBCS
#define NOKEYBOARDINFO
#define NOGDICAPMASKS
#define NOCOLOR
#define NODRAWTEXT
#define NOTEXTMETRIC
#define NOSCALABLEFONT
#define NOBITMAP
#define NORASTEROPS
#define NOMETAFILE
//#define NOSYSMETRICS
#define NOSYSTEMPARAMSINFO
#define NOWINOFSETS
#define NOSHOWWINDOW
#define NODEFERWINDOWPOS
#define NOVIRTUALKEYCODES
#define NOKEYSTATES
#define NOWH
#define NOMENUS
#define NOSCROLL
#define NOCLIPBOARD
#define NOICONS
#define NOSYSCOMMANDS
#define NOMDI
#define NOCTLMRG
#define NOHELP

#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma hdrstop
#pragma resource "fa.res"

#define IDB_PREV	201
#define IDB_RAND	202
#define IDB_NEXT	203

#define IDB_HYP1	204
#define IDB_HYP2	205
#define IDB_HYP3	206
#define IDB_HYP4	207

#define MB_OKINFO	(MB_OK|MB_ICONASTERISK)
#define MB_OKSTOP	(MB_OK|MB_ICONEXCLAMATION)

#define	ALPHA_LENGTH	(92+18+1)
/*
typedef	struct	tagAlphaEntry
{
	wchar_t*	symbol;
	char*	name;
}	AlEnt;

AlEnt*	ae[2] =
{
	{L"\uFE8D", "alef isolated"},
	{L"\uFE8E", "alef final"}
};
*/

char*	names[ALPHA_LENGTH] =
{
	"alef isolated",
	"alef final",
	"beh isolated",
	"beh final",
	"beh initial",
	"beh medial",
	"peh isolated",
	"peh final",
	"peh initial",
	"peh medial",
	"teh isolated",
	"teh final",
	"teh initial",
	"teh medial",
	"seh isolated",
	"seh final",
	"seh initial",
	"seh medial",
	"jim isolated",
	"jim final",
	"jim initial",
	"jim medial",
	"che isolated",
	"che final",
	"che initial",
	"che medial",
	"hah isolated",
	"hah final",
	"hah initial",
	"hah medial",
	"khah isolated",
	"khah final",
	"khah initial",
	"khah medial",
	"dal isolated",
	"dal final",
	"zal isolated",
	"zal final",
	"reh isolated",
	"reh final",
	"zeh isolated",
	"zeh final",
	"jeh isolated",
	"jeh final",
	"sin isolated",
	"sin final",
	"sin initial",
	"sin medial",
	"shin isolated",
	"shin final",
	"shin initial",
	"shin medial",
	"sad isolated",
	"sad final",
	"sad initial",
	"sad medial",
	"zad isolated",
	"zad final",
	"zad initial",
	"zad medial",
	"tah isolated",
	"tah final",
	"zah isolated",
	"zah final",
	"ain isolated",
	"ain final",
	"ain initial",
	"ain medial",
	"ghain isolated",
	"ghain final",
	"ghain initial",
	"ghain medial",
	"feh isolated",
	"feh final",
	"feh initial",
	"feh medial",
	"qaf isolated",
	"qaf final",
	"qaf initial",
	"qaf medial",
	"kaf isolated",
	"kaf final",
	"kaf initial",
	"kaf medial",
	"gaf isolated",
	"gaf final",
	"gaf initial",
	"gaf medial",
	"lam isolated",
	"lam final",
	"lam initial",
	"lam medial",
	"mim isolated",
	"mim final",
	"mim initial",
	"mim medial",
	"nun isolated",
	"nun final",
	"nun initial",
	"nun medial",
	"vav isolated",
	"vav final",
	"heh isolated",
	"heh final",
	"heh initial",
	"heh medial",
	"yeh isolated",
	"yeh final",
	"yeh initial",
	"yeh medial",
	"hamza"
};

wchar_t*	alpha[ALPHA_LENGTH] =
{
	L"\uFE8D",	//alef isolated
	L"\uFE8E",	//alef final

	L"\uFE8F",	//beh isolated
	L"\uFE90",	//beh final
	L"\uFE91",	//beh initial
	L"\uFE92",	//beh medial

	L"\uFB56",	//peh isolated
	L"\uFB57",
	L"\uFB58",
	L"\uFB59",

	L"\uFE95",	//teh isolated
	L"\uFE96",
	L"\uFE97",
	L"\uFE98",

	L"\uFE99",	//seh isolated
	L"\uFE9A",
	L"\uFE9B",
	L"\uFE9C",

	L"\uFE9D",	//jim isolated
	L"\uFE9E",
	L"\uFE9F",
	L"\uFEA0",

	L"\uFB7A",	//tcheh isolated
	L"\uFB7B",
	L"\uFB7C",
	L"\uFB7D",

	L"\uFEA1",	//hah isolated
	L"\uFEA2",
	L"\uFEA3",
	L"\uFEA4",

	L"\uFEA5",	//khah isolated
	L"\uFEA6",
	L"\uFEA7",
	L"\uFEA8",

	L"\uFEA9",	//dal isolated
	L"\uFEAA",

	L"\uFEAB",	//zal isolated
	L"\uFEAC",

	L"\uFEAD",	//reh isolated
	L"\uFEAE",

	L"\uFEAF",	//zeh isolated
	L"\uFEB0",

	L"\uFB8A",	//jeh isolated
	L"\uFB8B",

	L"\uFEB1",	//sin isolated
	L"\uFEB2",
	L"\uFEB3",
	L"\uFEB4",

	L"\uFEB5",	//shin isolated
	L"\uFEB6",
	L"\uFEB7",
	L"\uFEB8",

	L"\uFEB9",	//sad isolated
	L"\uFEBA",
	L"\uFEBB",
	L"\uFEBC",

	L"\uFEBD",	//zad isolated
	L"\uFEBE",
	L"\uFEBF",
	L"\uFEC0",

	L"\uFEC1",	//tah isolated
	L"\uFEC2",

	L"\uFEC5",	//zah isolated
	L"\uFEC6",

	L"\uFEC9",	//ain isolated
	L"\uFECA",
	L"\uFECB",
	L"\uFECC",

	L"\uFECD",	//ghain isolated
	L"\uFECE",
	L"\uFECF",
	L"\uFED0",

	L"\uFED1",	//feh isolated
	L"\uFED2",
	L"\uFED3",
	L"\uFED4",

	L"\uFED5",	//qaf isolated
	L"\uFED6",
	L"\uFED7",
	L"\uFED8",

	L"\uFED9",	//kaf isolated
	L"\uFEDA",
	L"\uFEDB",
	L"\uFEDC",

	L"\uFB92",	//gaf isolated
	L"\uFB93",
	L"\uFB94",
	L"\uFB95",

	L"\uFEDD",	//lam isolated
	L"\uFEDE",
	L"\uFEDF",
	L"\uFEE0",

	L"\uFEE1",	//mim isolated
	L"\uFEE2",
	L"\uFEE3",
	L"\uFEE4",

	L"\uFEE5",	//nun isolated
	L"\uFEE6",
	L"\uFEE7",
	L"\uFEE8",

	L"\uFEED",	//vav isolated
	L"\uFEEE",

	L"\uFEE9",	//heh isolated
	L"\uFEEA",
	L"\uFEEB",
	L"\uFEEC",

	L"\uFBFC",	//farsi yeh isolated
	L"\uFBFD",
	L"\uFBFE",
	L"\uFBFF",

	L"\uFE80"	//hamza
};

int	bHypX[4]	= {10, 10, 400, 400};
int	bHypY[4]	= {50, 90,  50,  90};

const	char*	myClass	= "vkb_window";

HINSTANCE	hSaveInst;
HINSTANCE	hSavePrevInst;
WNDCLASS	wc;
LPSTR	cmdLn;
int	xScreenSize;
int	yScreenSize;

#define	MW_STYLE	WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU | WS_MINIMIZEBOX
#define	MW_ESTYLE	0
#define	FARSI_WND_W	534
#define	FARSI_WND_H	420

HWND	hMainWindow	= NULL;
HWND	hBtnP;	//previous
HWND	hBtnR;	//random
HWND	hBtnN;	//next
HWND	hHypButtons[4];	//hypothesis buttons

HBRUSH	brushG;	//green
HBRUSH	brushR;	//red
HFONT	hf;

int	letIdx;
int	valIdx	= -1;
int	valBtn	= -1;

int	my_rand_int(int lim)
{
	return	(int)((float)rand() / RAND_MAX * lim);
}

void	InitApp(HINSTANCE hInst, HINSTANCE hPrevInst, LPSTR lpCmdLine)
{
	SYSTEMTIME	st;

	hSaveInst	= hInst;
	hSavePrevInst	= hPrevInst;
	cmdLn	= lpCmdLine;

	xScreenSize	= GetSystemMetrics(SM_CXSCREEN);
	yScreenSize	= GetSystemMetrics(SM_CYSCREEN);

	brushG	= CreateSolidBrush(0x0000FF00);
	brushR	= CreateSolidBrush(0x000000FF);

	GetSystemTime(&st);
	srand(st.wMilliseconds);
	letIdx	= my_rand_int(ALPHA_LENGTH);
}

LRESULT	CALLBACK _export WndProc(HWND hWnd, UINT iMsg, WPARAM wp, LPARAM lp);

int	PASCAL	WinMain(HINSTANCE hInst, HINSTANCE hPrevInst, LPSTR lpCmdLine, int nCmdShow)
{
	HWND	hw;
	MSG	amsg;
	int	xPos;
	int	yPos;

	InitApp(hInst, hPrevInst, lpCmdLine);

//-	register window class
	if(!GetClassInfo(hInst, myClass, &wc))
	{
		wc.style         = CS_HREDRAW|CS_VREDRAW;
		wc.lpfnWndProc   = ::WndProc;
		wc.cbClsExtra    = 0;
		wc.cbWndExtra    = 0;	//sizeof(TWindow*);
		wc.hInstance     = hInst;
		wc.hIcon         = LoadIcon(hInst, "IconFA");
		wc.hCursor       = LoadCursor(hInst, IDC_ARROW);
		wc.hbrBackground = (HBRUSH)GetStockObject(LTGRAY_BRUSH);
		wc.lpszMenuName  = (HMENU)NULL;
		wc.lpszClassName = myClass;
		if(!RegisterClass(&wc))
		{
			return	0;	//exit before entering message loop
		}
	}

//-	create window
	xPos	= (xScreenSize - FARSI_WND_W) >> 1;
	yPos	= (yScreenSize - FARSI_WND_H) >> 1;
	hw	= CreateWindowEx(MW_ESTYLE, myClass, "Farsi alpha",
		MW_STYLE, xPos, yPos, FARSI_WND_W, FARSI_WND_H,
		NULL, NULL, hInst, NULL);
	if(!hw)
	{
		return	0;
	}

	ShowWindow(hw, nCmdShow);

	UpdateWindow(hw);

	while(GetMessage(&amsg, NULL, 0, 0))
	{
//		if(!hAppAccel
//		|| !TranslateAccelerator(hAppWnd, hAppAccel, &amsg))
		{
			TranslateMessage(&amsg);
			DispatchMessage(&amsg);
		}
	}

	DeleteObject(brushR);
	DeleteObject(brushG);

	return	amsg.wParam;
}

HFONT	GetMyFont()
{
	LOGFONT	lf;

	lf.lfHeight	= 320;
	lf.lfWidth	= 0;
	lf.lfEscapement	= 0;
	lf.lfOrientation= 0;
	lf.lfWeight	= FW_NORMAL;
	lf.lfItalic	= 0;
	lf.lfUnderline	= 0;
	lf.lfStrikeOut	= 0;
	lf.lfCharSet	= ARABIC_CHARSET;
	lf.lfOutPrecision	= OUT_TT_PRECIS;
	lf.lfClipPrecision	= CLIP_TT_ALWAYS;
	lf.lfQuality	= DEFAULT_QUALITY;
	lf.lfPitchAndFamily	= DEFAULT_PITCH | FF_DONTCARE;
	strcpy(lf.lfFaceName, "Courier New");
	return	CreateFontIndirect(&lf);
}

void	clearHypButtons()
{
	valIdx	= -1;
	valBtn	= -1;

	int	i	= 0;
	do
	{
		SetWindowText(hHypButtons[i], "");
		i++;
	}
	while(i < 4);
}

void	setHypButtons()
{
	int	i, rndIdx;

	valIdx	= letIdx;
	valBtn	= my_rand_int(4);

	i	= 0;
	do
	{
		if(i == valBtn)
		{
			SetWindowText(hHypButtons[i], names[valIdx]);
		}
		else
		{
			rndIdx	= my_rand_int(ALPHA_LENGTH);
			SetWindowText(hHypButtons[i], names[rndIdx]);
		}
		i++;
	}
	while(i < 4);
}

void	drawHypRect(int i)
{
	HDC	dc;
	RECT	hr;

	hr.left	= bHypX[i] - 1;
	hr.top	= bHypY[i] - 1;
	hr.right	= hr.left + 122;
	hr.bottom	= hr.top + 25;

	dc	= GetDC(hMainWindow);
	FrameRect(dc, &hr, (i == valBtn) ? brushG : brushR);
	ReleaseDC(hMainWindow, dc);
}

void	chkHypButton(WPARAM wp)
{
	int	bn,i;

	if(valBtn >= 0)
	{
		bn	= wp - IDB_HYP1;
		if(bn != valBtn)
		{
			drawHypRect(bn);
		}
		else
		{
			i	= 0;
			do
			{
				drawHypRect(i);
				i++;
			}
			while(i < 4);
		}
	}
}

void	BtnPrev()
{
//	RECT	cr;

	clearHypButtons();

	if(letIdx == 0)
	{
		letIdx	= ALPHA_LENGTH - 1;
	}
	else
	{
		letIdx--;
	}

//	if(GetClientRect(hWnd, &cr))
//	{
//		cr.left	= (cr.right - 180) >> 1;
//		cr.right = cr.left + 180;
//		cr.top	= 49;
//		cr.bottom = 371;
//		InvalidateRect(hWnd, &cr, TRUE);
//	}
//	else
	{
		InvalidateRect(hMainWindow, NULL, TRUE);
	}
}

void	BtnRand()
{
//	RECT	cr;

	letIdx	= my_rand_int(ALPHA_LENGTH);
	setHypButtons();

//	if(GetClientRect(hWnd, &cr))
//	{
//		cr.left	= (cr.right - 180) >> 1;
//		cr.right = cr.left + 180;
//		cr.top	= 49;
//		cr.bottom = 371;
//		InvalidateRect(hWnd, &cr, TRUE);
//	}
//	else
	{
		InvalidateRect(hMainWindow, NULL, TRUE);
	}
}

void	BtnNext()
{
//	RECT	cr;

	clearHypButtons();

	if(letIdx == ALPHA_LENGTH - 1)
	{
		letIdx	= 0;
	}
	else
	{
		letIdx++;
	}

//	if(GetClientRect(hWnd, &cr))
//	{
//		cr.left	= (cr.right - 180) >> 1;
//		cr.right = cr.left + 180;
//		cr.top	= 49;
//		cr.bottom = 371;
//		InvalidateRect(hWnd, &cr, TRUE);
//	}
//	else
	{
		InvalidateRect(hMainWindow, NULL, TRUE);
	}
}

#define	MY_BTN_STYLE	(WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON)
inline	HWND	create_btn(const char* name, int x, int y, int w, int h, HWND hw, int id)
{
	return	CreateWindow("button", name, MY_BTN_STYLE, x, y, w, h, hw, (HMENU)id, hSaveInst, NULL);
}

LRESULT	DoCreate(HWND hw, LPARAM)
{
	hMainWindow	= hw;
	hBtnP	= create_btn("Previous", 10, 8, 90, 23, hw, IDB_PREV);
	hBtnR	= create_btn("Random",  222, 8, 90, 23, hw, IDB_RAND);
	hBtnN	= create_btn("Next",    430, 8, 90, 23, hw, IDB_NEXT);

	int i	= 0;
	do
	{
		hHypButtons[i]	= create_btn("?", bHypX[i], bHypY[i], 120, 23, hw, IDB_HYP1 + i);
		i++;
	}
	while(i < 4);

	hf	= GetMyFont();

	return	0L;
}

LRESULT	DoCommand(WPARAM wp, LPARAM)
{
	switch(LOWORD(wp))
	{
	case IDB_PREV:
		BtnPrev();
		break;
	case IDB_RAND:
		BtnRand();
		break;
	case IDB_NEXT:
		BtnNext();
		break;
	case IDB_HYP1:
	case IDB_HYP2:
	case IDB_HYP3:
	case IDB_HYP4:
		chkHypButton(LOWORD(wp));
		break;
	default:
		return	-1;
	}

	return	0L;
}

void	DoPaint(HDC dc)
{
	UINT	n;
	int	x,w;

	HGDIOBJ	old	= SelectObject(dc, hf);

	n	= (UINT)*alpha[letIdx];
	if(GetCharWidth32W(dc, n, n, &w))
	{
		x	= (FARSI_WND_W - w) >> 1;
	}
	else
	{
		x	= 10;
	}

	SetTextColor(dc, 0x00FFFFFF);
	SetBkColor(dc, 0);

	TextOutW(dc, x, 50, alpha[letIdx], 1);

	SelectObject(dc, old);
}

LRESULT	CALLBACK _export WndProc(HWND hWnd, UINT iMsg, WPARAM wp, LPARAM lp)
{
	PAINTSTRUCT	ps;
	HDC	dc;

	if(!hMainWindow)
	{
		if(iMsg == WM_CREATE)
		{
			return	DoCreate(hWnd, lp);
		}

		return	DefWindowProc(hWnd, iMsg, wp, lp);
	}

	switch(iMsg)
	{
	case WM_COMMAND:
		return	DoCommand(wp, lp);
	case WM_PAINT:
		dc	= BeginPaint(hWnd, &ps);
		DoPaint(dc);
		EndPaint(hWnd, &ps);
		break;
	case WM_DESTROY:
		PostQuitMessage(0);
		break;
	default:
		return DefWindowProc(hWnd, iMsg, wp, lp);
	}

	return	0L;
}
