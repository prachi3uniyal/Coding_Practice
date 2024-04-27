// Single Number Leetcode
#include <iostream>
#include <vector>

using namespace std;
   bool containsDuplicate(vector<int>& nums) {
  int len=nums.size();  
     if((len<1)||(len>100000))
       return false;
     
  int count=0;
  for(int i=0;i<len;i++){
    for(int j=0;j<len;j++)
      {
        if(nums[i]==nums[j])
        {
          count++;
        }
      }
    if(count>1){
      return true;
    }

    count=0;
  }
  return false;
}
int main() {
  vector<int> nums;
  int n,temp;
  cout<<"Enter n\n";
  cin>>n;
  cout<<"\nenter array elements\n";
  for(int i=0;i<n;i++){
    cin>>temp;
    nums.push_back(temp);
  }
  bool result=containsDuplicate(nums);
  cout<<result;
  return 1;
}