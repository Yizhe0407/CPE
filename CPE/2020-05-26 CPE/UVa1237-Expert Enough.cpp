#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;

int main()
{
	int t, d, q, p;
	cin >> t;
	while (t--)
	{
		cin >> d;
		cin.ignore();
		map<string, pair<int, int>> mp;
		while(d--)
		{
			string input, car;
			getline(cin, input);
			stringstream ss(input);
			int min_price, max_price;
			
			ss >> car >> min_price >> max_price;
			mp[car] = make_pair(min_price, max_price);
		}
		cin >> q;
		while(q--)
		{
			cin >> p;
			vector<string> count;
			for (auto i : mp)
				if (i.s.f <= p && i.s.s >= p)
					count.push_back(i.f);
			if (count.size() != 1) cout << "UNDETERMINED\n";
			else cout << count[0] << endl;
		}
		if (t) cout << endl;
	}
}