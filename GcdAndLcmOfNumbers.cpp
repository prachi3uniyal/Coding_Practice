// C++ Code to find GCD and LCM of Two numbers
#include <iostream>

using namespace std;
int gcd(int num1,int num2){
  int rem=0;
  do{
    rem=num1%num2;
    num1=num2;
    num2=rem;
  }while(rem!=0);
  if(num1<0)
    return num1*(-1);
  return num1;
} 
int lcm(int num1,int num2, int gcdresult){
  int lcmresult;
  lcmresult=(num1*num2)/gcdresult;
  if(lcmresult<0)
    return lcmresult*-1;
  return lcmresult;
} 
int main() {
  int num1,num2,lcmresult=0,gcdresult=0;
  cout<<"Enter first number\n";
  cin>>num1;
  cout<<"Enter second number\n";
  cin>>num2;
  gcdresult=gcd(num1,num2);
  lcmresult=lcm(num1,num2,gcdresult);
  cout<<"Gcd:"<<gcdresult<<endl<<"Lcm:"<<lcmresult;
  return 0;
}
