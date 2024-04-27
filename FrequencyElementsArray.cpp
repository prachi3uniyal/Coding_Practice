// C++ Code to calculate frequency of each elements in the array
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
      cout<<"The Frequency of "<<arr[i]<<" is "<<count<<endl;
      count=0;
    }
  return 0;
}