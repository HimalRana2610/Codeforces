#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int, int> &a, pair<int, int> &b);

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<pair<int, int>> pairs(n);
        for(int i = 0; i < n; i++)
        {
            cin >> pairs[i].first >> pairs[i].second;
        }

        sort(pairs.begin(), pairs.end(), compare);

        for(int i = 0; i < n; i++)
        {
            cout << pairs[i].first << " " << pairs[i].second << " ";
        }
        cout << endl;
    }

    return 0;
}

bool compare(pair<int, int> &a, pair<int, int> &b)
{
    float a_mid = (a.first + a.second) * 1.0 / 2;
    float b_mid = (b.first + b.second) * 1.0 / 2;
    return a_mid < b_mid;
}