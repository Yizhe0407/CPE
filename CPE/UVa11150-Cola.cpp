#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a;
    while (cin >> n)
    {
        int b = n, c = n, d = n;
        while (n >= 3)
        {
            a = n / 3;
            n -= a * 3;
            n += a;
            b += a;
        }
        if (n >= 1)
        {
            c += n;
            while (c >= 3)
            {
                a = c / 3;
                c -= a * 3;
                c += a;
                d += a;
            }
            cout << d << endl;
        }
        else
            cout << b << endl;
    }
}