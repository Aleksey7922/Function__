#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "RUS");

	//const int n = 10;
	//int arr[n] = { 0,1,2,3,4,5,6,7,8,9 };
	//int a;
	//for (int i = 0; i < n; i++)
	//{
	//	cout << i << " ";
	//}
	//cout << endl;
	////cout << endl;
	////cout << "������� ���������� �������: "; cin >> a;

	//	int buf = arr[n - 1];
	//
	//
	//	for (int i = buf; i < n - 1; i++)
	//	{
	//		cout << i << " ";
	//	}
	//
	const int n = 10;
	int arr[n] = { 1,2,3,4,5,6,7,8,9,10 };
	//����� ��������� ������� �� �����:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	//����������� ����� �������:
	int number_of_shifts;
	cout << "������� ���������� �������: "; cin >> number_of_shifts;
	//number_of_shifts = n - number_of_shifts % n;
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;

		//system("CLS");//CLS - Clear Screen
		//����� ���������� ������� �� �����:
		
		//Sleep(200);	//���������������� ���������� ���� �� �������� ����� �����������
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}