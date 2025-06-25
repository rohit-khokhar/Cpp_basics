#include<iostream>
using namespace std;


 void bintodec (int bnum ){
      int n = bnum;
      int decnum = 0;
      int pow = 1;
 
 while (n>0)
 {
    int lastdig = n % 10;
    decnum += lastdig * pow;
    pow = pow * 2;
    n = n/10;
 }
 
   cout<<decnum;



 }












int main()


{
    
bintodec(10000010);



    return 0;
} 



