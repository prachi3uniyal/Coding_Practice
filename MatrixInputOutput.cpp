// C++ Code to input matix elements and print it in matrix format
#include <iostream>
using namespace std;

int main() {
     int arr[100][100];
     int row,col,i,j;
      cout<<"Enter number of rows\n";
      cin>>row;
      cout<<"Enter number of coloumn\n";
      cin>>col;
   cout<<"Enter elements of the matrix\n";
      for(i=0;i<row;i++){
        for(j=0;j<col;j++){
          cin>>arr[i][j];
        }
      }
        cout<<"\nThe matrix entered is \n";
        for(i=0;i<row;i++){
        for(j=0;j<col;j++){
          cout<<arr[i][j]<<" ";
        }
          cout<<endl;
      }
}