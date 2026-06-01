#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int h=0,d=0;
	for(int i=1;i<=m-1;i++)
	{
		if(m%i==0)
		{
			h+=i;
		}
	}
	for(int i=1;i<=n-1;i++)
	{
		if(n%i==0)
		{
			d+=i;
		}
	}
	if(m==d){
		if(n==h)
		{
			cout<<"yes";
		}else{
			cout<<"no";
		}
	}
	else{
		cout<<"no";
		
	}
	
	
    return 0;
}

