#include<iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    long long l;
    cin >> n >> l;

    long long arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    double max_gap = 0;
    for(int i = 0; i < n - 1; i++)
    {
        double gap = static_cast<double>(arr[i + 1] - arr[i]);
        if(gap > max_gap)
        {
            max_gap = gap;
        }
    }

    double ans = max_gap / 2.0;

    if(arr[0] > ans)
    {
        ans = arr[0];
    }

    if(l - arr[n - 1] > ans)
    {
        ans = l - arr[n - 1];
    }

    cout.precision(10);
    cout << fixed << ans << endl;

    return 0;
}