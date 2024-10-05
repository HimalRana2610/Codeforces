#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char str1[101], str2[101], ans[101];
    cin >> str1 >> str2;

    int i = 0;
    while(str1[i] != '\0')
    {
        if(str1[i] != str2[i])
        {
            ans[i++] = '1';
        }
        else
        {
            ans[i++] = '0';
        }
    }
    ans[i] = '\0';

    cout << ans;
    return 0;
}