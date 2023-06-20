
    // Classes , Public and Private access modifires -------->

#include<iostream>
using namespace std;

class Employee
{
   private:
       int a,b,c;

   public:
       int d,e;
       void setData(int a , int b, int c);    //Declaration ki aage data hai check kroo....
       void getData(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
        cout<<"The value of e is "<<e<<endl;
       }

};

void Employee :: setData(int a1 ,int b1 , int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main(){
    
     Employee aman;
    //  aman.a = 25; ------> This will throw error because it is private 
     aman.d = 25;
     aman.e = 50;
     aman.setData(1,2,4);
     aman.getData(); 

    return 0;
}               