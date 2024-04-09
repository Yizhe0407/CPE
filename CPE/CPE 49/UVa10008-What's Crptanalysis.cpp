#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;

bool compare(pair<char, int>a, pair<char, int>b) {
	if (a.s == b.s) return a.f < b.f;
	else return a.s > b.s;
}

int main()
{
    int n, max = 0;
    
    map<char, int> mp; 
    cin >> n;
    string s; getline(cin, s);
	
	while(n--)
	{
		getline(cin, s);
		transform(s.begin(), s.end(), s.begin(), ::toupper);
		for (char i : s)
			if(i >= 65 && i < 91) mp[i]++;
	}
	
	vector<pair<char, int>> v;
	for (auto pair : mp) v.push_back(pair);
	sort(v.begin(), v.end(), compare);
	
	for (auto i : v) cout << i.f << ' ' << i.s << endl;
}