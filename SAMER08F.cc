#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <stack>
#include <algorithm>
#include <map>
using namespace std;

void removeFirstLine() {
	string trash;
	cin >> trash;
}


string toString(int input) {
	ostringstream ss;
	ss << input;
	return ss.str();
}

int toInt(string s) {
	istringstream ss(s);
	int r;
	ss >> r;
	return r;
}
int toInt(char c) {
	return c - '0';
}

int getSquares(int n) {

	int ans = 0;
	for (int x = 0; x < n; ++x) {
		for (int y = 0; y < n; ++y) {
			int length = 1;
			while (length <= n) { // check equality
				if (((x + length) > n) || ((y+ length) > n)) {
					break;
				}
				else {
					ans++;
					length++;
				}
			}
		}
	}
	return ans;
}
int main() {
	removeFirstLine();
	int n;
	while (cin >> n) {
		if (n == 0) {
			cout << endl;
			return 0;
		}
		cout << getSquares(n) << endl;
	}
	// your code here

	return 0;
}