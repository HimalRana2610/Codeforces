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
        int n, k, x;
        cin >> n >> k >> x;

        if (k > 2)
        {
            cout << "YES\n";
            if (x != 1)
            {
                cout << n << "\n";
                for (int i = 0; i < n; i++)
                {
                    cout << 1 << " ";
                }
                cout << "\n";
            }
            else
            {
                if (n % 2 != 0)
                {
                    n -= 3;
                    cout << n / 2 + 1 << "\n";
                    cout << 3 << " ";
                }
                else
                {
                    cout << n / 2 << "\n";
                }

                for (int i = 0; i < n / 2; i++)
                {
                    cout << 2 << " ";
                }
                cout << "\n";
            }
            continue;
        }
        else if (k == 1)
        {
            cout << "NO\n";
        }
        else
        {
            if (n % 2 != 0 && x == 1)
            {
                cout << "NO\n";
            }
            else
            {
                cout << "YES\n";
                if (x == 1)
                {
                    cout << n / 2 << "\n";
                    for (int i = 0; i < n / 2; i++)
                    {
                        cout << 2 << " ";
                    }
                    cout << "\n";
                }
                else
                {
                    cout << n << "\n";
                    for (int i = 0; i < n; i++)
                    {
                        cout << 1 << " ";
                    }
                    cout << "\n";
                }
            }
        }
    }

    return 0;
}