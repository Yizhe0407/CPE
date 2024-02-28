#include <bits/stdc++.h>
#define ll long long int
#define f first
#define s second
using namespace std;

int tmp (const pair<ll, ll> a, const pair<ll, ll> b)
{
	if (a.s == b.s) {
        if (a.f % 2 != 0 && b.f % 2 != 0) // both odd
            return a.f > b.f;
        else if (a.f % 2 == 0 && b.f % 2 == 0) // both even
            return a.f < b.f;
		else // one odd, one even
            return a.f % 2 != 0;
    }
    return a.s < b.s;
}

int main()
{
	int n, m, a;
	while(cin >> n >> m && n != 0 && m != 0)
	{
		
		vector<pair<ll, ll>> v(n);
		
		for (int i = 0; i < n; i++) {
			cin >> v[i].f;
			v[i].s = v[i].f % m;
		}
		sort(v.begin(), v.end(), tmp);
		
		cout << n << ' ' << m << endl;
		for (auto i : v) cout << i.f << endl;
	}
	cout << "0 0\n";
}