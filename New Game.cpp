#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        map<int, int> freq;

        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            freq[arr[i]]++;
        }

        sort(arr.begin(), arr.end());

        int ct = 1, ans = 1;
        int i = 1, j = 0;
        while(i < n)
        {
            ans = max(ans, i - j);
            if(arr[i] == arr[i - 1] + 1)
            {
                ct++;
            }
            if(ct > k)
            {
                while(arr[j] == arr[j + 1])
                {
                    j++;
                }
                j++, ct--;
            }
            if(arr[i] > arr[i - 1] + 1)
            {
                ct = 1;
                while(j != i)
                {
                    j++;
                }
            }
            i++;
        }
        ans = max(ans, i - j);
        cout << ans << endl;
    }

    return 0;
}