//
// Created by Vibhanshu Bhardwaj on 7/31/17.
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
    string line;
    unsigned long long int nStudents;
    unsigned long long int nCandies;
    while (getline(cin, line)) {
        if (line=="") {
            cin >> nStudents;
            for (unsigned long long int k = 0; k < nStudents; k++) {
                unsigned long long int candies;
                cin >> candies;
                candies = candies % nStudents;
                nCandies+=candies;

            }
            if (nStudents ==0) continue;
            if ((nCandies % nStudents) == 0) cout << "YES" << endl;
            else cout << "NO" << endl;
            nStudents = 0; nCandies = 0;
        }
    }
    return 0;
}