// Protected Access Modifier

#include <iostream>
using namespace std;

class Base
{
protected: // ye inherit hoo skta hai
    int a;

private:
    int b;

public:
    Base(/* args */);
    ~Base();
};

Base ::Base(/* args */)
{
}

Base ::~Base()
{
}

/*For a protected member:
                           Public derivation   Private Derivation     Protected Derivation
  1.  Private members        Not Inherited       Not Inherited           Not Inherited
  2.  protected members       Protected            Private                Protected
  3.  public members           Public              Private                Protected
*/

class Derived : protected Base
{
private:
    /* data */
public:
    Derived(/* args */) {}
    ~Derived() {}
};

int main()
{

    Base b;
    Derived d;
    // cout<<b.a;  //will not work since a is protected in both base as well as well as derived class

    return 0;
}
