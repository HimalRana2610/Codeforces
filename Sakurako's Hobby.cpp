#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> perm(n);
        string colors;

        for(int i = 0; i < n; ++i)
        {
            cin >> perm[i];
        }

        cin >> colors;

        vector<int> result(n);
        vector<bool> visited(n, false);
        vector<int> cycle_black_count(n, 0);
        vector<int> node_to_cycle(n, -1);
        vector<int> black_count_per_cycle;

        auto find_cycle = [&](int start)
        {
            vector<int> cycle;
            set<int> black_nodes;
            int current = start;

            while(true)
            {
                if(node_to_cycle[current] != -1)
                {
                    break;
                }
                node_to_cycle[current] = start;
                cycle.push_back(current);
                if(colors[current] == '0')
                {
                    black_nodes.insert(current);
                }
                current = perm[current] - 1;
            }

            int cycle_id = black_count_per_cycle.size();
            black_count_per_cycle.push_back(black_nodes.size());

            for(int node : cycle)
            {
                result[node] = black_count_per_cycle[cycle_id];
            }
        };

        for(int i = 0; i < n; ++i)
        {
            if(!visited[i])
            {
                int current = i;
                while(!visited[current])
                {
                    visited[current] = true;
                    current = perm[current] - 1;
                }
                find_cycle(i);
            }
        }

        for(int i = 0; i < n; ++i)
        {
            cout << result[i] << " ";
        }
        cout << endl;
    }

    return 0;
}