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

        vector<vector<int>> mat(n, vector<int>(m));
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cin >> mat[i][j];
            }
        }

        vector<int> has_color(n * m, 0), has_bad(n * m, 0);
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                has_color[mat[i][j] - 1] = 1;
                if(i + 1 < n && mat[i][j] == mat[i + 1][j])
                {
                    has_bad[mat[i][j] - 1] = 1;
                }
                if(j + 1 < m && mat[i][j] == mat[i][j + 1])
                {
                    has_bad[mat[i][j] - 1] = 1;
                }
            }
        }

        cout << accumulate(has_color.begin(), has_color.end(), 0) + accumulate(has_bad.begin(), has_bad.end(), 0) - *max_element(has_bad.begin(), has_bad.end()) - 1 << endl;
    }

    return 0;
}