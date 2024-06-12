#include <bits/stdc++.h>
using namespace std;

int main()
{
	unordered_map<char, char> dict = {
    {'A', 'A'},
    {'E', '3'},
    {'H', 'H'},
    {'I', 'I'},
    {'J', 'L'},
    {'L', 'J'},
    {'M', 'M'},
    {'O', 'O'},
    {'S', '2'},
    {'T', 'T'},
    {'U', 'U'},
    {'V', 'V'},
    {'W', 'W'},
    {'X', 'X'},
    {'Y', 'Y'},
    {'Z', '5'},
    {'1', '1'},
    {'2', 'S'},
    {'3', 'E'},
    {'5', 'Z'},
    {'8', '8'}
	};
	string s;
	while(cin >> s)
	{
		bool is_rd = 1, is_ms = 1;
		int len = s.size() - 1;
		for (int i = 0; i <= len; i++)
		{
			if (s[i] != s[len - i]) is_rd = 0;
			if (s[i] != dict[s[len - i]]) is_ms = 0;
		}
		if (is_rd && is_ms) cout << s << " -- is a mirrored palindrome.\n";
		else if (is_rd) cout << s << " -- is a regular palindrome.\n";
		else if (is_ms) cout << s << " -- is a mirrored string.\n";
		else cout << s << " -- is not a palindrome.\n";
		cout << '\n';
	}
}