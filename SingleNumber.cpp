// Single Number Leetcode
#include <iostream>
#include <vector>

using namespace std;
int singleNumber(vector<int>& nums) {
  int len=nums.size();  
  if((len<1)||(len>30000))
    return 0;
  int count=0;
  for(int i=0;i<len;i++){
    for(int j=0;j<len;j++)
      {
        if(nums[i]==nums[j])
        {
          count++;
        }
      }
    if(count==1){
      return nums[i];
    }
 
    count=0;
  }
  return 0;
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
  int result=singleNumber(nums);
  cout<<result;
  return 1;
}