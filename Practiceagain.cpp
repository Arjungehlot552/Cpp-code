#include <iostream>
#include <climits>
using namespace std;

// int main (){
// for (int i = 0; i < 5 ; i++){
//     for (int j = i; j <= 5; j++)
//     {
//     cout << i << " " <<j<<endl;
//     }
// }
// }

/* int main ()
{
    int a , b ;
    cout << "Enter the first value :"<<endl;
    cin >> a;
    cout << "Enter the second value :"<<endl;
    cin >> b;

    char operation;
    cout << "Enter which you want to perform : "<<endl;
    cin >> operation;

    switch (operation)
    {
    case '+':
        cout << "The sum of two number is : "<<(a+b)<<endl;
        break;
    case '-':
        cout << "The sub of two number is : "<<(a-b)<<endl;
        break;
    case '*':
        cout << "The mul of two number is : "<<(a*b)<<endl;
        break;
    case '/':
        cout << "The divide of two number is : "<<(a/b)<<endl;
        break;
    case '%':
        cout << "The module of two number is : "<<(a%b)<<endl;
        break;
    
    default:
         cout << " TUU chutiya hai operation ka mtlb smj kr aa: ";
     
    }

}

 */
/* int main() {
    int amount;
    cout << "Enter the amount in rupees: ";
    cin >> amount;

    int notes_100 = 0, notes_50 = 0, notes_20 = 0, notes_10 = 0;

    notes_100 = amount / 100;  // Calculate the number of 100 rupee notes
    amount %= 100;             // Calculate the remaining amount

    notes_50 = amount / 50;    // Calculate the number of 50 rupee notes
    amount %= 50;              // Calculate the remaining amount

    notes_20 = amount / 20;    // Calculate the number of 20 rupee notes
    amount %= 20;              // Calculate the remaining amount

    notes_10 = amount / 10;    // Calculate the number of 10 rupee notes

    cout << "Number of 100 rupee notes: " << notes_100 << endl;
    cout << "Number of 50 rupee notes: " << notes_50 << endl;
    cout << "Number of 20 rupee notes: " << notes_20 << endl;
    cout << "Number of 10 rupee notes: " << notes_10 << endl;

    return 0;
}
 */


// void funcion(){

//     int age = 18;
//     cout << age;
// };

// int main (){

//     cout << " The age is :";
//     funcion();
//     return 0;
// }

// int age = 18 ;

// void showkro() {
//     cout << age <<endl;
// }

// int main (){

//    showkro();
//    age = 20;
//    showkro();

//     return 0;
// }

// C++ program to demonstrate
// the use of static Static
// variables in a Function
// #include <iostream>
// #include <string>
// using namespace std;

// void demo()
// {
//     // static variable
//     static int count = 0;
//     cout << count << " ";

// value is updated and
// will be carried to next
// function calls
//     count++;
// }

// int main()
// {
//     for (int i = 0; i < 5; i++)
//         demo();
//     return 0;
// // }

// class greeks {
// public :
// string geeksName;
// void name(){
//     cout << " The name is :" <<geeksName;
// }
// };

// int main (){
//     greeks ob1;
//     ob1.geeksName = "Greeks_for_greeks";
//     ob1.name();
// }

// class Test {
//     static int x;
// public:
//     static int y;

//     void func(int x){
//        cout << " The value of static x is :"<<Test::x;
//        cout << " The value of local x is :"<<x;
//     }
// };

//  int Test::x = 1;
//  int Test::y = 2;

// int main (){

//     Test obj;
//     int x = 10;
//     obj.func(x);

//     cout << " Test :: y = " <<Test::y;

// int a = 10;
// int b = 20;

// int result = (a>b)? a : b;
// int result =   a -= b;

//  cout << "The number is :"<<result;

//   cout << "No of Bytes taken up by char is " <<
//            sizeof(char) << endl;
//   cout << "No of Bytes taken up by int is " <<
//            sizeof(int) << endl;
//   cout << "No of Bytes taken up by float is " <<
//            sizeof(float) << endl;
//   cout << "No of Bytes taken up by double is " <<
//            sizeof(double) << endl;
//   cout << "No of Bytes taken up by long is " <<
        //   sizeof(long) << endl;

// struct marks
// {
//     int Roll_number;
//     char Grade;
//     float Marks[4];
// };

// void display(struct marks a1)
// {
//     cout << "ROll number is :" << a1.Roll_number << endl;
//     cout << "Grade is :" << a1.Grade << endl;
//     cout << "The marks of the subject is :-" << endl;
//     int len = sizeof(a1.Marks) / sizeof(float);
//     for (int i = 0; i < len; i++)
//     {
//         cout << " Suject " << i + 1 << ":" << a1.Marks[i] << endl;
//     }
// };

// int main()
// {

//     struct marks A = {1, 'A', {95.25, 56.5, 45.2, 98}};
//     display(A);
// }


// int power (){
//     int a ,b;
//     cin >> a >> b;
//     int ans = 1;
//     for (int i = 1 ; i <= b ; i ++){
//         ans =  ans *a; 
//     }
//     return ans;
// }
// int main (){
//     int ans = power();

//     cout << "The answer is : "<< ans<<endl;
//     return 0 ;

// }

// bool isEven(int a){
//    if(a&1){
//     return 0;
//    } 
//    else {
//     return 1;
//    }
// }
// int main (){
//     int num ;
//     cout << "Enter the value which you want to check even or odd "<<endl;
//     cin >> num;

//     if (isEven(num))
//     {
//     cout << "The number is Even  ";
//     }
//     else {
//     cout << "The number is Odd ";
//     }
    
//     return 0;
// }

// int isPrime(int n){
//     for (int i = 2; i <= n; i++)
//     {  
//       if (n%i==0)
//       {
//        return 0;
//       }
//      }
//         return 1;
//     }
    
// int main(){
//     int n;
//     cout << "Enter the value which you want to check prime or no prime "<<endl;
//     cin >> n;

//     if (isPrime(n))
//     {
//     cout << "The number is prime ";
//     }
//     else {
//     cout << "The number is no prime ";
//     }
//     return 0;
// }

// void update(int a){
//   int ans = a * a;
// }

// int main (){
//     int a = 14;
//     a = update(a);
//     cout << a <<endl;
// }



// int getMin (int num[] , int n){
//     int min = INT_MAX;
//     for (int i = 0; i < n; i++)
//     {
//         if(num[i]<min){
//             min = num[i];
//         }
//     }
//      return min;
// }

// int getMax (int num[] , int n){
//     int max = INT_MAX;
//     for (int i = 0; i < n; i++)
//     {
//         if(num[i]>max){
//             max = num[i];
//         }
//     }
//      return max;
//     }

// int main (){
//     int size;
//     cout << "Enter the size of the arrray :";
//     cin >> size;
//     int num[100];
//     for (int i = 0; i < size; i++)
//     {
//         cout << " Enter the values :";
//         cin >> num[i];
//     }
//     cout << "Maximum number is : "<<getMax(num , size)<<endl;
//     cout << "Minimum number is : "<<getMin(num , size)<<endl;
//     return 0;
    
// }