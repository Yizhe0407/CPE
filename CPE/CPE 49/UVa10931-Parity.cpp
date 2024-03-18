#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, a, c;

    while (cin >> n && n != 0)
    {
        c = 0;
        string dict = "", b;
        a = n;
        while (a != 0)
        {
            if (a % 2 == 1)
                dict += '1';
            else
                dict += '0';
            a /= 2;
        }
        for (int i = dict.size() - 1; i >= 0; i--)
        {
            b += dict[i];
            if (dict[i] == '1')
                c++;
        }
        cout << "The parity of " << b << " is " << c << " (mod 2).\n";
    }
}