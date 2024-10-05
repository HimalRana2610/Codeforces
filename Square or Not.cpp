#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        string str;
        cin >> str;

        float root = sqrt(n);
        int sqr = root * root;
        if(sqr == n)
        {
            bool flag = true;
            for(int i = 0; i < root; i++)
            {
                for(int j = 0; j < root; j++)
                {
                    int index = i * root + j;
                    if((i == 0 || i == root - 1 || j == 0 || j == root - 1) && str[index] == '0')
                    {
                        flag = false;
                        break;
                    }
                    else if((i != 0 && i != root - 1) && (j != 0 && j != root - 1) && (str[index] == '1'))
                    {
                        flag = false;
                        break;
                    }
                }
            }
            if(flag)
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
            cout << "No" << endl;
        }
    }

    return 0;
}