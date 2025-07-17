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

        vector<int> arr(n), prefix(n + 1, INT_MAX);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            prefix[i + 1] = min(prefix[i], arr[i]);
        }

        vector<int> suffix(n + 1, INT_MIN);
        for (int i = n; i > 0; i--)
        {
            suffix[i - 1] = max(suffix[i], arr[i - 1]);
        }

        string ans;
        for (int i = 0; i < n; i++)
        {
            if (prefix[i + 1] == arr[i] || suffix[i] == arr[i])
            {
                ans.push_back('1');
            }
            else
            {
                ans.push_back('0');
            }
        }

        cout << ans << "\n";
    }

    return 0;
}