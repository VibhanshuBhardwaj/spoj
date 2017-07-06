#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

class BigNumber {
	
public:
	vector<int > *arr;
	BigNumber() {
		arr = new vector<int >();
 	}
 	int size() {
 		return arr->size();
 	}
 	int at(int i) {
 		return arr->at(i);
 	}
 	BigNumber(int n) {
 		arr = new vector<int >();
 		string s = to_string(n);
 		for (int k = s.length() - 1; k >=0 ; k-- ) {
 			int i = s[k] - '0';
 		//	cout << "pushing back " << i << endl;
 			arr->push_back(i);
 		}
 	}

 	string intToString(int input) {
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
		int ret = c - '0';
		return ret;
	}

 	BigNumber* operator*(int k) {
 		int carry = 0;
 		int ogsize =  arr->size();
 		for (int i = 0 ; i < ogsize; i++) {
 			int digit_multip = this->at(i) * k ;
 			int net = digit_multip + carry;
 			int units_place = net % 10;
 			(*arr)[i] = units_place;
 			carry = net /10;

 		}
 		if (carry > 0) {
 			string sval = intToString(carry);
 			for (int i = sval.length()-1; i >=0 ; i--) {
 				arr->push_back(toInt(sval[i]));
 			}
 		}
 		return this;
 	}
 void print() {
 		cout << "raw printitng " << endl;
 		cout << "[ ";
 		for (int i = 0 ; i<arr->size(); i++) {
 			cout << arr->at(i)<< " " ; 
 		}
 		cout << "]";
 		cout << endl;
 	}
 
 	void prettyPrint() {
 		for (int i = arr->size()-1; i>=0; i--) {
 			cout << arr->at(i);
 		} 
 		cout << endl;
 	}

};

void removeFirstLine() {
	string trash;
	cin >> trash;
}


BigNumber* factorial(int n) {
	if (n == 0) return new BigNumber(1);
	BigNumber * bn = new BigNumber(1);
	for (int i = 1; i <=n ; i++) bn = (*bn)*i;
	return bn;
}
int main() {
	removeFirstLine();
	int x;
	while (cin >> x) {
		BigNumber * bn = factorial(x);
		bn->prettyPrint();
		delete bn;
	}
	return 0;
}
