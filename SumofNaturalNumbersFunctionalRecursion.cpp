// Print sum of n using functional recursion
#include <iostream>
using namespace std;

int add(int n)
{
  if(n==0)
    return 0;
  else
    return n + add(n-1);
}
int main() {
  cout<<"Enter n\n";
  int n;
  cin>>n;
  cout << add(n) << endl;
  return 1;
  }