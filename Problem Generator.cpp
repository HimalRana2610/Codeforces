#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, m;
        cin >> n >> m;

        string str;
        cin >> str;

        map<char, int> freq;
        for(int i = 0; i < n; i++)
        {
            freq[str[i]]++;
        }

        int ans = 0;
        for(char ch = 'A'; ch <= 'G'; ch++)
        {
            if(freq[ch] < m)
            {
                ans += m - freq[ch];
            }
        }
        cout << ans << endl;
    }

    return 0;
}