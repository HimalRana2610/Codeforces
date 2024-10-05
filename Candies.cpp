#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        for(int i = 2; i < INT16_MAX; i++)
        {
            if(n % ((int)pow(2, i) - 1) == 0)
            {
                cout << n / ((int)pow(2, i) - 1) << endl;
                break;
            }
        }
    }

    return 0;
}