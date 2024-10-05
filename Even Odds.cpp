#include<iostream>
using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;

    long long half = (n / 2) + (n % 2 != 0);

    if(k <= half)
    {
        cout << (2 * (k - 1)) + 1;
    }
    else
    {
        cout << 2 * (k - half);
    }

    return 0;
}