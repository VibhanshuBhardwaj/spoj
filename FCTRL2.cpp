#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

class BigNumber {
	
public:
	vector<long > *arr;
	BigNumber() {
		arr = new vector<long >();
 	}
 	long size() {
 		return arr->size();
 	}
 	long at(long i) {
 		return arr->at(i);
 	}
 	BigNumber(long n) {
 		arr = new vector<long >();
 		string s = to_string(n);
 		for (long k = s.length() - 1; k >=0 ; k-- ) {
 			long i = s[k] - '0';
 		//	cout << "pushing back " << i << endl;
 			arr->push_back(i);
 		}
 	}

 	string intToString(long input) {
		ostringstream ss;
		ss << input;
		return ss.str();
		}
	long toInt(string s) {
		istringstream ss(s);
		long r;
		ss >> r;
		return r;
	}
	long toInt(char c) {
		long ret = c - '0';
		return ret;
	}

 	BigNumber* operator*(long k) {
 		long carry = 0;
 		long ogsize =  arr->size();
 		for (long i = 0 ; i < ogsize; i++) {
 			long digit_multip = this->at(i) * k ;
 			long net = digit_multip + carry;
 			long units_place = net % 10;
 			(*arr)[i] = units_place;
 			carry = net /10;

 		}
 		if (carry > 0) {
 			string sval = intToString(carry);
 			for (long i = sval.length()-1; i >=0 ; i--) {
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
 		for (long i = arr->size()-1; i>=0; i--) {
 			cout << arr->at(i);
 		} 
 		cout << endl;
 	}

};

void removeFirstLine() {
	string trash;
	cin >> trash;
}


BigNumber* factorial(long n) {
	if (n == 0) return new BigNumber(1);
	BigNumber * bn = new BigNumber(1);
	for (long i = 1; i <=n ; i++) bn = (*bn)*i;
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
