#include<bits/stdc++.h>
using namespace std;
struct A{
	string name;
	string xh;
	string xb;
}a[1005];
int n,m;
string s1,s2;
string find(string x)
{
	if(isdigit(x[0]))
	{
		for(int i=1;i<=n;i++)
		{
			if(x==a[i].xh)
			{
				return a[i].xb;
			}
		}
	}else{
		
		for(int i=1;i<=n;i++)
		{
			if(x==a[i].name)
			{
				return a[i].xb;
			}
		}
		
	}
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].name>>a[i].xh>>a[i].xb;
	}
	cin>>m;
	while(m--)
	{
		cin>>s1>>s2;
		if(find(s1)!=find(s2))
		{
			cout<<"Y"<<endl;
		}
		else{
			cout<<"N"<<endl;
		} 
	}

    return 0;
}

