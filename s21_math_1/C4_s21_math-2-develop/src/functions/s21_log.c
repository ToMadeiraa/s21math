#include "../s21_math.h"
long double s21_log(double x) {
  if (x == S21_INF) return S21_INF;
  if (x <= 0) {
    if (x < 0) return S21_NAN;
    return (-1.0 / 0.0);
  } else if (x == 1)
    return 0;
  else {
    int p = 0;
    long double r = x;
    for (; r >= 10; p++) r /= 10;
    r = s21_sqrt(r);
    long double y = (r - 1) / (r + 1), num = y, sum = y;
    for (int i = 3; i < 50; i += 2) {
      num = num * y * y;
      sum = sum + num / i;
    }
    long double res = 4 * sum + M * p;
    return res;
  }
}