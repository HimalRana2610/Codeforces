#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<pair<int, int>> laptops(n);
    for(int i = 0; i < n; i++)
    {
        cin >> laptops[i].first >> laptops[i].second;
    }

    sort(laptops.begin(), laptops.end(), [](pair<int, int>& a, pair<int, int>& b)
    {
        return a.second < b.second;
    });

    bool flag = true;
    for(int i = 0; i < n - 1; i++)
    {
        if(laptops[i].first > laptops[i + 1].first)
        {
            flag = false;
            break;
        }
    }

    if(flag)
    {
        cout << "Poor Alex";
    }
    else
    {
        cout << "Happy Alex";
    }

    return 0;
}