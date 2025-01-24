#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        bool found = false;
        for(int i = 0; i < n; i++)
        {
            bool flag = true;
            for(int j = 0; j < n; j++)
            {
                if(i == j)
                {
                    continue;
                }
                if(abs(arr[i] - arr[j]) % k == 0)
                {
                    flag = false;
                    break;
                }
            }
            if(flag)
            {
                cout << "YES" << endl;
                cout << i + 1 << endl;
                found = true;
                break;
            }
        }
        if(!found)
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}