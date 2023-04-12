#include<iostream>
using namespace std;
int nCr(int n,int r)
{
  long long res=1;
  for(int i=0;i<r;i++)
  {
    res*=(n-i);
    res/=(i+1);
  }
  return res;
}

Time complexity=O(r)
  space complexity=O(1)
