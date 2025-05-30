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

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        if (n == 1)
        {
            cout << 0 << "\n";
            continue;
        }

        sort(arr.begin(), arr.end());

        int ans = n - 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if ((arr[i] + arr[j]) % 2 == 0)
                {
                    ans = min(ans, i + n - j - 1);
                }
            }
        }

        cout << ans << "\n";
    }

    return 0;
}