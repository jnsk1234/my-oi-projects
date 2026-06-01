#include<bits/stdc++.h>
using namespace std;
int a1[245],c[300];
int n; 
string s1;
void chen(string s1,int n)
{
	int sl=s1.size(); 
	for(int i=0;i<sl;i++)
	{
		a1[sl-i]=s1[i]-'0';
	}
	for(int i=1;i<=sl;i++)
	{
		c[i]=a1[i]*n; 
	}
	for(int i=1;i<=sl;i++)
	{
		if(c[i]>=10)
		{
			c[i+1]+=c[i]/10;
			c[i]%=10;
		}
	}
	//if(c[l+1]>0) l++;
	if(1=="0"||n==0)
	{
		cout<<0;
		
	}
	else{
		for(int i=sl+1;i>=1;i--)
		{
			cout<<c[i];
		}
	}
	
}
int main()
{
	cin>>s1;
	cin>>n;
	chen(s1,n);
    return 0;
}

