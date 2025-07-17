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

        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        vector<pair<int, int>> ans;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > b[i])
            {
                ans.push_back({3, i + 1});
                swap(a[i], b[i]);
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j < n; j++)
            {
                if (a[j - 1] > a[j])
                {
                    ans.push_back({1, j});
                    swap(a[j - 1], a[j]);
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j < n; j++)
            {
                if (b[j - 1] > b[j])
                {
                    ans.push_back({2, j});
                    swap(b[j - 1], b[j]);
                }
            }
        }

        cout << ans.size() << "\n";
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i].first << " " << ans[i].second << "\n";
        }
    }

    return 0;
}