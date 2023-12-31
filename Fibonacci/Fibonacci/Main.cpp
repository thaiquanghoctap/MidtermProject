#include "Function.h"
#include <random>

int main()
{
	int test[] = {40, 50, 92, 100000, 10000000};

	for (int n : test)
	{
		// Recursive
		if (n <= 50)
		{	
			Timer time1{};
			std::cout << "\nFibonacci using Recursive\n";
			time1.start_timer();
			long long f_recursive = fibonacci_recursive(n);
			time1.end_timer();
			std::cout << "F(" << n << ") = " << f_recursive << "\n";
			time1.count_time();
		}
		else
		{
			std::cout << "\nToo much time when using Recursive\n";
		}

		// Loop
		Timer time2{};
		std::cout << "\nFibonacci using Loop\n";
		time2.start_timer();
		long long f_loop = fibonacci_loop(n);
		time2.end_timer();
		std::cout << "F(" << n << ") = " << f_loop << "\n";
		time2.count_time();

		// Dynamic
		Timer time3{};
		std::cout << "\nFibonacci using Dynamic Programing\n";
		time3.start_timer();
		std::vector<long long> fibo {0, 1};
		fibonacci_dynamic(n, fibo);
		time3.end_timer();
		std::cout << "F(" << n << ") = " << fibo[n] << "\n";
		time3.count_time();

		// Golden ratio Formula
		Timer time5{};
		std::cout << "\nFibonacci using Golden Ratio Formula\n";
		time5.start_timer();
		long long f_goldenratio = fibonacci_goldenRatio(n);
		time5.end_timer();
		std::cout << "F(" << n << ") = " << f_goldenratio << "\n";
		time5.count_time();


		// Matrix
		Timer time4{};
		std::cout << "\nFibonacci using Matrix\n";
		time4.start_timer();
		long long f_matrix = fibonacci_matrix(n);
		time4.end_timer();
		std::cout << "F(" << n << ") = " << f_matrix << "\n";
		time4.count_time();
		std::cout << "--------------------------------------------------------------------\n";
		
	}

	return 0;
}
