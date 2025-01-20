#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, d;
        cin >> n >> d;

        vector<int> ans;
        ans.push_back(1);

        if(n >= 3 || d % 3 == 0)
        {
            ans.push_back(3);
        }
        if(d == 5)
        {
            ans.push_back(5);
        }
        if(n >= 3 || (n == 2 && d == 7))
        {
            ans.push_back(7);
        }
        if(n >= 6 || d % 9 == 0)
        {
            ans.push_back(9);
        }
        else
        {
            long long f = 1;
            for(int i = 2; i <= n; i++)
            {
                f *= i;
            }
            if((f * d) % 9 == 0)
            {
                ans.push_back(9);
            }
        }

        for(int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}