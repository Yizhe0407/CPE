#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t, m, n, q;
    cin >> t;
    while(t--) {
        cin >> m >> n >> q;
        vector<vector<char>> dict(m, vector<char>(n));
		for (int j = 0; j < m; j++) {
			for (int k = 0; k < n; k++)
				cin >> dict[j][k];
		}

        vector<vector<int>> center(q, vector<int>(2));
        for (int i = 0; i < q; i++) {
            cin >> center[i][0] >> center[i][1];
        }

        cout << m << ' ' << n << ' ' << q << endl;

        for (int i = 0; i < q; i++) {
            int x = center[i][0], y = center[i][1], side = 1;
            char dot = dict[x][y];
            
            for (int a = 1; x - a >= 0 && x + a < m && y - a >= 0 && y + a < n; a++) {
                bool check = true;
                for (int j = x - a; j <= x + a; j++) {
                    for (int k = y - a; k <= y + a; k++) {
                        if (dict[j][k] != dot) {
                            check = false;
                            break;
                        }
                    }
                    if (!check) break;
                }
                if (check) side = 2 * a + 1;
                else break;
            }
            cout << side << endl;
        }
        dict.clear();
    }
    return 0;
}