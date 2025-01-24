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

        string ans = "aaa";
        for(int i = 2; i >= 0; i--)
        {
            if(n >= 26 + i)
            {
                ans[i] = 'z';
                n -= 26;
            }
            else
            {
                ans[i] = 'a' + (n - i - 1);
                n -= n - i;
            }
        }

        cout << ans << endl;
    }

    return 0;
}