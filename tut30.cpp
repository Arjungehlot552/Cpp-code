#include<iostream>
using namespace std;

// Default Constructors and Parameterized 

// Default constructor -- > ek esaa contructor jooo koi argument nhi leta

class Complex
{
    int a, b;

public:
    Complex(int,int); // constructor declaration

    void printNumber()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(int x,int y)  //---> This is a Parameterized  constructor as it takes 2 parameters
{
    a = x;
    b = y;
}

int main(){
    // Implicit call
    Complex a(4,6);
    a.printNumber();

    // Explicit call
    Complex b = Complex(5,7);
    b.printNumber();
    return 0;
}   