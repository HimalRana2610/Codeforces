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
        vector<string> grid(8);
        for(int i = 0; i < 8; i++)
        {
            cin >> grid[i];
        }

        char ans = 'X';
        for(int i = 0; i < 8; i++)
        {
            bool found = true;
            for(int j = 0; j < 8; j++)
            {
                if(grid[i][j] != 'R')
                {
                    found = false;
                    break;
                }
            }
            if(found)
            {
                ans = 'R';
                break;
            }
        }

        if(ans == 'X')
        {
            for(int j = 0; j < 8; j++)
            {
                bool found = true;
                for(int i = 0; i < 8; i++)
                {
                    if(grid[i][j] != 'B')
                    {
                        found = false;
                        break;
                    }
                }
                if(found)
                {
                    ans = 'B';
                    break;
                }
            }
        }

        cout << ans << "\n";
    }

    return 0;
}