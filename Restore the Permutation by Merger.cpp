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

        vector<int> arr(2 * n), ans;
        set<int> s;
        for(int i = 0; i < 2 * n; i++)
        {
            cin >> arr[i];
            if(s.find(arr[i]) != s.end())
            {
                ans.push_back(arr[i]);
            }
            s.insert(arr[i]);
        }

        for(int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}