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

        while(n--)
        {
            if(x > 20)
            {
                x = x / 2 + 10;
            }
            else
            {
                break;
            }
        }

        while(m--)
        {
            x -= 10;
        }

        if(x <= 0)
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