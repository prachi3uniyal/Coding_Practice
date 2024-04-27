// Code in C++ to display whether entered number is postive or negative
#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter a number \n";
    cin>>num;
    if(num==0)
    cout<<"\nYou have entered Zero\n";
    else
    (num>0)?cout<<"\nPositve Number":cout<<"\nNegative Number";
    return 0;
}