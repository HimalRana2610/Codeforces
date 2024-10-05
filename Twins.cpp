#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n, total = 0, remain = 0;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        remain += a[i];
    }

    sort(a, a + n, [](int a, int b){return a > b;});

    for(int i = 0; i < n; i++)
    {
        total += a[i];
        remain -= a[i];
        if(total > remain)
        {
            cout << i + 1;
            break;
        }
    }

    return 0;
}