#include <iostream>
using namespace std;

int main()
{
   int a;
   int b;
   

   cout << "Enter the 1st no. : " << endl;
   cin >> a;

   cout << "Enter the 2nd no. : " << endl;
   cin >> b;

   int sum = a + b;
   int prod = a * b;
   int diff = a - b;

   cout << "The sum of two nos. is : " << sum << endl;
   cout << "The product of two nos. is : " << prod<< endl;
   cout << "The difference of two nos. is : " << diff<< endl;

 
   return 0;
}