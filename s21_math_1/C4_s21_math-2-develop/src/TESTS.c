#include <check.h>
#include <math.h>

#include "s21_math.h"

// ABS
START_TEST(test_abs_1) {
  int x = 0;
  ck_assert_int_eq(s21_abs(x), abs(x));
}
END_TEST

START_TEST(test_abs_2) {
  int x = -0;
  ck_assert_int_eq(s21_abs(x), abs(x));
}
END_TEST

START_TEST(test_abs_3) {
  int x = 5;
  ck_assert_int_eq(s21_abs(x), abs(x));
}
END_TEST

START_TEST(test_abs_4) {
  int x = (-5);
  ck_assert_int_eq(s21_abs(x), abs(x));
}
END_TEST

START_TEST(test_abs_5) {
  int x = S21_INF;
  ck_assert_int_eq(s21_abs(x), abs(x));
}
END_TEST

START_TEST(test_abs_6) {
  int x = -S21_INF;
  ck_assert_int_eq(s21_abs(x), abs(x));
}
END_TEST

START_TEST(test_abs_7) {
  int x = S21_NAN;
  ck_assert_int_eq(s21_abs(x), abs(x));
}
END_TEST

START_TEST(test_abs_8) {
  int x = -S21_NAN;
  ck_assert_int_eq(s21_abs(x), abs(x));
}
END_TEST

// FABS
START_TEST(test_fabs_1) {
  double x = 0.0;
  ck_assert_ldouble_eq(s21_fabs(x), fabs(x));
}
END_TEST

START_TEST(test_fabs_2) {
  double x = (-0.0);
  ck_assert_ldouble_eq(s21_fabs(x), fabs(x));
}
END_TEST

START_TEST(test_fabs_3) {
  double x = 5.5;
  ck_assert_ldouble_eq(s21_fabs(x), fabs(x));
}
END_TEST

START_TEST(test_fabs_4) {
  double x = (-5.5);
  ck_assert_ldouble_eq(s21_fabs(x), fabs(x));
}
END_TEST

START_TEST(test_fabs_5) {
  double x = S21_INF;
  ck_assert_ldouble_eq(s21_fabs(x), fabs(x));
}
END_TEST

START_TEST(test_fabs_6) {
  double x = -S21_INF;
  ck_assert_ldouble_eq(s21_fabs(x), fabs(x));
}
END_TEST

START_TEST(test_fabs_7) {
  double x = S21_NAN;
  ck_assert_ldouble_nan(s21_fabs(x));
}
END_TEST

START_TEST(test_fabs_8) {
  double x = -S21_NAN;
  ck_assert_ldouble_nan(s21_fabs(x));
}
END_TEST

// CEIL
START_TEST(test_ceil_1) {
  double x = 0;
  ck_assert_ldouble_eq(s21_ceil(x), ceil(x));
}
END_TEST

START_TEST(test_ceil_2) {
  double x = (-0);
  ck_assert_ldouble_eq(s21_ceil(x), ceil(x));
}
END_TEST

START_TEST(test_ceil_3) {
  double x = 0.5;
  ck_assert_ldouble_eq(s21_ceil(x), ceil(x));
}
END_TEST

START_TEST(test_ceil_4) {
  double x = (-0.5);
  ck_assert_ldouble_eq(s21_fabs(x), fabs(x));
}
END_TEST

START_TEST(test_ceil_5) {
  double x = 5.5;
  ck_assert_ldouble_eq(s21_ceil(x), ceil(x));
}
END_TEST

START_TEST(test_ceil_6) {
  double x = (-5.5);
  ck_assert_ldouble_eq(s21_fabs(x), fabs(x));
}
END_TEST

START_TEST(test_ceil_7) {
  double x = S21_INF;
  ck_assert_ldouble_eq(s21_fabs(x), fabs(x));
}
END_TEST

START_TEST(test_ceil_8) {
  double x = -S21_INF;
  ck_assert_ldouble_eq(s21_fabs(x), fabs(x));
}
END_TEST

// FLOOR
START_TEST(test_floor_1) {
  double x = 0;
  ck_assert_ldouble_eq(s21_floor(x), floor(x));
}
END_TEST

START_TEST(test_floor_2) {
  double x = (-0);
  ck_assert_ldouble_eq(s21_floor(x), floor(x));
}
END_TEST

START_TEST(test_floor_3) {
  double x = 0.5;
  ck_assert_ldouble_eq(s21_floor(x), floor(x));
}
END_TEST

START_TEST(test_floor_4) {
  double x = (-0.5);
  ck_assert_ldouble_eq(s21_floor(x), floor(x));
}
END_TEST

START_TEST(test_floor_5) {
  double x = 5.5;
  ck_assert_ldouble_eq(s21_floor(x), floor(x));
}
END_TEST

START_TEST(test_floor_6) {
  double x = (-5.5);
  ck_assert_ldouble_eq(s21_floor(x), floor(x));
}
END_TEST

START_TEST(test_floor_7) {
  double x = S21_INF;
  ck_assert_ldouble_eq(s21_floor(x), floor(x));
}
END_TEST

START_TEST(test_floor_8) {
  double x = -S21_INF;
  ck_assert_ldouble_eq(s21_floor(x), floor(x));
}
END_TEST

