#include <iostream>
#include <cmath>
#include <sstream>

using namespace std;

void removeFirstLine() {
	//cout << "called" << endl; 
	string trash;
	cin >> trash;
	//cout << "trashed " << trash << endl;
}
bool isPrime(int x) {
	if (x == 1) return false;
	//cout << "given: " << x << endl;
	//double upper_bound = sqrt(x);
	//cout << "sprt " << sqrt(x) << endl;
	for (int i = 2; i<= sqrt(x); ++i) {
		if ((x % i) == 0 ) {
			//cout << "inside if for x and i =to " << x << i << endl;
			return false;
		}
	}
	return true;
}

int main() {
	removeFirstLine();
	//string input;
	int x, y;
	while ((cin >> x) && (cin >> y)) {
		//cout << "input: " << input.length() << endl;
	//	istringstream ss(input);
		//
		//if ((ss >> x) && (ss >> y)) { //checks for bad input as well. eg there should onl
		for (int i = x; i<=y; i++) {
			bool isP = isPrime(i);
			//cout << "is i = " << i << " prime? " << isP << endl;
			//cout << "is i = " << i << " prime? " << isPrime(i) << endl;
			if (isPrime(i)) cout << i << endl;
		}
		//}

	}
	// while (getline(cin, input)) {
	// 	cout << "input: " << input.length() << endl;
	// 	istringstream ss(input);
	// 	int x, y;
	// 	if ((ss >> x) && (ss >> y)) { //checks for bad input as well. eg there should onl
	// 		for (int i = x; i<=y; i++) {
	// 			if (isPrime(i)) cout << i << endl;
	// 		}
	// 	}

	// }
	// your code goes here
	return 0;
}