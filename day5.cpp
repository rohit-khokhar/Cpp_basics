#include <iostream>
using namespace std;

int main()
{
    int n = 12345;
    int res = 0;
    // int digitSum = 0;
    while (n > 0)
    { 

        int lastDigit =  n % 10;

        res = res*10 + lastDigit;
        n /= 10;
    }



 cout<<"reverse  =  "<< res;




    
    //     int lastDigit = n % 10;
    //     if (lastDigit % 2 != 0)
    //     {
    //         digitSum += lastDigit;
    //     }
    //     n = n / 10;
    // }

    // cout << "sum = " << digitSum << endl;

    //   cout<<"Enter n : "<<endl;
    //   cin>>n;

    //  for ( int i=n; i >=1; i--) {

    //       cout<<i<<" ";
    //  }
    //     cout<<endl;

    //     int i =10829;
    //    int sum = 0;
    //     while (i<n){
    //            sum += i;
    //          cout<<sum<<" ";
    //          i++;

    // }

    return 0;
}