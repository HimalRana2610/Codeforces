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

        string s, r;
        cin >> s >> r;

        int zero = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '0')
            {
                zero++;
            }
        }

        int one = n - zero;
        bool flag = true;

        for(int i = 0; i < n - 1; i++)
        {
            if(zero == 0 || one == 0)
            {
                flag = false;
                break;
            }

            if(r[i] == '1')
            {
                zero--;
            }
            else
            {
                one--;
            }
        }

        if(flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}