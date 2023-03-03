#include<iostream>
using namespace std;


int Sum(int a, int b);    //протоип функции,обьявление функции
int Dif(int a, int b);
int Product(int a=1, int b=1);//параметры по умолчанию
double Quotient(double a, double b);
int Remivder(int a, int b);


void main()
{
	setlocale(LC_ALL, "RUS");

	int a, b;
	cout << "ВВЕДИТЕ ДВА ЧИСЛА: "; cin >> a >> b;

	int c = Sum(a, b); //использование функции
	cout << a << "+" << b << "=" << c << endl;
	cout << a << "-" << b << "=" << Dif(a, b) << endl;
	cout << a << "*" << b << "=" << Product(a, b) << endl;
	cout << a << "/" << b << "=" << Quotient(a, b) << endl;
	cout << a << "%" << b << "=" << Remivder(a, b) << endl;
}
int Sum(int a, int b)   //реализация функции 
{
	int c = a + b;
	return c;
}
int Dif(int a, int b)
{
	return a - b;
}
int Product(int a, int b)
{
	return a * b;
}
double Quotient(double a, double b)
{
	return a / b;
}
int Remivder(int a, int b)
{
	return a % b;
}
