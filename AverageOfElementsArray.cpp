// C++ Code to calculate average of the elements in the array
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
   double avg= static_cast<double>(sum) / n;
  cout<<"\n average of array element is "<<avg;
  return 0;
}