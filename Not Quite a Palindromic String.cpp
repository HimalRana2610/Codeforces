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

        string str;
        cin >> str;

        int zero = 0, one = 0;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == '0')
            {
                zero++;
            }
            else
            {
                one++;
            }
        }

        if (zero > one)
        {
            k -= (zero - one) / 2;
            zero = one;
        }
        else
        {
            k -= (one - zero) / 2;
            one = zero;
        }

        if (k < 0)
        {
            cout << "NO\n";
        }
        else if (k % 2 == 0)
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