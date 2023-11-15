#include "Function.h"
#include <vector>
#include <iostream>
using namespace std;

int main()
{
	//int n = 0;
	
	Timer time;
	
	// Recursive


	// Dynamic
	int m = 0;
	cin >> m;
	vector<long long> fibo {0,1};
	fibonacci_dynamic(m, fibo);
    cout << m << "th Fibonacci: " << fibo[m] << endl;

	// Loop
	int n[5] = { 0, 2, 3, 90000, 100000 };
	for (int i : n)
	{
		std::cout << "Fibonacci using Loop\n";
		time.start_timer();
		int fn = fibonacci_loop(i);
		time.end_timer();
		time.count_time();
		std::cout << "f(" << i << ") = " << fn << "\n";
	}


	// Matrix

	return 0;
}