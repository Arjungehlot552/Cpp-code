
//*********************** control strutures********************************//

// There are three types of Basic control structure :-
// 1.Sequence structure
//   Entry -->Action1 --> Action2 --->Exit
// 2.Selection structure
// Entry -->codition true of false--->If true print A1 If false print A2 --->Then exit
// 3.Loop Structure
// Entry -->loop-->conditon-->If true then print A1 in loop--->If condition is false print A2 then exit;

//***************(1)__if else statement___*********************//
//  structure--->
// int i = 0;
// if (condition){
//     cout <<i;
//     i++;
// }
//***************(2)__if else looder___*********************//
//***************(3)__switch case___*********************//
//    switch (empresion) {
//     case 1;
//     {
//         action;
//     }
//     default:
//     action 4;
//     default:
//     {
//         action 4;
//     }

//    }

#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Tell me your age :" << endl;
    cin >> age;

    // ***********Section control structure : If else-if else ladder ************//

    // int age ;
    // cout<<"Tell me your age :"<<endl;
    // // cin>>age;
    // if((age<18)&&(age>0)){
    //     cout<<"You can not come to my party :"<<endl;
    // }

    // else if(age==18){
    //     cout<<"You are a kid and you will get a kid pass to enter my party"<<endl;
    // }

    // else if(age<1){
    //     cout<<"You are a not yet born you can not come to my party"<<endl;
    // }

    // else if(age >= 65 ){
    //     cout<<"you are older you have older pass to my party "<<endl;
    // }

    // else {
    //     cout<<"you can come to my party"<<endl;
    // }

    // ***********Section control structure : Switch Case Statements ************//

    switch (age)
    {
    case 1:
        cout << "You have 18 children";
        break;
    case 2:
        cout << "You have 12 children" << endl;
        break;
    case 3:
        cout << "You have 2 children" << endl;
        break;

    default:
        cout << "No children" << endl;
        break;
    }

    return 0;
}