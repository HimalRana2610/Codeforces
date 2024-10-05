#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string str, ans = "codeforces";
        cin >> str;

        int count = 0;
        for(int i = 0; i < 10; i++)
        {
            if(str[i] != ans[i])
            {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}