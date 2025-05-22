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

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int ans = k;
        if (k != 4)
        {
            for (int i = 0; i < n; i++)
            {
                if (arr[i] % k == 0)
                {
                    ans = 0;
                    break;
                }
                ans = min(ans, k - (arr[i] % k));
            }
        }
        else
        {
            if (n == 1)
            {
                ans = (4 - (arr[0] % 4)) % 4;
            }
            else
            {
                int even = 0, three = 0;
                for (int i = 0; i < n; i++)
                {
                    if (arr[i] % 4 == 0)
                    {
                        ans = 0;
                        break;
                    }
                    if (arr[i] % 2 == 0)
                    {
                        even++;
                    }
                    else if (arr[i] % 4 == 3)
                    {
                        three++;
                    }
                }
                if (ans != 0)
                {
                    if (even >= 2)
                    {
                        ans = 0;
                    }
                    else if (even == 1)
                    {
                        ans = 1;
                    }
                    else if (even == 0 && three >= 1)
                    {
                        ans = 1;
                    }
                    else if (even == 0)
                    {
                        ans = 2;
                    }
                }
            }
        }

        cout << ans << "\n";
    }

    return 0;
}