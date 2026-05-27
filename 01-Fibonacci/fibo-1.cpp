#include <iostream>
#include <chrono>

using std::cout, std::endl;
using namespace std::chrono;

long fibonacci(long n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    long fibo_n = fibonacci(n - 1) + fibonacci(n - 2);
    return fibo_n;
}

int main() {
    cout << "Code Along With Me - C++" << endl;
    cout << "Fibonacci - Recursion" << endl;
    steady_clock::time_point start = steady_clock::now();
    cout << fibonacci(35) << endl;
    steady_clock::time_point end = steady_clock::now();
    microseconds duration = duration_cast<microseconds>(end - start);
    cout << duration << endl;
    return 0;
}
