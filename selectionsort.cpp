#include<iostream>
using namespace std;
  void selectionsort(int arr[],int n){
    
       for(int i=0; i<n-1; i++){
       int  min=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        if(min!=i){
            
            int temp = arr[min];
            arr[min]= arr[i];
             arr[i]= temp;
             }
       }
        for(int i=0; i<n; i++){
         cout<<arr[i]<<" ";
       }
      cout<<endl;
  }
int main(){
   int n;
   cout<<"enter n : "<<endl;
   cin>>n;
     int arr[n];
   cout<<"enter the array :"<<endl;

   for(int i=0; i<n; i++){
       cin>>arr[i];
   }
   selectionsort(arr,n);
   return 0;
}