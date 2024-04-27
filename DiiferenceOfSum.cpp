// Difference Between Element Sum and Digit Sum of an Array(Leetcode)
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int differenceOfSum(vector<int>& nums) {
  int len=nums.size(),sum=0,total=0,rem;
  if((len>2000) || (len<1))
    return 0;
  else{
    for(int i=0;i<len;i++)
      sum=sum+nums[i];
      for(int i=0;i<len;i++){
      int temp=nums[i];
          if((temp>2000) || (temp<1))
            return 0;
         while(temp>0){
           rem=temp%10;
           total=total+rem;
           temp=temp/10;
         } 
    }
    }
  if (sum>total)
    return sum-total;
    return total-sum;
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
  int answer=differenceOfSum(vec);
  cout<<"\n Answer is "<<answer;
  return 1;
}