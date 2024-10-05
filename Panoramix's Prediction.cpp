#include<bits/stdc++.h>
using namespace std;

bool is_prime(int n);

int main()
{
    int n, m;
    cin >> n >> m;

    bool flag = true;
    for(int i = n + 1; i < m; i++)
    {
        if(is_prime(i))
        {
            flag = false;
            break;
        }
    }

    if(!is_prime(m) || !is_prime(n))
    {
        flag = false;
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

bool is_prime(int n)
{
    if(n <= 1)
    {
        return false;
    }
    if(n <= 3)
    {
        return true;
    }
    if(n % 2 == 0 || n % 3 == 0)
    {
        return false;
    }

    for(int i = 5; i * i <= n; i += 6)
    {
        if(n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}