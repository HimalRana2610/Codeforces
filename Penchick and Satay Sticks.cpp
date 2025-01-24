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

        vector<int> sorted = arr;
        sort(sorted.begin(), sorted.end());

        bool flag = true;
        for(int i = 0; i < n; i++)
        {
            if(arr[i] != sorted[i] && abs(arr[i] - sorted[i]) > 1)
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