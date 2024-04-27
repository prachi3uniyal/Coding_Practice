// C++ Code to find sum of numbers in given range
#include <iostream>
using namespace std;
int main() {
  int startRange,lastRange,sum=0;
  cout<<"Enter starting range of number\n";
  cin>>startRange;
  cout<<"Enter last range of number\n";
  cin>>lastRange;
  for(int i=startRange;i<=lastRange;i++){
    sum=sum+i;
  }
  cout<<"\nSum of the entered range is "<<sum;
  return 0;
}