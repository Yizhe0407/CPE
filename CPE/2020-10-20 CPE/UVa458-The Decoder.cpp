#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	while (getline(cin, s))
	{
		for (int i = 0; i < s.size(); i++)
			s[i] -= 7;
		for (int i = 0; i < s.size(); i++)
			cout << s[i];
		cout << endl;
	}
}