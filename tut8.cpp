#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // int a = 34;
    // cout<<"The vlaue of a was :"<<a;
    // a = 45;
    // cout<<"The value of a is :" <<a;

    //************************* constants in c++ ******************************//

    // const int a = 3;
    // cout <<"The value of a was:"<<a;
    // // a = 45;  //you will get an error because a is a constant
    // cout<<"The value of a is :" <<a;

    //**************************************** manipulators in c++ ******************************//

    // ********Normal print ********//

    // int a = 3, b = 78, c = 1432;

    // cout << "The value of a without setw is:" << a << endl;
    // cout << "The value of b without setw is:" << b << endl;
    // cout << "The value of c without setw is:" << c << endl;

    //***** If we need line to line number then we use <<setw(Highest no. of digit)<<a<<endl;****************//
    // cout << endl;
    // *****for example******/

    // cout <<"The value of a  is: "<<setw(4)<<a<<endl;
    // cout <<"The value of b  is: "<<setw(4)<<b<<endl;
    // cout <<"The value of c  is: "<<setw(4)<<c<<endl;

    //*********Operotor Precedence*********//
    int a = 3, b = 4;
    //  int c = (a*5)+b;    //essay type*****
    int c = ((((a * 5) + b) - 50) + 94);
    cout << c;
    return 0;
}