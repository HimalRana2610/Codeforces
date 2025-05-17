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
        int n;
        cin >> n;

        string str;
        cin >> str;

        vector<string> grid(n, str);
        for(int i = 0; i < n; i++)
        {
            if(grid[i][i] == '0')
            {
                grid[i][i] = '1';
            }
            else
            {
                grid[i][i] = '0';
            }
        }

        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(grid[i][j] == '1')
                {
                    ans++;
                }
            }
        }

        cout << ans << "\n";
    }

    return 0;
}