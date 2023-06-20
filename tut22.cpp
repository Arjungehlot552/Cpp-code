//**************** OOPs Recap & Nesting Functions *************//

    // OOPs - Classes and objects
    /*Stroustrup initially named C++ language as C with classes because C++ language was almost the same as C language but they added a new concept of classes in it.

    Classes are the extension of structures in C language.

    Structures had limitations such as; members are public and no methods.

    Classes have some additional futures than structures such as; classes that can have methods and properties.

    Classes have a feature to make class members as public and private.

    In C++ objects can be declared along with class deceleration as shown in Code Snippet
     1.*/
    /*class Employee{
       // Class definition
    } harry, rohan, lovish;*/

// Nesting of binary function    

#include <iostream>
#include <string>
using namespace std;

class binary
{
private:    
    string s;
public:
    void read(void);
    void chk_bin(void);
    void ones_compliment(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter a binary number :" << endl;
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1') 
        {
            cout << "Incorrect binary format " << endl;
            exit(0);
        }
    }
}

void binary ::ones_compliment(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i = '1');
        }
        else 
        {
            s.at(i = '0');
        }
    };
};

void binary ::display(void)
{
    cout<<"Displaying your binary number"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout<<endl;
}

int main()
{

    binary b;
    b.read();
    b.chk_bin();
    b.display();
    b.ones_compliment();
    b.display();

    return 0;
}