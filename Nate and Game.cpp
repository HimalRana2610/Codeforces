#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<pair<int, int>> triangle;
    for(int i = 0; i < n; i++)
    {
        int x0, y0, x1, y1, x2, y2;
        cin >> x0 >> y0 >> x1 >> y1 >> x2 >> y2;

        triangle.push_back({min(y0, min(y1, y2)), 1});
        triangle.push_back({max(y0, max(y1, y2)), -1});
    }

    sort(triangle.begin(), triangle.end(), [](const pair<int, int> &a, const pair<int, int> &b){return a.first == b.first ? a.second > b.second : a.first < b.first;});

    int current = 0, ans = 0;
    for(int i = 0; i < triangle.size(); i++)
    {
        if(triangle[i].second == 1)
        {
            current++;
            ans = max(ans, current);
        }
        else
        {
            current--;
        }
    }

    cout << ans << "\n";
    return 0;
}