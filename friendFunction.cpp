#include <iostream>
using namespace std;

class demo
{
    int a, b; // private

public:
    void getData()
    {
        cout << "Enter the two number";
        cin >> a >> b;
    };

    friend int sum(demo);
};

// void demo :: getData(){
//     cout<<"Enter the two number";
//     cin>>a>>b;
// }

int sum(demo arjun){
    return arjun.a + arjun.b;
}

int main()
{

    demo kundan;
    kundan.getData();

    int answer = sum(kundan);

    cout<<answer;

    return 0;
}