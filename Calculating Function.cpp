#include<iostream>
using namespace std;

int main()
{
    long long n;
    int ans = 0;
    cin >> n;

    long long k = n / 2;
    long long m = (n + 1) / 2;

    long long even = k * (k + 1);
    long long odd = m * m;

    cout << even - odd;
    return 0;
}