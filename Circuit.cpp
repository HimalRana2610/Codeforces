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

        int one = 0, zero = 0;
        for(int i = 0; i < 2 * n; i++)
        {
            int s;
            cin >> s;

            if(s == 1)
            {
                one++;
            }
            else
            {
                zero++;
            }
        }

        int mi, ma;
        if(one <= n)
        {
            ma = one;
        }
        else
        {
            ma = 2 * n - one;
        }
        if(one % 2 == 0)
        {
            mi = 0;
        }
        else
        {
            mi = 1;
        }

        cout << mi << " " << ma << endl;
    }

    return 0;
}