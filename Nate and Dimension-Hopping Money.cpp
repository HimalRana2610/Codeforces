#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    long long n;
    int x, y;
    cin >> n >> x >> y;

    double mon = n;
    double fact1 = (1.0 - x / 100.0) * (y / 100.0);
    double fact2 = 1.0 - fact1;
    double T = mon * fact1 / fact2;

    double tue = mon + T;
    double wed = tue;
    double spend = wed * (1.0 - x / 100.0);
    double travel = spend;
    double travel2 = travel * (1.0 - y / 100.0);
    double fri = travel2;

    cout << fixed << setprecision(4) << mon << " "
         << tue << " " << spend << " "
         << travel2 << " " << fri << endl;

    return 0;
}