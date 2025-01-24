#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    vector<long long> prefix1(n + 1), prefix2(n + 1);
    prefix1[0] = prefix2[0] = 0;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        prefix1[i + 1] = prefix1[i] + arr[i];
    }

    sort(arr.begin(), arr.end());
    for(int i = 0; i < n; i++)
    {
        prefix2[i + 1] = prefix2[i] + arr[i];
    }

    int m;
    cin >> m;

    for(int i = 0; i < m; i++)
    {
        int t, l, r;
        cin >> t >> l >> r;

        if(t == 1)
        {
            cout << prefix1[r] - prefix1[l - 1] << endl;
        }
        else
        {
            cout << prefix2[r] - prefix2[l - 1] << endl;
        }
    }

    return 0;
}