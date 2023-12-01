#include <stdio.h>
#include <stdlib.h>
#define E 2.718281828459045235360287471352  // e
#define M 2.3025850929940456840179914       // ln10
#define PI 3.14159265358979323846
#define EPS 0.000000001
#define MAX (1.7014118e+38 - 1)
#define S21_NAN 0.0 / 0.0
#define S21_INF 1.0 / 0.0

int s21_abs(int);
long double s21_fabs(double);
long double s21_ceil(double);
long double s21_floor(double);
long double s21_sqrt(double);
long double s21_exp(double);
long double s21_log(double);
long double s21_pow(double base, double exp);
long double s21_fmod(double x, double y);
long double s21_sin(double);
long double s21_cos(double);
long double s21_tan(double);
long double s21_asin(double);
long double s21_acos(double);
long double s21_atan(double);

long double s21_sin_calc(double);
long double s21_atan_calc(double);