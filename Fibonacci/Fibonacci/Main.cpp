#include "Function.h"
#include <vector>
#include <iostream>
using namespace std;

int main()
{
	//int n = 0;
	int n[5] = { 0, 2, 3, 90000, 100000};
	Timer time;
	
	// Recursive


	while(true)
	{
		cin >> n;
		if ( n < 0) 
			cout << "Invalid n";
		else break;
	}

	// Recursive


	// Loop


	// Dynamic
	vector<long long> fibo {0,1};
	fibonacci_dynamic(n, fibo);
    cout << n << "th Fibonacci: " << fibo[n] << endl;

	// Matrix

    
=======

	// Loop
	for (int i : n)
	{
		std::cout << "Fibonacci using Loop\n";
		time.start_timer();
		int fn = fibonacci_loop(i);
		time.end_timer();
		time.count_time();
		std::cout << "f(" << i << ") = " << fn << "\n";
	}

	// Dynamic

	// Matrix

	return 0;
}