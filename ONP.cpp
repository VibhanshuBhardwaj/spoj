#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <stack>
#include <algorithm>

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
	//push things on stack when ( 
	//pop things off stack when )
	for (int i  =0; i< input.length(); i++) {
		char current = input[i];
		//cout << "current " << current << endl;
		
		if (current == ')') {
		//	cout << "inside if" << endl;
			cout << s.top() << endl;
			while(s.top() != '(') {
				//cout << "inside while w/ top " << s.top() << endl;
				char popped = s.top();
				s.pop();
				//cout << "popped" << endl;
				if (isOperator(popped)) result+=popped;
				else result.insert(0, 1,popped); //s.push(result) push it back on stack

			}
		}
		else s.push(current);
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