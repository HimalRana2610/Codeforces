#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string str;
    cin >> str;

    map<string, int> freq;
    for(int i = 0; i < n - 1; i++)
    {
        freq[str.substr(i, 2)]++;
    }

    vector<pair<string, int>> ans(freq.begin(), freq.end());
    sort(ans.begin(), ans.end(), [](const pair<string, int> &a, const pair<string, int> &b){return a.second > b.second;});

    cout << ans[0].first << endl;
    return 0;
}