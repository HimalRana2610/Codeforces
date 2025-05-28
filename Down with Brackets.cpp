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

        int balance = 0;
        bool flag = true;

        for (int i = 0; i < str.length() - 1; i++)
        {
            if (str[i] == '(')
            {
                balance++;
            }
            else
            {
                balance--;
            }

            if (balance == 0)
            {
                flag = false;
            }
        }

        if (!flag)
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