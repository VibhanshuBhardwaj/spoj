//
// Created by Vibhanshu Bhardwaj on 7/8/17.
//
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <stack>
#include <algorithm>
#include <map>


//maybe there's a soln without using array of column
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
    //cout << "Hello world" << endl;
    int n_columns;
    while (cin >> n_columns) {
        if (n_columns==0) return 0;
        //cout << "n_columns " << n_columns << endl;
        string encrypted;
        cin >> encrypted;
        // int n_rows ;
        // n_rows = encrypted.length() / n_columns;

        string columns[n_columns];
        for (int i = 0; i < encrypted.length(); ++i) {

            int which_column;
            which_column = (i % (n_columns*2));
            if (which_column > n_columns -1 ) {
                which_column = (n_columns*2) - ( (i%(n_columns*2)) + 1);
            }
           // cout << "character " << encrypted[i]  << " for i = " << i << " is going to column " << which_column << endl;
            columns[which_column]+=encrypted[i];


            //columns[0] =
            //i = 0, 9, 10, 19, 20 go to 0th column for n_columns = 5;. in column 0, all i for which i %10 =0, or 10 - (i%10)+1= 0
            //i = 1, 8, 11, 18,  ... go to 1st column. 8 goes in the 5- ((8 % 5) + 1)
            //i = 2, 7, 12, 17, ... go to 2nd column
            //i = 3, 6, 13, 16, ... go to 3rd column
            //i = 4, 5, 14,

            //in column c, all i for which (i%n_columns*2) == c or N_columns*2 - (i%n_columns) + 1 == c
        }

        for (int i = 0; i < n_columns; i++) {
            cout << columns[i];
        }
        cout << endl;


    }

    // your code here

    return 0;
}