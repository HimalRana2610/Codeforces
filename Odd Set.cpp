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

        vector<int> arr(2 * n);

        int odd = 0;
        for(int i = 0; i < 2 * n; i++)
        {
            cin >> arr[i];
            if(arr[i] % 2 != 0)
            {
                odd++;
            }
        }

        if(odd == n)
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