#include<iostream>
using namespace std;
int main(){
      int n=8;
      int p1=0;
      int p=1;
      for(int i=2; i<=n; i++){
        int curr = p1+p;
        p1=p;
        p=curr;
      }
      cout<<p;

   return 0;
}