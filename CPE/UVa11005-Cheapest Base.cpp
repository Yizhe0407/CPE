#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> cost(36);
    vector<int> cheap(36);
    long long int fig, k, min;
    int n, m, x, a = 1;
    cin >> n;
    while (n--)
    {
        if (a > 1)
            cout << "\n";
        cout << "Case " << a++ << ":\n";
        for (auto &i : cost)
            cin >> i;
        cin >> m;
        while (m--)
        {
            min = INT_MAX;
            cin >> fig;
            cout << "Cheapest base(s) for number " << fig << ":";
            x = 0;
            for (int base = 2; base < 37; base++)
            {
                k = fig;
                int total = 0;
                while (k > 0)
                {
                    total += cost[k % base];
                    k /= base;
                }
                if (total < min)
                {
                    min = total;
                    cheap[0] = base;
                    x = 1;
                }
                else if (total == min)
                    cheap[x++] = base;
            }
            for (int i = 0; i < x; i++)
                cout << ' ' << cheap[i];
            cout << '\n';
        }
    }
}