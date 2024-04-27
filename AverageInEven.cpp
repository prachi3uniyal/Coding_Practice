// Average Value of Even Numbers That Are Divisible by Three (Leetcode)
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int averageValue(vector<int>& nums) { 
  if((nums.size()<1)||(nums.size()>1000))
    return 0;
  else{
    
  int count=0,sum=0;
  for(int i=0;i<nums.size();i++)
    {
      if((nums[i]<1)||(nums[i]>1000))
       return 0;
      else{
      if((nums[i]%2==0)&&(nums[i]%3==0))
      {
        sum=sum+nums[i];
        count++;
      }
    }
    }
    if(count!=0){
  return sum/count;
    }
  }
  return 0;
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
  int answer=averageValue(vec);
  cout<<"\n Answer is "<<answer;
  return 1;
}