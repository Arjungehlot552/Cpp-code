
// Static Data Members & Method in cpp ------>

#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }

    static void getCount(void){
        // cout<<id; --> Show an error 
        cout<<"The value of count is "<<count<<endl;
    }
};
// Count is the static data member of class Employee
int Employee ::count; // I can be also use count = 100; to count start with 100 // Default value is 0

int main()
{

    Employee aman, subhum, kiran;
    //  aman.id = 1;
    //  aman.count = 1;  // cannot do this as id and count are private
    aman.setData();
    aman.getData();
    Employee :: getCount();

    subhum.setData();
    subhum.getData();
    Employee :: getCount();

    kiran.setData();
    kiran.getData();
    Employee :: getCount();

    return 0;
}