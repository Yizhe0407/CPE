#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, s1, s2;
    while(cin >> s && s != "0")
    {
    	int len = 0;
    	cout << "Original number was " << s << endl;
    	vector<long long int> v;
    	bool t = false;
    	while(true)
    	{
	        s1 = s, s2 = s;
	        sort(s1.begin(), s1.end(), greater<char>());
	        sort(s2.begin(), s2.end());
	        long long int num = stoll(s1) - stoll(s2);
	        printf("%lld - %lld = %lld\n", stoll(s1), stoll(s2), num);
	        len++;
	        for (auto i : v)
	        	if (i == num) {t = true; break;}
	        if (t) break;
	        v.push_back(num);
	        s = to_string(num);
    	}
    	printf("Chain length %d\n\n", len);
    }
}