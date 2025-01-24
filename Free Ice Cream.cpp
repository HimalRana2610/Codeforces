#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long x;
    cin >> x;

    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        char ch;
        cin >> ch;

        int d;
        cin >> d;

        if(ch == '+')
        {
            x += d;
        }
        else
        {
            if(d > x)
            {
                ans++;
            }
            else
            {
                x -= d;
            }
        }
    }

    cout << x << " " << ans << endl;
    return 0;
}