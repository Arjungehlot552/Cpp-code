
//*********** Reading and Writing files **********//

#include<iostream>
#include<fstream>  

/*The useful classes for working wit files in c++ are:
1. fstreambase
2. ifstream --> derived from fstreambase
3. ofstream --> derived from fstreambase
*/

// In order work with files in c++,you will have to open it. There are 2 ways to open a file :
/*
1. Using the constructor
2. Using the member function open() of the class
*/


using namespace std;

int main(){

    string st = "Arjun broo";

    //opening files using constructor
    ifstream out("sample60.cpp"); // Write operation
    
    return 0;
}