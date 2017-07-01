#include <iostream>
#include <cmath>
#include <sstream>

using namespace std;

void removeFirstLine() {
	string trash;
	cin >> trash;
}

bool isPrime(int x) {
	if (x == 1) return false;
	for (int i = 2; i<= sqrt(x); ++i) {
		if ((x % i) == 0 ) return false;
	}
	return true;
}

int main() {
	removeFirstLine();
	int x, y;
	while ((cin >> x) && (cin >> y)) { //better innit?
		for (int i = x; i<=y; i++) {
			bool isP = isPrime(i);
			if (isPrime(i)) cout << i << endl;
		}	
	}
	return 0;
}