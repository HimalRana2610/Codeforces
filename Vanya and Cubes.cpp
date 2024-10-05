#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum = 0, i = 1;
    while(n > 0)
    {
        sum += i;
        n -= sum;
        i++;
    }

    if(n != 0)
    {
        i--;
    }

    cout << --i;
    return 0;
}