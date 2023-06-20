
// This pointer *********// point krta hai object pr jisne member functon ko call kiyaa.


#include<iostream>
using namespace std;
 
class A{
    int a ;
    public:
        void setData(int a){
            this->a = a;
            //return *this;
        }
        void getData(){
            cout<<"The value of a is "<<a<<endl;
        }
};
int main(){

    //This is a keyword which is a pointer which points to the object which invokes the member function 
    
    A a;
    a.setData(4);
    a.getData();
    return 0;
}   