#include<iostream>
using namespace std;

void dectobin (int decnum){
  int n = decnum;
  int pow = 1;
  int binNum = 0;


  while(n>0){

    int rem = decnum %  2;
    binNum += rem * pow;
        n = n/2;

        pow = pow * 10;







  }

 cout<<" Binary of "<<decnum<< " = "<<binNum<<endl;


}







int main(){

  dectobin(15);




    return 0;
}