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

int main() {
	removeFirstLine();
	vector <int> Y_AXIS(10000);
	int start = 0;
	for (int i = 0; i <10000; i++) {
		if (i ==0) Y_AXIS[i] = 0;
		else if (i ==1) Y_AXIS[i] = 1;
		else if (i%2 == 0) {
			Y_AXIS[i] =Y_AXIS[i-1]+3;// start;
			//start+=3;

		}
		else {
			
			Y_AXIS[i] =Y_AXIS[i-1]+1;// start;
			//start+=1;
		}
	}
	start = 0;
	vector <int> X_AXIS(10000);
	
	for (int i = 0; i <10000; i++) {
		if (i ==0) X_AXIS[i] = 0;
		else if (i ==1) X_AXIS[i] = 1;
		else if (i ==2) X_AXIS[i] = 2;
		else if (i%2 == 0) {
			
			X_AXIS[i] =X_AXIS[i-1]+3;
			//start+=3;
		}
		else {
			X_AXIS[i] =X_AXIS[i-1]+1;
			//X_AXIS[i] = start;
			//start+=1;
		}
	}
	int x, y;
	while ((cin >> x) && (cin >>y)) {
		//cout <<  "x " << X_AXIS[x] << " y " << Y_AXIS[y] << endl;
		if (X_AXIS[x] == Y_AXIS[y]) {
			cout << Y_AXIS[y] << endl;
		}
		else if (X_AXIS[x] + 2 == Y_AXIS[y]) {
			cout << Y_AXIS[y] << endl;
		}
		else if (X_AXIS[x] == Y_AXIS[y] + 2) {
			cout << X_AXIS[x] << endl;
		}
		else cout << "No Number"<< endl;
	}
	// your code here

	return 0;
}