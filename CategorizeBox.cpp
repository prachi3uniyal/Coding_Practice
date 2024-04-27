// Categorize Box According to Criteria (Leetcode)
#include <iostream>
using namespace std;

string categorizeBox(int length, int width, int height, int mass) {
  if((length<1)||(length>100000)&&(width<1)||(width>100000)&&(height<1)||(height>100000)&&(mass<1)||(mass>1000))
  {
    return "Null";
  }
  else{
  
    long long volume = 1; 
    volume = static_cast<long long>(length) * width * height;
  if((length>=10000)||(width>=10000)||(height>=10000)||(volume>=1000000000))
  {
    if(mass>=100)
    {
      return "Both";
    }
    return  "Bulky";
  }
  else{
      if(mass>=100)
      {
        return "Heavy";
      }
    return "Neither";
  }
  }
  return "null";
}

int main() {
  int len,width,height,mass;
  cout<<"Enter length\n";
  cin>>len;
  cout<<"Enter width\n";
  cin>>width;
  cout<<"Enter height\n";
  cin>>height;
  cout<<"Enter mass\n";
  cin>>mass;
  string result=categorizeBox(len,width,height,mass);
  cout<<result;
}