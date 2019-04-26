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
private:
	void SetColor(int color );

	wstring	checkerboard[19] = { L"車－馬－象－士－將－士－象－馬－車" ,
						L"｜　｜　｜　｜＼｜／｜　｜　｜　｜",
						L"｜　－　－　－　－　－　－　－　｜",
						L"｜　｜　｜　｜／｜＼｜　｜　｜　｜",
						L"｜　－　－　－　－　－　－　－　｜",
						L"｜　｜　｜　｜　｜　｜　｜　｜　｜",
						L"卒　－　卒　－　卒　－　卒　－　卒",
						L"｜　｜　｜　｜　｜　｜　｜　｜　｜",
						L"｜－－－－－－－－－－－－－－－｜" ,
						L"｜          楚河漢界            ｜" ,
						L"｜－－－－－－－－－－－－－－－｜" ,
						L"｜　｜　｜　｜　｜　｜　｜　｜　｜" ,
						L"兵　－　兵　－　兵　－　兵　－　兵" ,
						L"｜　｜　｜　｜　｜　｜　｜　｜　｜" ,
						L"｜　－　－　－　－　－　－　－　｜" ,
						L"｜　｜　｜　｜＼｜／｜　｜　｜　｜" ,
						L"｜　－　－　－　－　－　－　－　｜" ,
						L"｜　｜　｜　｜／｜＼｜　｜　｜　｜" ,
						L"車－傌－相－士－將－士－相－傌－車"

	};
};
#endif // !_GUI



