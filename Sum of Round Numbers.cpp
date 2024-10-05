#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for(int i = 0; i < t; i++)
    {
        int n, k = 0;
        cin >> n;

        int num = n;
        while(num > 0)
        {
            if(num % 10 != 0)
            {
                k++;
            }
            num /= 10;
        }

        cout << k << endl;

        int j = 0;
        while(n > 0)
        {
            if(n % 10 != 0)
            {
                cout << (n % 10) * pow(10, j) << ' ';
            }
            n /= 10;
            j++;
        }
        cout << endl;
    }

    return 0;
}