#include <bits/stdc++.h>
using namespace std;

int main() {

	string s;	char t;
	int lens, i, j;
	int count = 0;

	cin >> s;
	lens = s.length();

	stack<char>stk;
	for (i = 0; i < lens; i++) {
		if (s[i] == '{' || s[i] == '[' || s[i] == '<' || s[i] == '(') {
			stk.push(s[i]);
		} else {
			if (!stk.empty()) {	
				t = stk.top();	stk.pop();
				if (s[i] == '}' && t != '{') {
					count++;
				} else if (s[i] == ']' && t != '[') {
					count++;
				} else if (s[i] == '>' && t != '<') {
					count++;
				} else if (s[i] == ')' && t != '(') {
					count++;
				}
			} else {
				cout << "Impossible\n";
				return 0;
			}
		}
	}

	if (stk.size()) {
		cout << "Impossible\n";
	} else {
		cout << count << endl;
	}

	return 0;
}