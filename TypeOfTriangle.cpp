//Find Type of Triangle(Leetcode)
#include <iostream>
#include <string>
#include <vector>
using namespace std;

string triangleType(vector<int>& nums) {
    if (nums.size() > 3)
        return "0";
    else {
        for (int i = 0; i < 3; i++) {
            if ((nums[i] < 1) || (nums[i] > 100))
                return "0";
        }
        if (!((nums[0] + nums[1] > nums[2]) &&
              (nums[0] + nums[2] > nums[1]) &&
              (nums[2] + nums[1] > nums[0])))
            return "0";
        else {
            if ((nums[0] != nums[1]) && (nums[1] != nums[2]) &&
                (nums[2] != nums[0]))
                return "scalene";
            else if ((nums[0] == nums[1]) && (nums[1] == nums[2]))
                return "equilateral";
            else
                return "isosceles";
        }
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
  string answer=triangleType(vec);
  cout<<"\n"<<answer;
  return 1;
}