#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int ans = 0;
    for(int i = 1; n > 0; i++, ans++, n--)
    {
        if(i % m == 0)
        {
            n++;
        }
    }

    cout << ans;
    return 0;
}