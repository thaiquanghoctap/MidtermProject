#include "Function.h"
#include <vector>
using namespace std;

int fibonacci_recursive();
int fibonacci_loop();
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
