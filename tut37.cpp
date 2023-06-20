#include <iostream>
using namespace std;

// Base class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee(){

    }
};

// Derived class syntax
// class
// {
//     {
//         derived - class
//     }
// } : {{visibility - mode}} {{base - calss - name}}
// {
//     class members / methods / etc...
// }

/*NOTE
1. Default visiblity mode is private.
2. Public visiblity Mode: Public members of the base class becomes Public members of the derived class.
3. Private visiblity Mode: Public members of the base class becomes Private members of the derived class.
4. Private members are never inherited
*/

// Creating a programer class derived from Emoloyee Base class

class Programer : public Employee
{
public:
    int languagecode;
    Programer(int inpId)
    {
        id = inpId;
        languagecode = 9;
    }
    void getData(){
        cout<<id<<endl;
    }
};

int main()
{
    Employee aman(1), mohit(0);
    cout << aman.salary << endl;
    cout << mohit.salary << endl;
    Programer skillF(10);
    cout<<skillF.languagecode<<endl;
    cout<<skillF.id<<endl;
    skillF.getData();
    return 0;
}