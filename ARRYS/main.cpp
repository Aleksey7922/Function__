#include<iostream>
using namespace std;

void main()

{
	setlocale(LC_ALL, "RUS");
	const int n = 5;
	int arr[n] = { };
	//arr[2];
	//arr[2] = 123;//обращение к второму элементу массива на запись 
	//cout << arr[2] << endl;// обращение ко второму злементу на чтение 


	cout << "Введите злементы массива: ";
	double sum = 0; double arith_mean = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		cout << arr[i] << "\t";
	}
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	cout << "Сумма элементов массива: " << sum;
	cout << endl;

	for (int i = 0; i < 1; i++)
	{
		arith_mean = sum / n;
		cout << "Среднее арифм. элементов: " << arith_mean << endl;
	}
	int max = arr[0];
	int min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (max < arr[i]) max = arr[i];
		if (min > arr[i]) min = arr[i];
	}
	cout << "Максимальный элемент:  " << max << endl;
	cout << "Mинимальный элемент:  " << min << endl;


}








