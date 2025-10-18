#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, R, y;
    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;

    if (x <= -6 - R)
        y = 0;
    else if (x > -6 - R && x <= -6)
        y = -sqrt(R * R - (x + 6 + R) * (x + 6 + R));
    else if (x > -6 && x <= -R)
        y = (R / (6 - R)) * (x + 6);
    else if (x > -R && x <= 0)
        y = sqrt(R * R - (x + R) * (x + R));
    else if (x > 0 && x <= 3)
        y = -R / 3 * x + R;
    else if (x > 3 && x <= 9)
        y = R / 6 * (x - 3);
    else
        y = R;

    cout << "y = " << y << endl;

    return 0;
}
