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
        int n, k;
        cin >> n >> k;

        vector<vector<int>> pattern(n, vector<int>(n));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> pattern[i][j];
            }
        }

        int diff = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (pattern[i][j] != pattern[n - i - 1][n - j - 1])
                {
                    diff++;
                }
            }
        }
        diff /= 2;

        if (diff > k)
        {
            cout << "NO\n";
            continue;
        }

        k -= diff;
        if (n % 2 != 0)
        {
            cout << "YES\n";
        }
        else if (k % 2 == 0)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}