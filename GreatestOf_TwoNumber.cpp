// Code in C++ to display greatest of two numbers
#include <iostream>
using namespace std;

int main() {
    int num1,num2;
    cout<<"Enter First number\n";
    cin>>num1;
    cout<<"\nEnter Second number\n";
    cin>>num2;
    cout<<"\nGreatest of two numbers is ";
      (num1>num2)?cout<<num1:cout<<num2;
    return 0;
}