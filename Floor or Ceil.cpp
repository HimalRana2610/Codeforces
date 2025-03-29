#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
    {
        int x, n, m;
        cin >> x >> n >> m;

        int a = n, b = m, mn = x;
        while(mn > 1 && a + b > 0)
        {
            if(mn % 2 == 0)
            {
                if(b > 0)
                {
                    b--;
                }
                else
                {
                    a--;
                }
                mn /= 2;
            }
            else
            {
                if(b > 0)
                {
                    mn = (mn + 1) / 2;
                    b--;
                }
                else
                {
                    mn /= 2;
                    a--;
                }
            }
        }
        if(a > 0)
        {
            mn = 0;
        }

        int mx = x;
        while(mx > 1 && n + m > 0)
        {
            if(mx % 2 == 0)
            {
                if(n > 0)
                {
                    n--;
                }
                else
                {
                    m--;
                }
                mx /= 2;
            }
            else
            {
                if(n > 0)
                {
                    mx /= 2;
                    n--;
                }
                else
                {
                    mx = (mx + 1) / 2;
                    m--;
                }
            }
        }
        if(n > 0)
        {
            mx = 0;
        }

        cout << mn << " " << mx << endl;
    }

    return 0;
}