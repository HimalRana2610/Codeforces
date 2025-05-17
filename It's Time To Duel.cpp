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
        int sum = 0;

        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }

        bool flag = false;
        if(sum == n)
        {
            flag = true;
        }

        for(int i = 0; i < n - 1 && !flag; i++)
        {
            if(arr[i] == 0 && arr[i + 1] == 0)
            {
                flag = true;
            }
        }

        if(!flag)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }

    return 0;
}