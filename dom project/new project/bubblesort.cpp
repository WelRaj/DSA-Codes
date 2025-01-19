#include<iostream>
using namespace std;
  void bubblesort(int arr[],int n){
        for(int i=0; i<n; i++){
             for(int j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }}
        for(int i=0; i<n; i++){
         cout<<arr[i]<<" ";
       }
      
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
   bubblesort(arr,n);
   return 0;
}