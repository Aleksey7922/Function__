#include<iostream>
using namespace std;
using  std::cout;

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);
void UniqueRand(int arr[], int arr1[], const int n);



void main()
{
	setlocale(LC_ALL, " rus");
	const int n = 10;
	int arr[n]{};

	const int n =10;
	int arr1[n]{};

	FillRand(arr, n);
	//Print(arr, n);

	UniqueRand(arr,arr1, n);
	Print(arr1, n);
}
void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10;
	}
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}void Print(int arr1[], const int t)
{
	for (int i = 0; i < t; i++)
	{
		cout << arr1[i] << "\t";
	}
	cout << endl;
}
void UniqueRand(int arr[],int arr1[], const int n)
{
	for (int i = 0; i < n; i++)
	{
	
		
			if((i == 0) || arr[i] > arr[i - 1] && (i == n - 1) || (arr[i] < arr[i] + 1))
			{
				arr1[i] = arr[i];
				for (int i = 0; i < n; i++)
				{
					cout << arr1[i] << "\t";
				}
			}
		

	}
	cout << endl;
}

