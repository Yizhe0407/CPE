#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int a = 0; a < t; a++) {
		string s;
		cin >> s;
		vector<char> Pn;
		vector<int> v(s.size());
		sort(s.begin(), s.end());
		
		while(!s.empty()) {
			int num = 1, count = 0;
			for (int k = 1; k < s.size(); k++) if (s[0] == s[k]) num++;
			for (int i = 1; i <= num; i++) if (num % i == 0) count++;
			if (count == 2) Pn.push_back(s[0]);
			s.erase(0, num);
		}
		printf("Case %d: ", a+1);
		if (Pn.empty()) cout << "empty";
		else for (auto i : Pn) cout << i;
		cout << endl;
	}
}	