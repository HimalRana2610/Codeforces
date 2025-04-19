#include<bits/stdc++.h>
using namespace std;

#define INF 4e18

long long solve(vector<long long> cost, vector<int> blocked);

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

        vector<vector<int>> height(n, vector<int>(n));
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cin >> height[i][j];
            }
        }

        vector<long long> x(n);
        for(int i = 0; i < n; i++)
        {
            cin >> x[i];
        }

        vector<long long> y(n);
        for(int i = 0; i < n; i++)
        {
            cin >> y[i];
        }

        vector<int> not_x(n - 1, 0);
        for(int i = 0; i < n - 1; i++)
        {
            int current = 0;
            for(int j = 0; j < n; j++)
            {
                int d = height[i][j] - height[i + 1][j];
                if(abs(d) <= 1)
                {
                    current |= 1 << (d + 1);
                }
            }
            not_x[i] = current;
        }

        vector<int> not_y(n - 1, 0);
        for(int j = 0; j < n - 1; j++)
        {
            int current = 0;
            for(int i = 0; i < n; i++)
            {
                int d = height[i][j] - height[i][j + 1];
                if(abs(d) <= 1)
                {
                    current |= 1 << (d + 1);
                }
            }
            not_y[j] = current;
        }

        long long ans_x = solve(x, not_x), ans_y = solve(y, not_y);
        if(ans_x >= INF / 2 || ans_y >= INF / 2)
        {
            cout << -1 << "\n";
            continue;
        }

        cout << ans_x + ans_y << "\n";
    }

    return 0;
}

long long solve(vector<long long> cost, vector<int> blocked)
{
    long long prev0 = 0, prev1 = cost[0];
    for(int i = 0; i < blocked.size(); i++)
    {
        long long current0 = INF, current1 = INF;
        int current = blocked[i];

        for(int j = 0; j < 2; j++)
        {
            long long prev = (j == 0 ? prev0 : prev1);
            if(prev >= INF)
            {
                continue;
            }

            for(int k = 0; k < 2; k++)
            {
                int bit = k - j + 1;
                if(current & (1 << bit))
                {
                    continue;
                }

                long long next = prev + (k ? cost[i + 1] : 0);
                if(k == 0)
                {
                    current0 = min(current0, next);
                }
                else
                {
                    current1 = min(current1, next);
                }
            }
        }

        prev0 = current0;
        prev1 = current1;
    }

    return min(prev0, prev1);
}