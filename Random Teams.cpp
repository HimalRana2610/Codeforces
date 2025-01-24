#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m;
    cin >> n >> m;

    long long q = n / m, r = n % m;
    long long kmin = ((r * q * (q + 1)) / 2) + ((q * (m - r) * (q - 1))/ 2);
    long long kmax = ((n - m + 1) * (n - m)) / 2;

    cout << kmin << " " << kmax << endl;
    return 0;
}