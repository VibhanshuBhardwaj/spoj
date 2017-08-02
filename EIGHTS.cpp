//
// Created by Vibhanshu Bhardwaj on 8/1/17.
//

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
    removeFirstLine();
    unsigned long long int read;
    while (cin >> read) {
        unsigned long long int n250s = read - 1;
        unsigned long long int result = n250s*250 + 192;
        cout << result << endl;
    }
    // your code here


    return 0;
}