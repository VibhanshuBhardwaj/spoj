#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string toString(int input) {
	ostringstream ss;
	ss << input;
	return ss.str();
}


int reverse(int i) {
	bool encountered = false;
	string retval = "";
	string given  = toString(i);
	for (int k = given.length()-1; k >= 0; k--) {
		if ((given[k] == '0') && !encountered) {
			continue;
		}
		else {
			encountered = true;
			retval = retval + given[k];
		}
	}
	return stoi(retval);
}
int main() {
	string trash;
	cin >> trash;
	string s;
	//what follows is a bad way to be reading 2 integers from stdin. for better way see PRIME.CPP
	while(getline(cin, s)) {
		istringstream ss(s);
		int x, y;
		if ((ss >> x) && (ss >> y)){
			int added = reverse(x) + reverse(y);
			cout << reverse(added) << endl;
		}

	}
	return 0;
}

