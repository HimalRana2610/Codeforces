#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int min_index = 0;
    int min_sum = accumulate(arr.begin(), arr.begin() + k, 0);

    int current_sum = min_sum;
    for(int i = 1; i <= n - k; i++)
    {
        current_sum = current_sum - arr[i - 1] + arr[i + k - 1];
        if(current_sum < min_sum)
        {
            min_sum = current_sum;
            min_index = i;
        }
    }

    cout << min_index + 1;
    return 0;
}