// SQRT
START_TEST(test_sqrt_1) {
  double x = 0;
  ck_assert_ldouble_eq_tol(s21_sqrt(x), sqrt(x), EPS);
}
END_TEST

START_TEST(test_sqrt_2) {
  double x = (-0);
  ck_assert_ldouble_eq_tol(s21_sqrt(x), sqrt(x), EPS);
}
END_TEST

START_TEST(test_sqrt_3) {
  double x = 1;
  ck_assert_ldouble_eq_tol(s21_sqrt(x), sqrt(x), EPS);
}
END_TEST

START_TEST(test_sqrt_4) {
  double x = -1;
  ck_assert_ldouble_nan(s21_sqrt(x));
}
END_TEST

START_TEST(test_sqrt_5) {
  double x = S21_INF;
  ck_assert_ldouble_infinite(s21_sqrt(x));
}
END_TEST

START_TEST(test_sqrt_6) {
  double x = -S21_INF;
  ck_assert_ldouble_nan(s21_sqrt(x));
}
END_TEST

START_TEST(test_sqrt_7) {
  double x = S21_NAN;
  ck_assert_ldouble_nan(s21_sqrt(x));
}
END_TEST

START_TEST(test_sqrt_8) {
  double x = -S21_NAN;
  ck_assert_ldouble_nan(s21_sqrt(x));
}
END_TEST

// EXP
START_TEST(test_exp_1) {
  double x = 0;
  ck_assert_ldouble_eq_tol(s21_exp(x), exp(x), EPS);
}
END_TEST

START_TEST(test_exp_2) {
  double x = (-0);
  ck_assert_ldouble_eq_tol(s21_exp(x), exp(x), EPS);
}
END_TEST

START_TEST(test_exp_3) {
  double x = 3;
  ck_assert_ldouble_eq_tol(s21_exp(x), exp(x), EPS);
}
END_TEST

START_TEST(test_exp_4) {
  double x = (-3);
  ck_assert_ldouble_eq_tol(s21_exp(x), exp(x), EPS);
}
END_TEST

START_TEST(test_exp_5) {
  double x = 5.5;
  ck_assert_ldouble_eq_tol(s21_exp(x), exp(x), EPS);
}
END_TEST

START_TEST(test_exp_6) {
  double x = (-5.5);
  ck_assert_ldouble_eq_tol(s21_exp(x), exp(x), EPS);
}
END_TEST

START_TEST(test_exp_7) {
  double x = S21_INF;
  ck_assert_ldouble_infinite(s21_exp(x));
}
END_TEST

START_TEST(test_exp_8) {
  double x = -S21_INF;
  ck_assert_ldouble_eq_tol(s21_exp(x), exp(x), EPS);
}
END_TEST

START_TEST(test_exp_9) {
  double x = S21_NAN;
  ck_assert_ldouble_nan(s21_exp(x));
}
END_TEST

START_TEST(test_exp_10) {
  double x = -S21_NAN;
  ck_assert_ldouble_nan(s21_exp(x));
}
END_TEST

// LOG
START_TEST(test_log_1) {
  double x = 0;
  ck_assert_ldouble_eq(s21_log(x), log(x));
}
END_TEST

START_TEST(test_log_2) {
  double x = (-0);
  ck_assert_ldouble_eq(s21_log(x), log(x));
}
END_TEST

START_TEST(test_log_3) {
  double x = 1.0;
  ck_assert_ldouble_eq_tol(s21_log(x), log(x), EPS);
}
END_TEST

START_TEST(test_log_4) {
  double x = 10;
  ck_assert_ldouble_eq_tol(s21_log(x), log(x), EPS);
}
END_TEST

START_TEST(test_log_5) {
  double x = 1.5;
  ck_assert_ldouble_eq_tol(s21_log(x), log(x), EPS);
}
END_TEST

START_TEST(test_log_6) {
  double x = (-1.5);
  ck_assert_ldouble_nan(s21_log(x));
}
END_TEST

START_TEST(test_log_7) {
  double x = 0.5;
  ck_assert_ldouble_eq_tol(s21_log(x), log(x), EPS);
}
END_TEST

START_TEST(test_log_8) {
  double x = S21_INF;
  ck_assert_ldouble_infinite(s21_log(x));
}
END_TEST

START_TEST(test_log_9) {
  double x = -S21_INF;
  ck_assert_ldouble_nan(s21_log(x));
}
END_TEST

START_TEST(test_log_10) {
  double x = S21_NAN;
  ck_assert_ldouble_nan(s21_log(x));
}
END_TEST

// POW
START_TEST(test_pow_1) {
  double base = 0, exp = 1.5;
  ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), EPS);
}
END_TEST

START_TEST(test_pow_2) {
  double base = 1, exp = 1.5;
  ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), EPS);
}
END_TEST

START_TEST(test_pow_3) {
  double base = 2, exp = 1.5;
  ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), EPS);
}
END_TEST

START_TEST(test_pow_4) {
  double base = 2, exp = 0;
  ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), EPS);
}
END_TEST

START_TEST(test_pow_5) {
  double base = 0, exp = 0;
  ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), EPS);
}
END_TEST

