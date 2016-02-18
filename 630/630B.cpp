#include <bits/stdc++.h>
using namespace std;

int main() {
	double n, t;

	double f = 1.000000011;
	
	cin >> n >> t;

	printf("%.10f\n", (n * pow(f, t)));
}