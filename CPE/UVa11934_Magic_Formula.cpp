#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
using namespace std;
int main()
{
    int a, b, c, d, x, funtion;
    while (cin >> a >> b >> c >> d >> x)
    {
        int values = 0;
        if (a == 0 && b == 0 && c == 0 && d == 0 && x == 0)
        {
            break;
        }
        for (int i = 0; i <= x; i++)
        {
            funtion = a * pow(i, 2) + b * i + c;
            if (funtion % d == 0)
            {
                values++;
            }
        }
        cout << values << endl;
    }
}