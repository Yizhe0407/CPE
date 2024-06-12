#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	string o = "/.,MNBVCXZ';LKJHGFDSA\\][POIUYTREWQ=-0987654321`";
	while(getline(cin, s))
	{
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == ' ') {
				cout << ' ';
				continue;
			}
			for (int j = 0; j < o.size(); j++) 
				if (s[i] == o[j]) cout << o[j+1];
		}
		cout << endl;
	}
}