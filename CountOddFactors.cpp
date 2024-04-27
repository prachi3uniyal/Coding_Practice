// Given an integer N, count the numbers having an odd number of factors from 1 to N (inclusive).(Count Odd Factors) 
#include <iostream>
using namespace std;

int factor(int n)
{
 if(n==1)
   return 1;
  else{
    int i,count=2;
    for(i=2;i<=n/2;i++){
      if(n%i==0)
        count++;
      }
    if(count%2!=0)
      return 1;
    return 0;
  }
}
int main() {
  int n;
  cout<<"Enter n \n";
  cin>>n;
  if(n<=0){
    cout<<"Enter only positive for n";  
    return 1;
  }
  else{
    int i,flag=0,check;
    for(i=1;i<=n;i++)
      {
        check=factor(i);
        if(check==1)
          flag++;
      }
    cout<<flag;
  }
  return 1;
}