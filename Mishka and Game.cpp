#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int cm = 0, cc = 0;
    while(n--)
    {
        int m, c;
        cin >> m >> c;

        if(m > c)
        {
            cm++;
        }
        else if(m < c)
        {
            cc++;
        }
    }

    if(cm > cc)
    {
        cout << "Mishka" << endl;
    }
    else if(cm < cc)
    {
        cout << "Chris" << endl;
    }
    else
    {
        cout << "Friendship is magic!^^" << endl;
    }

    return 0;
}