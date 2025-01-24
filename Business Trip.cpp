#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin >> k;

    vector<int> arr(12);
    for(int i = 0; i < 12; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    int ans = 0, sum = 0;
    for(int i = 11; i >= 0; i--)
    {
        if(sum >= k)
        {
            break;
        }
        ans++;
        sum += arr[i];
    }

    if(sum < k)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << ans << endl;
    }

    return 0;
}