#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        char word[101];
        cin >> word;

        int len = strlen(word);

        if(len > 10)
        {
            cout << word[0] << len - 2 << word[len - 1] << endl;
        }

        else
        {
            cout << word << endl;
        }
    }

    return 0;
}