//
// Created by Vibhanshu Bhardwaj on 7/8/17.
//

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <stack>
#include <utility>
#include <algorithm>
#include <set>
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

int howMany(int area) {
    return area /2 ;
   // while()
}
//how many possible rectangles when one side is one particular value
int main() {
    //removeFirstLine();
    // your code here
    int n;

    cin >> n;
    int count = 0;
    int area = n;
    while (area > 0) {
        vector <int> seen;
        for (int side = 1; side <= area; side++) {

            if ((area % side) == 0) {//can make rectangle

                vector<int>::iterator it = find(seen.begin(), seen.end(), side);
                if (it == seen.end()) {
                    seen.push_back(area / side);
                    count++;
                }
            }
        }
        area--;
    }
    cout << count;
}
