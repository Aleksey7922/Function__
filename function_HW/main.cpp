#include<iostream>
using namespace std;

int Degree(int a, int pow);
int Factorial(int i, int f);

void main()
{
	setlocale(LC_ALL, "RUS");

	int c, f = 1, i = 1;
	cout << "Введите число: "; cin >> c;
	for (; i <= c; i++)f *= i;
	cout << c << "!" << "=" << Factorial(i, f) << endl;

	int a, n, pow = 1;
	cout << "Введите число: "; cin >> a;
	cout << "Укажите степень: "; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		pow *= a;
	}
	cout << a << "^" << n << "=" << Degree(a, pow);
}
int Factorial(int i, int f)
{
	return f;
}
int Degree(int a, int pow)
{
	return pow;
}