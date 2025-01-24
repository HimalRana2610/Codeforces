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
        map<int, int> freq;
        set<int> s;

        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            freq[arr[i]]++;
            s.insert(arr[i]);
        }

        int one = 0;
        for(const int &x : s)
        {
            if(freq[x] == 1)
            {
                one++;
            }
        }

        int ans = s.size();
        if(one % 2 != 0)
        {
            ans++;
        }

        cout << ans << endl;
    }

    return 0;
}