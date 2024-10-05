#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> arr(n, vector<int>(m));
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }

        if(n == 1 && m == 1)
        {
            cout << -1 << endl;
            continue;
        }

        vector<vector<int>> ans(n, vector<int>(m));
        if(n == 1)
        {
            for(int i = 1; i < m; i++)
            {
                ans[0][i - 1] = arr[0][i];
            }
            ans[0][m - 1] = arr[0][0];
        }
        else
        {
            for(int i = 1; i < n; i++)
            {
                for(int j = 0; j < m; j++)
                {
                    ans[i - 1][j] = arr[i][j];
                }
            }
            for(int i = 0; i < m; i++)
            {
                ans[n - 1][i] = arr[0][i];
            }
        }

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}