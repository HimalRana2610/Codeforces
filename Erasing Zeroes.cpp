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
        string str;
        cin >> str;

        int start = -1;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == '1')
            {
                start = i;
                break;
            }
        }

        if (start == -1)
        {
            cout << 0 << "\n";
            continue;
        }

        int end = str.length() - 1;
        for (int i = str.length() - 1; i >= 0; i--)
        {
            if (str[i] == '1')
            {
                end = i;
                break;
            }
        }

        int ans = 0;
        for (int i = start + 1; i < end; i++)
        {
            if (str[i] == '0')
            {
                ans++;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}