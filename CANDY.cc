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
//3 1 12 17. 9 moves is the answer
int main() {
	//removeFirstLine();
	int n;
	while (cin >> n) {
		if (n == -1)  {
			//cout << "breaking" << endl;
			return 0;
		}
		int arr[n];
		int sum = 0;
		for (int i = 0; i < n; i++) {
			int c;
			cin >> c;
			sum+=c;
			arr[i] = c;
		}
		if ( (sum % n) != 0) cout << -1 << endl;
		else {
			int each = sum / n;
			//cout << "each " << each << endl;
			sort(arr, arr+ n, std::greater<int>());
			int moves= 0;
			for (int j = 0; j < n; j++) {
				if (arr[j] > each) {
					moves += arr[j]-each;
					//cout << "moves "<< moves << endl;
				}

			}
			cout << moves << endl;

		}

		


	}
	// your code here

	return 0;
}