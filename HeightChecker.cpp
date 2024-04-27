// HeightChecker (Leetcode)
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int heightChecker(vector<int>& heights) {
  vector<int> expected;
  expected=heights;
  int n,i,j,temp,index,min,count=0;
  n=expected.size();
  if((n<1)||(n>100))
    return 0;
  else{
    if((expected[0]<1)||(expected[0]>100))
      return 0;
  for(i=0;i<n-1;i++)
    {
      min=expected[i];
      index=i;
      for(j=i+1;j<n;j++)
        {
          if((expected[j]<1)||(expected[j]>100))
            return 0;
          if(min>expected[j])
          {
            min=expected[j];
            index=j;
          }
        }
      temp=expected[i];
      expected[i]=min;
      expected[index]=temp;
    }
  for(i=0;i<n;i++)
    {
      if(expected[i]!=heights[i])
        count++;
    }
  return count;
  }
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
  int answer=heightChecker(vec);
  cout<<"\n"<<answer;
  return 1;
}