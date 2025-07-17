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

        cout << 2 * n - 2 << "\n";
        cout << 1 << " " << 2 << " " << n << "\n";

        for (int i = 2; i < n; i++)
        {
            cout << i << " " << 1 << " " << i << "\n";
            cout << i << " " << i + 1 << " " << n << "\n";
        }
        cout << n << " " << 1 << " " << n << "\n";
    }

    return 0;
}