START_TEST(test_pow_6) {
  double base = 2, exp = -1.5;
  ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), EPS);
}
END_TEST

START_TEST(test_pow_7) {
  double base = 0, exp = -4;
  ck_assert_ldouble_infinite(s21_pow(base, exp));
}
END_TEST

START_TEST(test_pow_8) {
  double base = 0, exp = S21_INF;
  ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), EPS);
}
END_TEST

START_TEST(test_pow_9) {
  double base = 0, exp = -S21_INF;
  ck_assert_ldouble_infinite(s21_pow(base, exp));
}
END_TEST

START_TEST(test_pow_10) {
  double base = S21_INF, exp = 0;
  ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), EPS);
}
END_TEST

START_TEST(test_pow_11) {
  double base = -S21_INF, exp = 0;
  ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), EPS);
}
END_TEST

START_TEST(test_pow_12) {
  double base = 1, exp = S21_INF;
  ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), EPS);
}
END_TEST

START_TEST(test_pow_13) {
  double base = 2, exp = S21_INF;
  ck_assert_ldouble_infinite(pow(base, exp));
}
END_TEST

START_TEST(test_pow_14) {
  double base = 2, exp = -S21_INF;
  ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), EPS);
}
END_TEST

START_TEST(test_pow_15) {
  double base = S21_INF, exp = S21_INF;
  ck_assert_ldouble_infinite(pow(base, exp));
}
END_TEST

START_TEST(test_pow_16) {
  double base = S21_INF, exp = -S21_INF;
  ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), EPS);
}
END_TEST

START_TEST(test_pow_17) {
  double base = -S21_INF, exp = S21_INF;
  ck_assert_ldouble_infinite(s21_pow(base, exp));
}
END_TEST

START_TEST(test_pow_18) {
  double base = -S21_INF, exp = -S21_INF;
  ck_assert_ldouble_eq_tol(s21_pow(base, exp), pow(base, exp), EPS);
}
END_TEST

// fmod
START_TEST(test_fmod_1) {
  double x = 0, y = 0;
  ck_assert_ldouble_nan(s21_fmod(x, y));
}
END_TEST

START_TEST(test_fmod_2) {
  double x = 0, y = 5.5;
  ck_assert_ldouble_eq_tol(s21_fmod(x, y), fmod(x, y), EPS);
}
END_TEST

START_TEST(test_fmod_3) {
  double x = 5.5, y = 0;
  ck_assert_ldouble_nan(s21_fmod(x, y));
}
END_TEST

START_TEST(test_fmod_4) {
  double x = 5.5, y = 1.6;
  ck_assert_ldouble_eq_tol(s21_fmod(x, y), fmod(x, y), EPS);
}
END_TEST

START_TEST(test_fmod_5) {
  double x = 1.6, y = 5.5;
  ck_assert_ldouble_eq_tol(s21_fmod(x, y), fmod(x, y), EPS);
}
END_TEST

START_TEST(test_fmod_6) {
  double x = S21_INF, y = 0;
  ck_assert_ldouble_nan(s21_fmod(x, y));
}
END_TEST

START_TEST(test_fmod_7) {
  double x = S21_INF, y = 1;
  ck_assert_ldouble_nan(s21_fmod(x, y));
}
END_TEST

START_TEST(test_fmod_8) {
  double x = -S21_INF, y = 0;
  ck_assert_ldouble_nan(s21_fmod(x, y));
}
END_TEST

START_TEST(test_fmod_9) {
  double x = -S21_INF, y = 1;
  ck_assert_ldouble_nan(s21_fmod(x, y));
}
END_TEST

START_TEST(test_fmod_10) {
  double x = 0, y = S21_INF;
  ck_assert_ldouble_eq_tol(s21_fmod(x, y), fmod(x, y), EPS);
}
END_TEST

START_TEST(test_fmod_11) {
  double x = 0, y = -S21_INF;
  ck_assert_ldouble_eq_tol(s21_fmod(x, y), fmod(x, y), EPS);
}
END_TEST

START_TEST(test_fmod_12) {
  double x = S21_INF, y = S21_INF;
  ck_assert_ldouble_nan(s21_fmod(x, y));
}
END_TEST

START_TEST(test_fmod_13) {
  double x = S21_INF, y = -S21_INF;
  ck_assert_ldouble_nan(s21_fmod(x, y));
}
END_TEST

START_TEST(test_fmod_14) {
  double x = -S21_INF, y = S21_INF;
  ck_assert_ldouble_nan(s21_fmod(x, y));
}
END_TEST

START_TEST(test_fmod_15) {
  double x = -S21_INF, y = -S21_INF;
  ck_assert_ldouble_nan(s21_fmod(x, y));
}
END_TEST

START_TEST(test_fmod_16) {
  double x = S21_INF, y = 0;
  ck_assert_ldouble_nan(s21_fmod(x, y));
}
END_TEST

START_TEST(test_fmod_17) {
  double x = -S21_INF, y = 0;
  ck_assert_ldouble_nan(s21_fmod(x, y));
}
END_TEST

// SIN
START_TEST(test_sin_1) {
  double x = 0;
  ck_assert_ldouble_eq_tol(s21_sin(x), sin(x), EPS);
}
END_TEST

