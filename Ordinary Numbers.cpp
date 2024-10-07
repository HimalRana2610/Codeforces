#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int ans = 0;
        for(int i = 1; i < 10; i++)
        {
            long long val = i;
            while(val <= n)
            {
                ans++;
                val = val * 10 + i;
            }
        }

        cout << ans << endl;
    }

    return 0;
}