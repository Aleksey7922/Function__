#include<iostream>

using namespace std;
using std::cout;
using std::endl;
using std::cin;

#define delimiter "\n---------------------------";

const int ROWS = 5;
const int COLS = 8;

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n, int maxRand, int minRand);
void FillRand(char arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS);

void Print(const int arr[], const int n);
void Print(const double arr[], const int n);
void Print(const char arr[], const int n);
void Print(const int arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(const double arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(const char arr[ROWS][COLS], const int ROWS, const int COLS);

int Sum(const int arr[], const int n);
double Sum(const double arr[], const int n);
char Sum(const char arr[], const int n);
int Sum(const int arr[ROWS][COLS], const int ROWS, const int COLS);
double Sum(const double arr[ROWS][COLS], const int ROWS, const int COLS);
char Sum(const char arr[ROWS][COLS], const int ROWS, const int COLS);

double Avg(const int arr[], const int n);
double Avg(const int arr[ROWS][COLS], const int ROWS, const int COLS);

int minValuein(const int arr[], const int n);
double minValuein(const double arr[], const int n);
char minValuein(const char arr[], const int n);
int minValuein(const int arr[ROWS][COLS], const int ROWS, const int COLS);
int minValuein(const double arr[ROWS][COLS], const int ROWS, const int COLS);
int minValuein(const char arr[ROWS][COLS], const int ROWS, const int COLS);

int maxValuein(const int arr[], const int n);
double maxValuein(const double arr[], const int n);
char maxValuein(const char arr[], const int n);
int maxValuein(const int arr[ROWS][COLS], const int ROWS, const int COLS);
int maxValuein(const double arr[ROWS][COLS], const int ROWS, const int COLS);
int maxValuein(const char arr[ROWS][COLS], const int ROWS, const int COLS);

void Sort(int arr[], const int n);
void Sort(char arr[], const int n);
void Sort(double arr[], const int n);
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Sort(double arr[ROWS][COLS], const int ROWS, const int COLS);
void Sort(char arr[ROWS][COLS], const int ROWS, const int COLS);

void shiftLeft(int arr[], const int n, int number_of_shifts);
void shiftLeft(double arr[], const int n, int number_of_shifts);
void shiftLeft(char arr[], const int n, int number_of_shifts);
void shiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
void shiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
void shiftLeft(char arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);

void shiftRight(int arr[], const int n, int number_of_shifts);
void shiftRight(double arr[], const int n, int number_of_shifts);
void shiftRight(char arr[], const int n, int number_of_shifts);
void shiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
void shiftRight(double arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
void shiftRight(char arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);

void UniqueRand(int arr[], const int n);
void UniqueRand(double arr[], const int n);
void UniqueRand(char arr[], const int n);
void UniqueRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void UniqueRand(double arr[ROWS][COLS], const int ROWS, const int COLS);
void UniqueRand(char arr[ROWS][COLS], const int ROWS, const int COLS);

void Search(int arr[], const int n);
void Search(double arr[], const int n);
void Search(char arr[], const int n);
void Search(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Search(double arr[ROWS][COLS], const int ROWS, const int COLS);
void Search(char arr[ROWS][COLS], const int ROWS, const int COLS);

//#define ARRAYS_1
#define ARRAYS_2

void main()
{
	setlocale(LC_ALL, "");
#ifdef ARRAYS_1
	const int n = 10;
	int arr[n] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	FillRand(arr, n, 0, 5);
	//UniqueRand(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(arr, n) << endl;
	cout << "Минимальное значение в массиве:  " << minValuein(arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValuein(arr, n) << endl;
	Search(arr, n);
	Sort(arr, n);
	Print(arr, n);

	int number_of_shifts;
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	shiftLeft(arr, n, number_of_shifts);
	Print(arr, n);
	shiftRight(arr, n, number_of_shifts);
	Print(arr, n);

	/*const int SIZE = 8;
	double d_arr[SIZE];
	FillRand(d_arr, SIZE);
	Print(d_arr, SIZE);*/
#endif // ARRAYS_1

	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS, 10, 20);
	Print(i_arr_2, ROWS, COLS);
	Search(i_arr_2, ROWS, COLS);
	int number_of_shifts;

	cout << "Сумма элементов массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(i_arr_2, ROWS, COLS) << endl;
	//cout << "Минимальное значение в массиве:  " << minValuein(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << maxValuein(i_arr_2, ROWS, COLS) << endl;

	//Sort(i_arr_2, ROWS, COLS);
	//Print(i_arr_2, ROWS, COLS);

	/*cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	shiftLeft(i_arr_2, ROWS, COLS, number_of_shifts);
	Print(i_arr_2, ROWS, COLS);*/

	/*cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	shiftRight(i_arr_2, ROWS, COLS, number_of_shifts);
	UniqueRand(i_arr_2, ROWS, COLS);*/

	//UniqueRand(i_arr_2, ROWS, COLS);
	//Print(i_arr_2, ROWS, COLS);
	//Search(i_arr_2, ROWS, COLS);
	//Print(i_arr_2, ROWS, COLS);
}
void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	//rand();	//возвращает псевдослучайное число в диапазоне от 0 до 32 767 (MAX_RAND)
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}
void FillRand(double arr[], const int n, int maxRand, int minRand)
{
	//rand();	//возвращает псевдослучайное число в диапазоне от 0 до 32 767 (MAX_RAND)
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000;
		arr[i] /= 100;
	}
}
void FillRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
	}
}
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % (maxRand - minRand) + minRand;

		}
	}
}
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}

