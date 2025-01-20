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

        bool flag = false;
        for(int i = 0; i < n - 1; i++)
        {
            if(2 * arr[i] > arr[i + 1] && 2 * arr[i + 1] > arr[i])
            {
                flag = true;
                break;
            }
        }

        if(flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}