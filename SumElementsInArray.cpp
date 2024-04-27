// C++ Code to calculate sum of the elements of the array
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
  int sum=0;
  for(int i=0;i<n;i++)
    sum=sum+arr[i];
  cout<<"\n Sum of array element is "<<sum;
  return 0;
}