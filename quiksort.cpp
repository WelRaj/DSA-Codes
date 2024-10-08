  #include<iostream>
  using namespace std;
  int solve(int arr[], int low, int high){
     int pivot=arr[low];
     int i=low;
     int j= high;
     while(i<j){
        while(arr[i]<=pivot && i<high){
            i++;
        }
        while(arr[j]>pivot && j>low){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);

        }
     }
     swap(arr[low],arr[j]);
      return j;
  }
   void quicksort(int arr[],int low,int high){
        
          if(low<high){
            int pindex= solve(arr,low, high);
            quicksort(arr,low,pindex-1);
            quicksort(arr,pindex+1,high);}
   }
    
 int main(){
   int n;
   cout<<"enter n : "<<endl;
   cin>>n;
     int arr[n];
   cout<<"enter the array :"<<endl;
   int low =0;
   int high=n-1;
   for(int i=0; i<n; i++){
       cin>>arr[i];
   }
   quicksort(arr,low,high);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
   return 0;
}