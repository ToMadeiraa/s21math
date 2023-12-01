#include "../s21_math.h"
long double s21_floor(double x) {
  if (x == S21_NAN || x == -S21_NAN) return x;
  if (x == S21_INF) return x;
  if (x == -S21_INF) return x;
  if (x != (int)x)
    return (x < 0) ? (int)(x - 1) : (int)(x);
  else
    return x;
}