#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        vector<int> s(4);
        cin >> s[0] >> s[1] >> s[2] >> s[3];

        int sum = max(s[0], s[1]) + max(s[2], s[3]);
        sort(s.begin(), s.end());

        if(s[2] + s[3] == sum)
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