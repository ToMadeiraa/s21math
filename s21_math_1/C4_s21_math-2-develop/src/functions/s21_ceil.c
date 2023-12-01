long double s21_ceil(double x) {
  if (x == 0)
    return 0;
  else
    return (x < 0) ? (int)(x) : (int)(x + 1);
}