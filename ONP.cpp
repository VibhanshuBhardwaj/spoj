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

// Input:
// 3
// (a+(b*c))
// ((a+b)*(z+x))
// ((a+t)*((b+(a+c))^(c+d)))
//'5'
// Output:
// abc*+
// ab+zx+*
// at+bac++cd+^*

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
char toChar(int i) {
//	cout << "int received " << i << endl;
	char c = '0' + i;
//	cout << "char sent " << c << endl;
	return c;
}

bool isOperator(char c) {
	char arr[5] = {'+', '-', '/', '*', '^'};
	for (int i = 0; i < 5; i++) {
		if (arr[i]==c) return true;
	}
	return false;
}
string getRPN(string input)  {
	string result ="";
	stack <char> s;
	map <char, string> m;
	//push things on stack when ( 
	//pop things off stack when )
	for (int i  =0; i< input.length(); i++) {
		char current = input[i];
		//cout << "current " << current << endl;
		
		if (current == ')') {
			cout << "inside if" << endl;
			//cout << s.top() << endl;
			while((s.size()> 0)&& (s.top() != '(')) {
				cout << "inside while w/ top " << s.top() << endl;
				char popped = s.top();
				cout << "here" << endl;
				s.pop();
				cout << "fucl"<< endl;
				if (s.size()) cout << "new top " << s.top()<<endl;
				if (isOperator(popped)) result+=popped;
				// else if (m.count(popped) == 1) {
				// //	cout << "looking up in map . pre result " << result << endl;
				// 	result+=m.at(popped); //maybe just add key here?
				// //	cout << "after append " << result << endl;
					
				// }
				else {//it's a variable like a
					result.insert(0, 1,popped); //insert at the start of array
				}
				cout << "loool" << endl;
				//m.insert(make_pair())

			}
			//cout << "one bracket closed " << endl;
			//char charI = static_cast<char>(i);
			//cout << "charI " << charI << endl;
			cout << "adding to map " << toChar(i) << ": " << result << endl;
			s.push(toChar(i));
			cout << "s size " << s.size() << endl;
			m.insert(make_pair(toChar(i), result));
		}
		else if (current != '(') s.push(current);
	}

	return result;
}
int main() {
	removeFirstLine();
	// your code here
	string input;
	while (cin >> input) {
		cout << getRPN(input) << endl;
	}

	return 0;
}