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

        vector<bool> occupied(n + 1, false);
        occupied[arr[0]] = true;

        bool flag = true;
        for(int i = 1; i < n; i++)
        {
            if(arr[i] == 1)
            {
                if(!occupied[2])
                {
                    flag = false;
                    break;
                }
            }
            else if(arr[i] == n)
            {
                if(!occupied[n - 1])
                {
                    flag = false;
                    break;
                }
            }
            else
            {
                if(!occupied[arr[i] - 1] && !occupied[arr[i] + 1])
                {
                    flag = false;
                    break;
                }
            }
            occupied[arr[i]] = true;
        }

        if(flag)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}