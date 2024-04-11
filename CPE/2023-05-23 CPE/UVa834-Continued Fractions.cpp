#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a, b;
	while(cin >> a >> b)
	{
		if (a == 1) {
			printf("[0;%d]\n", b); continue;
		}
		else if (b == 1) {
			printf("[%d;%d]\n", a, a); continue;
		}
		bool first = 0;
		vector<int> v;
		while(a != 1 || b != 1) {
			if(b > a && first){
				int tmp = a;
				a = b;
				b = tmp;
			}
			first = 1;
			if (b == 0) break;
			v.push_back(a / b);
			a %= b;
		}
		cout << '[';
		for (int i = 0; i < v.size(); i++) {
			cout << v[i];
			if (i == 0) cout << ';';
			else if(i > 0 && i < v.size() - 1) cout << ',';
		} 
        cout << "]\n";
	}
}