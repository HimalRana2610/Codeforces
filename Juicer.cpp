#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, b, d;
    cin >> n >> b >> d;

    vector<int> arr(n);
    bool found = false;
    int sum = 0, ans = 0;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(arr[i] <= b)
        {
            found = true;
            sum += arr[i];
            if(sum > d)
            {
                ans++;
                sum = 0;
            }
        }
    }

    if(!found)
    {
        cout << 0 << "\n";
    }
    else
    {
        cout << ans << "\n";
    }

    return 0;
}