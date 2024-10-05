#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int arr[] = {k * l / nl, c * d, p / np};

    cout << *min_element(arr, arr + 3) / n;
    return 0;
}