#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> b(n), c(m);
        for(int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for(int i = 0; i < m; i++)
        {
            cin >> c[i];
        }

        sort(b.begin(), b.end());
        sort(c.begin(), c.end());

        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(b[i] + c[j] <= k)
                {
                    ans++;
                }
                else
                {
                    break;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}