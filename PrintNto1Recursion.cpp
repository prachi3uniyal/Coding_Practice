// Print N to 1 using recursion
#include <iostream>
using namespace std;
void name(int n){

     if(n==0){
       return;
     }
     else{ 
     cout<<n<<endl;
     n--;
     name(n);
     } 
}

int main() {
  int n;
  cout<<"Enter N to print numbers from N to 1 \n";
  cin>>n;
  cout<<"Numbers from "<<n<<"  to 1 are\n";
  name(n);
  return 1;
}