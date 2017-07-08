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

int main() {
    //removeFirstLine();
    // your code here
    int n;
    vector<set<int> > v;
    cin >> n;
        int count = 0;
        for (int l = 1; l <=n; l++) {
            for (int b = 1; b <=n ; b++) {
                if ((l*b) <= n) {
                    set <int> s ;
                    s.insert(l);
                    s.insert(b);

//                    pair <int, int> p(l, b);
//                    pair <int, int> q(b, l);
//
//                    vector<pair<int, int> >::iterator itp = find (v.begin(), v.end(), p);
//                    vector<pair<int, int> >::iterator itq = find (v.begin(), v.end(), q);
                    vector<set<int> >::iterator it = find (v.begin(), v.end(), s);
                    if ( it == v.end()) {
                        v.push_back(s);
                       // v.push_back(q);
                        count++;
                    }
                }

            }
        }
        cout << count;
       // return 0;
    return 0;
}