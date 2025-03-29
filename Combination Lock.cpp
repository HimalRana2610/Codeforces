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
        int n;
        cin >> n;

        if(n % 2 == 0)
        {
            cout << -1 << "\n";
            continue;
        }

        for(int i = 1; i <= n; i++)
        {
            int ans = (2 * i) % n;
            if(ans == 0)
            {
                cout << n << " ";
            }
            else
            {
                cout << ans << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}