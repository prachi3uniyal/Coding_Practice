// Code in C++ to check whether number is Armstrong or not
#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int num,temp=0,rem,sum=0,count=0;
  cout<<"Enter a Number\n";
  cin>>num;
  temp=num;
  while(temp!=0){
    rem=temp%10;
    temp=temp/10;  
    count++;
  }
  temp=num;
  while(temp!=0){
    rem=temp%10;
    sum=sum+pow(rem, count);
    temp=temp/10;   
  }
  (sum==num)?cout<<"Armstrong Number":cout<<"Not a Armstrong Number";
  return 0;
}