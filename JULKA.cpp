//
// Created by Vibhanshu Bhardwaj on 7/9/17.
//

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

int main() {
    string line;
    unsigned long long diff;

    while(getline(cin, line) && (cin >> diff)) {
        int* arr = new int[line.length()];
        for (unsigned long long i = 0; i <line.length(); ++i) {
            arr[i]=toInt(line[i]);
        }
        unsigned long long nat;
        unsigned long long kat;
        //kat + kat + diff = BigNumber;
        // kat = (BigNumber - diff)/2; //guaranteed to be int?
        // nat = (BigNumber + diff)/2;


    }

    return 0;
}