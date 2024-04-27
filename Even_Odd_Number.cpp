// Code in C++ to display whether entered number is Even Or Odd
#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter a number \n";
    cin>>num;
    (num%2==0)?cout<<"\nEven Number":cout<<"\nOdd Number";
    return 0;
}