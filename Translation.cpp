#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char str1[101], str2[101];
    cin >> str1 >> str2;

    if(strlen(str1) != strlen(str2))
    {
        cout << "NO";
    }
    else
    {
        int n = strlen(str1), flag = 1;
        for(int i = 0; i < n; i++)
        {
            if(str1[i] != str2[n - i - 1])
            {
                flag = 0;
                break;
            }
        }

        if(flag == 0)
        {
            cout << "NO";
        }
        else
        {
            cout << "YES";
        }
    }

    return 0;
}