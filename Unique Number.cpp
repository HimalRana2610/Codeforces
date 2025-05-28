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
        int x;
        cin >> x;

        if (x > 45)
        {
            cout << -1 << "\n";
            continue;
        }

        string ans = "";
        for (int i = 9; i >= 1; i--)
        {
            if (x < i && x != 0)
            {
                ans.push_back('0' + x);
                break;
            }
            else if (x == 0)
            {
                break;
            }
            else
            {
                ans.push_back('0' + i);
                x -= i;
            }
        }

        reverse(ans.begin(), ans.end());
        cout << ans << "\n";
    }

    return 0;
}