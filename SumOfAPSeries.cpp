// C++ Code to check Sum of AP Series
#include <iostream>
using namespace std;
int main() {
  int n,a,d,sum=0;
  cout<<"Enter the number of terms\n";
  cin>>n;
  cout<<"Enter the first term \n";
  cin>>a;
  cout<<"Enter the commom difference between them\n";
  cin>>d;
  sum=((2*a+(n-1)*d)*n)/2;
  cout<<"Sum of AP Series is "<<sum;
  return 0;
}
