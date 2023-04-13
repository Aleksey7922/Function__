#include<iostream>
using namespace std;


const int ROWS = 6;
const int COLS = 8;

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>void Print(const T arr[], const int n);
template<typename T>void Print(const T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>T Sum(const T arr[], const int n);
template<typename T>T Sum(const T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>double Avg(const T arr[], const int n);
template<typename T>double Avg(const T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>T minValueIn(const T arr[], const int n);
template<typename T>T minValueIn(const T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>T maxValueIn(const T arr[], const int n);
template<typename T>T maxValueIn(const T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>void Sort(T arr[], const int n);
template<typename T>void Sort(T arr[ROWS][COLS], int const ROWS, int const COLS);

template<typename T>void UniqueRand(T arr[], const int n); //не работает
template<typename T>void UniqueRand(T arr[ROWS][COLS], const int ROWS, const int COLS); // не работает

template<typename T>void Search(T arr[], const int n);
template<typename T>void Search(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>void shiftLeft(T arr[], const int n, int number_of_shifts);
template<typename T>void shiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);

template<typename T>void shiftRight(T arr[], const int n, int number_of_shifts);
template<typename T>void shiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);



void main()
{
	setlocale(LC_ALL, "");
	//const int n = 10;
	//int arr[n] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	//FillRand(arr, n);
	//Print(arr, n);
	//cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	//cout << "Среднее арифметическое элементов массива: " << Avg(arr, n) << endl;
	//cout << "Минимальное значение в массиве:  " << minValueIn(arr, n) << endl;
	//cout << "Максимальное значение в массиве: " << maxValueIn(arr, n) << endl;
	//Sort(arr, n);
	//Print(arr, n);

	//int number_of_shifts;
	//cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	//shiftLeft(arr, n, number_of_shifts);
	//Print(arr, n);
	//shiftRight(arr, n, number_of_shifts);
	//Print(arr, n);

	//const int SIZE = 8;
	//double d_arr[SIZE];
	//FillRand(d_arr, SIZE);
	//Print(d_arr, SIZE);
	//cout << "сумма элементов массива :" << Sum(d_arr, SIZE) << endl;
	//cout << " среднее ариф элементов массива :" << Avg(d_arr, SIZE) << endl;
	//cout << "Минимальное значение в массиве:  " << minValueIn(d_arr, SIZE) << endl;
	//cout << "Максимальное значение в массиве: " << maxValueIn(d_arr, SIZE) << endl;
	//Sort(d_arr, SIZE);
	//Print(d_arr, SIZE);
	///*UniqueRand(d_arr, SIZE);
	//Print(d_arr, SIZE);*/
	//Search(d_arr, SIZE);
	//Print(d_arr, SIZE);

	//int number_of_shifts;
	//cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	//shiftLeft(d_arr, SIZE, number_of_shifts);
	//Print(d_arr, SIZE);

	int i_arr_2[ROWS][COLS];
	int  number_of_shifts;
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);

	cout << "Сумма элементов массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое злементов массива: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << " Минимальное значение в массиве: " << minValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << " Максимальное значение в массиве: " << maxValueIn(i_arr_2, ROWS, COLS) << endl;
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	/*UniqueRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);*/
	Search(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);

	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	shiftLeft(i_arr_2, ROWS, COLS, number_of_shifts);
	Print(i_arr_2, ROWS, COLS);
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	shiftRight(i_arr_2, ROWS, COLS, number_of_shifts);
	Print(i_arr_2, ROWS, COLS);
}
void FillRand(int arr[], const int n)
{
	//rand();	//возвращает псевдослучайное число в диапазоне от 0 до 32 767 (MAX_RAND)
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void FillRand(double arr[], const int n)
{
	//rand();	//возвращает псевдослучайное число в диапазоне от 0 до 32 767 (MAX_RAND)
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000;
		arr[i] /= 100;
	}
}
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}

template<typename T>void Print(const T arr[], const int n)
{
	//Вывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
template<typename T>void Print(const T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	//Вывод массива на экран:
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

template<typename T>T Sum(const T arr[], const int n)
{
	//Вычисление суммы элементов массива:
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
template<typename T>T Sum(const T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

template<typename T>double Avg(const T arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
template<typename T>double Avg(const T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}

template<typename T>T minValueIn(const T arr[], const int n)
{
	T min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
template<typename T>T minValueIn(const T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min)min = arr[i][j];
		}
		return min;
	}
}

template<typename T>T maxValueIn(const T arr[], const int n)
{
	T max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
template<typename T>T maxValueIn(const T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max)max = arr[i][j];
		}
	}
	return max;
}

template<typename T>void Sort(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		//Счетчик 'i' выбирает элемент, в который нужно поместить минимальное значение из перебираемых
		for (int j = i + 1; j < n; j++)
		{
			//Счетчик 'j' перебирает элементы, в поисках минимального
			//arr[i] - выбранный элемент
			//arr[j] - перебираемый элемент
			if (arr[j] < arr[i])
			{
				/*arr[i]- arr[j];
				arr[j] = arr[i];
				arr[i] - arr[j];*/
				T buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
template<typename T>void Sort(T arr[ROWS][COLS], int const ROWS, int const COLS)
{
	int iterations = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (arr[k][l] < arr[i][j])
					{
						T buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
					iterations++;
				}
			}
		}
	}
	cout << "массив отсортирован" << ',' << "количество итераций: " << iterations << endl;
}


//template<typename T>void UniqueRand(T arr[], const int n)
//{
//	for (int i = 0; i < n; i++);
//	{
//		 arr[i] = rand() % 100;
//		for (int j = 0; j < i; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				i--;
//				break;
//			}
//		}
//	}
//}
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
		if (count)printf("Значение %i повторяется %i раз\n", arr[i], count);
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
			if (count)printf("значение %i повторяется %i раз \n", arr[i][j], count);
		}
	}
}

template<typename T>void shiftLeft(T arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		T buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
template<typename T>void shiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		for (int j = 0; j < number_of_shifts; j++)
		{
			T buffer = arr[0][0];
			for (int i = 0; i < ROWS; i++)
			{
				for (int j = 0; j < COLS; j++)
				{
					arr[i][j] = arr[i][j + 1];
				}
			}
			arr[ROWS - 1][COLS - 1] = buffer;
		}
	}

}
template<typename T>void shiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		for (int j = 0; j < number_of_shifts; j++)
		{
			T buffer = arr[ROWS - 1][COLS - 1];
			for (int i = ROWS - 1; i > 0; i--)
			{
				for (int j = COLS - 1; j > 0; j--)
				{
					arr[i][j] = arr[i][j - 1];
				}
			}arr[0][0] = buffer;

		}

	}

}