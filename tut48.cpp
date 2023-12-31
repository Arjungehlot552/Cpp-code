#include <iostream>
using namespace std;

/*
Case1:
class B: public A
{
    //Order of execution of constructor --> first A() then B()
};

Case2:
class A: public B,public C
{
    //Order of execution of constructor --> first B() then C() and A()
};

Case3:
class A: public B, virtual public C
{
    //Order of execution of constructor --> first C() then B() and A()
};
*/

class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base1 class constructor called " << endl;
    }
    void printDataB1(void)
    {
        cout << "The value of data is " << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base2 class constructor called " << endl;
    }
    void printDataB2(void)
    {
        cout << "The value of data is " << data2 << endl;
    }
};

class Derived : public Base1, public Base2 ////if i change base1 into base2 it is change in sequence . 
{
    int derived1, derived2;

public:
    Derived(int a, int b, int c, int d) : Base2(a), Base1(b) //if i change base1 into base2 it is not change in sequence . 
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived class constructor called " << endl;
    }
    void printDataDerived(void)
    {
        cout << "The value of derived1 is " << derived1 << endl;
        cout << "The value of derived2 is " << derived2 << endl;
    }
};

int main()
{
    Derived aman(1,2,3,4);
    aman.printDataB1();
    aman.printDataB2();
    aman.printDataDerived();

    return 0;
}