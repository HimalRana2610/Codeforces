#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        string str, vowels = "aeiou";

        for(int i = 0; i < n; i++)
        {
            str += vowels[i % 5];
        }

        cout << str << endl;
    }

    return 0;
}