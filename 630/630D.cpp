#include <iostream>
using namespace std;

int main() {

	long long int n, l;

	cin >> n;

	if (n == 0) {
		cout << 1 << endl;
	} else {
		l = 6 * n;
		cout << 1 + ((n * (6 + l)) / 2) << endl;
	}

	return 0;
}