// Toggle each character in a string (Upper to Lower and vice versa)
#include <iostream>
#include <string>
using namespace std;

int main() {
  string str;
  cout<<"Enter a string\n";
  getline(cin,str);
  for(int i=0;i<str.length();i++){
    if((int(str[i])>=65) && (int(str[i])<=90)){
      str[i]=str[i]+32;
    }
    else if((int(str[i])>=97) && (int(str[i])<=122)){
      str[i]=str[i]-32;
    }
    else{}
  } 
  cout<<"Toggled String is "<<str;
  return 1;
}