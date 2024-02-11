#include <iostream>
using namespace std;

int main()
{
    int t, r1, r2;
    cin >> t;
    for (int j = 1; j <= t; j++)
    {
        int sum = 0;
        cin >> r1 >> r2;
        for (int i = r1; i <= r2; i++)
        {
            if (i % 2 == 1)
                sum += i;
        }
        cout << "Case " << j << ": " << sum << endl;
    }
}