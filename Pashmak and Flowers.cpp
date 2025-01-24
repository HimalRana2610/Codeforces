#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    vector<long long> arr(n);
    for(long long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    long long ans = arr[n - 1] - arr[0];

    long long count;
    if(ans == 0)
    {
        count = (n * (n - 1)) / 2;
    }
    else
    {
        long long l = 0, r = 0;
        for(long long i = 0; i < n && arr[i] == arr[0]; i++)
        {
            l++;
        }
        for(long long i = n - 1; i >= 0 && arr[i] == arr[n - 1]; i--)
        {
            r++;
        }
        count = l * r;
    }

    cout << ans << " " << count << endl;
    return 0;
}