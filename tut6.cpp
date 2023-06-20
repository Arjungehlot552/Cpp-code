#include <iostream>
// There are two types of header files
// 1.System header files : It comes with the compiler
// 2. User defined header files : It is Written by the programer
// ex- #include "this.h"--> This will produce an error of this.h is no present in the current cpp files.

// if we need more header
// visit The site --> en.cppreference.com 
using namespace std;
int main()
{
    int a = 4, b = 5;
    cout << "Operator in c++:" << endl;
    cout << "FOllowing are the types of operators in c++" << endl;
    //  Arithmetic operators
    cout << "The value of a + b is " << a + b << endl;
    cout << "The value of a - b is " << a - b << endl;
    cout << "The value of a * b is " << a * b << endl;
    cout << "The value of a / b is " << a / b << endl;
    cout << "The value of a % b is " << a % b << endl;
    cout << "The value of a++ is " << a++ << endl;
    cout << "The value of a-- is " << a-- << endl;  
    cout << "The value of ++a is " << ++a << endl;
    cout << "The value of --a is " << --a << endl;

    cout<<endl;

    // Assignment Operator
    // int a  = 3, b = 9;
    // char d = 'd';

    // Comparision operators
    // if we see 0 = false;         
    // if we see 1 = true;

    cout << "FOllowing are the Comparision operators in c++" << endl;
    cout << "The value of a==b is :" << (a == b) << endl;
    cout << "The value of a<=b is :" << (a <= b) << endl;
    cout << "The value of a>=b is :" << (a >= b) << endl;
    cout << "The value of a!=b is :" << (a != b) << endl;
    cout << "The value of a<b is :" << (a < b) << endl;
    cout << "The value of a>b is :" << (a > b) << endl;


    // Logical Operators
    cout << "FOllowing are the Comparision operators in c++" << endl;
    cout << "The value of this logical AND operator ((a==b) && (a<b)) is :" << ((a==b) && (a<b))<< endl;
    cout << "The value of this logical OR operator ((a==b) || (a<b)) is :" << ((a==b) || (a<b))<< endl;
    cout << "The value of this logical NOT operator (!(a==b))  is :" << (!(a==b)) << endl;
    return 0;
}
