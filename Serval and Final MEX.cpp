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

        int l = -1, r = -1;
        for(int i = 0; i < n; i++)
        {
            if(arr[i] == 0)
            {
                l = i;
                break;
            }
        }
        for(int i = n - 1; i >= 0; i--)
        {
            if(arr[i] == 0)
            {
                r = i;
                break;
            }
        }

        if(l == -1)
        {
            cout << 1 << "\n";
            cout << 1 << " " << n << "\n";
            continue;
        }

        if(l == r)
        {
            cout << 2 << "\n";
            if(l == 0)
            {
                cout << 1 << " " << 2 << "\n";
            }
            else
            {
                cout << l << " " << l + 1 << "\n";
            }
            cout << 1 << " " << n - 1 << "\n";
        }
        else
        {
            if(l == 0 && r == n - 1)
            {
                cout << 3 << "\n";
                int x = n / 2;
                cout << 1 << " " << x << "\n";
                cout << 2 << " " << n - x + 1 << "\n";
                cout << 1 << " " << 2 << "\n";
            }
            else
            {
                cout << 2 << "\n";
                cout << l + 1 << " " << r + 1 << "\n";
                cout << 1 << " " << n - r + l << "\n";
            }
        }
    }

    return 0;
}