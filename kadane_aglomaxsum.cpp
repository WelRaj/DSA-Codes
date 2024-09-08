#include<iostream>
using namespace std;
   int subarraymaxsum(int arr[],int n){
      int sum=0;
      int maxi=arr[0];
      for(int i=0; i<n; i++){
        sum = sum+arr[i];
        maxi = max(sum, maxi);
        if(sum<0){
            sum=0;
        }
      }
      return maxi;
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
 int max= subarraymaxsum(arr,n);
   cout<<max;
}