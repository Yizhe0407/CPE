#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	string s1, s2;
	cin >> t;
	for(int i = 1; i <= t; i++) {
		cin >> s1;
		cin >> s2;
		int age = 0;
		int c_d = stoi(s1.substr(0, 2)), c_m = stoi(s1.substr(3, 2)), c_y = stoi(s1.substr(6, 4));
        int b_d = stoi(s2.substr(0, 2)), b_m = stoi(s2.substr(3, 2)), b_y = stoi(s2.substr(6, 4));
        if (b_y == c_y && b_d == c_d && b_m == c_m) {
        	printf("Case #%d: 0\n", i);continue;
        }
        else {
        	age = c_y - b_y;
        	if ((c_m < b_m) || (c_m == b_m && c_d < b_d)) age--;
        	if (age > 130) printf("Case #%d: Check birth date\n", i);
        	else if (age < 0) printf("Case #%d: Invalid birth date\n", i);
        	else printf("Case #%d: %d\n", i, age);
        }
	}
}