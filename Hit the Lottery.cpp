#include<iostream>
using namespace std;

int main()
{
    int n, ans = 0;
    cin >> n;

    while(n > 0)
    {
        if(n >= 100)
        {
            ans += n / 100;
            n %= 100;
        }
        else if(n >= 20)
        {
            ans += n / 20;
            n %= 20;
        }
        else if(n >= 10)
        {
            ans += n / 10;
            n %= 10;
        }
        else if(n >= 5)
        {
            ans += n / 5;
            n %= 5;
        }
        else if(n >= 1)
        {
            ans += n / 1;
            n %= 1;
        }
    }

    cout << ans;
    return 0;
}