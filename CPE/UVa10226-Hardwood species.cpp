#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;

int main()
{
	int n, a;
	string s;
	map<string, int> map;
	cin >> n;
	cin.ignore();
	getline(cin, s);
	for (int j = n; j >= 0; j--)
	{
		map.clear();
		s = "";
		float num = 0; 
		
		while(getline(cin, s) && s != "") {
			map[s]++;
			num++;
		}
		
		for (auto &i : map) {
			float percent = (i.s/num) * 100.0;
			printf("%s %.4f\n", i.f.c_str(), percent);
		}
		if (j > 1) cout << '\n';
	}
}