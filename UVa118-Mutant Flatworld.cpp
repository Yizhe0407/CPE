#include <bits/stdc++.h>
using namespace std;

int main()
{
	int x, y, x1, y1;
	char d;
	string s;
	cin >> x >> y;
	vector<vector<int>> v(x + 1, vector<int>(y + 1));
	while(cin >> x1 >> y1 >> d && x1 != EOF && y1 != EOF)
	{
		int c = v[x1][y1];
		cin >> s;
		for (auto i : s) {
			if (i == 'R') {
				if (d == 'N') d = 'E';
                else if (d == 'E') d = 'S';
                else if (d == 'S') d = 'W';
                else if (d == 'W') d = 'N';
			}
			else if (i == 'L') {
				if (d == 'N') d = 'W';
                else if (d == 'W') d = 'S';
                else if (d == 'S') d = 'E';
                else if (d == 'E') d = 'N';
			}
			else if (i == 'F') {
				if (d == 'E' && (c != 1 || x1 + 1 <= x)) x1++;
				else if (d == 'W' && (c != 1 || x1 - 1 > 0)) x1--;
				else if (d == 'N' && (c != 1 || y1 + 1 <= y)) y1++;
				else if (d == 'S' && (c != 1 || y1 - 1 > 0)) y1--;
				
			}
		}
		if (x1 < 0) {
			printf("%d %d %c LOST\n", x1+1, y1, d);
			v[x1+1][y1] = 1;
		}
		else if (y1 < 0) {
			printf("%d %d %c LOST\n", x1, y1+1, d);
			v[x1][y1+1] = 1;
		}
		else if (x1 > x) {
			printf("%d %d %c LOST\n", x1-1, y1, d);
			v[x1-1][y1] = 1;
		}
		else if (y1 > y) {
			printf("%d %d %c LOST\n", x1, y1-1, d);
			v[x1][y1-1] = 1;
		}
		else printf("%d %d %c\n", x1, y1, d);
	}
}
