#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;

int x, y, x2, y2;
string s;
char d;
bool lose;
vector<pair<int, int>> scent;

void move() {
	int nx, ny;
    if (d == 'N') nx = x2, ny = y2+1;
	else if (d == 'E') nx = x2+1, ny = y2;
	else if (d == 'S') nx = x2, ny = y2-1;
	else if (d == 'W') nx = x2-1, ny = y2;

    if (nx < 0 || nx > x || ny < 0 || ny > y)
    {
        bool flag = 1;
        for (auto p : scent)
        {
            if (x2 == p.f && y2 == p.s)
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            lose = 1;
            scent.push_back({x2, y2});
        }
    }
    else x2 = nx, y2 = ny;
}

int main()
{
    cin >> x >> y;
    while (cin >> x2 >> y2 >> d)
    {
        lose = 0;
        cin >> s;
        for (auto i : s) {
        	if (lose) break;
        	if (i == 'R')
            {
                if (d == 'N') d = 'E';
                else if (d == 'E') d = 'S';
                else if (d == 'S') d = 'W';
                else if (d == 'W') d = 'N';
            }
            else if (i == 'L')
            {
                if (d == 'N') d = 'W';
                else if (d == 'E') d = 'N';
                else if (d == 'S') d = 'E';
                else if (d == 'W') d = 'S';
            }
            else move();
        }
        
        printf("%d %d %c", x2, y2, d);
	    if (lose)
	        cout << " LOST";
	    cout << '\n';
    }
}