#include "../s21_math.h"
long double s21_sqrt(double x) {  // return
  long double res;
  if (x < 0)
    return S21_NAN;
  else if (x == S21_INF)
    return S21_INF;
  else if (x == 0)
    res = 0;
  else {
    long double guess = 10;
    for (int i = 0; i < 50; i++) guess = guess / 2 + x / (2 * guess);
    res = guess;
  }
  return res;
}