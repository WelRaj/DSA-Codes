#include<iostream>
using namespace std;
  void insertionsort(int arr[],int n){
        for(int i=0; i<n; i++){
            int j=i;
            while(j>0 && arr[j-1]>arr[j]){
                swap(arr[j-1],arr[j]);
            
            j--;}
        }
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
   insertionsort(arr,n);
   return 0;
}