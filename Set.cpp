#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int l, r, k;
        cin >> l >> r >> k;

        int ans = (r / k) - l + 1;
        if(ans < 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }

    return 0;
}