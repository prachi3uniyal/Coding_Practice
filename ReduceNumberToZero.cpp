// C++ code to print Number of Steps to Reduce a Number to Zero
#include <iostream>
using namespace std;
int numberOfSteps(int num) {
  if((num<0)||(num>1000000))
    return 0;
  int count=0;
   while(num!=0){
      if(num%2==0){
        num=num/2; 
      }
     else{
       num=num-1;
     }
     count++;
   }
  return count;
}
int main() {
  int num;
  cout<<"Enter a number\n";
  cin>>num;
  int result=numberOfSteps(num);
  cout<<result;
}