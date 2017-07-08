#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <stack>
#include <algorithm>
#include <map>
#include <functional>


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

int main() {
	removeFirstLine();
	int n;
	while (cin >> n) {
		int men[n];
		int women[n];
		for (int i = 0; i< n; i++) {
			int h;
			cin >> h;
			men[i] = h;
		}
		for (int i = 0; i< n; i++) {
			int h;
			cin >> h;
			women[i] = h;
		}
		sort(men, men + n);
		sort(women, women + n);
		int result = 0;
		for (int i =0; i < n ; i++) {
			result+=men[i]*women[i];
		}
		cout << result << endl;
	}
	// your code here

	return 0;
}