#include <iostream>
using namespace std;

int sum(int a, int b)
{
    cout << "Using function with two arguments " << endl;
    return (a + b);
}

int sum(int a, int b, int c)
{
    cout << "Using function with three arguments " << endl;
    return (a + b + c);
}

// Calculate the volume of a cylinder
int volume(double r, int h)
{
    return (3.14 * r * r * h);
}

// Calculate the volume of cuboid
int volume(int a)
{
    return (a * a * a);
}

// Calculate the volume of Ractangular Box
int volume(int l , int b , int h)
{
    return ( l * b * h );
}


int main()
{

    //********* Function Overloading with examples *********//

    cout << "The sum of 3 and 6 is : " << sum(3, 6) << endl;
    cout << "The sum of 3 , 6 and 7 is : " << sum(3, 6, 7) << endl;
    cout << "The volume of cuboid 3 , 6 and 7 is : " << volume(3, 6, 7) << endl;
    cout << "The volume of cylinder radius 3 , height 6 is : " << volume(3, 6) << endl;
    cout << "The volume of rectangal length 3 , height 6 , breadth 7 is : " << volume(3, 6, 7) << endl;
}
