// C++ Code to find largest number in an array
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
  int max=arr[0];
  for(int i=1;i<n;i++)
    {
      if(arr[i]>max)
        max=arr[i];
    }
  cout<<"\n Largest Number in array is "<<max;
  return 0;
}