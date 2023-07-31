#include <iostream>
using namespace std;

// Today we understand the function in cpp 

// let an example of add two numbers 

// Basic syntax of function 

// return_value fucntion_name (perameter){
// return value ;
// }

// int addTwoNumbers (int num1 , int num2){
//     int sum = num1 + num2;
//     return sum;
// }

// int main (){
//     int a = 10 , b = 20;
//     int result = addTwoNumbers(a , b);
//     cout << "The sum of a " <<a<< " and b "<<b<<" is :" <<result<<endl;
//     return 0;
// }



// Array in cpp

// syntax

// data_type array_name [size];

// #include <iostream>

// int main() {
//     // Declaration of a 3D integer array (3x3x3 cube)
    // int cube[3][3][3];

    // Assigning values to elements in the 3D array
    // int value = 1;
    // for (int x = 0; x < 3; x++) {
    //     for (int y = 0; y < 3; y++) {
    //         for (int z = 0; z < 3; z++) {
    //             cube[x][y][z] = value;
    //             value++;
    //         }
    //     }
    // }


//     // Print the 3D array

//     cout << "3D Cube:" << endl;
//     for (int x = 0; x < 3; x++) {
//         for (int y = 0; y < 3; y++) {
//             for (int z = 0; z < 3; z++) {
//                 cout << cube[x][y][z] << " ";
//             }
//            cout << endl;
//         }
//         cout << endl;
//     }

//     return 0;

// }

// prototype in cpp

// int add (int a ,int b);

// int main (){
//     int num1 = 10 , num2 = 20;
//     int result  = add(num1 , num2);
//     cout << "The sum of a and b is :"<<result<<endl;
//     return 0;
// };

// int add (int a  , int b){
//     int sum =  a + b;
//     return sum;
// };


// Function overloading
// #include <iostream>
// using namespace std;
// int add(int a, int b) {
//     return a + b;
// }

// double add(double a, double b) {
//     return a + b;
// }

// int main() {
//     int intResult = add(5, 10); // Calls the first add function with integers
//     double doubleResult = add(3.5, 2.7); // Calls the second add function with doubles
//     cout << " intResult " <<intResult<<endl;
//     cout << " doubleResult " <<doubleResult<<endl;
//     // Rest of the code...

//     return 0;
// }


// pass by reference

// void numSwap(int &x, int &y){
//     int temp = x;
//     x=y;
//     y=temp;
// }


// int main(){
//     int a=5, b=6;

//     numSwap(a,b);
//     cout<<"a: "<<a<<"\n";
//     cout<<"b: "<<b;
// }

// void printArray(int arr[], int n){
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<"\n";
//     }
// }

// arr[] = arr = stores the address of the first element of the array


//                     [1,2,3,4,5]
// address (ram)       ^
// int main(){
//     int ram[5]={1,2,3,4,5};

//     printArray(ram, 5);
// }


// int main() {
//     int number = 42; // A regular integer variable
//     int* ptr = &number; // A pointer to an integer, storing the memory address of 'number'

//     // Output the values and addresses
//     std::cout << "Value of 'number': " << number << std::endl;
//     std::cout << "Memory address of 'number': " << &number << std::endl;
//     std::cout << "Value of 'ptr' (memory address of 'number'): " << ptr << std::endl;

//     // Accessing the value using the pointer (dereferencing)
//     int value = *ptr; // 'value' now holds the value stored at the memory address pointed by 'ptr'
//     std::cout << "Value stored at the memory address pointed by 'ptr': " << value << std::endl;

//     // Modifying the value using the pointer
//     *ptr = 100; // Changing the value at the memory address pointed by 'ptr'
//     std::cout << "Modified value of 'number': " << number << std::endl;

//     return 0;
// }


// class calculator
// {
// public:
//    int sum (int a , int b){
//       return a + b;
//    }

//    int subtract (int a , int b){
//       return a - b;
//    }

//    int mul (int a , int b){
//       return a * b;
//    }

//    double divide (int a ,int b){
//       if (b != 0)
//       {
//         return static_cast<double>(a) / b;
//       }
//       else{
//         cout << " Error can not divide by zero :"<<endl;
//         return 0;
//       }
//    }

// };

// int main (){
   
//    calculator mycal;

//    int sum = mycal.sum(5,10);
//    int subtract = mycal.subtract(20,10);
//    int multiplication = mycal.mul(5,10);
//    double quation = mycal.divide(10,3);

//   cout << "The sum of a and b is :"<<sum<<endl;
//   cout << "The subtract of a and b is :"<<subtract<<endl;
//   cout << "The multiplication of a and b is :"<<multiplication<<endl;
//   cout << "The divide of a and b is :"<<quation<<endl;
// };

// #include <iostream>
// #include <string>

// using namespace std;

// class Car {
// private:
//     string cpName;
//     string model;
//     int year;
//     double price;

// public:
//     Car(const string& CarcpName, const string& Carmodel, int Caryear, double Carprice)
//         : cpName(CarcpName), model(Carmodel), year(Caryear), price(Carprice) {}

//     // Getter methods
//     string getcpName() const {
//         return cpName;
//     }

//     string getmodel() const {
//         return model;
//     }

//     int getyear() const {
//         return year;
//     }

//     double getprice() const {
//         return price;
//     }

//     // Setter methods
//     void setcpName(const string& CarcpName) {
//         cpName = CarcpName;
//     }

//     void setmodel(const string& Carmodel) {
//         model = Carmodel;
//     }

//     void setyear(int Caryear) {
//         year = Caryear;
//     }

//     void setprice(double Carprice) {
//         price = Carprice;
//     }
// };

// int main() {
//     Car myCar("Mahendra", "Kya pta", 2022, 2020000.00);

//     cout << "The name of company is: " << myCar.getcpName() << endl;
//     cout << "The name of model is: " << myCar.getmodel() << endl;
//     cout << "The year of manufacture is: " << myCar.getyear() << endl;
//     cout << "The price of the car is: " << myCar.getprice() << endl;

//     return 0;
// }

class shape {
protected:
 double width;
 double height;
 public:
 shape (double w , double h): width(w) , height(h){ }
   double getArea(){
    return 0;
 }
};

// Derived class rectangle inheriting from class shape

class Rectangle :public shape{
    public:
    Rectangle (double w , double h): shape(w,h){}  
    double getArea(){
        return width * height;

        
    }
};

// Derived class triangle inherit from class shape

class Triangle : public shape{
    public:
  Triangle (double w , double h) : shape(w , h){}
  double getArea(){
    return 0.5 * width * height;
  }
};

int main (){
    Rectangle rect (5,10) ;
    Triangle  tri(5,2);

    cout << " The area of Rectangle is :"<<rect.getArea()<<endl;
    cout << " The area of Triangle is :"<<tri.getArea()<<endl;
}


