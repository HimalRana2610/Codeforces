#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string str1, str2;
        cin >> str1 >> str2;

        set<char> s(str2.begin(), str2.end());
        map<char, int> index;
        for(char ch : s)
        {
            index[ch] = str1.find(ch);
        }

        int ans = 0;
        for(int i = 1; i < str2.length(); i++)
        {
            ans += abs(index[str2[i - 1]] - index[str2[i]]);
        }
        cout << ans << endl;
    }

    return 0;
}