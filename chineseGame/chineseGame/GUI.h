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
	//void setView(int col);
	void readfile(string filename);
	
private:
	string nowUser;
	fstream fp;
	void getNowUser(int user);
	void SetColor(int color);
	string checker[15] = { "  ","\u5c07","\u58eb","\u8c61","\u8eca","\u99ac","\u5305","\u5352"
						,"\u5e25","\u4ed5","\u76f8","\u8eca","\u508c","\u70ae","\u5175" };
	const string checkerboard[20][25] = {
	{"��","��","��","��","��","��","��","��","��","��","��","��","��","��","��","��","��","��","��","��","��","��","��","��","��"},
	{"��"," ","��"," ","��"," ","��"," ","��"," ","��"," ","��"," ","��"," ","��"},
	{"��","�w","�w","��","�w","�w","��","�w","�w","��","�w","�w","��","�w","�w","��","�w","�w","��","�w","�w","��","�w","�w","��"},
	{"��"," ","��"," ","��"," ","��"," ","��"," ","��"," ","��"," ","��"," ","��"},
	{"��","�w","�w","��","�w","�w","��","�w","�w","��","�w","�w","��","�w","�w","��","�w","�w","��","�w","�w","��","�w","�w","��"},
	{"��"," ","��"," ","��"," ","��"," ","��"," ","��"," ","��"," ","��"," ","��"},
	{"��","�w","�w","��","�w","�w","��","�w","�w","��","�w","�w","��","�w","�w","��","�w","�w","��","�w","�w","��","�w","�w","��"},
	{"��"," ","��"," ","��"," ","��"," ","��"," ","��"," ","��"," ","��"," ","��"},
	{"��","��","��","��","��","��","��","��","��","��","��","��","��","��","��","��","��","��","��","��","��","��","��","��","��"},
	{"��"," "," "," "," ","\u695a","\u6cb3","\u6f22","\u754c"," "," ","   ","��"},
	{"��","��","��","��","��","��","��","��","��","��","��","��","��","��","��","��","��","��","��","��","��","��","��","��","��"},
	{"��"," ","��"," ","��"," ","��"," ","��"," ","��"," ","��"," ","��"," ","��"},
	{"��","�w","�w","��","�w","�w","��","�w","�w","��","�w","�w","��","�w","�w","��","�w","�w","��","�w","�w","��","�w","�w","��"},
	{"��"," ","��"," ","��"," ","��"," ","��"," ","��"," ","��"," ","��"," ","��"},
	{"��","�w","�w","��","�w","�w","��","�w","�w","��","�w","�w","��","�w","�w","��","�w","�w","��","�w","�w","��","�w","�w","��"},
	{"��"," ","��"," ","��"," ","��"," ","��"," ","��"," ","��"," ","��"," ","��"},
	{"��","�w","�w","��","�w","�w","��","�w","�w","��","�w","�w","��","�w","�w","��","�w","�w","��","�w","�w","��","�w","�w","��"},
	{"��"," ","��"," ","��"," ","��"," ","��"," ","��"," ","��"," ","��"," ","��"},
	{"��","��","��","��","��","��","��","��","��","��","��","��","��","��","��","��","��","��","��","��","��","��","��","��","��" }
	};

	/*string teach[5] = {
		"Esc ���  < ���� >�٭� ",
		"Enter  �T�{�@ �@�@  �@      ",
		"�@��      �@         �@�@�@ ",
		"���@�� ��V                  ",
		"�@��   ����                �@"
	};*/
	
};
#endif // !_GUI



