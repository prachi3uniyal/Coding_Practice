// C++ Code to print Fibonacci Series upto nth term
#include <iostream>
using namespace std;
int main() {
  int n,a=0,b=1,c=0,count=0;
  cout<<"Enter number\n";
  cin>>n;
  if(n<=0)
    cout<<"You have entered invalid value!";
  else if(n==1)
    cout<<a;
  else if(n==2)
    cout<<a<<" "<<b;
  else{
      cout<<a<<" "<<b;
      for(int i=1;i<=n-2;i++){
         c=a+b;
         cout<<" "<<c;
          a=b;
          b=c;
        count++;
      }
   
  }
  return 0;
}
