#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

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

        sort(arr.rbegin(), arr.rend());

        if(arr[0] == arr[n - 1])
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
            if(arr[0] == arr[1])
            {
                cout << arr[0] << " " << arr[n - 1] << " ";
                for(int i = 1; i < n - 1; i++)
                {
                    cout << arr[i] << " ";
                }
                cout << "\n";
            }
            else
            {
                for(int i = 0; i < n; i++)
                {
                    cout << arr[i] << " ";
                }
                cout << "\n";
            }
        }
    }

    return 0;
}