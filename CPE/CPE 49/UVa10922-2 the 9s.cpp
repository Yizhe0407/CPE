#include <bits/stdc++.h>
using namespace std;

int main()
{
	int num, n;
	string s;
	while(cin >> s)
	{
		num = 0, n = 1;
		if (s == "0") break;
		if (s == "9") {
			cout << "9 is a multiple of 9 and has 9-degree 1.\n";
			continue;
		}
		for (auto i : s) num += i - '0';
		if (num % 9 == 0) 
		{
			do
			{
				string a = to_string(num);
				num = 0;
				for (auto i : a) num += i - '0';
				n++;
			}
			while(num > 9);
			cout << s << " is a multiple of 9 and has 9-degree " << n << ".\n";
		}
		else cout << s << " is not a multiple of 9.\n";
	}
}