void Print(const int arr[], const int n)
{
	//Вывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(const double arr[], const int n)
{
	//Вывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(const char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(const int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
void Print(const double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
void Print(const char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; i < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

int Sum(const int arr[], const int n)
{
	//Вычисление суммы элементов массива:
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Sum(const double arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
char Sum(const char arr[], const int n)
{
	char sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
int Sum(const int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
double Sum(const double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
char Sum(const char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	char sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

double Avg(const int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
double Avg(const int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}
//double Avg(const int arr[ROWS][COLS], const int ROWS, const int COLS)
//{
//	double sum = 0;
//	for (int i = 0; i < ROWS; i++)
//	{
//		for (int j = 0; j < COLS; j++)
//		{
//			sum += arr[i][j];
//		}
//	}
//	return sum / (ROWS * COLS);
//}

int minValuein(const int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
double minValuein(const double arr[], const int n)
{
	double min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
char minValuein(const char arr[], const int n)
{
	char min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
int minValuein(const int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; i++)
		{
			if (arr[i][j] < min)min = arr[i][j];
		}
		return min;
	}
}
int minValuein(const double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; i++)
		{
			if (arr[i][j] < min)min = arr[i][j];
		}
		return min;
	}
}
int minValuein(const char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	char min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; i++)
		{
			if (arr[i][j] < min)min = arr[i][j];
		}
		return min;
	}
}

int maxValuein(const int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
double maxValuein(const double arr[], const int n)
{
	double max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
char maxValuein(const char arr[], const int n)
{
	char max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
int maxValuein(const int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max)max = arr[i][j];
		}
	}
	return max;
}
int maxValuein(const double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max)max = arr[i][j];
		}
	}
	return max;
}
int maxValuein(const char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	char max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max)max = arr[i][j];
		}
	}
	return max;
}

void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		//Счетчик 'i' выбирает элемент, в который нужно поместить минимальное значение из перебираемых
		for (int j = i + 1; j < n; j++)
		{
			//Счетчик 'j' перебирает элементы, в поисках минимального
			//arr[i] - выбранный элемент
			//arr[j] - перебираемый элемент
			if (arr[j] < arr[i])
			{
				arr[i] ^= arr[j];
				arr[j] ^= arr[i];
				arr[i] ^= arr[j];
			}
		}
	}
}
void Sort(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				arr[i] ^= arr[j];
				arr[j] ^= arr[i];
				arr[i] ^= arr[j];
			}
		}
	}
}
void Sort(double arr[], const int n)
{

	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				arr[i] = arr[j];
				arr[j] - arr[i];
				arr[i] = arr[j];
			}
		}
	}
}
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int iterations = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					//arr[i][j] - выбранный элемент
					//arr[k][l] - перебираемый элемент
					if (arr[k][l] < arr[i][j])
					{
						arr[i][j] ^= arr[k][l];
						arr[k][l] ^= arr[i][j];
						arr[i][j] ^= arr[k][l];
					}
					iterations++;
				}
			}
		}
	}
	cout << "массив отсортирован " << ',' << "количество итераций: " << iterations << endl;
}
void Sort(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int iterations = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = 0; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (arr[k][l] < arr[i][j])
					{
						arr[i][j] = arr[k][l];
						arr[k][l] - arr[i][j];
						arr[i][j] = arr[k][l];
					}
					iterations++;
				}
			}
		}
	}
	cout << "массив отсортирован " << ',' << "количество итераций: " << iterations << endl;
}
void Sort(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int iterations = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = 0; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (arr[k][l] < arr[i][j])
					{
						arr[i][j] ^= arr[k][l];
						arr[k][l] ^= arr[i][j];
						arr[i][j] ^= arr[k][l];
					}
					iterations++;
				}
			}
		}
	}
	cout << "массив отсортирован " << ',' << "количество итераций: " << iterations << endl;
}

