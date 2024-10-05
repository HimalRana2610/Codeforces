#include<iostream>
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

    int left = 0, right = n - 1, score = 0, sereja = 0, dima = 0;
    for(int i = 0; left <= right; i++)
    {
        if(arr[left] > arr[right])
        {
            score = arr[left++];
        }
        else
        {
            score = arr[right--];
        }

        if(i % 2 == 0)
        {
            sereja += score;
        }
        else
        {
            dima += score;
        }
    }

    cout << sereja << ' ' << dima;
    return 0;
}