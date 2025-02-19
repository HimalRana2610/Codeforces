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

        int last = str[n - 1] - '0', one = (str[0] == '1') ? 1 : 0;
        for(int i = 1; i < n; i++)
        {
            if(str[i] == '1' && str[i - 1] == '0')
            {
                one++;
            }
        }

        if(one == 0)
        {
            cout << 0 << endl;
        }
        else if(last == 1)
        {
            cout << (one - 1) * 2 + 1 << endl;
        }
        else
        {
            cout << one * 2 << endl;
        }
    }

    return 0;
}