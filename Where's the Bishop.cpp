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
        vector<string> board(8);
        for(int i = 0; i < 8; i++)
        {
            cin >> board[i];
        }

        int l = 0, r = 0;
        for(int i = 1; i < 7; i++)
        {
            for(int j = 1; j < 7; j++)
            {
                if(board[i][j] == '#' && board[i - 1][j - 1] == '#' && board[i - 1][j + 1] == '#')
                {
                    l = i + 1;
                    r = j + 1;
                    break;
                }
            }
            if(l != 0)
            {
                break;
            }
        }

        cout << l << " " << r << "\n";
    }

    return 0;
}