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

        int first = 1, last = 0;
        for(int i = 0; i < n; i++)
        {
            if(str[i] == 'B')
            {
                first = i;
                break;
            }
        }
        for(int i = n - 1; i >= 0; i--)
        {
            if(str[i] == 'B')
            {
                last = i;
                break;
            }
        }

        cout << last - first + 1 << endl;
    }

    return 0;
}