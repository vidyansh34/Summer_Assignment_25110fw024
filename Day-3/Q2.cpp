#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of prime numbers to print: ";
    cin >> n;

    int count = 0;
    int num = 2;

    while(count < n) {
        bool prime = true;

        for(int i = 2; i < num; i++) {
            if(num % i == 0) {
                prime = false;
                break;
            }
        }

        if(prime) {
            cout << num << " ";
            count++;
        }

        num++;
    }

    return 0;
}