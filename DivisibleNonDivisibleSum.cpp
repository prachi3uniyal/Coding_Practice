// Divisible and Non-divisible Sums Difference (Leetcode)
#include <iostream>
using namespace std;

int differenceOfSums(int n, int m) {
  if(((n<1)||(n>1000))&&((m<1)||(m>1000)))
    return 0;
  int num1=0,num2=0,i;
  for(i=1;i<=n;i++)
    {
     if(i%m!=0)
       num1=num1+i;
     else
       num2=num2+i;
    }
  return num1-num2;
}
int main() {

  int m,n;
  cout<<"Enter n\n";
  cin>>n;
  cout<<"Enter m\n";
  cin>>m;
  int result=differenceOfSums(n,m);
  cout<<result;
  return 1;
}