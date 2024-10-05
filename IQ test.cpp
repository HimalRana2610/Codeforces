#include<iostream>
using namespace std;

int main()
{
    int n, even = 0, odd = 0;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    for(int i = 0; i < n; i++)
    {
        if(odd == 1)
        {
            if(arr[i] % 2 != 0)
            {
                cout << i + 1;
            }
        }
        else
        {
            if(arr[i] % 2 == 0)
            {
                cout << i + 1;
            }
        }
    }

    return 0;
}