START_TEST(test_sin_2) {
  double x = PI / 4;
  ck_assert_ldouble_eq_tol(s21_sin(x), sin(x), EPS);
}
END_TEST

START_TEST(test_sin_3) {
  double x = PI / 2;
  ck_assert_ldouble_eq_tol(s21_sin(x), sin(x), EPS);
}
END_TEST

START_TEST(test_sin_4) {
  double x = 0.6 * PI;
  ck_assert_ldouble_eq_tol(s21_sin(x), sin(x), EPS);
}
END_TEST

START_TEST(test_sin_5) {
  double x = 0.9 * PI;
  ck_assert_ldouble_eq_tol(s21_sin(x), sin(x), EPS);
}
END_TEST

START_TEST(test_sin_6) {
  double x = PI;
  ck_assert_ldouble_eq_tol(s21_sin(x), sin(x), EPS);
}
END_TEST

START_TEST(test_sin_7) {
  double x = 5 * PI / 4;
  ck_assert_ldouble_eq_tol(s21_sin(x), sin(x), EPS);
}
END_TEST

START_TEST(test_sin_8) {
  double x = 6 * PI / 4;
  ck_assert_ldouble_eq_tol(s21_sin(x), sin(x), EPS);
}
END_TEST

START_TEST(test_sin_9) {
  double x = 1.6 * PI;
  ck_assert_ldouble_eq_tol(s21_sin(x), sin(x), EPS);
}
END_TEST

START_TEST(test_sin_10) {
  double x = 1.99 * PI;
  ck_assert_ldouble_eq_tol(s21_sin(x), sin(x), EPS);
}
END_TEST

START_TEST(test_sin_11) {
  double x = 2 * PI;
  ck_assert_ldouble_eq_tol(s21_sin(x), sin(x), EPS);
}
END_TEST

START_TEST(test_sin_12) {
  double x = 4.2 * PI;
  ck_assert_ldouble_eq_tol(s21_sin(x), sin(x), EPS);
}
END_TEST

START_TEST(test_sin_13) {
  double x = -4.2 * PI;
  ck_assert_ldouble_eq_tol(s21_sin(x), sin(x), EPS);
}
END_TEST

START_TEST(test_sin_14) {
  double x = S21_INF;
  ck_assert_ldouble_nan(s21_sin(x));
}
END_TEST

START_TEST(test_sin_15) {
  double x = -S21_INF;
  ck_assert_ldouble_nan(s21_sin(x));
}
END_TEST

START_TEST(test_sin_16) {
  double x = S21_NAN;
  ck_assert_ldouble_nan(s21_sin(x));
}
END_TEST

START_TEST(test_sin_17) {
  double x = -S21_NAN;
  ck_assert_ldouble_nan(s21_sin(x));
}
END_TEST

// COS
START_TEST(test_cos_1) {
  double x = 0;
  ck_assert_ldouble_eq_tol(s21_cos(x), cos(x), EPS);
}
END_TEST

START_TEST(test_cos_2) {
  double x = PI / 4;
  ck_assert_ldouble_eq_tol(s21_cos(x), cos(x), EPS);
}
END_TEST

START_TEST(test_cos_3) {
  double x = PI / 2;
  ck_assert_ldouble_eq_tol(s21_cos(x), cos(x), EPS);
}
END_TEST

START_TEST(test_cos_4) {
  double x = 0.6 * PI;
  ck_assert_ldouble_eq_tol(s21_cos(x), cos(x), EPS);
}
END_TEST

START_TEST(test_cos_5) {
  double x = 0.9 * PI;
  ck_assert_ldouble_eq_tol(s21_cos(x), cos(x), EPS);
}
END_TEST

START_TEST(test_cos_6) {
  double x = PI;
  ck_assert_ldouble_eq_tol(s21_cos(x), cos(x), EPS);
}
END_TEST

START_TEST(test_cos_7) {
  double x = 5 * PI / 4;
  ck_assert_ldouble_eq_tol(s21_cos(x), cos(x), EPS);
}
END_TEST

START_TEST(test_cos_8) {
  double x = 6 * PI / 4;
  ck_assert_ldouble_eq_tol(s21_cos(x), cos(x), EPS);
}
END_TEST

START_TEST(test_cos_9) {
  double x = 1.6 * PI;
  ck_assert_ldouble_eq_tol(s21_cos(x), cos(x), EPS);
}
END_TEST

START_TEST(test_cos_10) {
  double x = 1.99 * PI;
  ck_assert_ldouble_eq_tol(s21_cos(x), cos(x), EPS);
}
END_TEST

START_TEST(test_cos_11) {
  double x = 2 * PI;
  ck_assert_ldouble_eq_tol(s21_cos(x), cos(x), EPS);
}
END_TEST

START_TEST(test_cos_12) {
  double x = 4.2 * PI;
  ck_assert_ldouble_eq_tol(s21_cos(x), cos(x), EPS);
}
END_TEST

START_TEST(test_cos_13) {
  double x = -4.2 * PI;
  ck_assert_ldouble_eq_tol(s21_cos(x), cos(x), EPS);
}
END_TEST

START_TEST(test_cos_14) {
  double x = S21_INF;
  ck_assert_ldouble_nan(s21_cos(x));
}
END_TEST

