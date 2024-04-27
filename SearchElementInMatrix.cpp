// C++ Code to search element in matrix
#include <iostream>
using namespace std;

int main() {
     int arr[100][100];
     int row,col,i,j,count=0;
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
      int ele;
  cout<<"\n Enter element that you want to search\n";
  cin>>ele;
  for(i=0;i<row;i++){
    for(j=0;j<col;j++){
      if(arr[i][j]==ele)
        count++;
    }
  }
  if(count!=0)
    cout<<"Element Found";
  else
    cout<<"Element Not Found";
}