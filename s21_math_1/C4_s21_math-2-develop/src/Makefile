FLAGS = -std=c11 -Wall -Wextra -Werror
GFLAGS = -fprofile-arcs -ftest-coverage
FILES = functions/*.c

OS=$(shell uname)

ifeq (${OS}, Darwin)
	LIBS = -L. -lcheck -lm s21_math.a
else
	LIBS = -L. -lcheck -lm -lsubunit s21_math.a
endif 

all: test gcov_report

s21_math.a: $(FILES)
	gcc -c $(FILES)
	ar crs s21_math.a *.o

test: s21_math.a TESTS.c
	gcc $(FLAGS) TESTS.c $(LIBS) -o tests
	./tests

gcov_report: s21_math.a
	gcc $(GFLAGS) TESTS.c -o report $(LIBS)
	./report
	lcov -t "a.out" -o REPORT.info -c -d .
	genhtml -o html REPORT.info
	open html/index.html

rebuild:
	make clean
	make all

clean:
	rm -f tests ./*.o ./*.a report *.gcda *.gcno *info 
	rm -rf html
check:
	clang-format -style=Google -n  *.c *.h ./*/*.c 

clang:
	clang-format -style=Google -i  *.c *.h ./*/*.c 