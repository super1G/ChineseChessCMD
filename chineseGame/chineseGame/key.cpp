#include "key.h"



key::key()
{
	int c;
	std::cout << "your keyword: ";
	c = getch();
	if (c == 0xe0)
	{
		c = getch();
		if (c == 72)//up
		{
			
		}
		else if (c == 80)//down
		{
		}
		else if (c == 75)//left
		{
		}
		else if (c == 77)//right
		{
		}
	}
	if (c == 46)//>
	{
	}
	else if (c == 44)//<
	{
	}
	else if (c == 27)//esc
	{
		
	}
}


key::~key()
{
}
