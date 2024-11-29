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

        int m = 0, p = 1;
        for(int i = 1; i < n; i++)
        {
            if(arr[i] != arr[i - 1])
            {
                m = max(m, p);
                p = 1;
            }
            else
            {
                p++;
            }
        }
        m = max(m, p);

        cout << n - m << endl;
    }

    return 0;
}