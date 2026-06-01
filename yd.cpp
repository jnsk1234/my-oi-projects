#include<bits/stdc++.h>
using namespace std;
int yd(int s)
{
	int a;
	do{
		for(int i=2;i<=s;i++)
		{
			if(s%i==0)
			{
				s=s/i;
				break;
				a++; 
			}
		}
	}while(s==0);
	return a;
}
int main()
{
	int n,m;
	cin>>n>>m;
	int h=1;
	for(int i=n;i<=m;i++)
	{
		if(h<yd(i))
		{
			h=yd(i);
		}
	}
	cout<<h;
    return 0;
}

