#include<iostream>
using namespace std;

void main()

{
	setlocale(LC_ALL, "RUS");
	const int n = 5;
	int arr[n] = {};
	//arr[2];
	//arr[2] = 123;//обращение к второму элементу массива на запись 
	//cout << arr[2] << endl;// обращение ко второму злементу на чтение 

	
	cout << "Введите злементы массива: "; 
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
		sum += [i];
		cout << sum;
	}
	cout << endl;






}