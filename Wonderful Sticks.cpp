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
        int n;
        cin >> n;

        string str;
        cin >> str;

        vector<int> temp;
        for(int i = 0; i < n; i++)
        {
            temp.push_back(i + 1);
        }

        vector<int> ans(n, 0);
        for(int i = n - 2; i >= 0; i--)
        {
            if(str[i] == '>')
            {
                ans[i + 1] = temp.back();
                temp.pop_back();
            }
            else
            {
                ans[i + 1] = temp[0];
                temp.erase(temp.begin());
            }
        }
        ans[0] = temp[0];

        for(int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}