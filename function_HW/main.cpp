#include<iostream>
using namespace std;

int Degree(int a, int pow);
int Factorial(int n);

void main()
{
	setlocale(LC_ALL, "RUS");

	int n;
	cout << "Введите число: "; cin >> n;
	cout << n << "!=" << Factorial(n) << endl;

	int a;
	cout << "Введите число: "; cin >> a;
	cout << "Укажите степень: "; cin >> n;
	
	cout << a << "^" << n << "=" << Degree(a, n);
}
int Factorial(int n)
{
	int f = 1;
	for (int i = 1; i <= n; i++)
		f *= i;
	return f;
}
int Degree(int a, int n)
{
	int pow = 1;
	for (int i = 1; i <= n; i++)
	{
		pow *= a;
	}

	return pow;
}