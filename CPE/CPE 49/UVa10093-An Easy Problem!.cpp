#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	while(getline(cin, s))
	{
		int tmp = 0, maximum = 1, num = 0;
		for (auto i : s) {
			if (isdigit(i)) tmp = i - '0';
			else if(isupper(i)) tmp = i - 'A' + 10;
			else if (islower(i)) tmp = i - 'a' + 36;
			maximum = max(maximum, tmp);
			num += tmp;
		}
		
		while(maximum < 62)
		{
			if (num % maximum == 0) {
				cout << maximum + 1 << endl;
				break;
			}
			maximum++;
		}
		if (maximum == 62)
			cout << "such number is impossible!" << endl;	
	}
}