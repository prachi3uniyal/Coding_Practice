//Print duplicate elements in array
#include <iostream>
#include <vector>
using namespace std;
void intersection(int arr[],int n,int arr2[], int l){
  int max,min,i,j,count;
  (n>l)?max=n:max=l;
  (n>l)?min=l:min=n;
   bool flag=0;
  for(i=0;i<max;i++){
     count=0;
     for(j=0;j<min;j++)
       {
         if(arr[i]==arr2[j]){
           count++;
           flag=1;
         }
       }
    if(count>0)
      cout<<arr[i]<<" ";
     
  }
  if(flag==0)
    cout<<"No common element found on intesection";
  return ;
}
int main() {
  int arr[10000],arr2[10000];
  int n,l,i;
  cout << "Enter first array limit\n";
  cin>>n;
  cout<<"Enter first array elements\n";
  for(i=0;i<n;i++){
    cin>>arr[i];
  }
  cout << "Enter second array limit\n";
  cin>>l;
  cout<<"Enter second array elements\n";
  for(i=0;i<l;i++){
    cin>>arr2[i];
  }

  intersection(arr,n,arr2,l);


  return 1;
}