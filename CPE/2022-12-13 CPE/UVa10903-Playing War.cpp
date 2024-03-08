#include <bits/stdc++.h>
using namespace std;

int main()
{
	int player, t, a;
	bool c = 0;
	while(cin >> player >> t)
	{
		if (c) cout << endl;
		c = 1;
		t = t*player*(player-1)/2;
		float c = t;
		
		vector<double> win(player+1);
		vector<double> lose(player+1);
		for (int i = 0; i < t; i++) {
			vector<int> p(player+1);
			vector<string> choose(player+1);
			for (int j = 0; j < 2; j++) {
				cin >> a;
				p[j] = a;
				cin >> choose[a];
			}
			if (choose[p[0]] == choose[p[1]]) continue;
            if ((choose[p[0]] == "rock" && choose[p[1]] == "scissors") ||
                (choose[p[0]] == "scissors" && choose[p[1]] == "paper") ||
                (choose[p[0]] == "paper" && choose[p[1]] == "rock")) {
                win[p[0]]++;lose[p[1]]++;               
            } else {
                win[p[1]]++;lose[p[0]]++;
            }
		}
		for (int i = 1; i <= player; i++) {
			if (win[i] + lose[i] == 0) cout << "-\n";
			//else cout << fixed << setprecision(3) << static_cast<double>(win[i]) / (win[i] + lose[i]) << endl;
			else printf("%.3f\n", (win[i]) / (win[i] + lose[i]));
		}
	}
}