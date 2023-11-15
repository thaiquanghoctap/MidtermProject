#include "Function.h"
#include <vector>
using namespace std;

int fibonacci_recursive();

void fibonacci_dynamic(int n, vector<long long> &fibo)
{
    Timer timer;
    int len = fibo.size();

    timer.start_timer();
    for (int i = len; i <= n; i++)
        fibo.push_back(fibo[i-1] + fibo[i-2]);
    timer.end_timer();
    timer.count_time();
}

int fibonacci_matrix();

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
