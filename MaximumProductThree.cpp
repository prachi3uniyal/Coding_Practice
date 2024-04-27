// Maximum Product of Three Numbers (Leetcode)
#include <iostream>
#include <string>
#include <vector>
using namespace std;

  int maximumProduct(vector<int>& nums) {
    int n,i,j,temp,index,min;
    n=nums.size();
    if((n<3)||(n>10000))
      return 0;
    else{
      if((nums[0]<-1000)||(nums[0]>1000))
        return 0;
    for(i=0;i<n-1;i++)
      {
        min=nums[i];
        index=i;
        for(j=i+1;j<n;j++)
          {
            if((nums[j]<-1000)||(nums[j]>1000))
              return 0;
            if(min>nums[j])
            {
              min=nums[j];
              index=j;
            }
          }
        temp=nums[i];
          nums[i]=min;
          nums[index]=temp;
      }
      cout << "\nSorted Array Elements are \n";
      for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
      }
    }
    int prod,prod1;
    prod=nums[n-1]*nums[n-2]*nums[n-3];
    prod1=nums[0]*nums[1]*nums[n-1];
    if(prod>prod1)
    return prod;
    else
      return prod1;
  }
  

int main() {
  vector <int> vec;
  int n,c;
  cout<<"Enter n\n";
  cin>>n;
  cout<<"Enter Array elements\n";
  for(int i=0;i<n;i++)
    {
      cin>>c;
      vec.push_back(c);
    }
  int answer=maximumProduct(vec);
  cout<<"\n"<<answer;
  return 1;
}