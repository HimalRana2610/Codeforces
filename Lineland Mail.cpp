#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<pair<int, int>> arr(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        arr[i] = {x, i};
    }

    sort(arr.begin(), arr.end(), [](const pair<int, int> &a, const pair<int, int> &b)
         { return a.first < b.first; });

    vector<pair<int, int>> ans(n);
    ans[arr[0].second] = {arr[1].first - arr[0].first, arr[n - 1].first - arr[0].first};
    ans[arr[n - 1].second] = {arr[n - 1].first - arr[n - 2].first, arr[n - 1].first - arr[0].first};

    for (int i = 1; i < n - 1; i++)
    {
        ans[arr[i].second] = {min(arr[i].first - arr[i - 1].first, arr[i + 1].first - arr[i].first), max(arr[i].first - arr[0].first, arr[n - 1].first - arr[i].first)};
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i].first << " " << ans[i].second << "\n";
    }

    return 0;
}