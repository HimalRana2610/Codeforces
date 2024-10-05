#include<iostream>
using namespace std;

int main()
{
    int n, a, b, c, ans = 0;
    cin >> n >> a >> b >> c;

    for(int i = 0; i <= 4000; i++)
    {
        for(int j = 0; j <= 4000; j++)
        {
            int kc = n - ((i * a) + (j * b));
            if(kc < 0)
            {
                break;
            }

            float k = kc / (float)c;
            if(k == (int)k)
            {
                ans = max(ans, i + j + (int)k);
            }
        }
    }

    cout << ans;
    return 0;
}