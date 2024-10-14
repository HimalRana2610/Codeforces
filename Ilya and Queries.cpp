#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int m;
    cin >> m;

    vector<vector<int>> queries(m, vector<int>(2));
    for(int i = 0; i < m; i++)
    {
        cin >> queries[i][0] >> queries[i][1];
    }

    vector<int> dp(str.length() + 1, 0);
    for(int i = 1; i < str.length(); i++)
    {
        dp[i] = dp[i - 1];
        if(str[i] == str[i - 1])
        {
            dp[i]++;
        }
    }

    for(int i = 0; i < m; i++)
    {
        cout << dp[queries[i][1] - 1] - dp[queries[i][0] - 1] << endl;
    }

    return 0;
}