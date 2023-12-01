#include "../s21_math.h"
long double s21_exp(double x) {  // e^x = e^n * e^r
  if (x == 0) return 1;
  double s = s21_fabs(x);
  int n = (int)s;
  long double r = s - n, e_n = 1, num = 1, denum = 1, sum = 0;
  for (int i = 0; i < n; i++) e_n = e_n * E;
  for (int i = 1; i < 30; i++) {
    num = num * r;
    denum = denum * i;
    sum = sum + num / denum;
  }
  long double res = e_n * (1 + sum);
  if (x > 0)
    return res;
  else
    return 1 / res;
}