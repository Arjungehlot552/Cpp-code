#include <iostream>
using namespace std;

// Constructors and Distructors ------->

// Constructor Concept

class Complex
{
    int a, b;

public:
    // Creating a constructor
    //  constructor is a special member function with the same name as of the class.
    //  It is used to initialize the objects of its class
    //  It is automatically invoked whenever an object is created
    Complex(void); // constructor declaration
    void printNumber()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(void)  //---> This is default constructor as it accepts no parameters
{
    a = 10;
    b = 20;
}

int main()
{

    Complex c1,c2,c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();

    return 0;
}


// Characteristic of Constructor :---

/*1. A constructor should be declared in the public section of the class
  2. They are automatically invoked whenever the object is created
  3. They cannot return values and do not have return types
  4. It can have default arguments
  5. We cannot refer to their address */
