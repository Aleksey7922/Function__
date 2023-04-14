#include"UniqueRand.h"


template<typename T>void UniqueRand(T arr[], const int n)
{
	for (int i = 0; i < n; i++);
	{
		arr[i] = rand() % 100;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				i--;
				break;
			}
		}
	}
}
template<typename T>void UniqueRand(T arr[ROWS][COLS], int const ROWS, int const COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; i++)
		{
			T unique;
			do

			{
				arr[i][j] = rand() % (ROWS * COLS);

				unique = true;
				for (int k = 0; k <= i; k++)
				{
					for (int l = 0; l < (k == i ? j : COLS); l++)
					{
						if (arr[i][j] == arr[k][l])
						{
							unique = false;
							break;
						}
					}
					if (!unique)break;
				}
			} while (!unique);

		}
	}
}
