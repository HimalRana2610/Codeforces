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
        int x, y;
        cin >> x >> y;

        int ans = (y + 1) / 2, k;
        if(y % 2 == 0)
        {
            k = ans * 7;
        }
        else
        {
            k = ans * 7 + 4;
        }

        if(x <= k)
        {
            cout << ans << "\n";
        }
        else
        {
            x -= k;
            cout << ans + (x + 14) / 15 << "\n";
        }
    }

    return 0;
}