#include "Function.h"

int fibonacci_recursive();

int fibonacci_loop(const int& n) {
	if (n < 2)
	{
		return n;
	}
	int fn_1 = 0;
	int fn = 1;
	for (int i = 2; i < n; i++) {
		fn_1 = fn - fn_1;
		fn = fn + fn_1;
	}
	return fn;
}
int fibonacci_dynamic();
int fibonacci_matrix();