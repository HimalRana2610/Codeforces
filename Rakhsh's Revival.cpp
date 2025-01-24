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

        string str;
        cin >> str;

        int ans = 0, cnt = 0;
        for(int i = 0; i < n; i++)
        {
            if(str[i] == '0')
            {
                cnt++;
            }
            else
            {
                cnt = 0;
            }
            if(cnt == m)
            {
                ans++;
                cnt = 0;
                if(k > 1)
                {
                    i += k - 1;
                }
            }
        }
        
        cout << ans << endl;
    }

    return 0;
}