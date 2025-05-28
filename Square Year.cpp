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
        int n;
        cin >> n;

        int x = sqrt(n);
        if (x * x == n)
        {
            cout << 0 << " " << x << "\n";
        }
        else
        {
            cout << -1 << "\n";
        }
    }

    return 0;
}