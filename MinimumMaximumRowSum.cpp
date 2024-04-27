// C++ Code to print minimum and maximum row sum of matrix
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
    cout<<"\n Matrix \n";
      for(i=0;i<row;i++){
        for(j=0;j<col;j++){
          cout<<arr[i][j]<<" ";
        }
        cout<<endl;
      }
      int sum=0,min,max,count=0; 
     cout<<"\nRow wise Sum of matrix are\n";
      for(i=0;i<row;i++){
          count++;
        for(j=0;j<col;j++){
          sum=sum+arr[i][j];
        }
        if(count==1){
          min=sum;
          max=sum;
        }
        else{
        if(min>sum)
          min=sum;
        if(max<sum)
          max=sum;
        }
        sum=0;
      }
  cout<<"Minimum sum row wise is "<<min<<endl;
  cout<<"Maximum sum row wise is "<<max;
}