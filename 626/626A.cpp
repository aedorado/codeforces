#include <iostream>
using namespace std;

#define x first
#define y second

int main() {
	int n, i, j, k, count = 0;
	string s, r;
	pair<int, int>p;

	cin >> n >> s;
	int lens = s.length();

	for (i = 0; i < lens; i++) {
		for (j = 1; j <= lens - i; j++) {
			r = s.substr(i, j);
			p = {0, 0};
			for (k = 0; k < j; k++) {
				if (r[k] == 'U') {
					++p.x;
				} else if (r[k] == 'D') {
					--p.x;
				} else if (r[k] == 'L') {
					++p.y;
				} else if (r[k] == 'R') {
					--p.y;
				}
			}
			if (p.x == 0 && p.y == 0) {
				++count;
			}
		}
	}

	cout << count << endl;


	return 0;
}