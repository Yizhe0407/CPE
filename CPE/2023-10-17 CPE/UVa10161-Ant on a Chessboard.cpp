#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n, a, b = 1, c = 0, f, two = 2, count;
    vector<ll> v;
    v.push_back(1);

    for (int i = 1; i < 100000; i++)
    {
        c++;
        b += two;two += 2;
        v.push_back(b + c);
    }

    while (cin >> n && n != 0)
    {
        a = 1, f = 1, two = 2, count = 0;
        while (n > v[count++])
        {
            f += two;two += 2;
            a++;
        }
        if (a % 2 == 0)
        {
            if (n > f) cout << a << " " << a - (n - f) << endl;
            else cout << a - (f - n) << " " << a << endl;
        }
        else
        {
            if (n > f) cout << a - (n - f) << " " << a << endl;
            else cout << a << " " << a - (f - n) << endl;
        }
    }
}