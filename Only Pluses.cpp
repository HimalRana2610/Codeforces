#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        vector<int> arr(3);
        cin >> arr[0] >> arr[1] >> arr[2];

        int n = 5;
        while(n--)
        {
            sort(arr.begin(), arr.end());
            arr[0]++;
        }

        cout << arr[0] * arr[1] * arr[2] << endl;
    }

    return 0;
}