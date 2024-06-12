#include <bits/stdc++.h>
using namespace std;

int main()
{
	int h1, m1, h2, m2, min;
	while(cin >> h1 >> m1 >> h2 >> m2)
	{
		if (h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0) break;
		min = 0;
		if (h1 == h2)
		{
			if (m1 < m2) cout << m2 - m1 << endl;
			else if (m1 > m2) cout << 1380 + (60 - m1) + m2 << endl;
			else cout << 0 << endl;
		}
		else if (h1 < h2)
		{
			min = (h2 - h1) * 60;
			if (m1 > m2) cout << (min - 60) + (60 - m1) + m2 << endl;
			else cout << (h2 - h1) * 60 + (m2 - m1) << endl;
		}
		else if (h1 > h2)
		{
			min = ((23 - h1) + h2) * 60;
			if (m1 > m2) cout << min + (60 - m1) + m2 << endl;
			else if (m1 < m2) cout << min + 60 + (m2 - m1) << endl;
			else cout << min + 60 << endl;
		}	
	}
}