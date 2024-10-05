#include<iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int arr[m];
    for(int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }

    long long count = arr[0] - 1;
    for(int i = 1; i < m; i++)
    {
        if(arr[i] > arr[i - 1])
        {
            count += arr[i] - arr[i - 1];
        }
        else if(arr[i] < arr[i - 1])
        {
            count += n - arr[i - 1] + arr[i];
        }
    }

    cout << count;
    return 0;
}