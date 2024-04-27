// C++ code for Selection Sort
#include <iostream>
using namespace std;
int main() {
   int n,min,temp,index,i,j;
  cout << "Enter n\n";
  cin >> n;
  int arr[n];
  cout << "Enter Array Elements\n";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  cout << "Entered Array Elements\n";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
 
  for(i=0;i<n-1;i++){
    min=arr[i];
    index=i;
      for(j=i+1;j<n;j++)
      {
        if(min>arr[j]){
          min=arr[j];
          index=j;
        }
      }
   
    temp=arr[i];
    arr[i]=min;
    arr[index]=temp;
  }
 
  cout << "\nSorted Array Elements are \n";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}