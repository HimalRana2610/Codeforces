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
        int n, f, k;
        cin >> n >> f >> k;
        
        vector<int> arr(n);
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        
        int x = arr[f - 1];
        
        sort(arr.rbegin(), arr.rend());
        
        if(k == n || arr[k - 1] < x)
        {
            cout << "YES" << endl;
        }
        else if(arr[k - 1] == x)
        {
            if(arr[k] == x)
            {
                cout << "MAYBE" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}