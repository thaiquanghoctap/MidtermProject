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
        this->start = std::time(NULL);
    }

    void end_timer()
    {
        this->end = std::time(NULL);
    }

    void count_time() 
    { 
        std::cout <<"Time spent: " << difftime(start, end) << " seconds" << std::endl;
    }
};

int fibonacci_recursive();
int fibonacci_loop();
void fibonacci_dynamic(int n, std::vector<long long> &fibo);
int fibonacci_matrix();