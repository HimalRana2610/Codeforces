#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int x;
        cin >> x;

        int ans = 1, gcd = __gcd(x, 1) + 1;
        for(int i = 2; i < x; i++)
        {
            if(__gcd(x, i) + i > gcd)
            {
                ans = i;
            }
        }

        cout << ans << endl;
    }

    return 0;
}