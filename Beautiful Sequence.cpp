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
        int n;
        cin >> n;

        vector<int> arr(n);
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int one = 0, cnt = 0, ans = 0;
        for(int i = 0; i < n; i++)
        {
            if(arr[i] == 1)
            {
                one++;
            }
            else if(arr[i] == 2)
            {
                cnt = (2LL * cnt + one) % 998244353;
            }
            else
            {
                ans = (ans + cnt) % 998244353;
            }
        }

        cout << ans << endl;
    }

    return 0;
}