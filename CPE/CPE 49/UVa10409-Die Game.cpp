#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	while(cin >> t && t != 0)
	{
		string d;
		int n = 2, e = 4, s = 5, w = 3, up = 1, down = 6, tmp;
		for (int i = 0; i < t; i++) {
			cin >> d;
			if (d == "north") {
				tmp = up;
				up = s, s = down, down = n, n = tmp; 
			}
			else if (d == "east") {
				tmp = up;
				up = w, w = down, down = e, e = tmp;
			}
			else if (d == "south") {
				tmp = up;
				up = n, n = down, down = s, s = tmp;
			}
			else if (d == "west") {
				tmp = up;
				up = e, e = down, down =  w, w = tmp;
			}
		}
		cout << up << endl;
	}
}	