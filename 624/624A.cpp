/* Author : Anurag El Dorado */

/* Libraries */
#include <bits/stdc++.h>
#include <time.h>
#include <math.h>
using namespace std;


int main() {

	double d, L, v1, v2;
	
	cin >> d >> L >> v1 >> v2;
	
	printf("%.9f\n", (v1 * L - v1 * d) / (v1 + v2) / v1);
	


	return 0;
}

// s/v1 = (L - d - S) / v2
// ans = s / v1;
