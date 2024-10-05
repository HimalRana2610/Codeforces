#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if(n >= 0)
    {
        cout << n;
    }
    else
    {
        int first = n / 10;
        int second = ((n / 100) * 10) + (n % 10);
        cout << max(first, second);
    }

    return 0;
}