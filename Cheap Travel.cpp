#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    if(m * a < b)
    {
        cout << n * a;
    }
    else
    {
        cout << min(((n / m) * b + (n % m) * a), ((n / m) * b + b));
    }

    return 0;
}