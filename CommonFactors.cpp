// C++ code to print count of common factors (Leetcode)
#include <iostream>
using namespace std;
int commonFactors(int a, int b) {
  if(((a<1)||(a>1000))||((b<1)||(b>1000)))
    return 0;
  int min,count=1,i;
  (a>b)?min=b:min=a;
  for(i=2;i<=min;i++){
    if((a%i==0)&&(b%i==0))
      count++;
  }
  return count;

}
int main() {
  int a,b;
  cout<<"Enter a \n";
  cin>>a;
  cout<<"Enter b \n";
  cin>>b;
  int result=commonFactors(a,b);
  cout<<result;
}