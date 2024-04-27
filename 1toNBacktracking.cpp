// print 1 to N using backtracking
#include <iostream>
using namespace std;

void print(int n)
{
  if(n==0)
    return;
  else{
    print(n-1);
    cout<<n<<endl;
  }
}
int main() {
  cout<<"Enter n\n";
  int n;
  cin>>n;
  print(n);
  return 1;
  }