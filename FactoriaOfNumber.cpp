// C++ Code to find factorial of a number 
#include <iostream>
using namespace std;
int main() {
  int num,factorial=1;
  cout<<"Enter number\n";
  cin>>num;
  for(int i=1;i<=num;i++){
    factorial=factorial*i;
  }
  cout<<factorial;
  return 0;
}