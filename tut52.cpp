#include<iostream>
using namespace std;

class ShopItems{
    int id;
    float price;
    public:
        void setData(int a, float b)
           { id = a;
            price = b;
           }
           void getData(void){
            cout<<"Code of this items is "<<id<<endl;
            cout<<"Price of this items is "<<price<<endl;
           }
};
int main(){
    int size = 3;
    // int *ptr = &size;
    // int *ptr = new int [34];

    // general store items 
    // veggies items
    // electric items 
    ShopItems *ptr = new ShopItems [size];
    ShopItems *ptrTemp =  ptr;
    int p,i;
    float q;
    for ( i = 0; i < size; i++)
    {
        cout<< " Enter Id and price of item "<<i + 1<<endl;
        cin>>p>>q;
        // (*ptr).setData(p,q);
        ptr->setData(p,q); 
        ptr++;

    }
    for (i = 0; i < size; i++)
    {
        cout<<"Item number :"<<i + 1 <<endl;
        ptrTemp->getData();
        ptrTemp++;
        
    }
    
    return 0;
}       