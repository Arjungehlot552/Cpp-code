#include<iostream>
using namespace std;

// Array of Objects & Passing Objects as Function Arguments in C++

class Employee{
    int id;
    int salary;
    public:
       void setId(void)
       {
        salary = 122;
        cout<<"Enter the id of employee"<<endl;
        cin>>id;
       }

       void getId(void){
        cout<<"The id of this employee is "<<id<<endl;
       }
};

int main(){
    // Employee aman,mohit,mahak,kank;
    // aman.setId();
    // aman.getId(); 
    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
    fb[i].setId();  
    fb[i].getId();
    }


    return 0;
}