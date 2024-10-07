#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, two = 0;
        cin >> n;

        vector<int> arr(n);
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i] == 2)
            {
                two++;
            }
        }

        if(two == 0)
        {
            cout << 1 << endl;
        }
        else if(two % 2 != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            int count = 0;
            for(int i = 0; i < n; i++)
            {
                if(arr[i] == 2)
                {
                    count++;
                }
                if(count == two / 2)
                {
                    cout << i + 1 << endl;
                    break;
                }
            }
        }
    }

    return 0;
}