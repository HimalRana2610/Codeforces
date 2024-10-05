#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char str[101];
    bool swapped;
    cin >> str;

    int n = strlen(str);
    for(int i = 0; i < n - 1; i += 2)
    {
        swapped = false;
        for(int j = 0; j < n - i - 1; j += 2)
        {
            if(str[j] > str[j + 2])
            {
                int temp = str[j];
                str[j] = str[j + 2];
                str[j + 2] = temp;
                swapped = true;
            }
        }
        if(!swapped)
        {
            break;
        }
    }

    cout << str;
    return 0;
}