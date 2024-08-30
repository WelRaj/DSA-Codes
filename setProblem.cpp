 #include<iostream>
 #include<vector>
 #include<set>
  using namespace std;
  void arrayunion(int arr1[],int arr2[],int n,int m){
    set<int>unionset;
   
    for(int i=0; i<n; i++){
        unionset.insert(arr2[i]);
    }
    for(int i=0; i<n; i++){
        unionset.insert(arr1[i]);
    }
    vector<int> ans(unionset.begin(),unionset.end());
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }  
       
  }
 int main(){
   int n;
   int m;
   cout<<"enter m : "<<endl;
   cin>>m;
   cout<<"enter n : "<<endl;
   cin>>n;
     int arr1[m];
   cout<<"enter the array1 :"<<endl;
   int arr2[n];
   cout<<"enter the array2 :"<<endl;

   for(int i=0; i<n; i++){
       cin>>arr2[i];
   }
   for(int i=0; i<m; i++){
       cin>>arr1[i];
   }
   arrayunion(arr1,arr2,n,m);
}