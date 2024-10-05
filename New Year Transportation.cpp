#include<bits/stdc++.h>
using  namespace std;

int main()
{
    int n, t;
    cin >> n >> t;

    vector<int> cells(n);
    for (int i = 1; i < n; i++)
    {
        cin >> cells[i];
    }

    bool flag = false;
    for(int i = 1; i < n; i += cells[i])
    {
        if(t == i || t == i + cells[i])
        {
            flag = true;
            break;
        }
    }

    if(flag)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}