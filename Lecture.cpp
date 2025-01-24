#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    map<string, string> ans;
    for(int i = 0; i < m; i++)
    {
        string s1, s2;
        cin >> s1 >> s2;

        if(s2.length() < s1.length())
        {
            ans[s1] = s2;
            ans[s2] = s2;
        }
        else
        {
            ans[s1] = s1;
            ans[s2] = s1;
        }
    }

    vector<string> str(n);
    for(int i = 0; i < n; i++)
    {
        cin >> str[i];
    }

    for(int i = 0; i < n; i++)
    {
        cout << ans[str[i]] << " ";
    }

    return 0;
}