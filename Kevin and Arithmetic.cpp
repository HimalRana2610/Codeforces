#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, even = 0;
        cin >> n;

        vector<int> arr(n);
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i] % 2 == 0)
            {
                even++;
            }
        }

        if(even == n)
        {
            cout << 1 << endl;
        }
        else if(even > 0)
        {
            cout << n - even + 1 << endl;
        }
        else
        {
            cout << n - 1 << endl;
        }
    }

    return 0;
}