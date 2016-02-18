#include <bits/stdc++.h>
using namespace std;

int main() {
	double a, b, c;

	cin >> a >> b >> c;

	double r1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
	double r2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

	if (r1 > r2) {
		printf("%.9f\n%.9f", r1, r2);
	} else {
		printf("%.9f\n%.9f", r2, r1);
	}

	return 0;
}