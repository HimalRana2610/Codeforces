#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string s1;
        string s2;

        cin >> s1 >> s2;

        int temp = 0;
        for(int i = 0; i < min(s1.length(), s2.length()); i++)
        {
            if(s1[i] == s2[i])
            {
                temp++;
            }
            else
            {
                break;
            }
        }
        int ans = temp + (s1.length() - temp) + (s2.length() - temp);

        if(temp != 0)
        {
            ans++;
        }
        cout << ans << endl;
    }

    return 0;
}