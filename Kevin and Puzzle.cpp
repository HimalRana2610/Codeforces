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

        vector<int> arr(n);
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        unordered_map<int, int> honest, lier;
        honest[0] = 1;

        for(int i = 0; i < n; i++)
        {
            int temp = (honest[arr[i]] + lier[arr[i]]) % 998244353;
            unordered_map<int, int> dp_honest, dp_lier;
            if(temp > 0)
            {
                dp_honest[arr[i]] = temp;
            }

            for(auto &h : honest)
            {
                dp_lier[h.first + 1] = (dp_lier[h.first + 1] + h.second) % 998244353;
            }

            honest = move(dp_honest);
            lier = move(dp_lier);
        }

        int ans = 0;
        for(auto &h : honest)
        {
            ans = (ans + h.second) % 998244353;
        }
        for(auto &l : lier)
        {
            ans = (ans + l.second) % 998244353;
        }

        cout << ans << endl;
    }

    return 0;
}