#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int ans = 0;
    while(n != m)
    {
        ans++;
        if(m < n || m % 2 != 0)
        {
            m++;
        }
        else
        {
            m /= 2;
        }
    }

    cout << ans << endl;
    return 0;
}