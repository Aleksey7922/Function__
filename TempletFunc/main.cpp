#include"stdafx.h"
#include"constants.h"
#include"FillRand.cpp"
#include"Print.cpp"
#include"Statistics.cpp"
#include"Sort.cpp"
#include"Shift.cpp"
#include"UniqueRand.cpp"
#include"Searsh.cpp"



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






