
// Ambiguity Resolution in Inheritance 

#include<iostream>
using namespace std;

class Base1
{
public:
    void greet(){
         cout<<"How are you ?"<<endl;
    }
};

class Base2
{
public:
    void greet(){
         cout<<" Kaise hoo ?"<<endl;
    }
};

class Derived : public Base1, public Base2{
    int a;
    public :
        void  greet(){
            Base1::greet();  // yha se me print krva skta hu
        }
};

class B{
    public:
        void say(){
             cout<<"Hello world !"<<endl;
        }
};

class D:public B{
    int a;
    //D's new say() method will overhide bese class's say() method
    public:
        void say(){
             cout<<"Hello My Beautiful world  !"<<endl;
        }
};

int main(){
    // Ambigity 1 
    // Base1 base1obj;
    // Base2 base2obj;
    // base1obj.greet();
    // base2obj.greet();
    // Derived d;
    // d.greet();


    // Ambigity 2
    B b;
    b.say();
    
    D d;
    d.say();


    return 0;
}