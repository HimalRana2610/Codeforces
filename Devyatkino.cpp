#include<bits/stdc++.h>
using namespace std;

bool has_7(int n);
bool is_possible(int n, int i);

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        if(has_7(n))
        {
            cout << 0 << endl;
            continue;
        }

        int ans = 1;
        for(int i = 1; i <= 30; i++)
        {
            if(is_possible(n, i))
            {
                ans = i;
                break;
            }
        }

        cout << ans << endl;
    }

    return 0;
}

bool has_7(int n)
{
    while(n > 0)
    {
        if(n % 10 == 7)
        {
            return true;
        }
        n /= 10;
    }

    return false;
}

bool is_possible(int n, int r)
{
    int temp = n - r, l = 0;
    vector<int> digits(20, 0);

    if(temp == 0)
    {
        digits[l++] = 0;
    }
    else
    {
        while(temp > 0)
        {
            digits[l++] = temp % 10;
            temp /= 10;
        }
    }

    int new_l = max(l, 12);
    vector<vector<int>> dp(32, vector<int>(42, 0)), next(32, vector<int>(42, 0));
    dp[r][0] = 1;

    for(int i = 0; i < new_l; i++)
    {
        for(int j = 0; j <= r; j++)
        {
            for(int k = 0; k < 40; k++)
            {
                next[j][k] = 0;
            }
        }

        int d = (i < l ? digits[i] : 0);
        for(int j = 0; j <= r; j++)
        {
            for(int k = 0; k < 40; k++)
            {
                int m = dp[j][k];
                if(m == 0)
                {
                    continue;
                }

                for(int x = 0; x <= j; x++)
                {
                    int total = d + k + x;
                    int digit = total % 10, carry = total / 10;

                    if(carry >= 40)
                    {
                        continue;
                    }

                    int rem = j - x, mask = m;
                    if(digit == 7)
                    {
                        mask |= 2;
                    }
                    next[rem][carry] |= mask;
                }
            }
        }

        for(int j = 0; j <= r; j++)
        {
            for(int k = 0; k < 40; k++)
            {
                dp[j][k] = next[j][k];
            }
        }
    }

    return (dp[0][0] & 2) != 0;
}