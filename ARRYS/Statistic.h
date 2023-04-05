#pragma once
#include"constants.h"

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

