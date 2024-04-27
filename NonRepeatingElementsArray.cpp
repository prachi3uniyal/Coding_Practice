// C++ Code to Find all the non-repeating elements for a given array. Outputs can be in any order.
#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter range of the Array\n";
  cin >> n;
  int arr[n];
  cout << "Enter the array elements one-by-one\n";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    cout << endl;
  }
  int count=0,ele;
  for(int i=0;i<n;i++)
    {
      ele=arr[i];
      for(int j=0;j<n;j++){
        if(ele==arr[j])
        count++;
      }
     if(count==1)
       cout<<arr[i]<<" ";
      count=0;
    }
  return 0;
}