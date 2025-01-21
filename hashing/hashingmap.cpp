#include <bits/stdc++.h>
using namespace std;

int main() {

    unordered_map<int,int>mpp;


     int n;
      cout<<"Enter n: "<<endl;
      cin>>n;
      int arr[n];
      cout<<" Enter array :"<<endl;
            for(int i=0; i<n; i++){
           cin>>arr[i];
           mpp[arr[i]]++;
      
    }
    for(auto it: mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }
    cout << "Enter number of queries (q): ";
    int q;
    cin >> q;

    while (q--) {
        int number;
        cin>>number;
        cout<<mpp[number]<<endl;
    }

    return 0;
}
