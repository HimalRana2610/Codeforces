#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, a, b;
        cin >> n >> a >> b;

        string ans;
        for(int i = 0; i < n; i++)
        {
            if(i % a < b)
            {
                ans.push_back('a' + (i % a));
            }
            else
            {
                ans.push_back(ans[i - 1]);
            }
        }

        cout << ans << endl;
    }

    return 0;
}