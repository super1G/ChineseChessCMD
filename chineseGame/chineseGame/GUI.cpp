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
	
	cout << "__________________________________________________________________________________" << endl;
	
	//cout << "��" << setw(10) << "��r�x��" << setw(10) << "��";
	//<< "܇���R����ʿ������ʿ�����R��܇" << endl;
	for (int j = 0; j < 19; j++)
	{
		if (j == 0)
		{
			cout << "��" << setw(10) << "��r�x��" << setw(10) << "��";
		}
		else
		{
			cout << "��" << setw(10) << "" << setw(10) << "��";
		}

		for (int i = 0; i <checkerboard[j].size(); i++)
			wcout << setw(2) << checkerboard[j][i];
		cout << endl;
	}


}


GUI::~GUI()
{
}
