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
int maxVal(int c) {
    return c;
}
//create an array of ints. index represents the denomination of the coin and the value is the maximum amt of $$.

int main() {
    unsigned int n;
    while (cin >> n) {
        unsigned int *arr = new unsigned int[n+1];
        for (long i =0 ;i <= n; i++) {
            arr[i] = i;
            unsigned int half = i /2;
            unsigned int third = i/3;
            unsigned int fourth = i/4;
            auto sum = arr[half] + arr[third] + arr[fourth];
            if (sum > i) { //NOT sum > n
                arr[i] = sum;

            }

        }
        cout << arr[n] << endl;
        delete[] arr;
    }

    return 0;
}