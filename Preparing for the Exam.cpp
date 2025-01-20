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

        vector<int> arr(m);
        for(int i = 0; i < m; i++)
        {
            cin >> arr[i];
        }

        vector<int> query(k);
        for(int i = 0; i < k; i++)
        {
            cin >> query[i];
        }

        if(k < n - 1)
        {
            string ans(m, '0');
            cout << ans << endl;
        }
        else if(k == n)
        {
            string ans(m, '1');
            cout << ans << endl;
        }
        else
        {
            set<int> s(query.begin(), query.end());
            string ans(m, '0');

            for(int i = 0; i < m; i++)
            {
                if(s.find(arr[i]) == s.end())
                {
                    ans[i] = '1';
                }
            }

            cout << ans << endl;
        }
    }

    return 0;
}