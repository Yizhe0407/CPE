#include <bits/stdc++.h>
using namespace std;

int main()
{
    // unsigned long long 比 long long 大
    long long int s, d, n;
    while (cin >> s >> d)
    {
        n = s;
        while (n < d)
        {
            s += 1;
            n += s;
        }
        cout << s << endl;
    }
}