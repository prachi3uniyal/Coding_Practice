// Check whether a character is a alphabet or not 
#include <iostream>
#include <string>
using namespace std;

int main() {
  char ch;
  cout<<"Enter a character\n";
  cin>>ch;
  int ascii=int(ch);
  if((ascii>=97&&ascii<=122)||(ascii>=65&&ascii<=90))
    cout<<"Alphabet";
  else
  cout<<"Not an Alphabet";
  return 1;
}