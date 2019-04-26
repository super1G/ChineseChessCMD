#include "GUI.h"


void GUI::SetColor(int color = 7)
{
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, color);

	

}


GUI::GUI()
{
	wcout.imbue(locale("chs"));//�O��ݔ������
	
	cout << "______________________________________________________________________________________________" << endl;
	
	//cout << "��" << setw(10) << "��r�x��" << setw(10) << "��";
	//<< "܇���R����ʿ������ʿ�����R��܇" << endl;
	for (int j = 0; j < 19; j++)
	{
	
		history(j); //��r

		SetColor(224);
		for (int i = 0; i <checkerboard[j].size(); i++)
			wcout << setw(2) << checkerboard[j][i];
		
		SetColor();
		setView(j);
		cout << endl;
	}

	cout << "_______________________________________________________________________________________________" << endl;
}

void GUI::history(int col)
{
	if (col == 0)
	{
		cout << "��" << setw(10) << "��r�x��" << setw(10) << "��";
	}
	else
	{
		cout << "��" << setw(10) << "" << setw(10) << "��";
	}
}
void GUI::setView(int col)
{
	// ""--> store message
	if (col == 0|| col == 7)
	{
		cout <<left<< setw(4) << "��" << setw(30) << "����������������������������" << setw(4) << "��";
	}
	else if(col>0&&col<7)
	{
		cout << setw(4) << "����" << setw(28)   <<"" << setw(4) << "����";
	}
	else if(col>9&& col<15)
	{
		wstring a  =L"��";
		
		wcout << left<<setw(4) << a;

		wcout << setw(23) << teach[col - 10];

		wcout  << a;
		
	}
	else
	{
	cout << setw(4) << "��" << setw(30) << "" << setw(4) << "��";
	}
}
GUI::~GUI()
{
}
