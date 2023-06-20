// #include<iostream>
// using namespace std;

// int main(){
//     int a = 0 , b = 0 ,sum;

//     cout<<"Enter First Integer : ";    is called Insertion operator.
//     cin>>a;
//     cout<<"Enter Second Integer : ";    is called Extraction operator.
//     cin>>b;

//     sum = a+b;
//     cout<<"The sum of two number is :"<<sum;

//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int a = 0, b = 0, sum;
    cout << "Enter first integer ";
    cin >> a;

    cout << "Enter second integer ";
    cin >> b;
    sum = a + b;
    // sum of two number;
    cout << "sum of the two numbers is " << sum;
    return 0;
}