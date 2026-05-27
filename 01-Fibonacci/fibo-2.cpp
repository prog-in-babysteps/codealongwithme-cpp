#include <iostream>
#include <chrono>
#include <map>

using std::cout, std::endl;
using std::map;
using namespace std::chrono;

map<long, long> fibo_cache{{0, 0}, {1, 1}};

long fibonacci(long n) {
    if (fibo_cache.contains(n)) {
        return fibo_cache[n];
    }
    long fibo_n = fibonacci(n - 1) + fibonacci(n - 2);
    fibo_cache[n] = fibo_n;
    return fibo_n;
}

int main() {
    cout << "Code Along With Me - C++" << endl;
    cout << "Fibonacci - Dynamic Programming" << endl;
    steady_clock::time_point start = steady_clock::now();
    cout << fibonacci(35) << endl;
    steady_clock::time_point end = steady_clock::now();
    microseconds duration = duration_cast<microseconds>(end - start);
    cout << duration << endl;
    return 0;
}
