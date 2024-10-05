#include<iostream>
using namespace std;

bool isComposite(int x);

int main()
{
    int n;
    cin >> n;

    int arr[] = {4, 6, 8, 9, 10};
    for(int i = 0; i < 5; i++)
    {
        int x = arr[i];
        int y = n - x;

        if(y > 1 && isComposite(y))
        {
            cout << x << ' ' << y;
            break;
        }
    }

    return 0;
}

bool isComposite(int x)
{
    if(x <= 1)
    {
        return false;
    }
    if(x <= 3)
    {
        return false;
    }
    if(x % 2 == 0 || x % 3 == 0)
    {
        return true;
    }
    for(int i = 5; i * i <= x; i += 6)
    {
        if (x % i == 0 || x % (i + 2) == 0)
        {
            return true;
        }
    }
    return false;
}