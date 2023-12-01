#include "../s21_math.h"
long double s21_atan(double x) {
  long double res;
  if (x > 1) {
    x = 1 / x;
    x = (s21_sqrt(3) * x - 1) / (s21_sqrt(3) + x);
    res = PI / 2 - PI / 6 - s21_atan_calc(x);
  } else if (x < -1) {
    x = -1 / x;
    x = (s21_sqrt(3) * x - 1) / (s21_sqrt(3) + x);
    res = -(PI / 2 - PI / 6 - s21_atan_calc(x));
  } else if (x > 0 && x <= 1) {
    x = (s21_sqrt(3) * x - 1) / (s21_sqrt(3) + x);
    res = PI / 6 + s21_atan_calc(x);
  } else if (x >= -1 && x < 0) {
    x = -x;
    x = (s21_sqrt(3) * x - 1) / (s21_sqrt(3) + x);
    res = -(PI / 6 + s21_atan_calc(x));
  } else if (x == 0)
    res = 0;
  return res;
}

long double s21_atan_calc(double x) {
  short int sign = 1;
  long double num = x;
  long double res = x;
  for (int i = 3; i < 50; i += 2) {
    sign = sign * (-1);
    num = num * x * x;
    res += sign * (num / i);
  }
  return res;
}