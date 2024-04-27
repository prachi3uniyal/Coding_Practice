// Reverse String
#include <iostream>
#include <string>
using namespace std;

string toLowerCase(string s) {
  int len=s.length();
  if((len<1)||(len>100))
    return "0";
  for(int i=0;i<len;i++)
    {
        if ((s[i] >= 65) && (s[i] <= 90))
      {
        s[i]=s[i]+32;
      }
    }
  return s;
}
int main() {
   string s;
   cout<<"Enter string\n";
   getline(cin,s);
   string res=toLowerCase(s);
   cout<<res;
   return 1;
}