 #include<iostream>
 #include<vector>
using namespace std;
  void merge(int arr[],int low,int mid,int high){
    vector <int>temp;
    int left=low;
    int right=mid+1;
    while(left<=mid && right <=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;   
        }}
        while(left<=mid){
            temp.push_back(arr[left]);
            left++;
        }
        while(right<=high){
            temp.push_back(arr[right]);
            right++;
        }
    
    for(int i=low; i<=high; i++){
          arr[i] = temp[i - low];
    }


  }
  void mergesort(int arr[],int low, int high){
         if(low>=high){
            return;
         }
        int mid=(low+high)/2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        merge(arr,low,mid,high);
  }
int main(){
   int n;
   cout<<"enter n : "<<endl;
   cin>>n;
     int arr[n];
     int low=0;
     int high= n;
   cout<<"enter the array :"<<endl;

   for(int i=0; i<n; i++){
       cin>>arr[i];
   }
   mergesort(arr,low,high);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
   return 0;
}