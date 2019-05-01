#pragma once
#ifndef _GUI
#include<iostream>
#include<fstream>
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
	void readfile(string filename);
private:
	string nowUser;
	fstream fp;
	void getNowUser(int user);
	void SetColor(int color );
	wstring checker[15] = {L"  ",L"將",L"士",L"象",L"車",L"馬",L"包",L"卒"
						,L"帥",L"仕",L"相",L"車",L"傌",L"炮",L"兵" };
	wstring	checkerboard[19] = { 
						L"－－－－－－－－－－－－－－－－－" ,
						L"｜　｜　｜　｜＼｜／｜　｜　｜　｜",
						L"｜　－　－　－　－　－　－　－　｜",
						L"｜　｜　｜　｜／｜＼｜　｜　｜　｜",
						L"｜　－　－　－　－　－　－　－　｜",
						L"｜　｜　｜　｜　｜　｜　｜　｜　｜",
						L"｜　－　－　－　－　－　－　－　｜",
						L"｜　｜　｜　｜　｜　｜　｜　｜　｜",
						L"｜－－－－－－－－－－－－－－－｜" ,
						L"｜　　　　　　楚河漢界　　　　　｜" ,
						L"｜－－－－－－－－－－－－－－－｜" ,
						L"｜　｜　｜　｜　｜　｜　｜　｜　｜" ,
						L"｜　－　－　－　－　－　－　－　｜" ,
						L"｜　｜　｜　｜　｜　｜　｜　｜　｜" ,
						L"｜　－　－　－　－　－　－　－　｜" ,
						L"｜　｜　｜　｜＼｜／｜　｜　｜　｜" ,
						L"｜　－　－　－　－　－　－　－　｜" ,
						L"｜　｜　｜　｜／｜＼｜　｜　｜　｜" ,
						L"－－－－－－－－－－－－－－－－－"

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



