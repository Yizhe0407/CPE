#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t, e, f, c, count;
	cin >> t;
	while(t--)
	{
		cin >> e >> f >> c;
		count = 0;
		e += f;
		while(e > 0)
		{
			e -= c;
			count++;
			e++;
		}
		cout << count - 1 << endl;
	}
}