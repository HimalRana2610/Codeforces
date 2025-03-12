#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        arr[i]--;
    }

    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        int current = 1, j = i;
        while(arr[j] != -2)
        {
            j = arr[j];
            current++;
        }
        ans = max(ans, current);
    }

    cout << ans << endl;
    return 0;
}