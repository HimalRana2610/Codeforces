#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            vector<int> temp = arr;
            for(int k = i; k <= j; k++)
            {
                temp[k] = 1 - temp[k];
            }

            int one = count(temp.begin(), temp.end(), 1);
            ans = max(ans, one);
        }
    }

    cout << ans;
    return 0;
}