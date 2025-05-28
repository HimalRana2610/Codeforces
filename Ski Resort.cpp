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
        int n, k, q;
        cin >> n >> k >> q;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        vector<int> temp;
        int cnt = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] <= q)
            {
                cnt++;
            }
            else
            {
                temp.push_back(cnt);
                cnt = 0;
            }
        }
        temp.push_back(cnt);

        long long ans = 0;
        for (int i = 0; i < temp.size(); i++)
        {
            if (temp[i] >= k)
            {
                for (int j = k; j <= temp[i]; j++)
                {
                    ans += (temp[i] - j + 1);
                }
            }
        }

        cout << ans << "\n";
    }

    return 0;
}