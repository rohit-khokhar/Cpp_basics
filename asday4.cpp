#include<iostream>
 using namespace std;

 int main(){
     
     int n;


     cout<<" Enter three digit no. :  "<<endl;

     cin>>n;


      int num = n ;

      int dig1 = num%10;
        num /= 10;
       int dig2 = num %10;
    num /= 10;
        int dig3 = num%10;
        num /= 10;
       int cubeSum = dig1*dig1*dig1 + dig2*dig2*dig2 + dig3*dig3*dig3;
     if ( cubeSum == n)
      {
        cout<<n<<" the num is armstrong no."<<endl;

     }

     

     else{
        cout<<n<<"the no. is not a armstrong no."<<endl;
     }
    //  if( -a){
    //     cout<<"the no is negative"<<endl;
    //  }

    //  else if(a){
    //  cout<<"the no a is positive"<<endl;
    //  }
     
    //  else{
    //     cout<<"the no is 0"<<endl;
    //  }
     





    return 0;
 }
