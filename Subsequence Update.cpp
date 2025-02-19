#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, l, r;
        cin >> n >> l >> r;
        l--;
        r--;

        vector<int> arr(n);
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        vector<int> temp1(arr.begin(), arr.begin() + r + 1);
        sort(temp1.begin(), temp1.end());

        long long ans1 = 0;
        for(int i = 0; i <= r - l; i++)
        {
            ans1 += temp1[i];
        }

        vector<int> temp2(arr.begin() + l, arr.end());
        sort(temp2.begin(), temp2.end());

        long long ans2 = 0;
        for(int i = 0; i <= r - l; i++)
        {
            ans2 += temp2[i];
        }

        cout << min(ans1, ans2) << endl;
    }

    return 0;
}