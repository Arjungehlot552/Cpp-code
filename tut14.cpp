#include<iostream>
using namespace std;

 // function and funtion prototype 
 
typedef struct employee
{
    int eId;
    char favChar;
    float salary;
} ep;

union employee
{
    int rice;
    char car;
    float pounds;
};

int main(){

    enum Meal{ breakfast, lunch, dinner};  //enum helps to good readeble;ex:[0,1,2,3,4......]
    Meal m2 = dinner;
    cout<<m2;
    cout<<"Enter the employee eId for full detail "<<endl;
    cin>>eId;

    // we can also use ep in the place of stract employee --->
    struct employee aman;
    ep aman;
    ep shubhum;
    ep mahatma;
    aman.eId = 1;
    aman.favChar = 'c';
    aman.salary=150;
    cout<< "The employee id is " <<aman.eId <<endl;
    cout<< "The favchar is " <<aman.favChar <<endl;
    cout<< "The salary is " <<aman.salary <<endl;
    
    return 0;
}