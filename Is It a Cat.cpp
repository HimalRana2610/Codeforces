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

        transform(str.begin(), str.end(), str.begin(), [](char ch)
                  { return tolower(ch); });

        string ans;
        ans.push_back(str[0]);

        for (int i = 1; i < n; i++)
        {
            if (str[i] != str[i - 1])
            {
                ans.push_back(str[i]);
            }
        }

        if (ans == "meow")
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}