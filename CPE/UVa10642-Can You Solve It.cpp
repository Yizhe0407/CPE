#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, x1, y1, x2, y2; 
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> x1 >> y1 >> x2 >> y2;
		int t = x2 + y2, num = 0, c = 1;
		bool check = 0;
		if (x1 == 0 && y1 == 0) {
			num++;
			check = 1;
		}
		while(t--)
		{
			int a, b;
			for (int j = 0; j <= c; j++)
			{	
				a = j, b = c - j;
				if (a == x1 && b == y1) check = 1;
				if (a == x2 && b == y2) break;
				if (check) num++;
			}
			c++;
		}
		printf("Case %d: %d\n",i, num);
	}
}