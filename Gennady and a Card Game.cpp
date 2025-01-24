#include<bits/stdc++.h>
using namespace std;

int main()
{
    string card;
    cin >> card;

    vector<string> cards(5);
    bool flag = false;

    for(int i = 0; i < 5; i++)
    {
        cin >> cards[i];
        if(cards[i][0] == card[0] || cards[i][1] == card[1])
        {
            flag = true;
        }
    }

    if(flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}