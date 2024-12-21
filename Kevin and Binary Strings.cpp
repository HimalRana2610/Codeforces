#include<bits/stdc++.h>
using namespace std;

int convert(const string &str);

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string str;
        cin >> str;

        int l1 = 0, r1 = str.length() - 1, l2 = 0, r2 = 0;
        string temp = str.substr(0);

        int l = 0, st = 0;
        for(int i = 0; i < temp.length(); i++)
        {
            if(temp[i] == '0')
            {
                st = i;
                l = temp.length() - i;
                break;
            }
        }

        if(l != 0)
        {
            l2 = r2 = 0;
            string ans = temp;

            for(int i = 0; i + l <= str.length(); i++)
            {
                string current = temp;
                for(int j = i; j < i + l; j++)
                {
                    current[j - i + st] = ((current[j - i + st] - '0') ^ (str[j] - '0')) + '0';
                }

                if(current > ans)
                {
                    ans = current;
                    l2 = i;
                    r2 = i + l - 1;
                }
            }
        }

        cout << l1 + 1 << " " << r1 + 1 << " " << l2 + 1 << " " << r2 + 1 << endl;
    }

    return 0;
}

int convert(const string &str)
{
    int ans = 0;
    for(int i = 0; i < str.length(); i++)
    {
        ans = (ans << 1) | (str[i] - '0');
    }

    return ans;
}