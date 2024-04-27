// Length of the string without using strlen() function
#include <iostream>
#include <string>
using namespace std;

int main() {
  string str;
  int len=0;
  cout<<"Enter a string\n";
  getline(cin,str);
   for(int i=0;str[i]!='\0';i++)
    len++;
  cout<<"Length of the string is "<<len;
  return 1;
}