#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "RUS");

	const int n = 10;
	int arr[n] = { 0,1,2,3,4,5,6,7,8,9 };
	int a;
	for (int i = 0; i < n; i++)
	{
		cout << i << " ";
	}
	cout << endl;
	////cout << endl;
	////cout << "¬ведите количество сдвигов: "; cin >> a;
	//for (int i = 0; i < n; i++)
	//{
	//	int buf = arr[n-1];
	//	for (int i = buf; i < n - 1; i++)
	//	{
	//		cout << i << " ";
	//	}
	//}
	int buf = 0;
	for (int i = 0; i < n; i++)
	{
		int buf = arr[n - 1];
		arr[i] = arr[n - 1];
		arr[0] = buf;
		cout << arr[i] << " ";
	}

}