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

        string str;
        cin >> str;

        vector<int> prefix(n, INT_MAX), suffix(n, INT_MAX);
        for(int i = 0; i < n; i++)
        {
            if(str[i] == 'p')
            {
                prefix[i] = i + 1;
            }
            if(str[i] == 's')
            {
                suffix[i] = n - i;
            }
        }

        for(int i = 1; i < n; i++)
        {
            suffix[i] = min(suffix[i], suffix[i - 1]);
        }
        for(int i = n - 2; i >= 0; i--)
        {
            prefix[i] = min(prefix[i], prefix[i + 1]);
        }

        vector<int> temp(n);
        for(int i = 0; i < n; i++)
        {
            temp[i] = min(prefix[i], suffix[i]);
        }

        sort(temp.begin(), temp.end());

        bool flag = true;
        for(int i = 0; i < n; i++)
        {
            if(temp[i] < i + 1)
            {
                flag = false;
                break;
            }
        }

        if(flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}