#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	cin.ignore();
	string s;
	string s1 = "/.,mnbvcxz';lkjhgfdsa\\][poiuytrewq=-0987654321`";
	string s2 = ",mnbvcxz';lkjhgfdsa\\][poiuytrewq=-0987654321`";
	while(t--)
	{
		getline(cin, s);
		for (auto i : s) {
			i = tolower(i);
			if (i == ' ') cout << ' ';
			for (int j = 0; j < s1.size(); j++)
				if (i == s1[j]) cout << s2[j];
		}
		cout << endl;
	}
}