// C++ Code to find Power of a number 
#include <iostream>
using namespace std;
int main() {
  int num,power,product=1;
  cout<<"Enter number\n";
  cin>>num;
  cout<<"\nEnter Power\n";
  cin>>power;
  for(int i=1;i<=power;i++){
    product=product*num;
  }
  cout<<product;
  return 0;
}