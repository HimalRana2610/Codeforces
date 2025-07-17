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

        string str;
        cin >> str;

        vector<int> freq(26, 0);
        for (int i = 0; i < n; i++)
        {
            freq[str[i] - 'a']++;
        }

        bool flag = false;
        for (int i = 1; i < n - 1; i++)
        {
            if (freq[str[i] - 'a'] > 1)
            {
                flag = true;
                break;
            }
        }

        if (flag)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }

    return 0;
}