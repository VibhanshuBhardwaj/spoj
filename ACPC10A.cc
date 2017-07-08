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
bool isAP(int a, int b, int c) {
	int diff = b -a;
	if (diff == c -b) return true;
	else return false;
}

bool isGP(int a, int b, int c) {
	float fb = static_cast <float>(b);
	int ratio = fb/ a;
	if (ratio == c /fb) return true;
	else return false;
}
int main() {
	//removeFirstLine();
	int a, b, c;
	while ((cin >> a) && (cin >> b) && (cin >> c)) {
		if ((a ==0) && (b ==0) && (c ==0)) {
			break;
		}
		else if (isAP(a,b,c)) cout << "AP " << 2*c - b << endl;
		else if (isGP(a,b,c))  {
			//float fb = static_cast <float> b;
			cout << "GP " << c * (c / b) << endl;

 		}
 	}
 		//else cout << "XX"
	// your code here

	return 0;
}