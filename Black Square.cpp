#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr(4);
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];

    string str;
    cin >> str;

    int ans = 0;
    for(int i = 0; i < str.length(); i++)
    {
        int x = str[i] - '0';
        ans += arr[x - 1];
    }

    cout << ans;
    return 0;
}