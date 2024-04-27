// C++ Code to check whether number is Automorphic Number or not
#include <iostream>
using namespace std;
int main() {
  int num,sq,i=1,rem,sum=0,sum1=0;
  cout<<"Enter number\n";
  cin>>num;
  if(num<=0){
    cout<<"You have entered invalid number!";
  }
  else{
   sq=num*num; 
   while(i<=2){
     rem=sq%10;
     sum=sum*10+rem;
     sq=sq/10;
     i++;
   }
    while(sum>0)
      {
        rem=sum%10;
        sum1=sum1*10+rem;
        sum=sum/10;
      }
  
    if(sum1==num)
      cout<<"Automorphic Number";
  else
  cout<<" Not an Automorphic Number";
  }
  return 0;
}

