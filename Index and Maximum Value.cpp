#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int  arr[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);
        int current_max = arr[n - 1];

        while(m--)
        {
            char c;
            int l, r;
            cin >> c >> l >> r;

            if(current_max >= l && current_max <= r)
            {
                if(c == '+')
                {
                    current_max++;
                }
                else
                {
                    current_max--;
                }
            }
            cout << current_max << " ";
        }
        cout << endl;
    }

    return 0;
}