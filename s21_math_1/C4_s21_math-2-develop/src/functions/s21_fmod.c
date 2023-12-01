#include "../s21_math.h"
long double s21_fmod(double x, double y) {
  if (x == 0 && (y == S21_INF || y == -S21_INF)) return 0;
  if ((x == S21_INF || x == -S21_INF) && (y == S21_INF || y == -S21_INF))
    return S21_NAN;
  if (x == 0 && y == 0) return S21_NAN;
  if (y == 0) return S21_NAN;
  long double a = s21_floor(x / y);
  long double res = x - y * a;
  return res;
}