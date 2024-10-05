#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int m = n / 2;

        if(m % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;

            for(int i = 0; i < m; i++)
            {
                cout << 2 * (i + 1) << ' ';
            }
            for(int i = 0; i < m - 1; i++)
            {
                cout << (2 * i) + 1 << ' ';
            }

            cout << (m * (m + 1)) - ((m - 1) * (m - 1)) << endl;
        }
    }

    return 0;
}