// C++ Code to check whether number is Abundant Number or not
#include <iostream>
using namespace std;
int main() {
  int num,sum=1;
  cout<<"Enter number\n";
  cin>>num;
  if(num<=0){
    cout<<"You have entered invalid number!";
  }
  else{
    for(int i=2;i<=num/2;i++){
      if(num%i==0)
        sum=sum+i;
    }
    if(sum>num)
      cout<<"Abundant Number";
    else
      cout<<"Not an Abundant Number";
  }

  return 0;
}
