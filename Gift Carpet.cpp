#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<string> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int index = 0;
        bool foundv = false, foundi = false, foundk = false, founda = false;
        for (int j = 0; j < m && !foundv; j++)
        {
            for (int i = 0; i < n; i++)
            {
                if (arr[i][j] == 'v')
                {
                    foundv = true;
                    index = j + 1;
                    break;
                }
            }
        }

        if (!foundv)
        {
            cout << "NO\n";
            continue;
        }

        for (int j = index; j < m && !foundi; j++)
        {
            for (int i = 0; i < n; i++)
            {
                if (arr[i][j] == 'i')
                {
                    foundi = true;
                    index = j + 1;
                    break;
                }
            }
        }

        if (!foundi)
        {
            cout << "NO\n";
            continue;
        }

        for (int j = index; j < m && !foundk; j++)
        {
            for (int i = 0; i < n; i++)
            {
                if (arr[i][j] == 'k')
                {
                    foundk = true;
                    index = j + 1;
                    break;
                }
            }
        }

        if (!foundk)
        {
            cout << "NO\n";
            continue;
        }

        for (int j = index; j < m && !founda; j++)
        {
            for (int i = 0; i < n; i++)
            {
                if (arr[i][j] == 'a')
                {
                    founda = true;
                    index = j + 1;
                    break;
                }
            }
        }

        if (founda)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}