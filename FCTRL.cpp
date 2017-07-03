#include <iostream>
#include <string>
#include <sstream>
#include <cmath>

using namespace std;

void removeFirstLine() {
	string trash;
	cin >> trash;
}

//counts the power of p in n!

int howManyOfAPrime(int n, int p) {
	int k = 1;
	int count = 0;

	while (true) {
		int temp = floor(n/(pow(p, k)));
		//cout << "temp for n = " << n << " p = " << p << " and k =  " << k << "is::::: " << temp << endl;
		if (!temp) break;
		count+=temp;
		k++;
	}
	return count;
}
int getZeroes(int n) {
	int howManyFives = howManyOfAPrime(n, 5);
	int howManyTwos = howManyOfAPrime(n, 2);
	//cout << "inside getZeroes. 5s and 2s: " << howManyFives << " " << howManyTwos << endl;
	return min(howManyTwos, howManyFives);
}
int main() {
	removeFirstLine();
	// your code here
	int x;
	while ((cin >> x)) {
	//	cout << "read val " << x << endl;
		cout << getZeroes(x) << endl;
	}

	return 0;
}

//calculate no. of zeros in decimal representation of x! given x
