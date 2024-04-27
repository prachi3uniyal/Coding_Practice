// C++ Code to check whether number is strong or not
#include <iostream>
using namespace std;

int factorial(int rem){
  int fact=1;
  for(int i=1;i<=rem;i++){
    fact=fact*i;
  }
  return fact;
}

int main() {
  int num,rem,sum=0,temp;
  cout<<"Enter number\n";
  cin>>num;
  if(num<=0)
    cout<<"You have entered invalid Number";
  else{
  temp=num;
  while(temp!=0){
    rem=temp%10;
    sum=sum+factorial(rem);
    temp=temp/10;
    }
  if(sum==num)
    cout<<"Strong Number";
  else
    cout<<"Not a Strong Number";
  }
  return 0;
}