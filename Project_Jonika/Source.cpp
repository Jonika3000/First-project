#include <iostream>
#include <vector>
#include <windows.h>
#include <conio.h.>
using namespace std;
#define HEIGHT 30
#define WIDTH 120

class letters
{
private:
	char f[WIDTH][HEIGHT];
	char d[WIDTH][HEIGHT];
public:
	letters()
	{
		//J
		for (int j = 0; j < 30; j++)
		{
			for (int i = 0; i < 120; i++)
			{
				if (((i > 19 && i < 23 && j>7 && j < 16)) || (j > 14 && j < 17 && i >11 && i < 23) || (i > 11 && i < 15 && j == 14))
				{
					if (((i == 12 && j == 16) || ((i == 12 || i == 13) && j == 17)) || ((i == 22 && j == 16) || (i == 22 || i == 21) && j == 17))
						f[i][j] = ' ';
					else
						f[i][j] = rand() % 41+71;
				}
				else
				{
					f[i][j] = ' ';
				}
				if (j > 7 && j < 17 && i>30 && i < 40)
					f[i][j] = rand() % 3 + 1;
				if ((j > 10 && j < 14 && i>32 && i < 38) || (j > 9 && j < 15 && i>33 && i < 37))
					f[i][j] = ' ';
				if (((j == 8 && ((i == 39) || (i == 38) || (i == 31) || (i == 32))) || (j == 9 && ((i == 31) || (i == 39)))) || ((j == 16 && ((i == 39) || (i == 38) || (i == 31) || (i == 32))) || (j == 15 && ((i == 31) || (i == 39)))))
					f[i][j] = ' ';
				if ((j > 7 && j < 17 && i>64 && i < 67) && (j != 10))
					f[i][j] = rand() % 3 + 1;
				if ((j > 7 && j < 17 && ((i > 87 && i < 97))))
					f[i][j] = rand() % 3 + 1;
				if ((j == 8 && ((i == 88 || i == 96))) || ((j == 10 || j == 11) && (i > 89 && i < 95)) || (j == 14 || j == 15 || j == 16) && (i > 89 && i < 95))
					f[i][j] = ' ';
				if (j > 7 && j < 17 && i>72 && i < 75)
					f[i][j] = rand() % 3 + 1;
				if (j == 12 && (i == 76 || i == 75))
					f[i][j] = rand() % 3 + 1;
				if ((j > 7 && j < 17 && ((i > 46 && i < 49) || (i > 56 && i < 59))))
					f[i][j] = rand() % 3 + 1;
			}
		}
		int i = 49;
		int j = 8;

		for (int c = 0; c < 9;c++)
		{
			f[i][j] = rand() % 3 + 1;
			i++;
			j++;
		}
		i = 76;
		j = 12;
		for (int c = 0; c < 5; c++)
		{
			f[i][j] = rand() % 3 + 1;
			i++;
			j++;

		}
		i = 77;
		j = 11;
		for (int c = 0; c < 2; c++)
		{
			if (c == 1)
			{
				i = 76;
				j = 11;
			}
			for (int v = 0; v < 4; v++)
			{
				f[i][j] = rand() % 3 + 1;
				i++;
				j--;
			}
		}
		  i =76;
		  j = 13;
		  for (int v = 0; v < 4; v++)
		  {
			  f[i][j] = rand() % 3 + 1;
			  i++;
			  j++;
		  } 
	}
	void show()
	{
		int tmp=0;
		while (true)
		{
			for (int j = 0; j < 30; j++)
			{
				for (int i = 0; i < 120; i++)
				{
					cout << f[i][j];
					if (f[i][j] != ' ')
					{
						f[i][j] = 33 + rand() %  63;
					}
				}
			}
			Sleep(100);
			system("CLS");
		}
	}
};
int main()
{
	system("color 02");
	srand(time(0));
	letters J;
	J.show();
	system("pause");
}