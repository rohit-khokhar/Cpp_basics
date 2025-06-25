#include <iostream>
using namespace std;
int main()
{

    int num;

    do
    {   cout<<"Enter a number : "<<endl;
        cin>>num; 


        if(num % 10 == 0) {
        // cout <<"stop"<<endl;
        break;
    } 
        cout <<" u entered : "<<num<<endl;
        

    } while (true);



    return 0;
}
