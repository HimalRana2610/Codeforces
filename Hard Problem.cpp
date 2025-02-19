#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int m, a, b, c;
        cin >> m >> a >> b >> c;

        int ans = 0, first = m, second = m;
        if(a >= m)
        {
            ans += m;
            first = 0;
        }
        else
        {
            ans += a;
            first = m - a;
        }

        if(b >= m)
        {
            ans += m;
            second = 0;
        }
        else
        {
            ans += b;
            second = m - b;
        }

        if(c >= first + second)
        {
            ans += first + second;
        }
        else
        {
            ans += c;
        }

        cout << ans << endl;
    }

    return 0;
}