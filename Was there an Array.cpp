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

        vector<int> arr(n - 2);
        for(int i = 0; i < n - 2; i++)
        {
            cin >> arr[i];
        }

        bool flag = true;
        for(int i = 1; i < n - 3; i++)
        {
            if(arr[i] == 0 && arr[i - 1] == 1 && arr[i + 1] == 1)
            {
                flag = false;
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