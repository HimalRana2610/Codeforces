#include<iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int a[n], count = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++)
    {
        if(a[i] == 0 || a[i] < a[k - 1])
        {
            break;
        }

        count++;
    }

    cout << count;
    return 0;
}