#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m, t = 0;
	
	while(cin >> n >> m && n != 0 && m != 0)
	{
		vector<vector<char>> c(n, vector<char>(m)); 
		vector<vector<char>> ans(n, vector<char>(m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++) cin >> c[i][j];
        
        if (t > 0) cout << '\n';
        
		for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (c[i][j] == '*') ans[i][j] = '*';
                else {
                	int num = 0;
                	for (int dx = -1; dx <= 1; ++dx) {
                        for (int dy = -1; dy <= 1; ++dy) {
                            if (dx == 0 && dy == 0) continue;
                            int ni = i + dx;
                            int nj = j + dy;
                            if (ni >= 0 && ni < n && nj >= 0 && nj < m && c[ni][nj] == '*') num++;
                        }
                    }
                	ans[i][j] = '0' + num;
                }	
            }
        }
        printf("Field #%d:\n", t + 1);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << ans[i][j];
            }
            cout << endl;
        }
        t++;
	}
}