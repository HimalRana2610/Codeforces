#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
    {
        int m;
        cin >> m;

        if(m == 1000000000)
        {
            cout << 0 << "\n";
            continue;
        }

        int n = m, r = 1;
        while(n > 0)
        {
            n /= 10;
            r *= 10;
        }

        cout << m - (r / 10) << "\n";
    }

    return 0;
}