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

        vector<string> mat(n);
        for(int i = 0; i < n; i++)
        {
            cin >> mat[i];
        }

        int odd_row = 0;
        for(int i = 0; i < n; i++)
        {
            int current = 0;
            for(int j = 0; j < m; j++)
            {
                if(mat[i][j] == '1')
                {
                    current++;
                }
            }

            if(current % 2 != 0)
            {
                odd_row++;
            }
        }

        int even_row = 0;
        for(int i = 0; i < m; i++)
        {
            int current = 0;
            for(int j = 0; j < n; j++)
            {
                if(mat[j][i] == '1')
                {
                    current++;
                }
            }

            if(current % 2 != 0)
            {
                even_row++;
            }
        }

        cout << max(odd_row, even_row) << endl;
    }

    return 0;
}