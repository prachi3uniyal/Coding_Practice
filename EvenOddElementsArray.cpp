// C++ Code to find even and odd elements in the array
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
  for(int i=0;i<n;i++)
    {
      if(arr[i]%2==0)
        cout<<arr[i]<<" is even\n";
      else
         cout<<arr[i]<<" is odd\n";
    }
  
  
  return 0;
}