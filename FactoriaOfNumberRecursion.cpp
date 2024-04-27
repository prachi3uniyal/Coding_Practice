// Print Factorial of a number using Recursion
#include <iostream>
using namespace std;
void factorial(int n,int fact){

     if(n==0){
       cout<<"Factorial of number is "<<fact;
       return;
     }
     else{ 
       fact=fact*n;
       n--;
       factorial(n,fact);
     } 
}

int main() {
  int n;
  cout<<"Enter a number \n";
  cin>>n;
  int fact=1;
    factorial(n,fact);
  return 1;
}