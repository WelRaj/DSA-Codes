#include<iostream>
#include<vector>
using namespace std;
vector<int>mergesortedarray(vector<int>a,int n,int m,vector<int>b){
        int i=n-1;
        int j=m-1;
        int k=n+m-1;
        vector<int>ans(n+m);
        while(i>=0 && j>=0){
            if(a[i]>=b[j]){
                ans[k]=a[i];
                 k--;
                 i--;
            }else{
                ans[k]=b[j];
                k--;
                j--;
            }
            }
            while(i>=0){
                ans[k]=a[i];
                k--;
                i--;
            }
             while(j>=0){
                ans[k]=b[j];
                k--;
                j--;
            }
            return ans;

        }
int main(){
      int n,m;
      cout<<"n"<< " m"<<endl;
      cin>>n;
      cin>>m;
      vector<int>a(n);
      vector<int>b(m);
      cout<<"array n :"<<endl;
      for(int i=0; i<n; i++){
         cin>>a[i];
      }
      cout<<"array m :"<<endl;

      for(int j=0; j<m; j++){
         cin>>b[j];
      }
     vector<int>ans=mergesortedarray(a,n,m,b);
     cout<<"merge array"<<endl;
      for(int i=0; i<ans.size(); i++){
          cout<<ans[i]<<" ";
      }
}