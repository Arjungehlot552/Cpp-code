#include <iostream>
using namespace std;

// Today we understand the function in cpp 

// let an example of add two numbers 

// Basic syntax of function 

// return_value fucntion_name (perameter){
// return value ;
// }

int addTwoNumbers (int num1 , int num2){
    int sum = num1 + num2;
    return sum;
}

int main (){
    int a = 10 , b = 20;
    int result = addTwoNumbers(a , b);
    cout << "The sum of a " <<a<< " and b "<<b<<" is :" <<result<<endl;
    return 0;
}