#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		vector<int> v(3);
		for (int i = 0; i < v.size(); i++) cin >> v[i];
		string s; cin >> s;
		for (auto i : s) {
			if (i == 'W') continue;
			else if (i == 'M') v[0]--;
			else if (i == 'Y') v[1]--;
			else if (i == 'C') v[2]--;
			else if (i == 'R') v[0]--, v[1]--;
			else if (i == 'B') v[0]--, v[1]--, v[2]--;
			else if (i == 'G') v[1]--, v[2]--;
			else if (i == 'V') v[0]--, v[2]--;
		}
		if (v[0] < 0 || v[1] < 0 || v[2] < 0) cout << "NO\n";
		else printf("YES %d %d %d\n", v[0], v[1], v[2]);
	}
}