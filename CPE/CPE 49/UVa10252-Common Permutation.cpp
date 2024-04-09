#include <bits/stdc++.h>
using namespace std;

int main() {
	string a, b;
	while (getline(cin, a), getline(cin, b)) {
		map<char, int> mp;
		vector<char> v;
		for (auto c : a) if (islower(c)) mp[c]++;
		for (auto c : b) {
			if (mp.count(c) && mp[c] > 0) {
				mp[c]--;
				v.push_back(c);
			}
		}

		sort(v.begin(), v.end());

		for (auto c : v) cout << c;
		cout << '\n';
	}
}