#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int n, x = 0;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        char str[4];
        cin >> str;

        if(strcmp(str, "X++") == 0 || strcmp(str, "++X") == 0)
        {
            x++;
        }
        else
        {
            x--;
        }
    }

    cout << x;
    return 0;
}