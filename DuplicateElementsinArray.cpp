//Print duplicate elements in array
#include <iostream>
#include <vector>
using namespace std;
void duplicate(int arr[],int n){
  int i,j,count;
  vector <int> vec;
   //cout<<vec.size();
  for(i=0;i<n;i++)
    {
      count=0;
      for(j=0;j<n;j++)
        {
          if(arr[j]==arr[i])
            count++;
        }
        if(count>1)
        {
          if(i==0)
          {
            vec.push_back(arr[i]);
          }
          else{
            int flag=0;
             for(int v=0;v<vec.size();v++)
               {
                 if(vec[v]==arr[i])
                   flag++;
               }
            if(flag==0)
               vec.push_back(arr[i]);
          }
        }
      
    }
   if(vec.size()==0)
     cout<<"No Duplicate Element Present";
   else
   {
     for(i=0;i<vec.size();i++)
       cout<<vec[i]<<" ";
   }
  return ;
}
int main() {
  int arr[10000];
  int n,i;
  cout << "Enter array limit\n";
  cin>>n;
  cout<<"Enter array elements\n";
  for(i=0;i<n;i++){
    cin>>arr[i];
  }

  duplicate(arr,n);
  

  return 1;
}