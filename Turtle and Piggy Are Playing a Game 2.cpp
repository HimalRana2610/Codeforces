#include<iostream>
#include<algorithm>
using namespace std;

int main()
{

    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);
        cout << arr[n / 2] << endl;
    }

    return 0;
}