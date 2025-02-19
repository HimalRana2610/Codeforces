#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> arr(n);
    int ma = 0, ans = n;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if((arr[i] + m - 1) / m >= ma)
        {
            ma = (arr[i] + m - 1) / m;
            ans = i + 1;
        }
    }

    cout << ans << endl;
    return 0;
}