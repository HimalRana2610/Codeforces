#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> left(n);
        for(int i = 0; i < n; i++)
        {
            cin >> left[i];
        }

        vector<int> right(n);
        for(int i = 0; i < n; i++)
        {
            cin >> right[i];
        }

        long long ans = 0;
        vector<int> temp;

        for(int i = 0; i < n; i++)
        {
            ans += max(left[i], right[i]);
            temp.push_back(min(left[i], right[i]));
        }

        sort(temp.rbegin(), temp.rend());

        for(int i = 0; k > 1; i++)
        {
            ans += temp[i];
            k--;
        }

        cout << ans + 1 << "\n";
    }

    return 0;
}