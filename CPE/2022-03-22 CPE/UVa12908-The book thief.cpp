#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    vector<ll> v(15000, 0);
    for (int j = 1; j < v.size(); j++)
        for (int k = 1; k <= j; k++) v[j] += k;

    while (cin >> n && n != 0) {
        for (int i = 1; i < v.size(); i++) {
            if (v[i] > n) {
                printf("%lld %d\n", (v[i] - n), i);
                break;
            }
        }
    }
}