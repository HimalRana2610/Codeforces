#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int s, n, flag = 1;
    cin >> s >> n;

    int x[n], y[n];
    for(int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }

    pair<int, int> paired[n];
    for(int i = 0; i < n; i++)
    {
        paired[i] = make_pair(x[i], y[i]);
    }

    sort(paired, paired + n, [](const pair<int, int> &a, const pair<int, int> &b){return a.first < b.first;});

    for(int i = 0; i < n; i++)
    {
        if(s > paired[i].first)
        {
            s += paired[i].second;
        }
        else
        {
            flag = 0;
            break;
        }
    }

    if(flag == 0)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }

    return 0;
}