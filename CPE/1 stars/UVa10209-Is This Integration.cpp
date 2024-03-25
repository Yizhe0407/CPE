#include <bits/stdc++.h>
using namespace std;

#define PI acos(-1.0)

int main()
{
	double f = 0.0;
	while(cin >> f)
	{
		double rest = (f*f) - (f*f*PI/6) - (f*f*sqrt(3)/4);
		double dotted = (f*f) - f*f*PI/4 - rest*2;
		double striped = (f*f) - 4*rest - 4*dotted;
		printf("%.3f %.3f %.3f\n", striped, 4*dotted, 4*rest);
	}
}