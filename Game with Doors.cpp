#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for(int i = 0; i < t; i++)
    {
        int l, r, L, R;
        cin >> l >> r >> L >> R;

        if((l > L))
        {
            swap(l, L);
            swap(r, R);
        }
        else if((l == L) && (r > R))
        {
            swap(l, L);
            swap(r, R);
        }

        if(l == L)
        {
            if(r == R)
            {
                cout << r - l << endl;
            }
            else
            {
                cout << r - l + 1 << endl;
            }
        }
        else
        {
            if(r == R)
            {
                cout << R - L + 1 << endl;
            }
            else if(r < R)
            {
                if(r < L)
                {
                    cout << 1 << endl;
                }
                else if(r == L)
                {
                    cout << 2 << endl;
                }
                else
                {
                    cout << r - L + 2 << endl;
                }
            }
            else
            {
                cout << R - L + 2 << endl;
            }
        }
    }

    return 0;
}