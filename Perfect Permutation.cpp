#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if(n % 2 != 0)
    {
        cout << -1;
    }
    else
    {
        for(int i = 2, j = 1; j < n; i += 2, j += 2)
        {
            cout << i << " " << j << " ";
        }
    }

    return 0;
}