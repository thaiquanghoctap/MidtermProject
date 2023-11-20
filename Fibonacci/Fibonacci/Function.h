// #pragma once

#include <iostream>
#include <ctime>
#include <vector>

class Timer
{
public:
    time_t start;
    time_t end;

    void start_timer()
    {
        this->start = std::clock();
    }

    void end_timer()
    {
        this->end = std::clock();
    }

    void count_time()
    {
        std::cout << "Time spent: " << double(end - start)/ double(CLOCKS_PER_SEC) << " seconds" << std::endl;
    }
};

int fibonacci_recursive();
long long fibonacci_loop(const int& n);
void fibonacci_dynamic(int n, std::vector<long long>& fibo);

long long fibonacci_matrix(int n);
void pow_matrix(long long F[2][2], int n);
void multiply_matrix(long long F[2][2], long long T[2][2]);