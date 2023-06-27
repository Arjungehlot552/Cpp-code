// #include <iostream>
// using namespace std;

// class A
// {
//     int a, b;

// public:
//     void getData()
//     {
//         cout << "Enter two numbers: "<<endl;
//         cin >> a >> b;
//     }

//     friend int add(A);
// };

// int add(A obj)
// {
//     return obj.a + obj.b;
// }

// int main()
// {
//     A pahila;
//     pahila.getData();

//     int answer = add(pahila);
//     cout << answer;
//     return 0;
// }


#include <iostream>
using namespace std;

class A
{
    int a ,b;

    public:

    void getdata(){
          cout << "Enter two number : "<<endl;
          cin >> a >> b;
            }
            friend int add(A);
};

int add (A obj){
    return obj.a + obj.b;
}

int main(){

    A first;
    first.getdata();

    int answer = add (first);
    cout << answer;
  
return 0;
}