#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<pair<int, int>> arr(n);
        unordered_map<int, int> freq;
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i].first >> arr[i].second;
            if(arr[i].first == arr[i].second)
            {
                freq[arr[i].first]++;
            }
        }

        vector<int> faulty;
        for(auto f : freq)
        {
            if(f.second > 0)
            {
                faulty.push_back(f.first);
            }
        }

        sort(faulty.begin(), faulty.end());

        string ans(n, '0');
        for(int i = 0; i < n; i++)
        {
            int l = arr[i].first, r = arr[i].second;
            if(l == r && freq[l] <= 1)
            {
                ans[i] = '1';
                continue;
            }

            int l_pos = lower_bound(faulty.begin(), faulty.end(), l) - faulty.begin(), r_pos = lower_bound(faulty.begin(), faulty.end(), r + 1) - faulty.begin();
            if(r_pos - l_pos != r - l + 1)
            {
                ans[i] = '1';
            }
        }

        cout << ans << endl;
    }

    return 0;
}