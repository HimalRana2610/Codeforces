#include<iostream>
using namespace std;

int main()
{
    int n, hire = 0, ans = 0;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if(x == -1)
        {
            if(hire == 0)
            {
                ans++;
            }
            else
            {
                hire--;
            }
        }
        else
        {
            hire += x;
        }
    }

    cout << ans;
    return 0;
}