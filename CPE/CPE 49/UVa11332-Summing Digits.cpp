#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	while(cin >> s && s != "0") {
		while(s.size() > 1) {
			int sum = 0;
			for(auto i : s)
				sum += i - '0';
			s = to_string(sum);
		}
		cout << s << endl;
	}
}