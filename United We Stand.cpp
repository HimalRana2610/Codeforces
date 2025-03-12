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

        sort(arr.begin(), arr.end());

        vector<int> b, c;
        for(int i = 0; i < n; i++)
        {
            if(arr[i] == arr[0])
            {
                b.push_back(arr[i]);
            }
            else
            {
                c.push_back(arr[i]);
            }
        }

        if(c.size() == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << b.size() << " " << c.size() << endl;
            for(int i = 0; i < b.size(); i++)
            {
                cout << b[i] << " ";
            }
            cout << endl;

            for(int i = 0; i < c.size(); i++)
            {
                cout << c[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}