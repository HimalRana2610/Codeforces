#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        vector<string> lines(8);
        string ans = "";

        for(int i = 0; i < 8; i++)
        {
            cin >> lines[i];
            for(int j = 0; j < 8; j++)
            {
                if(lines[i][j] != '.')
                {
                    ans += lines[i][j];
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}