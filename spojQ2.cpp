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
	//cout << "trash: " << trash << endl;
	string s;
	while(getline(cin, s)) {
		//cout << "got line" << s << endl;
		istringstream ss(s);
		int x, y;
		if ((ss >> x) && (ss >> y)){
		
		//cout << "x: " << x << endl;
		//cout << "y: " << y << endl;

	//	cout <<"reverse x" << reverse(x) << endl;
	//	cout <<"reverse y"<< reverse(y) << endl;
			int added = reverse(x) + reverse(y);
			cout << reverse(added) << endl;
		}

	}
	// your code goes here
	
	return 0;
}

