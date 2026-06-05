#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int num;
    cout << "Enter a number: ";
    cin >> num;

    for(; num != 0; num = num / 10) {
        sum = sum + (num % 10);
        
    }

    cout << "Sum of digits = " << sum;

    return 0;
}
