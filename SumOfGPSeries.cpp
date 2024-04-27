// C++ Code to check Sum of GP Series
#include <iostream>
#include <cmath>

using namespace std;
int main() {
  int n,a;
  double r,sum=0.0;
  cout<<"Enter the number of terms\n";
  cin>>n;
  cout<<"Enter the first term \n";
  cin>>a;
  cout<<"Enter the commom ratio between them\n";
  cin>>r;
  sum=(((pow(r,n))-1)*a)/(r-1);
  cout<<"Sum of GP Series is "<<sum;
  return 0;
}
