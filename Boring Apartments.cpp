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

        int ans = ((x % 10) - 1) * 10;

        if(x < 10)
        {
            ans += 1;
        }
        else if(x < 100)
        {
            ans += 3;
        }
        else if(x < 1000)
        {
            ans += 6;
        }
        else
        {
            ans += 10;
        }

        cout << ans << endl;
    }

    return 0;
}