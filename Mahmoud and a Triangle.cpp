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
    }

    sort(arr.begin(), arr.end());

    bool flag = false;
    for(int i = 1; i < n - 1; i++)
    {
        if(arr[i - 1] + arr[i] > arr[i + 1] && arr[i] + arr[i + 1] > arr[i - 1] && arr[i - 1] + arr[i + 1] > arr[i])
        {
            flag = true;
            break;
        }
    }

    if(flag)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}