#include<iostream>
using namespace std;

// int update (int array , int n){
//     cout << "";
// }
// int main(){
//  int array[3] = {4 , 20 , 5};
//  update(array[3], 3);
//  for (int i = 0; i < 3; i++)
//  {
//     cout << " printing the array :";
//     cin >> array[i];
//  }
 

// return 0;
// }

// #include <iostream>
// using namespace std;

int main() {
    int n, factorial = 1;
    
    cout << "Enter the value for which you want to calculate the factorial: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial is undefined for negative numbers." << endl;
    } else if (n == 0 || n == 1) {
        cout << "The factorial of " << n << " is 1." << endl;
    } else {
        for (int i = 2; i <=  n; i++) {
            factorial *= i;
        }
        cout << "The factorial of " << n << " is " << factorial << endl;
    }

    return 0;
}
