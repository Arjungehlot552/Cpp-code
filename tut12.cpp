#include <iostream>
using namespace std;

int main()
{

    //********** What is pointer? ***********//
    // Ans--> pointer is a data type which holds the address of other dada types
    // & --> Address of operator 
    // * --> De reference operator

    int a = 3 ;  
    int* b;
    b = &a;    
    // & --> Address of operator 
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;


    // * --> De reference operator
    cout<<"The value at address b is "<<*b<<endl;

    // pointer to pointer
    int ** c = &b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The value at address c is "<<*c<<endl;
    cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl;

    return 0;
}