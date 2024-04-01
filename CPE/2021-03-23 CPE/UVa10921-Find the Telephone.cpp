#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	while (getline(cin, s))
	{
		int hyphen = 0, t = s.size();
		for (auto i : s) {
			if (i == '1') {
				cout << '1'; t--;
			}
			else if (i == '0') {
				cout << '0'; t--;
			}
			else if (i == '-') {
				cout << '-';
				hyphen++; t--;
			}
			else if (i >= 'A' && i <= 'C') cout << '2';
			else if (i >= 'D' && i <= 'F') cout << '3';
			else if (i >= 'G' && i <= 'I') cout << '4';
			else if (i >= 'J' && i <= 'L') cout << '5';
			else if (i >= 'M' && i <= 'O') cout << '6';
			else if (i >= 'P' && i <= 'S') cout << '7';
			else if (i >= 'T' && i <= 'V') cout << '8';
			else if (i >= 'W' && i <= 'Z') cout << '9';
		}
		cout << ' ' << t << ' ' << hyphen << endl;
	}
}