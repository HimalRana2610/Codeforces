#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string str, ans = "";
        cin >> str;

        for(int i = 0; i < str.length(); i += 2)
        {
            ans += str[i];
        }

        ans += str[str.length() - 1];
        cout << ans << endl;
    }

    return 0;
}