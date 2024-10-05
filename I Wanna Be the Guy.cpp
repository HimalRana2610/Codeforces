#include<iostream>
#include<set>
using namespace std;

int main()
{
    int n, p;
    cin >> n >> p;

    set<int> s;
    for(int i = 0; i < p; i++)
    {
        int t;
        cin >> t;

        s.insert(t);
    }

    int q;
    cin >> q;

    for(int i = 0; i < q; i++)
    {
        int t;
        cin >> t;

        s.insert(t);
    }

    if(n == s.size())
    {
        cout << "I become the guy.";
    }
    else
    {
        cout << "Oh, my keyboard!";
    }
}