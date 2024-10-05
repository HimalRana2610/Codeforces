#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char str1[101], str2[101];
    cin >> str1 >> str2;

    for(int i = 0; i < strlen(str1); i++)
    {
        if(str1[i] >= 'A' && str1[i] <= 'Z')
        {
            str1[i] += 32;
        }
        if(str2[i] >= 'A' && str2[i] <= 'Z')
        {
            str2[i] += 32;
        }
    }

    cout << strcmp(str1, str2);
    return 0;
}