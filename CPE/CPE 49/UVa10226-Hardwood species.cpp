#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, a;
	string s;
	
	cin >> n;
	cin.ignore();
	getline(cin, s);
	while(n--)
	{
		map<string, int> mp;
		float num = 0; 
		
		while(getline(cin, s) && s != "") mp[s]++, num++;
		
		for (auto i : mp) {
			float percent = (i.second / num) * 100.0;
			printf("%s %.4f\n", i.first.c_str(), percent);
		}
		if (n)cout << '\n'; 
	}
}