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
        int n, m;
        cin >> n >> m;

        vector<string> grid(n);
        for(int i = 0; i < n; i++)
        {
            cin >> grid[i];
        }

        bool flag = true;
        for(int i = 1; i < n && flag; i++)
        {
            for(int j = 1; j < m; j++)
            {
                if(grid[i][j] == '1')
                {
                    bool row = true, col = true;
                    for(int k = 0; k < i; k++)
                    {
                        if(grid[k][j] == '0')
                        {
                            row = false;
                            break;
                        }
                    }
                    for(int k = 0; k < j; k++)
                    {
                        if(grid[i][k] == '0')
                        {
                            col = false;
                            break;
                        }
                    }

                    if(!row && !col)
                    {
                        flag = false;
                        break;
                    }
                }
            }
        }

        if(flag)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}