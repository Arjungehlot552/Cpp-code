#include<iostream>
using namespace std;

class Complex{
    int real ,  imaginary;
    public:
        void getData(){
            cout <<" The real part is "<<real <<endl;
            cout <<" The imaginary part is "<<imaginary <<endl;
        }

        void setData(int a , int b){
            real = a;
            imaginary = b;
        }

};
int main(){
    // Complex c1;
    // Complex *ptr = &c1;
     Complex *ptr = new Complex;
     //(*ptr).setData(1,54) ; is exacty same as 
    (*ptr).setData(1,20);

    // (*ptr.getData(); is as good as
    (*ptr).getData();
    
    // Array of objectS;
     Complex *ptr1 = new Complex;
    (*ptr1).setData(1,15);
    (*ptr1).getData();
    
    return 0;
}