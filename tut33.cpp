// // Dynamic Initialization of Objects Using Constructors

// #include <iostream>
// using namespace std;

// class BankDeposit
// {
//     int principal;
//     int years;
//     float interestRate;
//     float returnValue;

// public:
//     BankDeposit() {}
//     BankDeposit(int p, int y, float r); // r can be a value like 0.04
//     BankDeposit(int p, int y, int r);   // r can be a value like 14
//     void show();
// };

// BankDeposit ::BankDeposit(int p, int y, float r)
// {
//     principal = p;
//     years = y;
//     interestRate = r;
//     returnValue = principal;
//     for (int i = 0; i < y; i++)
//     {
//         returnValue = returnValue * (1 + interestRate);
//     }
// }

// BankDeposit ::BankDeposit(int p, int y, int r)
// {
//     principal = p;
//     years = y;
//     interestRate = float(r) / 100;
//     returnValue = principal;
//     for (int i = 0; i < y; i++)
//     {
//         returnValue = returnValue * (1 + interestRate);
//     }
// }

// void BankDeposit ::show()
// {
//     cout << endl
//          << "Principal amount was " << principal << " .  Return value after " << years << " years is " << returnValue << endl;
// }

// int main()
// {

//     BankDeposit bd1, bd2;
//     int p, y;
//     float r;
//     int R;

//     cout << "Enter the value of Principal amount , Years and Interest rate " << endl;
//     cin >> p >> y >> r;
//     bd1 = BankDeposit(p, y, r);
//     bd1.show();

//     cout << "Enter the value of Principal amount , Years and Interest rate " << endl;
//     cin >> p >> y >> R;
//     bd2 = BankDeposit(p, y, R);
//     bd2.show();

//     return 0;
// }



#include <iostream>
using namespace std;

class BankDeposit
{
  int principal;
  int year;
  float interestrate;
  float returnvalue;

  public:
  BankDeposit(){};
  BankDeposit (int p, int y , float r);
  BankDeposit (int p, int y , int R);
  void show();
};

BankDeposit :: BankDeposit(int p, int y , float r )
{
    principal = p;
    year = y;
    interestrate = r;
    returnvalue = principal;
    for (int i = 0; i < year; i++)
    {
        /* code */
        returnvalue = returnvalue * (1+interestrate);
    }
    
 }

 BankDeposit :: BankDeposit(int p,int y,int R)
 {
    principal = p;
    year = y;
    interestrate = float(R)/100;
    returnvalue = principal;
    for (int i = 0; i < year; i++)
    {
        /* code */
        returnvalue = returnvalue * ( 1+ interestrate);
    }
 }
 
 void BankDeposit :: show() 
 {
    cout<<endl
    <<"The principal amount was rs "<<principal<< " . Return value after "<<year<< " year is " <<returnvalue<<endl;
 }

int main(){
  BankDeposit bd1 ,bd2;
  int p ,y;
  float  r;
  int R;

  cout << "Enter the value of principal , year and interest rate"<<endl;
  cin >> p >> y >> r;
  bd1 = BankDeposit(p,y,r);
  bd1.show();


  cout << "Enter the value of principal , year and interest rate"<<endl;
  cin >> p >> y >> R;
  bd1 = BankDeposit(p,y,R);
  bd1.show();

return 0;
}