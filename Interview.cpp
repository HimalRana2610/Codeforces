#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    // cin.tie(nullptr);

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

        vector<int> prefix(n + 1, 0);
        for(int i = 0; i < n; i++)
        {
            prefix[i + 1] = prefix[i] + arr[i];
        }

        int left = 0, right = n - 1;
        while(left < right)
        {
            int mid = left + (right - left) / 2;
            cout << "? " << mid - left + 1 << " ";

            for(int i = left; i < mid; i++)
            {
                cout << i + 1 << " ";
            }
            cout << mid + 1 << "\n";
            fflush(stdout);

            int x;
            cin >> x;

            if(x > prefix[mid + 1] - prefix[left])
            {
                right = mid;
            }
            else
            {
                left = mid + 1;
            }
        }

        cout << "! " << right + 1 << "\n";
        fflush(stdout);
    }

    return 0;
}