#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

class BigNumber {
	
public:
	vector<int> *arr;
	BigNumber() {
	//	cout << "ctor called " << endl;
		arr = new vector<int>();
		//cout << arr->size() << endl;
 	}
 	int size() {
 		return arr->size();
 	}
 	int at(int i) {
 		return arr->at(i);
 	}
 	BigNumber(int n) {
 		arr = new vector<int>();
 		string s = to_string(n);
 		//cout << "s " << s << endl;
 		for (int k = s.length() - 1; k >=0 ; k-- ) {
 			int i = s[k] - '0';
 			//cout << "val i = "  << i << " when s[k] = " << s[k] << endl;
 			arr->push_back(i);
 	//		cout <<"after push back" << endl;
 		}
 		//this->print();
 	//	cout<< "over heree" << endl;
 		

 	//	cout << "new bignumber " << endl;
 		//this->prettyPrint();
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
		//cout << "FUCK";
		//cout << "received char " << c << endl;
	int ret = c - '0';
	//cout << "returning int " << ret << endl;
	return ret;
	}
	int modTen(BigNumber* b) {
		int len = b->size();
		return b->at(len-1);
	}
	BigNumber* get_tens(BigNumber* b) {
		for (int i =1; arr->size(); i++) {
			arr[i-1] = arr[i];
		}
		arr->pop_back();
	}
	// BigNumber* operator+(BigNumber* toAdd) {
	// 	int smaller = min(arr->size(), toAdd->size());
	// 	int carry=0;
	// 	bool append =  false;
	// 	for (int i = 0; i< smaller; i++) {
	// 		int newval = arr->at(i) + toAdd->at(i);
	// 		(*arr)[i] = (newval % 10) +  carry;
	// 		carry =  newval / 10;
	// 		if (i== smaller - 1 ) {
	// 			while(carry!=0) {
	// 				if (i >=arr->size()) {append=true; }
	// 				newval = arr->at(i) + carry;
	// 				(*arr)[i] = newval;
	// 				carry =  newval / 10;
	// 				i++; 
	// 			}
	// 		}
	// 	}
	// 	if (append) arr->insert(arr->begin(),1);
	// 	return this;
	// }
	BigNumber* operator*(BigNumber* b) {
		for (int i =0; i< b->size(); i++) {

		}
	}
 	BigNumber* operator*(int k) {
 		if (k>99){
 			cout <<"shouldn't happen ";
 			throw;
 		}
 		//cout << "inside opeartor k = " << k << endl;
 		int carry = 0;
 		int ogsize =  arr->size();
 		//cout << "ogsize " << ogsize << endl;
 		for (int i = 0 ; i < ogsize; i++) {
 			//cout <<"ar size " << ogsize << endl;
 			int digit_multip = this->at(i) * k ;
 			int net = digit_multip + carry;
 			int units_place = net % 10;
 			(*arr)[i] = units_place;
 			carry = net /10;


 			// int temp = ((*arr)[i]) * k ;
 			// temp += carry;
 			// int units_place =temp %10;
 			// int carry = temp - units_place;
 			// cout << "old item at " <<i << "th position " << (*arr)[i] << endl;
 			// (*arr)[i] = units_place + carry;
 			// //cout << "temp, units_place, tens_place " << temp << " " << units_place << " " << tens_place << endl;
 			// cout << "new item at " <<i << "th position " << (*arr)[i] << endl;
 		//	cout << "og i " << i << endl;
 			//if (i!=ogsize-1) { 
 			//	carry= tens_place; //BITCH
 			//}
 			
 			// else if (tens_place!=0){
 			// 	string toAppend = intToString(tens_place);
 			// 	cout << "toAppend " << toAppend << endl;
 			// 	for (int i = toAppend.length()-1; i>=0; i--) {
 			// 		//cout << "i " << i <<endl;
 			// 		cout << "before append " << endl;
 			// 	this->prettyPrint();
 			// //		cout<< "before appending size " << arr->size() << endl;
 			// //		cout << "being appended to arr " << toAppend[i] << endl;
 			// 		arr->push_back(toInt(toAppend[i]));
 			// 		cout << "just after push_back " << endl;
 			// //		cout << "new size " << arr->size() << endl;
 			// 		this->prettyPrint();
 			// 	}
 			// 	//cout << "tens_place " <<  tens_place << endl;
 			// 	//while(tens_place/10 !=0 ){ 
 			// 	//	arr->push_back(tens_place/10);
 			// 	//	tens_place = tens_place % 10
 			// 	//}
 			// }

 			//cout << (*arr)[i] << endl;

 		}
 		if (carry > 0) {
 			//cout <<"carry " << carry <<endl;
 			//digits need to be increased
 			string sval = intToString(carry);
 			for (int i = 0; i < sval.length(); i++) {
 				arr->push_back(toInt(sval[i]));
 				//arr->insert(arr->begin(),toInt(sval[i]));
 			}
 		}
 		//cout << "intermediate result. just multiplied by " << k << endl;
 		//this->prettyPrint();
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
	//cout << "received char " << c << endl;
	int ret = c - '0';
	//cout << "returning int " << ret << endl;
	return ret;
	//cout <<
}

BigNumber* factorial(int n) {
	if (n == 0) return new BigNumber(1);
	BigNumber * bn = new BigNumber(n);
	for (int i = n-1; i >=1 ; i--) bn = (*bn)*i;
	return bn;
}
int main() {
	removeFirstLine();
	int x;
	while (cin >> x) {
	//	cout << "inside while x = " << x << endl;
		BigNumber * bn = factorial(x);
		//BigNumber * bn = new BigNumber(336);
		//bn = (*bn)*5;
		//cout << "final answer ";
		bn->prettyPrint();
		delete bn;
		//bn
	//	cout << "tada " << endl;
		//cout << factorial(x) << endl;
	}
	// your code here

	return 0;
}