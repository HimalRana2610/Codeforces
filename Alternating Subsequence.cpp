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

        int e = arr[0];
        vector<int> ans;

        for(int i = 1; i < n; i++)
        {
            if(arr[i] < 0)
            {
                if(e > 0)
                {
                    ans.push_back(e);
                    e = arr[i];
                }
                else if(arr[i] >= e)
                {
                    e = arr[i];
                }
            }
            else
            {
                if(e < 0)
                {
                    ans.push_back(e);
                    e = arr[i];
                }
                else if(arr[i] > e)
                {
                    e = arr[i];
                }
            }
        }
        ans.push_back(e);

        long long sum = 0;
        for(int i = 0; i < ans.size(); i++)
        {
            sum += ans[i];
        }

        cout << sum << endl;
    }

    return 0;
}