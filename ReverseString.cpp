// Reverse String
#include <iostream>
#include <string>
using namespace std;
string reverseString(string s)
{ 
    string str="";
    for(int i=(s.length())-1;i>=0;i--)
      str=str+s[i];
    return str;
}
int main() {
  string s;
  cout<<"Enter a string\n";
  getline(cin,s);
  string result=reverseString(s);
  cout<<result;
  return 1;
}