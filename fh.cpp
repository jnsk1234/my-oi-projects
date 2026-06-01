#include<bits/stdc++.h>
using namespace std;
int swh(int i)
{
  int g=i%10;
	int s=i/10%10;
	int b=i/100;
	if(i==1000)
	{
	  return 1;
	}
	else
	{
	  return g+s+b;
	}
}
int main()
{
	int n,m,h=0;
	cin>>n>>m;
	for(int i=n;i<=m;i++)
	{
		if(i%4==0)
		{
			if(swh(i)%4==0)
			{
			  cout<<i<<' ';
			  h++;
			}
		}
		
	}
	if(h==0)
	{
		cout<<-1;
	}
	
    return 0;
}
