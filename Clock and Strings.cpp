#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        string str;
        for(int i = 1; i <= 12; i++)
        {
            if(i == a || i == b)
            {
                str.push_back('a');
            }
            else if(i == c || i == d)
            {
                str.push_back('b');
            }
        }

        if(str == "abab" || str == "baba")
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}