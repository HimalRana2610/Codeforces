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

        int even = 0, odd = 0;
        for(int i = 0; i < n; i++)
        {
            if(i % 2 == 0 && arr[i] % 2 != 0)
            {
                even++;
            }
            else if(i % 2 != 0 && arr[i] % 2 == 0)
            {
                odd++;
            }
        }

        if(even == odd)
        {
            cout << even << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}