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
	void SetColor(int color);
	string checker[15] = { "  ","將","士","象","車","馬","包","卒"
						,"帥","仕","相","車","傌","炮","兵" };
	const unsigned char	checkerboard[19][35] = { 
		{214,205,205,205,205,205,205,205,205,205,205,183 },
						"｜　｜　｜　｜＼｜／｜　｜　｜　｜",
						"｜　－　－　－　－　－　－　－　｜",
						"｜　｜　｜　｜／｜＼｜　｜　｜　｜",
						"｜　－　－　－　－　－　－　－　｜",
						"｜　｜　｜　｜　｜　｜　｜　｜　｜",
						"｜　－　－　－　－　－　－　－　｜",
						"｜　｜　｜　｜　｜　｜　｜　｜　｜",
						"｜－－－－－－－－－－－－－－－｜" ,
						"｜　　　　　　楚河漢界　　　　　｜" ,
						"｜－－－－－－－－－－－－－－－｜" ,
						"｜　｜　｜　｜　｜　｜　｜　｜　｜" ,
						"｜　－　－　－　－　－　－　－　｜" ,
						"｜　｜　｜　｜　｜　｜　｜　｜　｜" ,
						"｜　－　－　－　－　－　－　－　｜" ,
						"｜　｜　｜　｜＼｜／｜　｜　｜　｜" ,
						"｜　－　－　－　－　－　－　－　｜" ,
						"｜　｜　｜　｜／｜＼｜　｜　｜　｜" ,
						"－－－－－－－－－－－－－－－－－"
	};
	string teach[5] = {
		"Esc 選單  < 悔棋 >還原 ",
		"Enter  確認　 　　  　      ",
		"　↑      　         　　　 ",
		"←　→ 方向                  ",
		"　↓   控制                　"
	};
	
};
#endif // !_GUI



