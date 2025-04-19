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

        int ans = 0;
        for(int i = 2; i < n - 2; i++)
        {
            if(str[i] == 'p' && str[i - 1] == 'a' && str[i - 2] == 'm' && str[i + 1] == 'i' && str[i + 2] == 'e')
            {
                str[i] = 'x';
                ans++;
            }
        }

        for(int i = 1; i < n - 1; i++)
        {
            if((str[i] == 'a' && str[i - 1] == 'm' && str[i + 1] == 'p') || (str[i] == 'i' && str[i - 1] == 'p' && str[i + 1] == 'e'))
            {
                ans++;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}