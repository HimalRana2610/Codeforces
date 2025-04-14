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
        int n, q;
        cin >> n >> q;

        vector<int> arr(n);
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int prev = 31;
        for(int i = 0; i < q; i++)
        {
            int x;
            cin >> x;

            if(x < prev)
            {
                prev = x;
                for(int j = 0; j < n; j++)
                {
                    if(arr[j] % (1 << x) == 0)
                    {
                        arr[j] += (1 << (x - 1));
                    }
                }
            }
        }

        for(int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}