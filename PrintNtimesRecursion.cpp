// Print name n times using recursion
#include <iostream>
using namespace std;
void name(int n){
     
     if(n==0){
       return;
     }
     else{ 
     cout<<"Prachi Uniyal"<<endl;
     n--;
     name(n);
     } 
}

int main() {
  int n;
  cout<<"Enter how many times you want to print name\n ";
  cin>>n;
  name(n);
  return 1;
}