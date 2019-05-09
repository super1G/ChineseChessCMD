#include "GUI.h"





GUI::GUI()
{
	cout << "中文";
	readfile("store.txt");
	
	SetConsoleOutputCP(437);
	cout << "______________________________________________________________________________________________" << endl;

	//cout << "｜" << setw(10) << "戰況選擇" << setw(10) << "｜";
	//<< "車－馬－象－士－將－士－象－馬－車" << endl;
	for (int j = 0; j < 19; j++)
	{

		history(j); //戰況

		SetColor(224);
		for (int i = 0; i < 35; i++)
		{
			if (i % 2 == 0 && j % 2 == 0)
			{
				int number;
				fp >> number;
				if (number != 0)
					cout << left << setw(2) << checker[number];
				else
					cout << left << setw(2) << checkerboard[j][i];
			}
			else
			{
				cout << left << setw(2) << checkerboard[j][i];
			}
		}
		SetColor(7);

		setView(j);
		cout << endl;
	}

	cout << "_______________________________________________________________________________________________" << endl;
	int user;
	if (fp >> user)
		getNowUser(user);
	fp.close();

}
void GUI::SetColor(int color = 7)
{
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, color);

}
void GUI::getNowUser(int user)
{


	if (user == 0)
		nowUser = "red";
	else if (user == 1)
		nowUser = "black";
}
void GUI::history(int col)
{
	const unsigned char INT1 = 178;
	if (col == 0)
	{
		cout << INT1;
		cout << setw(10) << "戰";
		cout<< setw(10) << INT1;
	}
	else
	{
		cout << INT1 << setw(18) << "" << INT1;
	}
}
void GUI::setView(int col)
{

	// ""--> store message
	if (col == 0 || col == 7)
	{

		cout << left << setw(4) << "｜" << setw(30) << "－－－－－－－－－－－－－－" << setw(4) << "｜";

	}
	else if (col > 0 && col < 7)
	{
		if (col != 3)
		{
			cout << setw(4) << "｜｜" << setw(28) << "" << setw(4) << "｜｜";
		}
		else
		{
			if (nowUser.compare("red") == 0)
			{
				cout << setw(4) << "｜｜" << setw(28) << "紅方優先" << setw(4) << "｜｜";
			}
			else if (nowUser.compare("black") == 0)
			{
				cout << setw(4) << "｜｜" << setw(28) << "黑方優先" << setw(4) << "｜｜";
			}
			else
			{
				cout << setw(4) << "｜｜" << setw(28) << "" << setw(4) << "｜｜";
			}
		}
	}
	else if (col > 9 && col < 15)
	{
		string a = "｜";

		cout << left << setw(4) << a;

		cout << setw(23) << teach[col - 10];

		cout << a;

	}
	else
	{
		cout << setw(4) << "｜" << setw(30) << "" << setw(4) << "｜";
	}
}

void GUI::readfile(string filename)
{
	fp.open(filename, ios::in);
}

GUI::~GUI()
{
}
