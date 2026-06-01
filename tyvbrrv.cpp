#include<iostream>
using namespace std;
int main()
{
  int n,sum,w;
  cin>>n;
  if(n=1)
  {
    w=1;
  }
  else if(n=2)
  {
    w=12;
  }
  else if(n=3)
  {
    w=123;
  }
  else if(n=4)
  {
    w=1234;
  }
  else if(n=5)
  {
    w=12345;
  }
  else if(n=6)
  {
    w=123456;
  }
  else if(n=7)
  {
    w=1234567;
  }
  else if(n=8)
  {
    w=12345678;
  }
  else if(n=9)
  {
    w=123456789;
  }
  cout<<n*w;
  return 0;
}