START_TEST(test_cos_15) {
  double x = -S21_INF;
  ck_assert_ldouble_nan(s21_cos(x));
}
END_TEST

START_TEST(test_cos_16) {
  double x = S21_NAN;
  ck_assert_ldouble_nan(s21_cos(x));
}
END_TEST

START_TEST(test_cos_17) {
  double x = -S21_NAN;
  ck_assert_ldouble_nan(s21_cos(x));
}
END_TEST

// tan
START_TEST(test_tan_1) {
  double x = 0;
  ck_assert_ldouble_eq_tol(s21_tan(x), tan(x), EPS);
}
END_TEST

START_TEST(test_tan_2) {
  double x = PI / 4;
  ck_assert_ldouble_eq_tol(s21_tan(x), tan(x), EPS);
}
END_TEST

START_TEST(test_tan_3) {
  double x = 0.6 * PI;
  ck_assert_ldouble_eq_tol(s21_tan(x), tan(x), EPS);
}
END_TEST

START_TEST(test_tan_4) {
  double x = 0.9 * PI;
  ck_assert_ldouble_eq_tol(s21_tan(x), tan(x), EPS);
}
END_TEST

START_TEST(test_tan_5) {
  double x = PI;
  ck_assert_ldouble_eq_tol(s21_tan(x), tan(x), EPS);
}
END_TEST

START_TEST(test_tan_6) {
  double x = 5 * PI / 4;
  ck_assert_ldouble_eq_tol(s21_tan(x), tan(x), EPS);
}
END_TEST

START_TEST(test_tan_7) {
  double x = 1.6 * PI;
  ck_assert_ldouble_eq_tol(s21_tan(x), tan(x), EPS);
}
END_TEST

START_TEST(test_tan_8) {
  double x = 1.99 * PI;
  ck_assert_ldouble_eq_tol(s21_tan(x), tan(x), EPS);
}
END_TEST

START_TEST(test_tan_9) {
  double x = 2 * PI;
  ck_assert_ldouble_eq_tol(s21_tan(x), tan(x), EPS);
}
END_TEST

START_TEST(test_tan_10) {
  double x = 4.2 * PI;
  ck_assert_ldouble_eq_tol(s21_tan(x), tan(x), EPS);
}
END_TEST

START_TEST(test_tan_11) {
  double x = -4.2 * PI;
  ck_assert_ldouble_eq_tol(s21_tan(x), tan(x), EPS);
}
END_TEST

START_TEST(test_tan_12) {
  double x = S21_INF;
  ck_assert_ldouble_nan(s21_tan(x));
}
END_TEST

START_TEST(test_tan_13) {
  double x = -S21_INF;
  ck_assert_ldouble_nan(s21_tan(x));
}
END_TEST

START_TEST(test_tan_14) {
  double x = S21_NAN;
  ck_assert_ldouble_nan(s21_tan(x));
}
END_TEST

START_TEST(test_tan_15) {
  double x = -S21_NAN;
  ck_assert_ldouble_nan(s21_tan(x));
}
END_TEST

// ASIN
START_TEST(test_asin_1) {
  double x = 0;
  ck_assert_ldouble_eq_tol(s21_asin(x), asin(x), EPS);
}
END_TEST

START_TEST(test_asin_2) {
  double x = 1;
  ck_assert_ldouble_eq_tol(s21_asin(x), asin(x), EPS);
}
END_TEST

START_TEST(test_asin_3) {
  double x = -1;
  ck_assert_ldouble_eq_tol(s21_asin(x), asin(x), EPS);
}
END_TEST

START_TEST(test_asin_4) {
  double x = 0.5;
  ck_assert_ldouble_eq_tol(s21_asin(x), asin(x), EPS);
}
END_TEST

START_TEST(test_asin_5) {
  double x = -0.5;
  ck_assert_ldouble_eq_tol(s21_asin(x), asin(x), EPS);
}
END_TEST

START_TEST(test_asin_6) {
  double x = PI;
  ck_assert_ldouble_nan(s21_asin(x));
}
END_TEST

START_TEST(test_asin_7) {
  double x = -PI;
  ck_assert_ldouble_nan(s21_asin(x));
}
END_TEST

START_TEST(test_asin_8) {
  double x = S21_INF;
  ck_assert_ldouble_nan(s21_asin(x));
}
END_TEST

START_TEST(test_asin_9) {
  double x = -S21_INF;
  ck_assert_ldouble_nan(s21_asin(x));
}
END_TEST

START_TEST(test_asin_10) {
  double x = S21_NAN;
  ck_assert_ldouble_nan(s21_asin(x));
}
END_TEST

START_TEST(test_asin_11) {
  double x = -S21_NAN;
  ck_assert_ldouble_nan(s21_asin(x));
}
END_TEST

// ACOS
START_TEST(test_acos_1) {
  double x = 0;
  ck_assert_ldouble_eq_tol(s21_acos(x), acos(x), EPS);
}
END_TEST

START_TEST(test_acos_2) {
  double x = 1;
  ck_assert_ldouble_eq_tol(s21_acos(x), acos(x), EPS);
}
END_TEST

START_TEST(test_acos_3) {
  double x = -1;
  ck_assert_ldouble_eq_tol(s21_acos(x), acos(x), EPS);
}
END_TEST

