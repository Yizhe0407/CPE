#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	ll f1, f2, t;
	vector<ll> v;

	while(cin >> f1 >> f2 && f1 != EOF && f2 != EOF) {
		if (f2 == 0 || f2 == 1) {
			cout << "Boring!\n";
			continue;
		}

		v.clear();
		bool chick = 1;
		int i = 1;
		v.push_back(f1);
		v[0] = f1;

		while(f1 != 1) {
			if (f1 % f2 != 0) {
                chick = false;
                break;
            }
			v.push_back(f1 / f2);
			f1 = f1 / f2;
		}
        
		if (chick) {
			for (auto element : v) 
    			cout << (element == v.front() ? "" : " ") << element;
		}
		else cout << "Boring!";
		cout << "\n";
	}
}