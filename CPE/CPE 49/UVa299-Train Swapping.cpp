#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, c, num;
	cin >> n;
	while(n--)
	{
		cin >> c;
		vector<int> v(c);
		for (int i = 0; i < c; i++)
		    cin >> v[i];
		int swap = 0;
		for (int j = 0; j < v.size(); j++) {
			for (int k = j + 1; k < v.size(); k++)
				if (v[j] > v[k]) swap++;
		}
		cout << "Optimal train swapping takes " << swap << " swaps." << endl;
	}
}