START_TEST(test_acos_4) {
  double x = 0.5;
  ck_assert_ldouble_eq_tol(s21_acos(x), acos(x), EPS);
}
END_TEST

START_TEST(test_acos_5) {
  double x = -0.5;
  ck_assert_ldouble_eq_tol(s21_acos(x), acos(x), EPS);
}
END_TEST

START_TEST(test_acos_6) {
  double x = PI;
  ck_assert_ldouble_nan(s21_acos(x));
}
END_TEST

START_TEST(test_acos_7) {
  double x = -PI;
  ck_assert_ldouble_nan(s21_acos(x));
}
END_TEST

START_TEST(test_acos_8) {
  double x = S21_INF;
  ck_assert_ldouble_nan(s21_acos(x));
}
END_TEST

START_TEST(test_acos_9) {
  double x = -S21_INF;
  ck_assert_ldouble_nan(s21_acos(x));
}
END_TEST

START_TEST(test_acos_10) {
  double x = S21_NAN;
  ck_assert_ldouble_nan(s21_acos(x));
}
END_TEST

START_TEST(test_acos_11) {
  double x = -S21_NAN;
  ck_assert_ldouble_nan(s21_acos(x));
}
END_TEST

// ATAN
START_TEST(test_atan_1) {
  double x = 0;
  ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), EPS);
}
END_TEST

START_TEST(test_atan_2) {
  double x = 1;
  ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), EPS);
}
END_TEST

START_TEST(test_atan_3) {
  double x = -1;
  ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), EPS);
}
END_TEST

START_TEST(test_atan_4) {
  double x = 0.5;
  ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), EPS);
}
END_TEST

START_TEST(test_atan_5) {
  double x = -0.5;
  ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), EPS);
}
END_TEST

START_TEST(test_atan_6) {
  double x = PI;
  ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), EPS);
}
END_TEST

START_TEST(test_atan_7) {
  double x = -PI;
  ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), EPS);
}
END_TEST

START_TEST(test_atan_8) {
  double x = -1.73;
  ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), EPS);
}
END_TEST

START_TEST(test_atan_9) {
  double x = S21_INF;
  ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), EPS);
}
END_TEST

START_TEST(test_atan_10) {
  double x = -S21_INF;
  ck_assert_ldouble_eq_tol(s21_atan(x), atan(x), EPS);
}
END_TEST

START_TEST(test_atan_11) {
  double x = S21_NAN;
  ck_assert_ldouble_nan(s21_atan(x));
}
END_TEST

START_TEST(test_atan_12) {
  double x = -S21_NAN;
  ck_assert_ldouble_nan(s21_atan(x));
}
END_TEST

