#include <bits/stdc++.h>
using namespace std;

int fun(int a,int b,int c,int L)
{
	return a*pow(L, 2) + b * L + c;
}

int main()
{
	int a, b, c, d , L, count;
	while(cin >> a >> b >> c >> d >> L)
	{
		if (a == 0 && b == 0 && c == 0 && d == 0 && L == 0) break;
		count = 0;
		for (int i = 0; i <= L; i++) 
			if (fun(a, b, c, i) % d == 0) count++;
		cout << count << endl;
	}
}