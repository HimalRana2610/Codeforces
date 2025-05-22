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

        int n = str.length(), zero = 0;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == '0')
            {
                zero++;
            }
        }

        int one = n - zero, index = n;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == '0')
            {
                if (one == 0)
                {
                    index = i;
                    break;
                }
                one--;
            }
            else
            {
                if (zero == 0)
                {
                    index = i;
                    break;
                }
                zero--;
            }
        }

        cout << n - index << "\n";
    }

    return 0;
}