#include <iostream>
using namespace std;

int main()
{
    // Array Example:--
    int marks[] = {23, 45, 56, 89};
    int mathMarks[4];
    mathMarks[0] = 745;
    mathMarks[1] = 725;
    mathMarks[2] = 555;
    mathMarks[3] = 350;

    cout << "These are math marks" << endl;
    cout << mathMarks[0] << endl;
    cout << mathMarks[1] << endl;
    cout << mathMarks[2] << endl;
    cout << mathMarks[3] << endl;

    // you can change of value of an array
    marks[2] = 455;
    cout << "These are marks" << endl;
    // cout << marks[0] << endl;
    // cout << marks[1] << endl;
    // cout << marks[2] << endl;
    // cout << marks[3] << endl;

    for (int i = 0; i < 4; i++)
    {
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    }

    // We can also use while and do-while same as for loop

    // Pointer and Arrays--->

    int* p = marks;
    cout<<"The value of *p is "<<*p<<endl;
    cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"The value of *(p+3) is "<<*(p+3)<<endl;


   
    

    return 0;
}