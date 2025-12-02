#include <iostream>
#include <vector>
using namespace std;

int main() {
    // if statement
    
    int i = 10;
    if (i < 15) {
        cout << "i is less than 15" << endl;
    }
    
    int n = 8;
    if (n % 2 == 0) {
        cout << "Even" << endl;
    }
    
    if (n % 2 == 0) {
        if (n < 10) {
            cout << "Even and less than 10" << endl;
        }
    }
    
    int m = 5;
    if (m <= 10 && m >= 0) {
        cout << "In range" << endl;
    }
    
    // if...else statement
    
    int j = 10;
    if (j < 15) {
        cout << "j is less than 15" << endl;
    }
    else {
        cout << "j is not less than 15" << endl;
    }
    
    int k = 7;
    if (k % 2 == 0) {
        cout << "k is even" << endl;
    }
    else {
        cout << "k is odd" << endl;
    }
    
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    if (a > b) {
        if (a > c) {
            cout << "a is the largest" << endl;
        }
        else {
            cout << "c is the largest" << endl;
        }
    }
    if (b > a) {
        if (b > c) {
            cout << "b is the largest" << endl;
        }
        else {
            cout << "c is the largest" << endl;
        }
    }
    
    // if else-if statement
    
    int x;
    cout << "Enter x: ";
    cin >> x;
    if (x > 10) {
        cout << "x is more than 10" << endl;
    }
    else if (x == 10) {
        cout << "x is equal to 10" << endl;
    }
    else {
        cout << "x is less than 10" << endl;
    }
    
    // Nested if
    
    int e = 20, f = 10, g = 2;
    if (e > f) {
            // if this condition also turns out to be
            // true then the statements under
            // this block will get executed
            if (e > g) {
                cout << "e is the largest " << endl;
            }
        }

    int l = 20, o = 10, q = 2;
    if (l == 20) {
        if (o == 10) {
            if (q == 2) {
                cout << "Sandeep Sir is Great!!" << endl;
            }
        }
    }
    
    // Nested if-else
    
    int z = 6;
    if (z % 2 == 0) {
        if (z % 3 == 0) {
            cout << "Divisible by 2 and 3" << endl;
        }
        else {
            cout << "Divisible by 2 but not 3" << endl;
        }
    }
    else {
              cout << "Not Divisible by 2" << endl;
    }
    
    int year = 2024;
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                cout << year << " is a leap year" << endl;
            }
            else {
                cout << year << " is not a leap year" << endl;
            }
        }
        else {
            cout << year << " is a leap year" << endl;
        }
    }
    else {
        cout << year << " is not a leap year" << endl;
    }
    
    // Switch Case
    
    // Print Day Name
    int day;
    cout << "Enter Day: " ;
    cin >> day;
    
    switch (day) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursay" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid Input" << endl;
            break;
    }
    
    // Calculator
    char C;
    int X, Y;
    cout << "Enter 2 Numbers: ";
    cin >> X >> Y;
    cout << "Enter a Operator (+, -, *, /): ";
    cin >> C;
    switch (C) {
        case '+':
            cout << X << " + " << Y << " = " << X + Y << endl;
            break;
        case '-':
            cout << X << " - " << Y << " = " << X - Y << endl;
            break;
        case '*':
            cout << X << " * " << Y << " = " << X * Y << endl;
            break;
        case '/':
            cout << X << " / " << Y << " = " << X / Y << endl;
            break;
        default:
            cout << "Exiting" << endl;
    }
    
    // for loop
    // print 'hello world' 5 times
    for (int i = 0; i < 5; i++) {
        cout << "Hello Wrold!" << endl;
    }
    // print numbers 1 to 5
    for (int i = 1; i <= 5; i++) {
        cout << i << " " << endl;
    }
    
    // while loop
    // print numbers 1 to 5
    int v = 1;
    while (v <= 5) {
        cout << v << " " << endl;
        v++;
    }
    
    // do while loop
    // print numbers 1 to 5
    int t = 1;
    do {
        cout << t << ' ' << endl;
        t++;
    } while (t <= 5);
    
    // for each loop
    // print 1 to 5 by for each loop
    vector<int> arr = {1, 2, 3, 4, 5};
    cout << "interating by value" << endl;
    for (auto it: arr) {
        cout << it << " ";
    }
    cout << endl;
    cout << "interating by refernce" << endl;
    for (auto &it: arr) {
        cout << it << " ";
    }
    cout << endl;
    
    //for(;;) {
        //cout << "This loop will run forever. \n";
    //}
    
    // Nested Loops
    // Print 2-D Array
    for (int I = 0; I < 3; I++) {
        for (int J = 0; J < 2; J++) {
            cout << "i = " << i << ", j = " << j << endl;
        }
    }
    
    // Break out of the Loop
    for (int u = 0; u < 5; u++) {
        if (u == 2) break;
        cout << u << endl;
    }
    
    // Skip a Particular Iteration
    for (int U = 0; U < 5; U++) {
        if (U == 2) continue;
        cout<< U << endl;
    }
    
    return 0;
}
