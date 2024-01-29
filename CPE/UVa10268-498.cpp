#include <bits/stdc++.h>
using namespace std;

int main()
{
	stringstream ss;
	string s;
	long long int x, tmp, ans, len;
	while (cin >> x)
	{
		vector<int> dict;
		cin.ignore();
		getline(cin, s);
		ss << s;

		ans = 0;
		while (ss >> tmp)
			dict.push_back(tmp);

		len = dict.size();
		for (int i = 0; i < len; i++)
			ans += dict[i] * (len - 1 - i) * pow(x, len - 2 - i);

		cout << ans << endl;
		s = "";
		ss.clear();
	}
}