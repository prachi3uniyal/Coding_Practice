#include <iostream>
#include <vector>
using namespace std;

string reverseVowels(string s) {
  int len = s.length(), i, count = 0;
  if((len<1)||(len>300000))
return "0";
    vector<char> str;
  for (i = len - 1; i >= 0; i--) {
    if ((s[i] == 'a') || (s[i] == 'e') || (s[i] == 'i') || (s[i] == 'o') ||
        (s[i] == 'u') || (s[i] == 'A') || (s[i] == 'E') || (s[i] == 'I') ||
        (s[i] == 'O') || (s[i] == 'U')) {
      str.push_back(s[i]);
      
    }
  }

 
  for (i = 0; i < len; i++) {
    if ((s[i] == 'a') || (s[i] == 'e') || (s[i] == 'i') || (s[i] == 'o') ||
        (s[i] == 'u') || (s[i] == 'A') || (s[i] == 'E') || (s[i] == 'I') ||
        (s[i] == 'O') || (s[i] == 'U')) {
      s[i] = str[count];
    
      count++;
      
    }
  }
  return s;
}

int main() {
  cout << "Enter a string \n";
  string s;
  getline(cin, s);
  string result = reverseVowels(s);
   cout<<result;
}