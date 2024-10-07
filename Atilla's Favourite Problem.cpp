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

        char m = 'a';
        for(int i = 0; i < n; i++)
        {
            m = max(m, str[i]);
        }

        cout << m - '0' - 48 << endl;
    }

    return 0;
}