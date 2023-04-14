#include"Searsh.h"

template<typename T>void Search(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		T met_defore = false;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				met_defore = true;
				break;
			}
		}
		if (met_defore)continue;
		int count = 0;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (count)printf("«начение %i повтор€етс€ %i раз\n", arr[i], count);
	}
}
template<typename T>void Search(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			T met_defore = false;
			for (int k = 0; k <= i; k++)
			{
				for (int l = 0; l < (k == i ? j : COLS); l++)
				{
					if (arr[i][j] == arr[k][l])
					{
						met_defore = true;
						break;
					}
				}
				if (met_defore)break;
			}
			if (met_defore)continue;
			int count = 0;
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (arr[i][j] == arr[k][l])
					{
						count++;
					}
				}
			}
			if (count)printf("значение %i повтор€етс€ %i раз \n", arr[i][j], count);
		}
	}
}
