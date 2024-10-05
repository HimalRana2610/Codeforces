#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long n;
        cin >> n;

        int count = 0;
        bool flag = true;
        while(n > 0)
        {
            if(n & 1)
            {
                count++;
            }
            if(count > 1)
            {
                flag = false;
                break;
            }
            n >>= 1;
        }

        if(flag)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}