#include "../s21_math.h"
long double s21_sin(double x) {
  x = s21_fmod(x, (PI * 2.0));
  if (x > 3 * PI / 2.0) {  // 4 квадрант
    x -= PI;
    long double rel = x - PI / 2;
    x = PI / 2 - rel;
    return (-(s21_sin_calc(x)));
  } else if (x >= PI && x <= 3 * PI / 2.0) {  // 3 квадрант
    x -= PI;
    return (-(s21_sin_calc(x)));
  } else if (x < PI && x >= PI / 2.0) {  // 2 квадрант
    x = PI - x;
    return (s21_sin_calc(x));
  }
  return (s21_sin_calc(x));
}

long double s21_sin_calc(double x) {
  short int sign = 1;
  long double num = x, denum = 1, res = x;
  for (int i = 3; i < 50; i += 2) {
    sign = sign * (-1);
    num = num * x * x;
    denum = denum * i * (i - 1);
    res += sign * (num / denum);
  }
  return res;
}