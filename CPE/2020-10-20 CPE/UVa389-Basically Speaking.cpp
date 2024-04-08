#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int b1, b2;
    while(cin >> s >> b1 >> b2) {
        int num = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] >= 'A' && s[i] <= 'F')
                num = num * b1 + (s[i] - 'A' + 10);
            else
            	num = num * b1 + (s[i] - '0');
        }
        
        string result;
        while (num > 0) {
	        int digit = num % b2;
	        char c;
	        if (digit >= 10)
	            c = 'A' + (digit - 10);
	        else
	            c = '0' + digit;
	        result = c + result;
	        num /= b2;
	    }
	    while (result.size() > 7)
	    	result.erase(0, 1);
	    while (result.size() < 7)
	        result = '0' + result;
	    cout << result << endl;	
    }
}