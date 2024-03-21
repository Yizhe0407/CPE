#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();
    map<string, string> mp;
    string key, value;
    while(n--) {
        getline(cin, key);
        getline(cin, value);
        mp[key] = value;
    }
    
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        getline(cin, key);
        cout << mp[key] << endl;
    }
}