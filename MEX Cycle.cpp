#include<bits/stdc++.h>
using namespace std;

int mex(set<int> s);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
    {
        int n, x, y;
        cin >> n >> x >> y;

        vector<int> ans(n, -1);
        vector<set<int>> friends(n);

        for(int i = 0; i < n; i++)
        {
            friends[i].insert((i + 1) % n);
            friends[i].insert((i - 1 + n) % n);
        }

        friends[x - 1].insert(y - 1);
        friends[y - 1].insert(x - 1);

        for(int i = 0; i < n; i++)
        {
            set<int> s;
            for(int j : friends[i])
            {
                if(ans[j] != -1)
                {
                    s.insert(ans[j]);
                }
            }
            ans[i] = mex(s);
        }

        for(int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}

int mex(set<int> s)
{
    int ans = 0;
    while(s.find(ans) != s.end())
    {
        ans++;
    }

    return ans;
}