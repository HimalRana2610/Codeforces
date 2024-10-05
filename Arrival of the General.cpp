#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n, ans = 0;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int max = *max_element(a, a + n);
    int min = *min_element(a, a + n);

    for(int i = 0; i < n; i++)
    {
        if(a[i] == max)
        {
            ans += i;
            max = i;
            break;
        }
    }

    for(int i = n - 1; i >= 0; i--)
    {
        if(a[i] == min)
        {
            ans += n - i - 1;
            min = i;
            break;
        }
    }

    if(min < max)
    {
        ans--;
    }
    
    cout << ans;
    return 0;
}