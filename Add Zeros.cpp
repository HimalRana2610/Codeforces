#include<bits/stdc++.h>
using namespace std;

int n, ans = 0;
int dfs(map<long long, vector<int>> &m, int n);

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        map<long long, vector<int>> m;
        for(int i = 1; i <= n; i++)
        {
            long long a;
            cin >> a;

            a -= n - i + 1;

            if(i > 1)
            {
                m[a].push_back(i);
            }
        }
        cout << dfs(m, n) << endl;
    }

    return 0;
}

int dfs(map<long long, vector<int>> &m, int n)
{
    map<long long, bool> visited;
    visited[n] = true;
    ans = max(ans, n);

    for(auto i : m[0])
    {
        if(!visited[n + i - 1])
        {
            dfs(m, n + i - 1);
        }
    }

    return ans;
}