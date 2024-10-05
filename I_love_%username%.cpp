#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    cin >> arr[0];

    int max = arr[0], min = arr[0], count = 0;
    for(int i = 1; i < n; i++)
    {
        cin >> arr[i];

        if(arr[i] > max)
        {
            max = arr[i];
            count++;
        }
        else if(arr[i] < min)
        {
            min = arr[i];
            count++;
        }
    }

    cout << count;
    return 0;
}