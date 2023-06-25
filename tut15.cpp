#include <iostream>
using namespace std;

//******************Function and function prototypes***************//

//*** function *** //

int sum(int a, int b){
    int c = a +b;
    return c ;
}
// int main()
// {
//     int num1, num2;
//     cout << "Enter the First number :" << endl;
//     cin >> num1;
//     cout << "Enter the second number :" << endl;
//     cin >> num2;
//     cout << "The sum is :" << sum(num1,num2);

//     return 0;
// }

// function prototype ************//
// type function-name (arguments);
// int sum(int a, int b); //---> Acceptable
// int sum(int a, b); //--->  Not Acceptable
// int sum(int , int); //---> Acceptable
// void g(void); //---> Acceptable
// void g(); //---> Acceptable

int sum(int a, int b); // assurity deta hai ki sum aage hai: "RUKO JRAA SABAR KROO"
void g();
int main()
{
    int num1, num2;
    cout << "Enter the First number :" << endl;
    cin >> num1;
    cout << "Enter the second number :" << endl;
    cin >> num2;
    // num1 and num2 are actual parameters
    cout << "The sum is :" << sum(num1,num2);
    g();
    return 0;
}

// int sum(int a, int b){
    // Formal parameters a and b will be taking values from actual parameters num1 and num2.
    // int c = a +b;
    // return c ;
// };

void g(){
    cout<<"\n Hello My Future Wife";            
};
