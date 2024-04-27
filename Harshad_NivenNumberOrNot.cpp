// C++ Code to check whether number is Harshad/Niven or not
#include <iostream>
using namespace std;
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
    sum=sum+rem;
    temp=temp/10;
    }
    if(num%sum==0)
      cout<<"Harshad/Niven Number";
    else
      cout<<"Not a Harshad/Niven Number";
  }
    return 0;
}
  