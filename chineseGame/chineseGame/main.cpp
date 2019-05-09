#include<iostream>
#include"GUI.h"
#include"key.h"
using namespace std;
void History(int col);
void Center(int col);

void main()
{
	
	//while (1) 
	{
		/*GUI();
		key();*/
		for (int i = 0; i < 19; i++)
		{
			History(i);
			
			cout << endl;
		}
		Center(1);
		//system("cls");

	}
	
	system("Pause");
}

void History(int col)
{
	
	if (col == 0)
	{
		cout << "\u2588";
		cout << setw(10) << "\u6230\u722d\u9032\u5ea6";
		cout << setw(10) << "\u2588";
	}
	else
	{
		cout << "\u2588" << setw(18) << "" << "\u2588";
	}
}
void Center(int col)
{
	string a[35] = { "\u2554","\u2550","\u2550","\u2550","\u2550","\u2550","\u2550","\u2550","\u2550","\u2550","\u2550","\u2550","\u2550","\u2550","\u2550","\u2550","\u2550","\u2550","\u2550","\u2557" };
	for(int i=0;i<20;i++)
	cout << a[i];
}