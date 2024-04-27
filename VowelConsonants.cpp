// Check whether a character is a vowel or consonant 
#include <iostream>
#include <string>
using namespace std;

int main() {
  char ch;
  cout<<"Enter a character\n";
  cin>>ch;
  if((ch=='A')||(ch=='a')||(ch=='E')||(ch=='e')||(ch=='I')||(ch=='i')|| (ch=='O')||(ch=='o')||(ch=='U')||(ch=='u'))
    cout<<"Vowel";
  else
    cout<<"Consonants";
  return 1;
}