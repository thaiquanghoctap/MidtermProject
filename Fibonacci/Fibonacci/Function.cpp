#include "Function.h"
#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

long long fibonacci_recursive(int n) {
	if (n <= 1) {
		return n;
	}
	return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}

long long fibonacci_loop(const int& n) {
	if (n < 2)
	{
		return n;
	}
	long long fn_1 = 0;
	long long fn = 1;
	for (int i = 2; i < n; i++) {
		fn_1 = fn - fn_1;
		fn = fn + fn_1;
	}
	return fn;
}

void fibonacci_dynamic(int n, vector<long long> &fibo)
{
    int len = fibo.size();
    for (int i = len; i <= n; i++)
        fibo.push_back(fibo[i-1] + fibo[i-2]);
}

long long fibonacci_goldenRatio(int n)
{
	double phi = (1 + sqrt(5)) / 2;
	return ceil((pow(phi, n) - pow(1-phi, n)) / sqrt(5));
}

double pow(double a, int n)
{
	double res=1;
	for (;n; n>>=1, a = a*a)
		if (n&1) res *= a;
	return res;
}

long long fibonacci_matrix(int n)
{
	long long F[2][2] = { {1, 1},{1, 0} };
	if (n == 0)
	{
		return 0;
	}
	pow_matrix(F, n - 1);
	return F[0][0];
}

void pow_matrix(long long F[2][2], int n)
{
	if (n <= 1)
	{
		return;
	}
	long long T[2][2] = { {1, 1},{1, 0} };
	pow_matrix(F, n / 2);
	multiply_matrix(F, F);
	if (n % 2 != 0)
	{
		multiply_matrix(F, T);
	}
}

void multiply_matrix(long long F[2][2], long long T[2][2])
{
	long long t1 = F[0][0] * T[0][0] + F[0][1] * T[1][0];
	long long t2 = F[0][0] * T[0][1] + F[0][1] * T[1][1];
	long long t3 = F[1][0] * T[0][0] + F[1][1] * T[1][0];
	long long t4 = F[1][0] * T[0][1] + F[1][1] * T[1][1];
	F[0][0] = t1;
	F[0][1] = t2;
	F[1][0] = t3;
	F[1][1] = t4;
}