#include<iostream>
#include<fstream>
using namespace std;

int main(){

    //connecting our file with hout stream
    ofstream hout("sample60.cpp");

    //creating a name string and filliing it with the stringn entered bt the user
    string name;
    cout<<"Enter your name :";
    cin>>name;       
    
    //writing a string to the file
    hout<<"My name is " + name;

    hout.close();
 
    return 0;
}   