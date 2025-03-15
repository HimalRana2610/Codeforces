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

        vector<int> arr(n), ans;
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(i == 0)
            {
                ans.push_back(arr[i]);
            }
            else
            {
                if(arr[i - 1] > arr[i])
                {
                    ans.push_back(arr[i]);
                }
                ans.push_back(arr[i]);
            }
        }

        cout << ans.size() << endl;
        for(int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}