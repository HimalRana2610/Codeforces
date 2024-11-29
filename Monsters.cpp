#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, k;
        cin >> n >> k;

        map<int, vector<int>, greater<int>> m;
        vector<int> ans;

        for(int i = 1; i <= n; i++)
        {
            int temp;
            cin >> temp;

            if(temp % k == 0)
            {
                ans.push_back(i);
            }
            else
            {
                m[temp % k].push_back(i);
            }
        }

        for(auto x : m)
        {
            for(auto y : x.second)
            {
                ans.push_back(y);
            }
        }

        for(auto x : ans)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}