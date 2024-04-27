// C++ Code to print minimum and maximum coloumn sum of matrix
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
      for(i=0;i<col;i++){
          count++;
        for(j=0;j<row;j++){
          sum=sum+arr[j][i];
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
  cout<<"Minimum sum coloumn wise is "<<min<<endl;
  cout<<"Maximum sum coloumn wise is "<<max;
}