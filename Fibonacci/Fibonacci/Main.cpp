#include "Function.h"
#include <vector>
#include <iostream>
using namespace std;

int main()
{
	int n = 0;

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

    
	return 0;
}