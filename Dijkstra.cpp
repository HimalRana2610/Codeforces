#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<vector<pair<int, int>>> graph(n + 1);
    for(int i = 0; i < m; i++)
    {
        int a, b, w;
        cin >> a >> b >> w;

        graph[a].push_back({b, w});
        graph[b].push_back({a, w});
    }

    vector<long long> dist(n + 1, LLONG_MAX);
    dist[1] = 0;

    vector<int> prev(n + 1, -1);
    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;
    pq.push({0, 1});

    while(!pq.empty())
    {
        long long current = pq.top().first;
        int u = pq.top().second;
        pq.pop();

        if(current > dist[u])
        {
            continue;
        }

        for(auto &neighbour : graph[u])
        {
            int v = neighbour.first;
            long long weight = neighbour.second;
            long long next = current + weight;

            if(next < dist[v])
            {
                dist[v] = next;
                prev[v] = u;
                pq.push({next, v});
            }
        }
    }

    if(dist[n] == LLONG_MAX)
    {
        cout << -1 << "\n";
    }
    else
    {
        stack<int> path;
        for(int i = n; i != -1; i = prev[i])
        {
            path.push(i);
        }

        while(!path.empty())
        {
            cout << path.top() << " ";
            path.pop();
        }
        cout << "\n";
    }

    return 0;
}