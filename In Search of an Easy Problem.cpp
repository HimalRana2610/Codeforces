#include<iostream>
using namespace std;

int main()
{
    int n, flag = 1;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(arr[i] == 1)
        {
            flag = 0;
        }
    }

    if(flag == 0)
    {
        cout << "HARD";
    }
    else
    {
        cout << "EASY";
    }

    return 0;
}