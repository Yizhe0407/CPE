#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	bool t = false;
	while(cin >> n && n != 0)
	{
		if (t) cout << endl;
		t = true;
		bool a = true;
		for (int j = 10000; j < 100000; j++) {
			if (j % n == 0)
			{
				string s1 = to_string(j), s2 = to_string(j / n), s3;
				while (s1.size() < 5)
	            	s1 = '0' + s1;
	            while (s2.size() < 5)
	                s2 = '0' + s2;
	            s3 = s1+s2;
	            vector<int> v(10, 0);
	            bool b = true;
	            for (auto i : s3) v[i-'0']++;
	            for (int i = 0; i < 10; i++) if (v[i] != 1) b = false;
	            if (b) {
	            	a = false;
	            	printf("%s / %s = %d\n", s1.c_str(), s2.c_str(), n);
	            }
			}
        }
		if (a) printf("There are no solutions for %d.\n", n);
	}	
}