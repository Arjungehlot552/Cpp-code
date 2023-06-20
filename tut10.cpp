#include <iostream>
using namespace std;
int main()
{

    //************* loops in c++ ***************//

    /*There are three types of loops in c++;
   1.For Loop
   2.while Loop
   3.do-while loop
   */

    /*for loops in c++*/

    //***************** sntax for For loop *********************//

    // for (initializatoin; condition, updation)
    // {
    //     loop body (c++ code);
    // }

    // ex--> print one to 100

    // for long time to use this method---->
    // int i = 1;
    // cout<<i;
    // i++;

    // for short time to use this method---->

    // ***********Example of infinite FOR loop******//  It is memory consume

    // for (int i = 0; 34 <= 40; i++)
    // {
    //     /* code */
    //     cout<<i<<endl;
    // }

    // return 0;
    // }

    // ***********Example of user defined number table for using FOR loop******//

    //     int n;
    //     cout << " Enter the positive integer :";
    //     cin >> n;
    //     for (int i = 1; i <= 10; i++)
    //     {
    //         /* code */
    //         cout << n << "*" << i << " = " << n * i << endl;
    //     }
    //     return 0;
    // }

    // ************* While loop in c++ **************//
    // syntax:
    // while (/* condition */)
    // {
    //     /* code */
    // }

    // printing 1 to 40 using while loop:
    // int i = 1;
    // while(i<=40)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }
    // return 0;
    // }

    // ex:--> of your choice limit and no. table using while loop

    // #include<iostream>
    // #include<conio.h>
    // #include<iomanip>
    // using namespace std;
    // int main()
    // {
    //     int n,c=1,limit;
    //     cout<<"Enter number to print its table = :";
    //     cin>>n;
    //     cout<<"Enter limit = :";
    //     cin>>limit;
    //     while(c<=limit)
    //     {
    //        cout<<n<<" * "<<setw(2)<<c<<" = "<<setw(2)<<n*c<<endl;
    //        c++;
    //     }
    // getch();
    // }

    // ******************do-while loop in cpp*****************//
    // syntax:

    // do
    // {
    //     /* code */
    // } while (/* condition */);

    // int i = 0 ;
    // do
    // {
    //  cout<<i<<endl;
    //     i++;
    // } while (i<=40);

//     int n, i = 1;
//     cout << "Input a number :" << endl;
//     cin >> n;

//     do
//     {
//         cout << n << " X " << i << " = " << n * i << endl;
//         i++;
//     } while (i <= 10);
    // return 0;
}


