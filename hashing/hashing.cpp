#include<bits/stdc++.h>
using namespace std;
int main(){
      int n;
      cout<<" enter n: "<<endl;
      cin>>n;
      int arr[n];
      cout<<" Enter array :"<<endl;
            for(int i=0; i<n; i++){
           cin>>arr[i];
      }
      int hash[13]={0};
      for(int i=0; i<n; i++){
         hash[arr[i]]+=1;
      }
      cout<<"enter number that check :"<<endl;
       int q;
       cin>>q;
       while(q--){
        int number;
        cin>> number;
        cout<<hash[number]<<endl;
       }
}