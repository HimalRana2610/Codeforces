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
        long long n, m;
        cin >> n >> m;

        long long root = -1;
        for (long long i = 1; i <= n; i++)
        {
            if (m >= n + i - 1 && m <= i * (2 * n - i + 1) / 2)
            {
                root = i;
                break;
            }
        }

        if (root == -1)
        {
            cout << -1 << "\n";
            continue;
        }

        cout << root << "\n";
        vector<long long> parent(n + 1, 0);

        for (long long i = 1; i <= n; i++)
        {
            if (i == root)
            {
                parent[i] = 0;
            }
            else if (i == 1)
            {
                parent[i] = root;
            }
            else
            {
                parent[i] = 1;
            }
        }

        long long rem = m - (n + root - 1);
        if (root > 1)
        {
            long long add = min(rem / (root - 1), n - root);
            rem -= add * (root - 1);

            for (long long i = n; i > root && add > 0; i--)
            {
                parent[i] = root;
                add--;
            }

            if (rem > 0 && rem < n && rem != root)
            {
                parent[rem + 1] = root;
            }
        }

        for (long long i = 1; i <= n; i++)
        {
            if (i == root)
            {
                continue;
            }
            cout << i << " " << parent[i] << "\n";
        }
    }

    return 0;
}