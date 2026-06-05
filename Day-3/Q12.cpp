#include <iostream>
using namespace std;

int main() {
    int a, b, gcd = 1;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    int minNum = (a < b) ? a : b;

    for(int i = 1; i <= minNum; i++) {
        if(a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }

    int lcm = (a * b) / gcd;

    cout << "LCM = " << lcm << endl;

    return 0;
}