#include<bits/stdc++.h>
using namespace std;

int fun(int a, int b);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
    {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;

        int ans = 0;
        if(fun(a1, b1) + fun(a2, b2) > 0)
        {
            ans += 2;
        }
        if(fun(a1, b2) + fun(a2, b1) > 0)
        {
            ans += 2;
        }

        cout << ans << "\n";
    }

    return 0;
}

int fun(int a, int b)
{
    if(a > b)
    {
        return 1;
    }
    else if(a == b)
    {
        return 0;
    }

    return -1;
}