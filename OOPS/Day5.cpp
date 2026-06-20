#include <iostream>
#include <chrono>

using namespace std;
using namespace chrono;

int main()
{
    long long n = 1234567890;
    volatile long long sum;

    auto start = high_resolution_clock::now();

    for(long long i = 0; i < 1000000000000; i++)
    {
        sum = n * (n + 1) / 2;
    }

    auto end = high_resolution_clock::now();

    auto duration = duration_cast<nanoseconds>(end - start);

    cout << "Total Time = "
         << duration.count()
         << " ns\n";

    cout << "Average Time = "
         << (double)duration.count() / 1000000000000
         << " ns per operation\n";
}