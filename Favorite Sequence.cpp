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

        int l = 0, r = n - 1;
        for(int i = 0; i < n; i++)
        {
            if(i % 2 == 0)
            {
                cout << arr[l] << " ";
                l++;
            }
            else
            {
                cout << arr[r] << " ";
                r--;
            }
        }
        cout << endl;
    }

    return 0;
}