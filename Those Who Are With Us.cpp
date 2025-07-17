#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> mat(n, vector<int>(m));
        int ma = INT_MIN, cnt = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> mat[i][j];
                if (mat[i][j] > ma)
                {
                    ma = mat[i][j];
                    cnt = 1;
                }
                else if (mat[i][j] == ma)
                {
                    cnt++;
                }
            }
        }

        vector<int> row_cnt(n, 0), col_cnt(m, 0);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (mat[i][j] == ma)
                {
                    row_cnt[i]++;
                    col_cnt[j]++;
                }
            }
        }

        int ans = ma;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (row_cnt[i] + col_cnt[j] - (mat[i][j] == ma) == cnt)
                {
                    ans = ma - 1;
                    break;
                }
            }
        }

        cout << ans << "\n";
    }

    return 0;
}