#include<iostream>
using namespace std;

int main()
{
    int a, b, count = 0;
    cin >> a >> b;

    while(a > 0 && b > 0)
    {
        count++;
        a--;
        b--;
    }

    cout << count << ' ';
    count = 0;

    while(a > 1)
    {
        count++;
        a -= 2;
    }

    while(b > 1)
    {
        count++;
        b -= 2;
    }

    cout << count;
    return 0;
}