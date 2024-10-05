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

        int o = 0, c = 0, ans = 0;
        for(int i = 0; i < n; i++)
        {
            if(str[i] == '(')
            {
                o++;
            }
            else
            {
                c++;
            }
            if(c > 0)
            {
                if(o == c)
                {
                    o = 0;
                    c = 0;
                }
                else if(o < c)
                {
                    char ch = str[i];
                    str.erase(i, 1);
                    str += ch;
                    c--;
                    i--;
                    ans++;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}