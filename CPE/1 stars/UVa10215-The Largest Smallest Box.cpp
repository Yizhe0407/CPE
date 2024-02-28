#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int l, w;
	while(cin >> l >> w)
	{
		double minimum = min(l, w) / 2.0;
		double a = 12.0;
		double b = (-4)*(w + l);
		double c = w * l;
		double maximum = ((-b) - sqrt(b * b - 4 * a * c)) / (2 * a);
		printf("%.3f 0.000 %.3f\n", maximum, minimum);
	}
}