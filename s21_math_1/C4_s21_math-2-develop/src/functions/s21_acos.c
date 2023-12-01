#include "../s21_math.h"
long double s21_acos(double x) {
  if (x > 1 || x < -1) return S21_NAN;
  if (x < 0) return s21_atan(s21_sqrt(1 - x * x) / x) + PI;
  return (x == -1) ? PI : s21_atan(s21_sqrt(1 - x * x) / x);
}
