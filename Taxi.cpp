#include<iostream>
using namespace std;

int main()
{
    int n, ans = 0, three = 0, two = 0, one = 0;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int s;
        cin >> s;

        if(s == 4)
        {
            ans++;
        }
        else if(s == 3)
        {
            three++;
        }
        else if(s == 2)
        {
            two++;
        }
        else
        {
            one++;
        }
    }

    ans += three;
    one -= min(three, one);

    ans += two / 2;
    two %= 2;
    if(two == 1)
    {
        if(one >= 2)
        {
            ans += 1;
            one -= 2;
        }
        else
        {
            ans += 1;
            one = 0;
        }
    }

    ans = ans + (one / 4) + (one % 4 != 0);

    cout << ans;
    return 0;
}