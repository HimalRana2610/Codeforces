#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m, s;
    cin >> m >> s;

    if(s == 0)
    {
        if(m == 1)
        {
            cout << 0 << " " << 0;
        }
        else
        {
            cout << -1 << " " << -1;
        }
        return 0;
    }

    if(s > 9 * m)
    {
        cout << -1 << " " << -1;
        return 0;
    }

    string max_ans = "";
    for(int i = 0; i < m; i++)
    {
        int temp = min(9, s);
        max_ans.push_back('0' + temp);
        s -= temp;
    }

    string min_ans = max_ans;
    reverse(min_ans.begin(), min_ans.end());

    if(min_ans[0] == '0')
    {
        for(int i = 0; i < m; i++)
        {
            if(min_ans[i] != '0')
            {
                min_ans[i]--;
                min_ans[0]++;
                break;
            }
        }
    }

    cout << min_ans << " " << max_ans;
    return 0;
}