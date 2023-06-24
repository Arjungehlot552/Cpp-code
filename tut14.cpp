#include <iostream>
using namespace std;

typedef struct employee
{
    int eId;
    char favchar;
    float salary;
}ep;

union money
{
    /* data */
    int rice;
    char car;
    float price;
};




int main(){

    // union money m1;
    // m1.rice = 10;
    // cout << m1.rice << endl;

    // ep hari;
    // struct employee subhum;
    // struct employee karn;
    // struct employee kundan;
    // struct employee hari;
    // hari.eId = 101;
    // hari.favchar ='a';
    // hari.salary = 100000;
    // cout << " The value is "<<hari.eId<<endl;
    // cout << " The value is "<<hari.favchar<<endl;
    // cout << " The value is "<<hari.salary<<endl;

    enum Meal { breakfast, dinner, lunch , jbmnkree};
    Meal m1 = dinner;
    cout<<(m1==1);
 
return 0;
}