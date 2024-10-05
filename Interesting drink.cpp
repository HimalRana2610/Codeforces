#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    int q;
    cin >> q;

    while(q--)
    {
        int m;
        cin >> m;

        auto ub = upper_bound(arr, arr + n, m);
        cout << ub - arr << endl;
    }

    return 0;
}