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

        vector<long long> prefix(n + 1, 0);
        for(int i = 0; i < n; i++)
        {
            prefix[i + 1] = prefix[i] + abs(arr[i]);
        }

        if(n == 1)
        {
            cout << abs(arr[0]) << endl;
            continue;
        }

        int left = 0, right = n - 1, lb = 0, rb = 0;
        long long ans = 0;

        while(left <= right)
        {
            int temp = left;
            while(arr[left] > 0)
            {
                ans += arr[left];
                left++;
            }
            if(left == right + 1)
            {
                break;
            }

            while(arr[right] < 0)
            {
                ans += abs(arr[right]);
                right--;
            }
            if(right == temp - 1)
            {
                break;
            }

            int l, r;
            for(int i = left; i <= right; i++)
            {
                if(arr[i] > 0)
                {
                    l = i;
                    break;
                }
            }
            for(int i = right; i >= left; i--)
            {
                if(arr[i] < 0)
                {
                    r = i;
                    break;
                }
            }

            if(prefix[l] - prefix[left] > prefix[right + 1] - prefix[r + 1])
            {
                right = r - 1;
                ans += abs(arr[r]);
            }
            else
            {
                left = l + 1;
                ans += abs(arr[l]);
            }
        }

        cout << ans << endl;
    }

    return 0;
}