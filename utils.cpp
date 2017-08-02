#include<bits/stdc++.h>

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
string toString(unsigned long long input) {
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
	return '0' + i;
}

int main() {
	// removeFirstLine();
	// your code here
    for (int i = 1; i <=1000; i++) {
        unsigned long long r = i * i * i;
        string s = toString(r);
        if (r < 888) continue;
        if (s.substr(s.length()-3) == "888") {
            cout << "found one: " << i << endl;
        }
    }

	return 0;
}