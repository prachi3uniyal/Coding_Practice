// Code in C++ to check whether number is Palindrome or not
#include <iostream>
using namespace std;

int main() {
  int num,temp=0,rem,sum=0;
  cout<<"Enter a Number\n";
  cin>>num;
  temp=num;
  while(temp>0){
    rem=temp%10;
    sum=sum*10+rem;
    temp=temp/10;
  }
  (sum==num)?cout<<"Palindrome Number":cout<<"Not a Palindrome Number";
  return 0;
}