#include<iostream>
using namespace std;

void main()

{
	setlocale(LC_ALL, "RUS");
	const int n = 5;
	int arr[n] = {};
	//arr[2];
	//arr[2] = 123;//��������� � ������� �������� ������� �� ������ 
	//cout << arr[2] << endl;// ��������� �� ������� �������� �� ������ 

	
	cout << "������� �������� �������: "; 
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