#include<bits/stdc++.h>
using namespace std;

int ans = 0;

void dfs(int root, vector<vector<int>> &adj, vector<int> &arr, int n, int m, int parent, int cat);

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> arr(n + 1, -1);
    for(int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    vector<vector<int>> adj(n + 1);

    for(int i = 0; i < n - 1; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    dfs(1, adj, arr, n, m, -1, 0);
    cout << ans << endl;

    return 0;
}

void dfs(int root, vector<vector<int>> &adj, vector<int> &arr, int n, int m, int parent, int cat)
{
    if(arr[root] == 1)
    {
        cat++;
    }
    else
    {
        cat = 0;
    }
    if(cat > m)
    {
        return;
    }

    bool is_leaf = true;
    for(auto x : adj[root])
    {
        if(x != parent)
        {
            is_leaf = false;
            dfs(x, adj, arr, n, m, root, cat);
        }
    }
    if(is_leaf)
    {
        ans++;
    }
}