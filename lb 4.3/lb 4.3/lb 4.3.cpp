#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double a, b, c, xp, xk, dx, x, F;

    cout << "a = ";  cin >> a;
    cout << "b = ";  cin >> b;
    cout << "c = ";  cin >> c;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;

    x = xp;
    while (x <= xk)
    {
        // вибір формули залежно від умов
        if (x - 1 < 0 && b - x != 0)
            F = a * x * x + b;
        else if (x - 1 > 0 && b + x == 0)
            F = (x - a) / x;
        else
            F = x / c;

        cout << "|" << setw(7) << setprecision(2) << x << " |"
            << setw(10) << setprecision(3) << F << " |" << endl;

        x += dx;
    }
    cout << "---------------------------" << endl;

    return 0;
}