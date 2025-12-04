#include <iostream>
using namespace std;

int main() {
    // Operators Example
    int a = 10 + 20;
    cout << a << endl;
    
    // Arithmetic Operator
    
    int b = 8, c = 3;
    // Addition
    cout << "b + c = " << b + c << endl;
    // Subtraction
    cout << "b - c = " << b - c << endl;
    // Multiplication
    cout << "b * c = " << b * c << endl;
    // Division
    cout << "b / c = " << b / c << endl;
    // Modulo
    cout << "b % c = " << b % c << endl;
    // Increament
    cout << "++b = " << ++b << endl;
    // Decreament
    cout << "--c = "<< --c << endl;
    
    // Logical Operator
    
    int d = 6, e = 4;
    // Logical AND operator
    cout << "d && e is " << (d && e) << endl;
    // Logical OR operator
    cout << "d || e is " << (d || e) << endl;
    // Logical NOT operator
    cout << "!e is " << (!e) << endl;
    
    // Bitwise Operator
    int f = 6, g = 4;
    // Binary AND operator
    cout << "f & g is " << (f & g) << endl;
    // Binary OR operator
    cout << "f | g is " << (f | g) << endl;
    // Binary XOR operator
    cout << "f ^ g is " << (f ^ g) << endl;
    // Left Shift operator
    cout << "f << 1 is " << (f << 1) << endl;
    // Right Shift operator
    cout << "f >> 1 is " << (f >> 1) << endl;
    // One’s Complement operator
    cout << "~(f) is " << ~(f) << endl;
    // Assignment Operator.
    cout << "f = " << f << endl;
    //  Add and Assignment Operator.
    cout << "f += g is " << (f += g) << endl;
    // Subtract and Assignment Operator.
    cout << "f -= g is " << (f -= g) << endl;
    //  Multiply and Assignment Operator.
    cout << "f *= g is " << (f *= g) << endl;
    //  Divide and Assignment Operator.
    cout << "f /= g is " << (f /= g) << endl;
    
    // Conditional Operator
    int h = 3, i = 4;
    int result = (h < i) ? h : i;
    cout << "The greatest number "
              "is " << result << endl;
    
    return 0;
}
