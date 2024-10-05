#include<iostream>
using namespace std;

int main()
{
    int y, w;
    cin >> y >> w;

    int d = 7 - max(y, w);
    if(d == 1 || d == 5)
    {
        cout << d << "/6";
    }
    else if(d == 2 || d == 4)
    {
        cout << d / 2 << "/3";
    }
    else if(d == 3)
    {
        cout << "1/2";
    }
    else
    {
        cout << "1/1";
    }

    return 0;
}