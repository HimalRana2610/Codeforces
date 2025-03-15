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
        int n;
        cin >> n;

        vector<int> arr(n);
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        long long l1 = 0, r1 = 0, l2 = INT_MAX, r2 = INT_MIN, prefix = 0, mnl = 0, mxl = 0, mnr = INT_MAX, mxr = INT_MIN;
        for(int i = 0; i < n; i++)
        {
            prefix += arr[i];
            if(arr[i] != -1 && arr[i] != 1)
            {
                mnr = mnl;
                mxr = mxl;
                mnl = prefix;
                mxl = prefix;
            }

            l1 = min(l1, prefix - mxl);
            r1 = max(r1, prefix - mnl);
            l2 = min(l2, prefix - mxr);
            r2 = max(r2, prefix - mnr);

            mnl = min(mnl, prefix);
            mxl = max(mxl, prefix);
        }

        vector<long long> ans;
        if(l2 > r1)
        {
            for(long long i = l1; i <= r1; i++)
            {
                ans.push_back(i);
            }
            for(long long i = l2; i <= r2; i++)
            {
                ans.push_back(i);
            }
        }
        else if(r2 < l1)
        {
            for(long long i = l2; i <= r2; i++)
            {
                ans.push_back(i);
            }
            for(long long i = l1; i <= r1; i++)
            {
                ans.push_back(i);
            }
        }
        else
        {
            for(long long i = min(l1, l2); i <= max(r1, r2); i++)
            {
                ans.push_back(i);
            }
        }

        cout << ans.size() << endl;
        for(long long i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}