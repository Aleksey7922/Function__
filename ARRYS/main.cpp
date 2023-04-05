#include"stdafx.h"
#include"constants.h"
#include"FillRand.h"
#include"print.h"
#include"Statistic.h"
#include"Sort.h"
#include"Shift.h"
#include"Search.h"
#include"UniqueRand.h"





//#define ARRAYS_1
#define ARRAYS_2

void main()
{
	setlocale(LC_ALL, "");
#ifdef ARRAYS_1
	const int n = 10;
	int arr[n] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	FillRand(arr, n, 0, 5);
	//UniqueRand(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(arr, n) << endl;
	cout << "Минимальное значение в массиве:  " << minValuein(arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValuein(arr, n) << endl;
	Search(arr, n);
	Sort(arr, n);
	Print(arr, n);

	int number_of_shifts;
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	shiftLeft(arr, n, number_of_shifts);
	Print(arr, n);
	shiftRight(arr, n, number_of_shifts);
	Print(arr, n);

	/*const int SIZE = 8;
	double d_arr[SIZE];
	FillRand(d_arr, SIZE);
	Print(d_arr, SIZE);*/
#endif // ARRAYS_1

	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS, 10, 20);
	Print(i_arr_2, ROWS, COLS);
	Search(i_arr_2, ROWS, COLS);
	int number_of_shifts;

	cout << "Сумма элементов массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(i_arr_2, ROWS, COLS) << endl;
	//cout << "Минимальное значение в массиве:  " << minValuein(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << maxValuein(i_arr_2, ROWS, COLS) << endl;

	//Sort(i_arr_2, ROWS, COLS);
	//Print(i_arr_2, ROWS, COLS);

	/*cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	shiftLeft(i_arr_2, ROWS, COLS, number_of_shifts);
	Print(i_arr_2, ROWS, COLS);*/

	/*cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	shiftRight(i_arr_2, ROWS, COLS, number_of_shifts);
	UniqueRand(i_arr_2, ROWS, COLS);*/

	//UniqueRand(i_arr_2, ROWS, COLS);
	//Print(i_arr_2, ROWS, COLS);
	//Search(i_arr_2, ROWS, COLS);
	//Print(i_arr_2, ROWS, COLS);
}
