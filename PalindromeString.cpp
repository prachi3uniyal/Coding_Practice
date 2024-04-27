// check if string is Palindrome or not
#include <iostream>
#include <string>
using namespace std;
bool checkPalindrome(string s)
{ 
    string str="";
    for(int i=(s.length())-1;i>=0;i--)
      str=str+s[i];
    if(s==str)
      return 1;
    else
    return 0;
}
int main() {
  string s;
  cout<<"Enter a string\n";
  getline(cin,s);
  bool result=checkPalindrome(s);
  cout<<result;
  return 1;
}