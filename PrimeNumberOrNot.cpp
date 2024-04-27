// C++ Code to check whether given number is Prime number or not
#include <iostream>
using namespace std;
int main() {
  int num,count=0;
  cout<<"Enter number\n";
  cin>>num;
  if((num==0) || (num==1))
     cout<<"Not a Prime Number";
  else{
  for(int i=2;i<=num/2;i++){
    if(num%i==0)
     count++;
    
  }
  if(count==0)
    cout<<"Prime Number";
  else
    cout<<"Not a Prime Number";
  }
  return 0;
}