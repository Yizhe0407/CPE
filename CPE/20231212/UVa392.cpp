#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int>v(9);
	
	while(cin >> v[0] >> v[1] >> v[2] >> v[3] >> v[4] >> v[5] >> v[6] >> v[7] >> v[8])
	{
		int s = 8, f = 0;
		bool c = 0, zero = 1;
		for (auto a : v) {
			
			if (a != 0) {
				f++;
				if (s >= 0 && s != 8 && a > 0 && c) printf(" + ");
				else if (s >= 0 && s != 8 && a < 0 && c) printf(" - ");
				
				if (a == 1)
				{
					if (s > 1) printf("x^%d", s);
					if (s == 1) printf("x", s);
					if (s == 0) printf("1");
				}
				else if (a == -1)
				{
					if (s > 1 && f == 1) printf("-x^%d", s);
					else if (s > 1) printf("x^%d", s);
					if (s == 1) printf("x", s);
					if (s == 0) printf("1");
				}
				else if (a != 1 && a != -1)
				{
					if (s > 1 && f == 1) printf("%dx^%d", a, s);
					else if (s > 1) printf("%dx^%d", abs(a), s);
					else if (s == 1) printf("%dx", abs(a));
					else if (s == 0) printf("%d", abs(a));
				}
				c = 1, zero = 0;
			}
			s--;
		}
		if (zero) cout << '0';
		cout << '\n';	
	}
}