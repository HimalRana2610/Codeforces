#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        vector<pair<int, int>> corners(4);
        for(int i = 0; i < 4; i++)
        {
            cin >> corners[i].first >> corners[i].second;
        }

        if(corners[0].first != corners[1].first)
        {
            cout << (corners[0].first - corners[1].first) * (corners[0].first - corners[1].first) << endl;
        }
        else
        {
            cout << (corners[0].first - corners[2].first) * (corners[0].first - corners[2].first) << endl;
        }
    }

    return 0;
}