#include <bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;
//#define pi 3.14159265358
int main()
{
    double s, a;
    string c;
    while (cin >> s >> a >> c)
    {
        if (c == "min") a /= 60;
        if (a > 360) a -= 360;

        double angle = (a * M_PI) / 180.0;

        double arc = angle * (s + 6440.0);

        double chord = 2.0 * (s + 6440.0) * sin(angle / 2.0);

        printf("%.6f %.6f\n", arc, chord);
    }
}