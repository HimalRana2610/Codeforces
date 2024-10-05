#include<iostream>
using namespace std;

int main()
{
    int n, ans = 0;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        string str;
        cin >> str;

        if(str == "Tetrahedron")
        {
            ans += 4;
        }
        else if(str == "Cube")
        {
            ans += 6;
        }
        else if(str == "Octahedron")
        {
            ans += 8;
        }
        else if(str == "Dodecahedron")
        {
            ans += 12;
        }
        else
        {
            ans += 20;
        }
    }

    cout << ans;
    return 0;
}