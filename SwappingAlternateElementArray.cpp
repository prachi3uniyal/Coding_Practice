//Swap Alternate elements in array
#include <iostream>
using namespace std;
void swap(int arr[],int n){
  int i,temp;
  for(i=0;i<n-1;i+=2)
    {
      temp=arr[i];
      arr[i]=arr[i+1];
      arr[i+1]=temp;
    }
  return ;
}
int main() {
  int arr[10000];
  int n,i;
  cout << "Enter array limit\n";
  cin>>n;
  cout<<"Enter array elements\n";
  for(i=0;i<n;i++){
    cin>>arr[i];
  }
  
  swap(arr,n);
  cout<<"After Swapping Alternate elements in the array\n";
  for(i=0;i<n;i++)
    cout<<arr[i]<<" ";
  
  return 1;
}