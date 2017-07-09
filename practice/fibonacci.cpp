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

int fib_rec(int n) { //recursive

    if (n<=1) return n;
    else return fib_rec(n-1) + fib_rec(n-2);

}

int fib_mem(int n) { //memoization
    if (n <=1) return n;
    int a = 0;
    int b = 1;
    for (int i = 2; i < n; i++) {
        int next = a+b;
        a = b;
        b = next;
    }
    return a+b;
}
int fib_tab(int n) { //tabulation
    int arr[n];
    arr[0]=0;
    arr[1]=1;
    for(int i = 2; i <=n; i++) {
        arr[i]=arr[i-1]+arr[i-2];
    }
    return arr[n];
}


int main() {
    removeFirstLine();
    int n;
    //cin >> n;

    while (cin >> n) {
        cout << fib_tab(n) << endl;
       // for (int i = 0; i <=n; i++) {
       //     cout << fib_tab(i) <<  " ";
       // }
       // cout << endl;
    }
    // your code here

    return 0;
}