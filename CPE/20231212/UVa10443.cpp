#include <bits/stdc++.h>
using namespace std;

int main()
{
	int R, C, N, t;
	cin >> t;
	while(cin >> R >> C >> N, t--)
	{
		vector<vector<char>> mp(R, vector<char>(C));
		vector<vector<char>> v(R, vector<char>(C));
		for (int r = 0; r < R; r++)
			for (int c = 0; c < C; c++) cin >> mp[r][c];
		
		v = mp;
		while(N--)
		{
			for (int r = 0; r < R; r++) {
				for (int c = 0; c < C; c++) {
					if (r-1>=0) {
						if (mp[r][c]=='R' && mp[r-1][c]=='P') v[r][c] = 'P';
						else if (mp[r][c]=='P' && mp[r-1][c]=='S') v[r][c] = 'S';
						else if (mp[r][c]=='S' && mp[r-1][c]=='R') v[r][c] = 'R';
					}
					if (r+1<R) {
						if (mp[r][c]=='R' && mp[r+1][c]=='P') v[r][c] = 'P';
						else if (mp[r][c]=='P' && mp[r+1][c]=='S') v[r][c] = 'S';
						else if (mp[r][c]=='S' && mp[r+1][c]=='R') v[r][c] = 'R';
					}
					if (c-1>=0) {
						if (mp[r][c]=='R' && mp[r][c-1]=='P') v[r][c] = 'P';
						else if (mp[r][c]=='P' && mp[r][c-1]=='S') v[r][c] = 'S';
						else if (mp[r][c]=='S' && mp[r][c-1]=='R') v[r][c] = 'R';
					}
					if (c+1<C) {
						if (mp[r][c]=='R' && mp[r][c+1]=='P') v[r][c] = 'P';
						else if (mp[r][c]=='P' && mp[r][c+1]=='S') v[r][c] = 'S';
						else if (mp[r][c]=='S' && mp[r][c+1]=='R') v[r][c] = 'R';
					}
				}
			}
			mp = v;
		}
		for (int r = 0; r < R; r++) {
			for (int c = 0; c < C; c++) cout << v[r][c];
			cout << endl;
		}
		if (t >= 1) cout << endl; 
	}
}