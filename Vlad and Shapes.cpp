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

        vector<string> grid(n);
        for(int i = 0; i < n; i++)
        {
            cin >> grid[i];
        }

        bool flag = false;
        for(int i = 0; i < n; i++)
        {
            int cnt = 0;
            for(int j = 0; j < n; j++)
            {
                if(grid[i][j] == '1')
                {
                    cnt++;
                }
            }

            if(cnt == 1)
            {
                flag = true;
            }
            if(cnt >= 1)
            {
                break;
            }
        }
        for(int i = n - 1; i >= 0; i--)
        {
            int cnt = 0;
            for(int j = 0; j < n; j++)
            {
                if(grid[i][j] == '1')
                {
                    cnt++;
                }
            }

            if(cnt == 1)
            {
                flag = true;
            }
            if(cnt >= 1)
            {
                break;
            }
        }

        if(flag)
        {
            cout << "TRIANGLE\n";
        }
        else
        {
            cout << "SQUARE\n";
        }
    }

    return 0;
}