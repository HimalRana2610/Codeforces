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

        string str;
        cin >> str;

        int f = 0, l = n - 1;
        while(true)
        {
            if(str[f]!= str[l])
            {
                f++;
                l--;
            }
            else
            {
                cout << l - f + 1 << endl;
                break;
            }
            if(f == l)
            {
                cout << 1 << endl;
                break;
            }
            if(f > l)
            {
                cout << 0 << endl;
                break;
            }
        }
    }

    return 0;
}