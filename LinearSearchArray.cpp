//Linear Search in an Array
#include <iostream>
using namespace std;
bool search(int arr[],int n,int ele){
  int i;
  for(i=0;i<n;i++)
    {
      if(arr[i]==ele)
        return 1;
    }
  return 0;
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
  cout<<"enter the element you want to search\n";
  int ele;
  cin>>ele;
  bool res=search(arr,n,ele);
   (res==1)? cout<<"Element is Present in given Array" : cout<<"Element is not Present in given Array";
  return 1;
}