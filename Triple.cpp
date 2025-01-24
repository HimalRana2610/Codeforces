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

        sort(arr.begin(), arr.end());

        bool flag = false;
        int count = 1;
        for(int i = 1; i < n; i++)
        {
            if(arr[i] == arr[i-1])
            {
                count++;
            }
            else
            {
                count = 1;
            }
            if(count == 3)
            {
                cout << arr[i] << endl;
                flag = true;
                break;
            }
        }
        if(!flag)
        {
            cout << -1 << endl;
        }
    }

    return 0;
}