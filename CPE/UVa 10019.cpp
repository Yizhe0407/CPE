#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int num, bin = 0, hex = 0, a, b, c, d;
    cin >> d;
    for (int i = 0; i < d; i++)
    {
        cin >> num;
        bin = 0, hex = 0;
        a = b = num;
        while (a != 0)
        {
            if (a % 2 == 1)
                bin += 1;
            a /= 2;
        }
        while (b != 0)
        {
            c = b % 10;
            while (c != 0)
            {
                if (c % 2 == 1)
                    hex++;
                c /= 2;
            }
            b /= 10;
        }
        cout << bin << " " << hex << endl;
    }
}