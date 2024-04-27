// Print 1 to N using recursion
#include <iostream>
using namespace std;
void name(int n,int i){

     if(i>n){
       return;
     }
     else{ 
     cout<<i<<endl;
     i++;
     name(n,i);
     } 
}

int main() {
  int n,i=1;
  cout<<"Enter N to print numbers from 1 to N \n";
  cin>>n;
  cout<<"Numbers from 1 to "<<n<<" are\n";
  name(n,i);
  return 1;
}