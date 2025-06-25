#include<iostream>
using namespace std;

void print(int arr[], int n){
   for(int i=0; i<n; i++){
       cout<<arr[i]<<",";
   }
       cout<<endl;
}

void bubbleSort(int arr[], int n){

    for (int i = 0; i < n-1; i++){
    bool isSwap = false;
     cout<<"outer"<<endl;
    
        for (int j = 0; j<n-i-1;  j++)
        {
     cout<<"inner"<<endl;
          
            if(arr[j] > arr[j+1]){
                swap( arr[j], arr[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap){
               return;
        }
        
    }
    
    print(arr, n);

}



int main(){
   
      int arr[5] = {1,2,3,4,5};

     bubbleSort(arr, 5);
     cout<<endl;
}