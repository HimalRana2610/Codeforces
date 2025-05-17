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
        int n, k, p;
        cin >> n >> k >> p;

        k = abs(k);
        int ans = k / p;
        k %= p;

        if(ans > n)
        {
            cout << -1 << "\n";
        }
        else
        {
            if(k == 0)
            {
                cout << ans << "\n";
            }
            else
            {
                if(ans == n)
                {
                    cout << -1 << "\n";
                }
                else
                {
                    cout << ans + 1 << "\n";
                }
            }
        }
    }

    return 0;
}