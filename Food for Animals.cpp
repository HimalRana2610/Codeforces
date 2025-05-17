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
        int a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;

        x = max(0, x - a);
        y = max(0, y - b);

        if(x + y <= c)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}