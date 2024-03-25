#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, num = 0; cin >> n;
		vector<int> v(n);
		for (int i = 0; i < n; i++) cin >> v[i];
		for (int j = 0; j < n; j++) {
			for (int k = j+1; k < n; k++)
				if (v[j] <= v[k]) num++;
		}
		cout << num << endl;
	}
}