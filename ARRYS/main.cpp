#include<iostream>
using namespace std;

void main()

{
	setlocale(LC_ALL, "RUS");
	const int n = 5;
	int arr[n] = { };
	//arr[2];
	//arr[2] = 123;//��������� � ������� �������� ������� �� ������ 
	//cout << arr[2] << endl;// ��������� �� ������� �������� �� ������ 


	cout << "������� �������� �������: ";
	int sum = 0; double arith_mean = 0;
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
	cout << "����� ��������� �������: " << sum;
	cout << endl;

	for (int i = 0; i < 1; i++)
	{
		arith_mean = sum / n;
		cout << "������� �����. ���������: " << arith_mean << endl;
	}
	int max = arr[0];
	int min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (max < arr[i]) max = arr[i];
		if (min > arr[i]) min = arr[i];
	}
	cout << "������������ �������:  " << max << endl;
	cout << "M���������� �������:  " << min << endl;


}








