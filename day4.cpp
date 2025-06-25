#include <iostream>
using namespace std;

int main()
{
  int a, b;
  char op;

  cout << "Enter a : " << endl;
  cin >> a;

  cout << "Enter b : " << endl;
  cin >> b;

  cout << "Enter operator : " << endl;
  cin >> op;

  // if (op == '+')
  // {
  //   cout<< " sum is : "<<(a+b)<<endl;
  // }

  // else if (op == '-')
  // {
  //   cout<< " difference is : "<<(a-b)<<endl;
  // }

  // else if (op == '/')
  // {
  //   cout<< " division is : "<<(a/b)<<endl;
  // }

  // else if (op == '*')
  // {
  //   cout<< " multi is : "<<(a*b)<<endl;
  // }

  // else{
  //   cout<<"not a valid operator"<<endl;
  // }

  switch (op)
  {
  case '+':
    cout << " sum is : " << (a + b) << endl;
    break;
  case '-':
    cout << " diff is : " << (a - b) << endl;
    break;
  case '*':
    cout << " mul is : " << (a * b) << endl;
    break;
  case '/':
    cout << " div. is : " << (a / b) << endl;
    break;
    // case 5:
    //   cout << "Friday" << endl;
    //   break;
    // case 6:
    //   cout << "Saturday" << endl;
    //   break;
    // case 7:
    //   cout << "Sunday" << endl;
    //   break;

  default:
    cout << " invalid operator" << endl;
  }

  // //  int a = 100;
  // //  int b = 89;

  // //  int largest = a>b? a : b;

  // //   cout<<"largest is : "<<largest<<endl;

  // //  int num = 54;

  // //  bool isEven = num % 2 == 0? true : false;
  // //      cout<<"the no. is : "<<isEven<<endl;

  // // {   bool isAdult;
  // //     int age;

  //     cout<<"enter age : "<<endl;
  //     cin>>age;

  //      isAdult = (age >= 18) ? true:false;
  //  int in;
  //  float tax;
  //   int a, b, c;

  //   cout << "Enter a : " << endl;
  //   cin >> a;

  //   cout << "Enter b : " << endl;
  //   cin >> b;

  //   cout << "Enter c : " << endl;
  //   cin >> c;

  //      if ( a>b && a>c)
  //      {
  //        cout<<"The largest is a : "<<a<<endl;
  //      }

  //      else if ( b>c)
  //      {
  //       /* code */cout<<"The largest is b : "<<b<<endl;
  //      }

  //      else{
  //         cout<<"The largest is c: "<<c<<endl;
  //      }

  //   // cout<<"Enter income in lakhs :  "<<endl;
  //   // cin>>in;

  //   //     if(in<5) {
  //   //         tax = 0;
  //   //     }

  //   //     else if( in>5 && in<10){
  //   //         tax = 0.2*in;

  //   //     }
  //   //     else{

  //   //          tax = 0.3*in;
  //   //     }

  //   //    cout<< " The tax = "<< (tax * 100000)<<endl;

  return 0;
}