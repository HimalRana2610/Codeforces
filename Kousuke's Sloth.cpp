#include <iostream>
#include <vector>
#include <unordered_map>

const int MOD = 1e9 + 7;

// Function to calculate the nth Fibonacci number modulo mod using matrix exponentiation
long long fibonacci(int n, int mod) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    long long a = 0, b = 1;
    for (int i = 2; i <= n; i++) {
        long long c = (a + b) % mod;
        a = b;
        b = c;
    }
    return b;
}

// Function to find the Pisano period for modulo m
int pisanoPeriod(int m) {
    int previous = 0, current = 1;
    for (int i = 0; i < m * m; i++) {
        int temp = current;
        current = (previous + current) % m;
        previous = temp;

        // Period found
        if (previous == 0 && current == 1) {
            return i + 1;
        }
    }
    return 0;
}

// Function to get indices of Fibonacci numbers divisible by k within one Pisano period
std::vector<long long> fibonacciDivisibleIndices(int k) {
    int period = pisanoPeriod(k);
    std::vector<long long> indices;

    for (int i = 0; i < period; i++) {
        if (fibonacci(i, k) % k == 0) {
            indices.push_back(i + 1); // Store 1-based index
        }
    }
    return indices;
}

int main() {
    int t;
    std::cin >> t; // Number of test cases
    std::vector<std::pair<long long, int>> cases(t);

    for (int i = 0; i < t; i++) {
        long long n;
        int k;
        std::cin >> n >> k; // Read n and k for each test case
        cases[i] = {n, k};
    }

    for (const auto& casePair : cases) {
        long long n = casePair.first;
        int k = casePair.second;

        // Get indices of Fibonacci numbers divisible by k
        std::vector<long long> fibIndices = fibonacciDivisibleIndices(k);
        long long count = fibIndices.size();
        
        // Output the result
        if (n <= count) {
            std::cout << fibIndices[(n - 1) % count] << std::endl; // Handle large n with periodicity
        } else {
            std::cout << -1 << std::endl; // Handle cases where n is too large
        }
    }

    return 0;
}
