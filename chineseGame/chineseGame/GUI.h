#pragma once
#ifndef _GUI
#include<iostream>
#include<windows.h>
#include<iomanip>
#include<string>
using namespace std;
class GUI
{
public:
	GUI();
	~GUI();
	void history(int col);
	void setView(int col);
private:
	void SetColor(int color );

	wstring	checkerboard[19] = { 
						L"車－馬－象－士－將－士－象－馬－車" ,
						L"｜　｜　｜　｜＼｜／｜　｜　｜　｜",
						L"｜　－　－　－　－　－　－　－　｜",
						L"｜　｜　｜　｜／｜＼｜　｜　｜　｜",
						L"｜　包　－　－　－　－　包　－　｜",
						L"｜　｜　｜　｜　｜　｜　｜　｜　｜",
						L"卒　－　卒　－　卒　－　卒　－　卒",
						L"｜　｜　｜　｜　｜　｜　｜　｜　｜",
						L"｜－－－－－－－－－－－－－－－｜" ,
						L"｜　　　　　　楚河漢界　　　　　｜" ,
						L"｜－－－－－－－－－－－－－－－｜" ,
						L"｜　｜　｜　｜　｜　｜　｜　｜　｜" ,
						L"兵　－　兵　－　兵　－　兵　－　兵" ,
						L"｜　｜　｜　｜　｜　｜　｜　｜　｜" ,
						L"｜　－　炮　－　－　－　炮　－　｜" ,
						L"｜　｜　｜　｜＼｜／｜　｜　｜　｜" ,
						L"｜　－　－　－　－　－　－　－　｜" ,
						L"｜　｜　｜　｜／｜＼｜　｜　｜　｜" ,
						L"車－傌－相－士－將－士－相－傌－車"

	};
	wstring teach[5] = {
		L"Esc 選單  < 悔棋 >還原 ",
		L"Enter  確認　 　　  　      ",
		L"　↑      　         　　　 ",
		L"←　→ 方向                  ",
		L"　↓   控制                　"
	};
	
};
#endif // !_GUI



