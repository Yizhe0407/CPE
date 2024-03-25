#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, sum, c = 0;
	while(cin >> n && n != 0)
	{
		c++;
		bool t = false;
		vector<int> v;
		for (int i = 1; i < 900; i++) {
			sum = 0;
			for (int j = 1; j <= i; j++)
				if (i % j == 0) sum += j;
			if (sum == n) {
				v.push_back(i); t = true;
			}
		}
		if (t) printf("Case %d: %d\n", c, v[v.size()-1]);
		else printf("Case %d: -1\n", c);
	}
}