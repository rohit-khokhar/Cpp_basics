#include<iostream>
using namespace std;

//  int product(int a, int b){
     
//       int prod = a*b;
//       return prod;
//  }


int fact(int n){
   
    int fact = 1;


  for (int i=1; i<=n;  i++){
     fact = fact * i;
  }
   cout<<"factorial is(" << n << ") = "<<fact<<endl;

  return fact;
}



int main() {
     fact(1);
     fact(2);
     fact(3);
     fact(4);
     fact(5);
     fact(8);

     

    // int rs = product(2,3);
    //  cout<<"Product is : "<<rs<<endl;


    //   int ers = num(6);
    //  cout<<"the num is : "<<ers<<endl;

    //  cout<<isEven(86)<<endl;
    return 0;
}