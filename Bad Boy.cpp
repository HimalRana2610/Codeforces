#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, m, i, j;
        cin >> n >> m >> i >> j;

        if (i == 1 && j == 1)
        {
            cout << n << " " << m << " " << n << " " << m << "\n";
        }
        else if (i == n && j == m)
        {
            cout << 1 << " " << 1 << " " << 1 << " " << 1 << "\n";
        }
        else
        {
            cout << 1 << " " << 1 << " " << n << " " << m << "\n";
        }
    }

    return 0;
}