void shiftLeft(int arr[], const int n, int number_of_shifts)
{

	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void shiftLeft(double arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		double buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void shiftLeft(char arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		char buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void shiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		for (int j = 0; j < number_of_shifts; j++)
		{
			int buffer = arr[0][0];
			for (int i = 0; i < ROWS; i++)
			{
				for (int j = 0; j < COLS; j++)
				{
					arr[i][j] = arr[i][j + 1];
				}
			}
			arr[ROWS - 1][COLS - 1] = buffer;
		}
	}

}
void shiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		for (int j = 0; j < number_of_shifts; j++)
		{
			double buffer = arr[0][0];

			for (int i = 0; i < ROWS; i++)
			{
				for (int j = 0; j < COLS; j++)
				{
					arr[i][j] = arr[i][j + 1];
				}
			}
			arr[ROWS - 1][COLS - 1] = buffer;
		}
	}
}
void shiftLeft(char arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		for (int j = 0; j < number_of_shifts; j++)
		{
			char buffer = arr[0][0];
			for (int i = 0; i < ROWS; i++)
			{
				for (int j = 0; j < COLS; j++)
				{
					arr[i][j] = arr[i][j + 1];
				}
			}
			arr[ROWS - 1][COLS - 1] = buffer;
		}
	}
}

void shiftRight(int arr[], const int n, int number_of_shifts)
{
	/*for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}*/

	shiftLeft(arr, n, n - number_of_shifts);
}
void shiftRight(double arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		double buffer = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}
void shiftRight(char arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		char buffer = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}
void shiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		for (int j = 0; j < number_of_shifts; j++)
		{
			int buffer = arr[ROWS - 1][COLS - 1];
			for (int i = ROWS - 1; i > 0; i--)
			{
				for (int j = COLS - 1; j > 0; j--)
				{
					arr[i][j] = arr[i][j - 1];
				}
			}arr[0][0] = buffer;

		}

	}

}
void shiftRight(double arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		for (int j = 0; j < number_of_shifts; j++)
		{
			double buffer = arr[ROWS - 1][COLS - 1];
			for (int i = ROWS - 1; i > 0; i--)
			{
				for (int j = COLS - 1; j > 0; j--)
				{
					arr[i][j] = arr[i][j - 1];
				}
			}arr[0][0] = buffer;

		}

	}

}
void shiftRight(char arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		for (int j = 0; j < number_of_shifts; j++)
		{
			char buffer = arr[ROWS - 1][COLS - 1];
			for (int i = ROWS - 1; i > 0; i--)
			{
				for (int j = COLS - 1; j > 0; j--)
				{
					arr[i][j] = arr[i][j - 1];
				}
			}arr[0][0] = buffer;

		}

	}

}

void UniqueRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				i--;
				break;
			}
		}
	}
}
void UniqueRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				i--;
				break;
			}
		}
	}
}
void UniqueRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				i--;
				break;
			}
		}
	}
}
void UniqueRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			bool unique;
			do
			{
				arr[i][j] = rand() % (ROWS * COLS);

				unique = true;
				for (int k = 0; k <= i; k++)
				{
					for (int l = 0; l < (k == i ? j : COLS); l++)
					{
						if (arr[i][j] == arr[k][l])
						{
							unique = false;
							break;
						}
					}

					if (!unique)break;
				}
			} while (!unique);
		}
	}
}
void UniqueRand(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			bool unique;
			do
			{

				arr[i][j] = rand() % (ROWS * COLS);
			unique = true;
			for (int k = 0; k <= i; k++)
			{
				for (int l = 0; l <(k==i ? j:COLS); l++)
				{
					if (arr[i][j] == arr[k][l])
					{
						unique = false;
						break;
					}
				}
				if (!unique)break;
			}
			} while (!unique);
		}
	}
}
void UniqueRand(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			bool unique;
			do
			{
				arr[i][j] = rand() % (ROWS * COLS);

				unique = true;
				for (int k = 0; k <= i; k++)
				{
					for (int l = 0; l < (k == i ? j : COLS); l++)
					{
						if (arr[i][j] == arr[k][l])
						{
							unique = false;
							break;
						}
					}

					if (!unique)break;
				}
			} while (!unique);
		}
	}
}
	

void Search(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		bool met_defore = false;//предположим что искомое число не встречалось в массиве ранее,
		//но это нужно проверить:

		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				met_defore = true;// запоминаем то,что число встречалось ранее
				break;//прерывает все текущие итерации,и все последующие итерации
			}
		}
		if (met_defore)continue;// прерывае текущую итерацю,и переходит к следующей
		int count = 0;// счетчик повторений
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (count)printf("Значение %i повторяется %i раз\n", arr[i], count);
		//if (count)cout << " если " << arr[i] << "повторяется " << count << "раз" << endl;
	}

}
void Search(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		bool met_defore = false;

		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				met_defore = true;
				break;
			}
		}
		if (met_defore)continue;
		int count = 0;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		//if (count)printf("Значение %i повторяется %i раз\n", arr[i], count);
		if (count)cout << " если " << arr[i] << "повторяется " << count << "раз" << endl;
	}
}
void Search(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		bool met_defore = false;

		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				met_defore = true;
				break;
			}
		}
		if (met_defore)continue;
		int count = 0;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (count)printf("Значение %i повторяется %i раз\n", arr[i], count);
		//if (count)cout << " если " << arr[i] << "повторяется " << count << "раз" << endl;
	}
}
void Search(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			// Выясняем,встречался ли элемент ранее:
			int met_before = false;
			for (int k = 0; k <= i; k++)
			{
				for (int l = 0; l < (k == i ? j : COLS); l++)
				{
					if (arr[i][j] == arr[k][l])
					{
						met_before = true;
						break;
					}
				}
				if (met_before)break;
			}
			// Если злемент встречался ранее, то мы уже вывели его на экран, и второй раз этого делать  не надо
			//поэтому пропускаем следующий код:
			if (met_before)continue;
			// если же элемент ранее не встречался, то нужно выяснить сколько раз  он повторяетсяся, и вывести его на экран 
			int count = 0; //счетчик провторений
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (arr[i][j] == arr[k][l])
					{
						count++;
					}
				}
			}
			//if (count)cout << " если " << arr[i][j] << "повторяется " << count << "раз" << endl;
			if (count)printf("значение %i повторяется %i раз", arr[i][j], count);
		}
	}
}
void Search(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			int met_before = false;
			for (int k = 0; k <= i; k++)
			{
				for (int l = 0; l < (k == i ? j : COLS); l++)
				{
					if (arr[i][j] == arr[k][l])
					{
						met_before = true;
						break;
					}
				}
				if (met_before)break;
			}
			if (met_before)continue;
			int count = 0;
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (arr[i][j] == arr[k][l])
					{
						count++;
					}
				}
			}
			if (count)printf("значение %i повторяется %i раз", arr[i][j], count);

		}
	}
}
void Search(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			int met_before = false;
			for (int k = 0; k <= i; k++)
			{
				for (int l = 0; l < (k == i ? j : COLS); l++)
				{
					if (arr[i][j] == arr[k][l])
					{
						met_before = true;
						break;
					}
				}
				if (met_before)break;
			}
			if (met_before)continue;
			int count = 0;
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (arr[i][j] == arr[k][l])
					{
						count++;
					}
				}
			}
			if (count)printf("значение %i повторяется %i раз", arr[i][j], count);

		}
	}
}

