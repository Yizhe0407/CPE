//一元二次方程式
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, x, x1, x2, an;
    cin >> a >> b >> c;
    if (pow(b, 2) - 4 * a * c > 0)
    {
        x1 = ((-b) + sqrt((pow(b, 2)) - (4 * a * c))) / (2 * a);
        x2 = ((-b) - sqrt((pow(b, 2)) - (4 * a * c))) / (2 * a);
        cout << "Two different roots x1=" << x1 << " , x2=" << x2;
    }
    else if (pow(b, 2) - 4 * a * c == 0)
    {
        x = ((-b) + sqrt((pow(b, 2)) - (4 * a * c))) / (2 * a);
        cout << "Two same roots x=" << x;
    }
    else if (pow(b, 2) - 4 * a * c < 0)
    {
        cout << "No real root";
    }
    return 0;
}
