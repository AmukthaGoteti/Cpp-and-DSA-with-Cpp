#include <iostream>
using namespace std;

int main() {
    int a = 5;
    float b = 5.5;
    char c = 'A';
    bool d = true;
    double e = 9.99;

    unsigned short ushort_int = 56;      // unsigned short integer
    signed short signed_short = -6;      // signed short
    long int long_int = 456789;          // long integer
    long long int ll_int = 456789123;    // long long integer
    int8_t int8_variable = 2;            // 8-bit integer

    cout << "Integer: " << a << endl;
    cout << "Float: " << b << endl;
    cout << "Character: " << c << endl;
    cout << "Boolean: " << d << endl;
    cout << "Double: " << e << endl;

    cout << "Unsigned Short Integer: " << ushort_int << endl;
    cout << "Signed Short Integer: " << signed_short << endl;
    cout << "Long Integer: " << long_int << endl;
    cout << "Long Long Integer: " << ll_int << endl;
    cout << "8-bit Integer: " << static_cast<int>(int8_variable) << endl;

    cout << "Size of int: " << sizeof(a) << " bytes" << endl;
    cout << "Size of float: " << sizeof(b) << " bytes" << endl;
    cout << "Size of char: " << sizeof(c) << " bytes" << endl;
    cout << "Size of bool: " << sizeof(d) << " bytes" << endl;
    cout << "Size of double: " << sizeof(e) << " bytes" << endl;
    cout << "Size of unsigned short int: " << sizeof(ushort_int) << " bytes" << endl;
    cout << "Size of signed short int: " << sizeof(signed_short) << " bytes" << endl;
    cout << "Size of long int: " << sizeof(long_int) << " bytes" << endl;
    cout << "Size of long long int: " << sizeof(ll_int) << " bytes" << endl;
    cout << "Size of int8_t: " << sizeof(int8_variable) << " bytes" << endl;

    // You have to declare 4 variables of a, b, c, d of int, float, double, long long datatype respectively in the main function.
    int a1;
    float b1;
    double c1;
    long long d1;

    cin >> a1;
    cin >> b1;
    cin >> c1;
    cin >> d1;
    cout << a1 << endl;
    cout << b1 << endl;
    cout << c1 << endl;
    cout << d1 << endl;
}
