#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long int r1, r2;
    int n, count, max;
    while (cin >> r1 >> r2)
    {
        max = 0;
        for (int i = std::min(r1, r2); i <= std::max(r1, r2); i++)
        {
            n = i;
            count = 1;
            while (n != 1)
            {
                if (n % 2 == 1)
                    n = (3 * n) + 1;
                else
                    n /= 2;
                count += 1;
            }
            if (max < count)
                max = count;
        }
        cout << r1 << " " << r2 << " " << max << endl;
    }
}
