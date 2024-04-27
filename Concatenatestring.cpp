// concatenate string
#include <iostream>
#include <string>
using namespace std;
int main() {
  string s1,s2;
  cout<<"Enter first string\n";
  getline(cin,s1);
  cout<<"Enter second string\n";
  getline(cin,s2);
  string s3=s1+s2;
  cout<<"\nConcatenated string is "<<s3;
  return 1;
}