#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> arr(n);
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    map<int, int> ans;
    set<int> s;

    for(int i = n - 1; i >= 0; i--)
    {
        s.insert(arr[i]);
        ans[i] = s.size();
    }

    for(int i = 0; i < m; i++)
    {
        int l;
        cin >> l;
        cout << ans[l - 1] << endl;
    }
}