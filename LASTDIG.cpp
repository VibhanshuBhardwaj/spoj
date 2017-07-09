#include <iostream>
using namespace std;
int main() {
    string trash;
    cin >> trash;
    int base;
    int exponent;
    while ((cin >> base) && (cin >> exponent)) {

        int result =1;
        int period = 0;
        int temp = base;
        while (true) {
            temp*=base;
            temp = temp % 10;
            period++;
            if (base % 10 == temp) break;
        }
        int real_exp;
        if (!exponent) real_exp = 0;
        else  {
            real_exp = exponent % period;
            if (!real_exp) real_exp =period;
        }
        for (int i = 0; i < real_exp; i++) result*=base;
        cout << result % 10 << endl;
    }
}