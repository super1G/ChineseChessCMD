#include "GUI.h"


void GUI::SetColor(int color = 7)
{
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, color);
}


GUI::GUI()
{
	
	cout << "___________________________" << endl;
	
	cout << "｜"<<setw(10)<<"戰況選擇"<< setw(10)<<"｜"<<"車－馬－象－士－將－士－象－馬－車" << endl;
	cout << "｜" << setw(10) << "" << setw(10) << "｜" << "｜　｜　｜　｜＼｜／｜　｜　｜　｜" << endl;
	cout << "｜" << setw(10) << "" << setw(10) << "｜" << "├　 ┼　 ┼　 ┼　 ┼　 ┼　 ┼　 ┼　 ┤" << endl;
	cout << "｜" << setw(10) << "" << setw(10) << "｜" << "｜　｜　｜　｜／｜＼｜　｜　｜　｜" << endl;
	cout << "｜" << setw(10) << "" << setw(10) << "｜" << "├　 ┼　 ┼　 ┼　 ┼　 ┼　 ┼　 ┼　 ┤" << endl;
	cout << "｜" << setw(10) << "" << setw(10) << "｜" << "｜　｜　｜　｜　｜　｜　｜　｜　｜" << endl;
	cout << "｜" << setw(10) << "" << setw(10) << "｜" << "卒　┼　卒　┼　卒　┼　卒　┼　卒" << endl;
	cout << "｜" << setw(10) << "" << setw(10) << "｜" << "｜　｜　｜　｜　｜　｜　｜　｜　｜" << endl;
	cout << "｜" << setw(10) << "" << setw(10) << "｜" << "└　 ┴　 ┴　 ┴　 ┴　 ┴　 ┴　 ┴　 ┘" << endl;
	cout << "｜" << setw(10) << "" << setw(10) << "｜" << "｜          楚河漢界            ｜" << endl;
	cout << "｜" << setw(10) << "" << setw(10) << "｜" << "┌　 ┬　 ┬　 ┬　 ┬　 ┬　 ┬　 ┬　 ┐" << endl;
	cout << "｜" << setw(10) << "" << setw(10) << "｜" << "｜　｜　｜　｜　｜　｜　｜　｜　｜" << endl;
	cout << "｜" << setw(10) << "" << setw(10) << "｜" << "├　 ┼　 ┼　 ┼　 ┼　 ┼　 ┼　 ┼　 ┤" << endl;
	cout << "｜" << setw(10) << "" << setw(10) << "｜" << "｜　｜　｜　｜　｜　｜　｜　｜　｜" << endl;
	cout << "｜" << setw(10) << "" << setw(10) << "｜" << "├　 ┼　 ┼　 ┼　 ┼　 ┼　 ┼　 ┼　 ┤" << endl;
	cout << "｜" << setw(10) << "" << setw(10) << "｜" << "｜　｜　｜　｜＼｜／｜　｜　｜　｜" << endl;
	cout << "｜" << setw(10) << "" << setw(10) << "｜" << "├　 ┼　 ┼　 ┼　 ┼　 ┼　 ┼　 ┼　 ┤" << endl;
	cout << "｜" << setw(10) << "" << setw(10) << "｜" << "｜　｜　｜　｜／｜＼｜　｜　｜　｜" << endl;
	cout << "｜" << setw(10) << "" << setw(10) << "｜" << "車－傌－相－士－將－士－相－傌－車" << endl;
}


GUI::~GUI()
{
}
