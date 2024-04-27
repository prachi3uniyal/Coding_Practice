// Reverse of an array
#include <iostream>
using namespace std;
void reverse(int arr[],int n){
  int temp,i;
  for(i=0;i<n/2;i++){
    temp=arr[i];
    arr[i]=arr[n-1-i];
    arr[n-1-i]=temp;
  }
  return;
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
    reverse(arr,n);
    cout<<"Reverse of Array is \n";
    for(i=0;i<n;i++)
      cout<<arr[i]<<" ";
  return 1;
}