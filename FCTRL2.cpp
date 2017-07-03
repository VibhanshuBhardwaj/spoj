#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

class BigNumber {
	vector<int> *arr;
public:
	BigNumber() {
	//	cout << "ctor called " << endl;
		arr = new vector<int>();
		//cout << arr->size() << endl;
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
 		

 		cout << "new bignumber " << endl;
 		this->prettyPrint();
 	}

 	string mytoString(int input) {
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
	cout << "returning int " << ret << endl;
	return ret;
	}
	int modTen(BigNumber* b) {
		int len = b->size();
		return b->at(len-1);
	}
 	BigNumber* operator*(int k) {
 		//cout << "inside opeartor k = " << k << endl;
 		int carry = 0;
 		int ogsize =  arr->size();
 		//cout << "ogsize " << ogsize << endl;
 		for (int i = 0 ; i < ogsize; i++) {
 			//cout <<"ar size " << ogsize << endl;
 			BigNumber temp = BigNumber(1);
 			temp = temp* ((*arr)[i]) ;
 			temp = temp* k;
 			int units_place = modTen(&temp);
 			long long tens_place = temp / 10;
 			cout << "old item at " <<i << "th position " << (*arr)[i] << endl;
 			(*arr)[i] = units_place + carry;
 			cout << "temp, units_place, tens_place " << temp << " " << units_place << " " << tens_place << endl;
 			cout << "new item at " <<i << "th position " << (*arr)[i] << endl;
 		//	cout << "og i " << i << endl;
 			if (i!=ogsize-1) { 
 				carry= tens_place; //BITCH
 			}
 			
 			else if (tens_place!=0){
 				string toAppend = mytoString(tens_place);
 				cout << "toAppend " << toAppend << endl;
 				for (int i = toAppend.length()-1; i>=0; i--) {
 					//cout << "i " << i <<endl;
 					cout << "before append " << endl;
 				this->prettyPrint();
 			//		cout<< "before appending size " << arr->size() << endl;
 			//		cout << "being appended to arr " << toAppend[i] << endl;
 					arr->push_back(toInt(toAppend[i]));
 					cout << "just after push_back " << endl;
 			//		cout << "new size " << arr->size() << endl;
 					this->prettyPrint();
 				}
 				//cout << "tens_place " <<  tens_place << endl;
 				//while(tens_place/10 !=0 ){ 
 				//	arr->push_back(tens_place/10);
 				//	tens_place = tens_place % 10
 				//}
 			}

 			//cout << (*arr)[i] << endl;

 		}
 		cout << "intermediate result. just multiplied by " << k << endl;
 		this->prettyPrint();
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
string mytoString(int input) {
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
	cout << "received char " << c << endl;
	int ret = c - '0';
	cout << "returning int " << ret << endl;
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
		cout << "final answer ";
		bn->prettyPrint();
		delete bn;
		//bn
	//	cout << "tada " << endl;
		//cout << factorial(x) << endl;
	}
	// your code here

	return 0;
}