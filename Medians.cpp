#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, k;
        cin >> n >> k;

        if(k == (n + 1) / 2)
        {
            cout << n << endl;
            for(int i = 1; i <= n; i++)
            {
                cout << i << " ";
            }
            cout << endl;
        }
        else
        {
            if(k == 1 || k == n)
            {
                cout << -1 << endl;
            }
            else if(2 * k - 1 < n)
            {
                cout << 3 << endl;
                cout << 1 << " " << 2 << " " << 2 * k - 1 << endl;
            }
            else
            {
                cout << 3 << endl;
                cout << 1 << " " << k - (n - k - 1) << " " << n << endl;
            }
        }
    }

    return 0;
}