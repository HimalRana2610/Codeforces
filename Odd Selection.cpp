#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, x;
        cin >> n >> x;

        vector<int> arr(n);
        int odd = 0, even = 0;

        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }

        if(odd == 0)
        {
            cout << "No" << endl;
        }
        else
        {
            x--;
            odd--;

            if(x % 2 == 0)
            {
                x -= odd % 2 == 0 ? odd : odd - 1;
                if(x <= even)
                {
                    cout << "Yes" << endl;
                }
                else
                {
                    cout << "No" << endl;
                }
            }
            else
            {
                if(even == 0)
                {
                    cout << "No" << endl;
                }
                else
                {
                    x--;
                    even--;
                    x -= odd % 2 == 0 ? odd : odd - 1;

                    if(x <= even)
                    {
                        cout << "Yes" << endl;
                    }
                    else
                    {
                        cout << "No" << endl;
                    }
                }
            }
        }
    }

    return 0;
}