#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    if(m % n != 0)
    {
        cout << -1 << "\n";
    }
    else
    {
        int t = m / n, ans = 0;
        while(t % 3 == 0)
        {
            t /= 3;
            ans++;
        }
        while(t % 2 == 0)
        {
            t /= 2;
            ans++;
        }

        if(t == 1)
        {
            cout << ans << "\n";
        }
        else
        {
            cout << -1 << "\n";
        }
    }

    return 0;
}