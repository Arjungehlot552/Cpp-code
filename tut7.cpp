#include <iostream>
using namespace std;
int c = 45;
int main()
{

    //************************** Build in data types*****************************//

        // int a, b, c;
        // cout << "Enter the value of a:" << endl;
        // cin >> a;
        // cout << "Enter the value of b:" << endl;
        // cin >> b;
        // c = a + b;
        // cout << "The sum is " << c << endl;
        // cout<<"The value of ++c is " << ++c << endl;
        // cout << "The global c is" <<::c;
        // :: --> This is scope resolution operator

    // ********************float,double and long double literals**************************//

    float d = 35.5F;
    long double e = 35.5L;
    cout<<"The value of d is "<<d<<endl<< "The value of e is "<<e;

    cout<<"The size of 35.5 is "<<sizeof(35.5)<<endl;
    cout<<"The size of 35.5F is "<<sizeof(35.5F)<<endl;
    cout<<"The size of 35.5f is "<<sizeof(35.5f)<<endl;
    cout<<"The size of 35.5L is "<<sizeof(35.5L)<<endl;
    cout<<"The size of 35.5l is "<<sizeof(35.5l)<<endl; 

    // ******************************Referance variables*****************************//

    // Rohan --> Monty --> Rohu --> Dangerous coder

    // float x = 455;
    // float & y = x;
    // cout<<x<<endl;
    // cout<<y<<endl;

    // ********************************Typecasting*************************//

    int a = 45;
    float b = 45.50;
    cout << "The value of a is " << (float)a << endl;
    cout << "The value of a is " << float(a) << endl;

    cout << "The value of b is " << (int)b << endl;
    cout << "The value of b is " << int(b) << endl;
    int c = int(b);

    cout << "The expresion is " << a + b << endl;
    cout << "The expresion is " << a + int(b) << endl;
    cout << "The expresion is " << a + (int)b << endl;

    return 0;
}