#include "../s21_math.h"
long double s21_pow(double base, double exp) {
  if (base == 1) return 1;
  if (base == -S21_INF) {
    if (exp == S21_INF)
      return S21_INF;
    else if (exp == -S21_INF)
      return 0;
  }
  if (exp < 0 && base == 0) return S21_INF;
  double power = s21_fabs(exp);
  if (power == (int)power) {  // если exp - целое число
    long double res = 1;
    for (int i = 0; i < power; i++) res *= base;
    return res;
  }
  long double s = power * s21_log(base);  // степень e^s
  double res = s21_exp(s);
  if (exp < 0) res = 1 / res;
  return res;
}