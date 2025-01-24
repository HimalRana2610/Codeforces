#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    unordered_set<int> s;
    unordered_map<int, int> f1, f2, f3;

    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        s.insert(x);
        f1[x]++;
    }

    for(int i = 0; i < n - 1; i++)
    {
        int x;
        cin >> x;

        f2[x]++;
    }

    for(int x : s)
    {
        if(f1[x] > f2[x])
        {
            cout << x << endl;
            break;
        }
    }

    for(int i = 0; i < n - 2; i++)
    {
        int x;
        cin >> x;

        f3[x]++;
    }

    for(int x : s)
    {
        if(f2[x] > f3[x])
        {
            cout << x << endl;
            break;
        }
    }

    return 0;
}