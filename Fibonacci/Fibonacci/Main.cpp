#include "Function.h"

int main()
{
	//int n = 0;
	int n[5] = { 0, 2, 3, 90000, 100000};
	Timer time;
	
	// Recursive


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