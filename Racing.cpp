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

        vector<int> d(n);
        for (int i = 0; i < n; i++)
        {
            cin >> d[i];
        }

        vector<pair<int, int>> obstacles(n);
        for (int i = 0; i < n; i++)
        {
            cin >> obstacles[i].first >> obstacles[i].second;
        }

        vector<int> dp_l(n + 1), dp_r(n + 1);
        dp_l[0] = dp_r[0] = 0;

        bool possible = true;
        for (int i = 0; i < n; i++)
        {
            int l0 = dp_l[i], r0 = dp_r[i];
            int l1 = l0, r1 = r0 + 1;

            if (d[i] == 0)
            {
                l1 = l0;
                r1 = r0;
            }
            else if (d[i] == 1)
            {
                l1 = l0 + 1;
                r1 = r0 + 1;
            }

            dp_l[i + 1] = max(l1, obstacles[i].first);
            dp_r[i + 1] = min(r1, obstacles[i].second);

            if (dp_l[i + 1] > dp_r[i + 1])
            {
                possible = false;
                break;
            }
        }

        if (!possible)
        {
            cout << -1 << "\n";
            continue;
        }

        vector<int> ans(n);
        int current = dp_l[n];

        for (int i = n - 1; i >= 0; i--)
        {
            if (d[i] != -1)
            {
                ans[i] = d[i];
                current -= d[i];
                continue;
            }

            if (dp_l[i] <= current && current <= dp_r[i])
            {
                ans[i] = 0;
            }
            else
            {
                ans[i] = 1;
                current--;
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}