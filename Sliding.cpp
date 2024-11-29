#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long n, m, r, c;
        cin >> n >> m >> r >> c;

        long long d = n - r;
        long long ans = (d * (m - 1)) + d + (m - c) + (d * (m - 1));
        cout << ans << endl;
    }

    return 0;
}