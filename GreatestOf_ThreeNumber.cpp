// Code in C++ to display greatest of three numbers
#include <iostream>
using namespace std;

int main() {
    int num1,num2,num3;
    cout<<"Enter First number\n";
    cin>>num1;
    cout<<"\nEnter Second number\n";
    cin>>num2;
    cout<<"\nEnter Third number\n";
    cin>>num3;
    cout<<"\n Greatest of three numbers is ";
    if(num1>num2){
       (num1>num3)?cout<<num1:cout<<num3;
    }
    else{
      (num2>num3)?cout<<num2:cout<<num3;
    } 
    return 0;
}