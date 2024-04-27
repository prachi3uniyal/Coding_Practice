// print N to 1 using backtracking
#include <iostream>
using namespace std;

void print(int n,int i)
{
  if(i>n)
    return;
  else{
    print(n,i+1);
    cout<<i<<endl;
  }
}
int main() {
  cout<<"Enter n\n";
  int n,i=1;
  cin>>n;
  print(n,i);
  return 1;
  }