// C++ Code to print row wise sum of matrix
#include <iostream>
using namespace std;

int main() {
     int arr[100][100];
     int row,col,i,j,sum=0;
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
    cout<<"\n Matrix \n";
      for(i=0;i<row;i++){
        for(j=0;j<col;j++){
          cout<<arr[i][j]<<" ";
        }
        cout<<endl;
      }
     cout<<"\nRow wise Sum of matrix are\n";
      for(i=0;i<row;i++){
        for(j=0;j<col;j++){
          sum=sum+arr[i][j];
        }
        cout<<sum<<" ";
        sum=0;
      }
}