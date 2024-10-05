#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> boys(n);
    for(int i = 0; i < n; i++)
    {
        cin >> boys[i];
    }

    int m;
    cin >> m;

    vector<int> girls(m);
    for(int i = 0; i < m; i++)
    {
        cin >> girls[i];
    }

    sort(boys.begin(), boys.end());
    sort(girls.begin(), girls.end());

    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < girls.size(); j++)
        {
            if(boys[i] - girls[j] == 1)
            {
                ans++;
                girls.erase(girls.begin() + j);
                break;
            }
            else if(boys[i] - girls[j] == 0)
            {
                ans++;
                girls.erase(girls.begin() + j);
                break;
            }
            else if(boys[i] - girls[j] == -1)
            {
                ans++;
                girls.erase(girls.begin() + j);
                break;
            }
        }
    }

    cout << ans << endl;
    return 0;
}