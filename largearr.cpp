#include<iostream>
using namespace std;
int main()
{
   int arr[] = {5,4,3,9,2,9,45};

   int n = sizeof(arr)/ sizeof(int);

 int max = arr[0];
 int min = arr[0];

   for(int i = 0; i<n; i++){

    if(arr[i]>max){
        max = arr[i];
        cout<<"assign value "<< arr[i] << " to max "<<endl;
    }
   
     if(arr[i]<min){
        min = arr[i];
        cout<<"assign value "<< arr[i] << " to min "<<endl;
    }


   }



    cout << "max = "<<max<<endl;
    cout << "min = "<<min<<endl;





return 0;
    
} // namespace std;