Suite *example_create() {
  Suite *suite = suite_create("TEST");

  TCase *tcase_abs = tcase_create("ABS");
  tcase_add_test(tcase_abs, test_abs_1);
  tcase_add_test(tcase_abs, test_abs_2);
  tcase_add_test(tcase_abs, test_abs_3);
  tcase_add_test(tcase_abs, test_abs_4);
  tcase_add_test(tcase_abs, test_abs_5);
  tcase_add_test(tcase_abs, test_abs_6);
  tcase_add_test(tcase_abs, test_abs_7);
  tcase_add_test(tcase_abs, test_abs_8);

  TCase *tcase_fabs = tcase_create("FABS");
  tcase_add_test(tcase_fabs, test_fabs_1);
  tcase_add_test(tcase_fabs, test_fabs_2);
  tcase_add_test(tcase_fabs, test_fabs_3);
  tcase_add_test(tcase_fabs, test_fabs_4);
  tcase_add_test(tcase_fabs, test_fabs_5);
  tcase_add_test(tcase_fabs, test_fabs_6);
  tcase_add_test(tcase_fabs, test_fabs_7);
  tcase_add_test(tcase_fabs, test_fabs_8);

  TCase *tcase_ceil = tcase_create("CEIL");
  tcase_add_test(tcase_ceil, test_ceil_1);
  tcase_add_test(tcase_ceil, test_ceil_2);
  tcase_add_test(tcase_ceil, test_ceil_3);
  tcase_add_test(tcase_ceil, test_ceil_4);
  tcase_add_test(tcase_ceil, test_ceil_5);
  tcase_add_test(tcase_ceil, test_ceil_6);
  tcase_add_test(tcase_ceil, test_ceil_7);
  tcase_add_test(tcase_ceil, test_ceil_8);

  TCase *tcase_floor = tcase_create("FLOOR");
  tcase_add_test(tcase_floor, test_floor_1);
  tcase_add_test(tcase_floor, test_floor_2);
  tcase_add_test(tcase_floor, test_floor_3);
  tcase_add_test(tcase_floor, test_floor_4);
  tcase_add_test(tcase_floor, test_floor_5);
  tcase_add_test(tcase_floor, test_floor_6);
  tcase_add_test(tcase_floor, test_floor_7);
  tcase_add_test(tcase_floor, test_floor_8);

  TCase *tcase_sqrt = tcase_create("SQRT");
  tcase_add_test(tcase_sqrt, test_sqrt_1);
  tcase_add_test(tcase_sqrt, test_sqrt_2);
  tcase_add_test(tcase_sqrt, test_sqrt_3);
  tcase_add_test(tcase_sqrt, test_sqrt_4);
  tcase_add_test(tcase_sqrt, test_sqrt_5);
  tcase_add_test(tcase_sqrt, test_sqrt_6);
  tcase_add_test(tcase_sqrt, test_sqrt_7);
  tcase_add_test(tcase_sqrt, test_sqrt_8);

  TCase *tcase_exp = tcase_create("EXP");
  tcase_add_test(tcase_exp, test_exp_1);
  tcase_add_test(tcase_exp, test_exp_2);
  tcase_add_test(tcase_exp, test_exp_3);
  tcase_add_test(tcase_exp, test_exp_4);
  tcase_add_test(tcase_exp, test_exp_5);
  tcase_add_test(tcase_exp, test_exp_6);
  tcase_add_test(tcase_exp, test_exp_7);
  tcase_add_test(tcase_exp, test_exp_8);
  tcase_add_test(tcase_exp, test_exp_9);
  tcase_add_test(tcase_exp, test_exp_10);

  TCase *tcase_log = tcase_create("LOG");
  tcase_add_test(tcase_log, test_log_1);
  tcase_add_test(tcase_log, test_log_2);
  tcase_add_test(tcase_log, test_log_3);
  tcase_add_test(tcase_log, test_log_4);
  tcase_add_test(tcase_log, test_log_5);
  tcase_add_test(tcase_log, test_log_6);
  tcase_add_test(tcase_log, test_log_7);
  tcase_add_test(tcase_log, test_log_8);
  tcase_add_test(tcase_log, test_log_9);
  tcase_add_test(tcase_log, test_log_10);

  TCase *tcase_pow = tcase_create("POW");
  tcase_add_test(tcase_pow, test_pow_1);
  tcase_add_test(tcase_pow, test_pow_2);
  tcase_add_test(tcase_pow, test_pow_3);
  tcase_add_test(tcase_pow, test_pow_4);
  tcase_add_test(tcase_pow, test_pow_5);
  tcase_add_test(tcase_pow, test_pow_6);
  tcase_add_test(tcase_pow, test_pow_7);
  tcase_add_test(tcase_pow, test_pow_8);
  tcase_add_test(tcase_pow, test_pow_9);
  tcase_add_test(tcase_pow, test_pow_10);
  tcase_add_test(tcase_pow, test_pow_11);
  tcase_add_test(tcase_pow, test_pow_12);
  tcase_add_test(tcase_pow, test_pow_13);
  tcase_add_test(tcase_pow, test_pow_14);
  tcase_add_test(tcase_pow, test_pow_15);
  tcase_add_test(tcase_pow, test_pow_16);
  tcase_add_test(tcase_pow, test_pow_17);
  tcase_add_test(tcase_pow, test_pow_18);

  TCase *tcase_fmod = tcase_create("FMOD");
  tcase_add_test(tcase_fmod, test_fmod_1);
  tcase_add_test(tcase_fmod, test_fmod_2);
  tcase_add_test(tcase_fmod, test_fmod_3);
  tcase_add_test(tcase_fmod, test_fmod_4);
  tcase_add_test(tcase_fmod, test_fmod_5);
  tcase_add_test(tcase_fmod, test_fmod_6);
  tcase_add_test(tcase_fmod, test_fmod_7);
  tcase_add_test(tcase_fmod, test_fmod_8);
  tcase_add_test(tcase_fmod, test_fmod_9);
  tcase_add_test(tcase_fmod, test_fmod_10);
  tcase_add_test(tcase_fmod, test_fmod_11);
  tcase_add_test(tcase_fmod, test_fmod_12);
  tcase_add_test(tcase_fmod, test_fmod_13);
  tcase_add_test(tcase_fmod, test_fmod_14);
  tcase_add_test(tcase_fmod, test_fmod_15);
  tcase_add_test(tcase_fmod, test_fmod_16);
  tcase_add_test(tcase_fmod, test_fmod_17);

  TCase *tcase_sin = tcase_create("SIN");
  tcase_add_test(tcase_sin, test_sin_1);
  tcase_add_test(tcase_sin, test_sin_2);
  tcase_add_test(tcase_sin, test_sin_3);
  tcase_add_test(tcase_sin, test_sin_4);
  tcase_add_test(tcase_sin, test_sin_5);
  tcase_add_test(tcase_sin, test_sin_6);
  tcase_add_test(tcase_sin, test_sin_7);
  tcase_add_test(tcase_sin, test_sin_8);
  tcase_add_test(tcase_sin, test_sin_9);
  tcase_add_test(tcase_sin, test_sin_10);
  tcase_add_test(tcase_sin, test_sin_11);
  tcase_add_test(tcase_sin, test_sin_12);
  tcase_add_test(tcase_sin, test_sin_13);
  tcase_add_test(tcase_sin, test_sin_14);
  tcase_add_test(tcase_sin, test_sin_15);
  tcase_add_test(tcase_sin, test_sin_16);
  tcase_add_test(tcase_sin, test_sin_17);

  TCase *tcase_cos = tcase_create("COS");
  tcase_add_test(tcase_cos, test_cos_1);
  tcase_add_test(tcase_cos, test_cos_2);
  tcase_add_test(tcase_cos, test_cos_3);
  tcase_add_test(tcase_cos, test_cos_4);
  tcase_add_test(tcase_cos, test_cos_5);
  tcase_add_test(tcase_cos, test_cos_6);
  tcase_add_test(tcase_cos, test_cos_7);
  tcase_add_test(tcase_cos, test_cos_8);
  tcase_add_test(tcase_cos, test_cos_9);
  tcase_add_test(tcase_cos, test_cos_10);
  tcase_add_test(tcase_cos, test_cos_11);
  tcase_add_test(tcase_cos, test_cos_12);
  tcase_add_test(tcase_cos, test_cos_13);
  tcase_add_test(tcase_cos, test_cos_14);
  tcase_add_test(tcase_cos, test_cos_15);
  tcase_add_test(tcase_cos, test_cos_16);
  tcase_add_test(tcase_cos, test_cos_17);

  TCase *tcase_tan = tcase_create("TAN");
  tcase_add_test(tcase_tan, test_tan_1);
  tcase_add_test(tcase_tan, test_tan_2);
  tcase_add_test(tcase_tan, test_tan_3);
  tcase_add_test(tcase_tan, test_tan_4);
  tcase_add_test(tcase_tan, test_tan_5);
  tcase_add_test(tcase_tan, test_tan_6);
  tcase_add_test(tcase_tan, test_tan_7);
  tcase_add_test(tcase_tan, test_tan_8);
  tcase_add_test(tcase_tan, test_tan_9);
  tcase_add_test(tcase_tan, test_tan_10);
  tcase_add_test(tcase_tan, test_tan_11);
  tcase_add_test(tcase_tan, test_tan_12);
  tcase_add_test(tcase_tan, test_tan_13);
  tcase_add_test(tcase_tan, test_tan_14);
  tcase_add_test(tcase_tan, test_tan_15);

  TCase *tcase_asin = tcase_create("ASIN");
  tcase_add_test(tcase_asin, test_asin_1);
  tcase_add_test(tcase_asin, test_asin_2);
  tcase_add_test(tcase_asin, test_asin_3);
  tcase_add_test(tcase_asin, test_asin_4);
  tcase_add_test(tcase_asin, test_asin_5);
  tcase_add_test(tcase_asin, test_asin_6);
  tcase_add_test(tcase_asin, test_asin_7);
  tcase_add_test(tcase_asin, test_asin_8);
  tcase_add_test(tcase_asin, test_asin_9);
  tcase_add_test(tcase_asin, test_asin_10);
  tcase_add_test(tcase_asin, test_asin_11);

  TCase *tcase_acos = tcase_create("ACOS");
  tcase_add_test(tcase_acos, test_acos_1);
  tcase_add_test(tcase_acos, test_acos_2);
  tcase_add_test(tcase_acos, test_acos_3);
  tcase_add_test(tcase_acos, test_acos_4);
  tcase_add_test(tcase_acos, test_acos_5);
  tcase_add_test(tcase_acos, test_acos_6);
  tcase_add_test(tcase_acos, test_acos_7);
  tcase_add_test(tcase_acos, test_acos_8);
  tcase_add_test(tcase_acos, test_acos_9);
  tcase_add_test(tcase_acos, test_acos_10);
  tcase_add_test(tcase_acos, test_acos_11);

  TCase *tcase_atan = tcase_create("ATAN");
  tcase_add_test(tcase_atan, test_atan_1);
  tcase_add_test(tcase_atan, test_atan_2);
  tcase_add_test(tcase_atan, test_atan_3);
  tcase_add_test(tcase_atan, test_atan_4);
  tcase_add_test(tcase_atan, test_atan_5);
  tcase_add_test(tcase_atan, test_atan_6);
  tcase_add_test(tcase_atan, test_atan_7);
  tcase_add_test(tcase_atan, test_atan_8);
  tcase_add_test(tcase_atan, test_atan_9);
  tcase_add_test(tcase_atan, test_atan_10);
  tcase_add_test(tcase_atan, test_atan_11);
  tcase_add_test(tcase_atan, test_atan_12);

  suite_add_tcase(suite, tcase_abs);
  suite_add_tcase(suite, tcase_fabs);
  suite_add_tcase(suite, tcase_ceil);
  suite_add_tcase(suite, tcase_floor);
  suite_add_tcase(suite, tcase_sqrt);
  suite_add_tcase(suite, tcase_exp);
  suite_add_tcase(suite, tcase_log);
  suite_add_tcase(suite, tcase_pow);
  suite_add_tcase(suite, tcase_fmod);
  suite_add_tcase(suite, tcase_sin);
  suite_add_tcase(suite, tcase_cos);
  suite_add_tcase(suite, tcase_tan);
  suite_add_tcase(suite, tcase_asin);
  suite_add_tcase(suite, tcase_acos);
  suite_add_tcase(suite, tcase_atan);
  return suite;
}

int main() {
  int count;
  Suite *s = example_create();
  SRunner *runner = srunner_create(s);

  srunner_run_all(runner, CK_NORMAL);
  count = srunner_ntests_failed(runner);
  srunner_free(runner);
  return (count == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}