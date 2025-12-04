#include <iostream>
using namespace std;

int sum(int a, int b);   // Function prototype
int evenlyDivides(int n);

int main() {
    int num1, num2, n;
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;

    cout << "The sum is: " << sum(num1, num2) << endl;
    evenlyDivides(n);
    return 0;
}

int sum(int a, int b) {
    return a + b;
}

int evenlyDivides(int n) {
    cout << "Enter n: ";
    cin >> n;
    int count = 0;
    int original = n;
    n = abs(n);                 // handle negative values
    int temp = n;

    while (temp > 0) {
        int d = temp % 10;      // extract last digit
        if (d != 0 && original % d == 0) {
            count++;
        }
        temp /= 10;             // move to next digit
    }
    return count;
}
