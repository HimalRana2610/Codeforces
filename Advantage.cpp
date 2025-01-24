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

        vector<int> temp = arr;
        sort(temp.begin(), temp.end());

        for(int i = 0; i < n; i++)
        {
            if(arr[i] == temp[n - 1])
            {
                cout << arr[i] - temp[n - 2] << " ";
            }
            else
            {
                cout << arr[i] - temp[n - 1] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}