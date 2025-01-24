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

        vector<int> l(n);
        for(int i = 0; i < n; i++)
        {
            string str;
            cin >> str;

            l[i] = str.length();
        }

        int sum = 0;
        for(int i = 0; i < n; i++)
        {
            sum += l[i];
            if(sum > m)
            {
                cout << i << endl;
                break;
            }
        }
        if(sum <= m)
        {
            cout << n << endl;
        }
    }

    return 0;
}