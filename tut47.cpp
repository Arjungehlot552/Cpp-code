// Solution

#include <iostream>
#include <cmath>
using namespace std;

/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utillity function and performs + , - , * , / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utillity function and performs any four scientific operation of  your choice and displays the results using another function.

    Create another class HybridCalculator and inherite it using these 2 classes:
    Q1 . What type of inheritance are you using? --> multiple inheritance.
    Q2 . Which mode of inheritance are you using? --> public simpleCalculator , public ScientificCalculator
    Q3 . Create an object of HybridCalculator and using results of simple and scientific calculator.
    Q4 . How is code reusibility implemented?
*/

class simpleCalculator
{
    int a, b;

public:
    void getDataSimple()
    {
        cout << "Enter the value of a :" << endl;
        cin >> a;
        cout << "Enter the value of b :" << endl;
        cin >> b;
    }
    void performOperationsSimple()
    {
        cout << "The value of a + b is : " << a + b << endl;
        cout << "The value of a - b is : " << a - b << endl;
        cout << "The value of a * b is : " << a * b << endl;
        cout << "The value of a / b is : " << a / b << endl;
    }
};

class ScientificCalculator
{
    int a, b;

public:
    void getDataScientific()
    {
        cout << "Enter the value of a :" << endl;
        cin >> a;
        cout << "Enter the value of b :" << endl;
        cin >> b;
    }
    void performOperationsScientific()
    {
       cout << "The value of cos(a) is : " << cos(a) << endl;
       cout << "The value of sin(a) is : " << sin(a) << endl;
       cout << "The value of exp(a) is : " << exp(a) << endl;
       cout << "The value of tan(a) is : " << tan(a) << endl;
    }
};

class HybridCalculator : public simpleCalculator , public ScientificCalculator{

};
int main()
{

    // simpleCalculator calsi;
    // ScientificCalculator calsi;
    // calsi.getData();
    // calsi.performOperations();
    HybridCalculator calsi;
    calsi.getDataScientific();
    calsi.performOperationsScientific();

    calsi.getDataSimple();
    calsi.performOperationsSimple();


    return 0;
}